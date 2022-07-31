#include "private.h"

#define SCS_LINSYS_STRING_LENGTH 128

scs_int scs_linsys_is_indirect(void){
    return 0;
}

scs_float scs_linsys_total_solve_time_ms(ScsPrivWorkspace *priv){
    return priv->totalSolveTime;
}

scs_int scs_linsys_total_cg_iters(ScsPrivWorkspace *priv){
    return (scs_int)(-1);
}

char *scs_get_linsys_method(const ScsAMatrix *A, const ScsSettings *s) {
    char *tmp = scs_malloc(sizeof (char) * SCS_LINSYS_STRING_LENGTH);
    snprintf(tmp, SCS_LINSYS_STRING_LENGTH,
            "sparse-direct, nnz in A = %li", (long) A->p[A->n]);
    return tmp;
}

char *scs_get_linsys_summary(ScsPrivWorkspace *p, const ScsInfo *info) {
    char *str = scs_malloc(sizeof (char) * SCS_LINSYS_STRING_LENGTH);
    scs_int n = p->L->n;
    snprintf(str, SCS_LINSYS_STRING_LENGTH,
            "\tLin-sys: nnz in L factor: %li, avg solve time: %1.2es\n",
            (long) (p->L->p[n] + n), p->totalSolveTime / (info->iter + 1) / 1e3);
    p->totalSolveTime = 0;
    return str;
}


void scs_free_priv(ScsPrivWorkspace *p) {
    if (p) {
        if (p->L)
            scs_cs_spfree(p->L);
        if (p->P)
            scs_free(p->P);
        if (p->D)
            scs_free(p->D);
        if (p->bp)
            scs_free(p->bp);
        scs_free(p);
    }
}

static scs_cs *formKKT(const ScsAMatrix *A, const ScsSettings *s) {
    /* ONLY UPPER TRIANGULAR PART IS STUFFED
     * forms column compressed KKT matrix
     * assumes column compressed form A matrix
     *
     * forms upper triangular part of [I A'; A -I]
     */
    scs_int j, k, kk;
    scs_cs *K_cs;
    /* I at top left */
    const scs_int Anz = A->p[A->n];
    const scs_int Knzmax = A->n + A->m + Anz;
    scs_cs *K = scs_cs_spalloc(A->m + A->n, A->m + A->n, Knzmax, 1, 1);

    if (!K) {
        return SCS_NULL;
    }
    kk = 0;
    for (k = 0; k < A->n; k++) {
        K->i[kk] = k;
        K->p[kk] = k;
        K->x[kk] = s->rho_x;
        kk++;
    }
    /* A^T at top right : CCS: */
    for (j = 0; j < A->n; j++) {
        for (k = A->p[j]; k < A->p[j + 1]; k++) {
            K->p[kk] = A->i[k] + A->n;
            K->i[kk] = j;
            K->x[kk] = A->x[k];
            kk++;
        }
    }
    /* -I at bottom right */
    for (k = 0; k < A->m; k++) {
        K->i[kk] = k + A->n;
        K->p[kk] = k + A->n;
        K->x[kk] = -1;
        kk++;
    }
    /* assert kk == Knzmax */
    K->nz = Knzmax;
    K_cs = scs_cs_compress(K);
    scs_cs_spfree(K);
    return (K_cs);
}

static scs_int LDLInit(scs_cs *A, scs_int P[], scs_float **info) {
    *info = (scs_float *) scs_malloc(AMD_INFO * sizeof (scs_float));
#ifdef DLONG
    return (amd_l_order(A->n, A->p, A->i, P, (scs_float *) SCS_NULL, *info));
#else
    return (amd_order(A->n, A->p, A->i, P, (scs_float *) SCS_NULL, *info));
#endif
}

static scs_int LDLFactor(scs_cs *A, scs_int P[], scs_int Pinv[], scs_cs **L, scs_float **D) {
    scs_int kk, n = A->n;
    scs_int *Parent = scs_malloc(n * sizeof (scs_int));
    scs_int *Lnz = scs_malloc(n * sizeof (scs_int));
    scs_int *Flag = scs_malloc(n * sizeof (scs_int));
    scs_int *Pattern = scs_malloc(n * sizeof (scs_int));
    scs_float *Y = scs_malloc(n * sizeof (scs_float));
    (*L)->p = (scs_int *) scs_malloc((1 + n) * sizeof (scs_int));

    /*scs_int Parent[n], Lnz[n], Flag[n], Pattern[n]; */
    /*scs_float Y[n]; */

    LDL_symbolic(n, A->p, A->i, (*L)->p, Parent, Lnz, Flag, P, Pinv);

    (*L)->nzmax = *((*L)->p + n);
    (*L)->x = (scs_float *) scs_malloc((*L)->nzmax * sizeof (scs_float));
    (*L)->i = (scs_int *) scs_malloc((*L)->nzmax * sizeof (scs_int));
    *D = (scs_float *) scs_malloc(n * sizeof (scs_float));

    if (!(*D) || !(*L)->i || !(*L)->x || !Y || !Pattern || !Flag || !Lnz ||
            !Parent)
        return -1;

    kk = LDL_numeric(n, A->p, A->i, A->x, (*L)->p, Parent, Lnz, (*L)->i,
            (*L)->x, *D, Y, Pattern, Flag, P, Pinv);

    scs_free(Parent);
    scs_free(Lnz);
    scs_free(Flag);
    scs_free(Pattern);
    scs_free(Y);
    return (kk - n);
}

static void LDLSolve(scs_float *x, scs_float b[], scs_cs *L, scs_float D[], scs_int P[],
        scs_float *bp) {
    /* solves PLDL'P' x = b for x */
    scs_int n = L->n;
    if (P == SCS_NULL) {
        if (x != b) /* if they're different addresses */
            memcpy(x, b, n * sizeof (scs_float));
        LDL_lsolve(n, x, L->p, L->i, L->x);
        LDL_dsolve(n, x, D);
        LDL_ltsolve(n, x, L->p, L->i, L->x);
    } else {
        LDL_perm(n, bp, b, P);
        LDL_lsolve(n, bp, L->p, L->i, L->x);
        LDL_dsolve(n, bp, D);
        LDL_ltsolve(n, bp, L->p, L->i, L->x);
        LDL_permt(n, x, bp, P);
    }
}

void scs_accum_by_a_trans(const ScsAMatrix *A, ScsPrivWorkspace *p, const scs_float *x,
        scs_float *y) {
    scs_accum_by_a_trans__(A->n, A->x, A->i, A->p, x, y);
}

void scs_accum_by_a(const ScsAMatrix *A, ScsPrivWorkspace *p, const scs_float *x, scs_float *y) {
    scs_accum_by_a__(A->n, A->x, A->i, A->p, x, y);
}

static scs_int factorize(const ScsAMatrix *A, const ScsSettings *stgs, ScsPrivWorkspace *p) {
    scs_float *info;
    scs_int *Pinv, amd_status, ldl_status;
    scs_cs *C, *K = formKKT(A, stgs);
    if (!K) {
        return -1;
    }
    amd_status = LDLInit(K, p->P, &info);
    if (amd_status < 0)
        return (amd_status);

    Pinv = scs_cs_pinv(p->P, A->n + A->m);
    C = scs_cs_symperm(K, Pinv, 1);
    ldl_status = LDLFactor(C, SCS_NULL, SCS_NULL, &p->L, &p->D);
    scs_cs_spfree(C);
    scs_cs_spfree(K);
    scs_free(Pinv);
    scs_free(info);
    return (ldl_status);
}

ScsPrivWorkspace *scs_init_priv(const ScsAMatrix *A, const ScsSettings *stgs) {
    ScsPrivWorkspace *p = scs_calloc(1, sizeof (ScsPrivWorkspace));
    scs_int n_plus_m = A->n + A->m;
    p->P = scs_malloc(sizeof (scs_int) * n_plus_m);
    p->L = scs_malloc(sizeof (scs_cs));
    p->bp = scs_malloc(n_plus_m * sizeof (scs_float));
    p->L->m = n_plus_m;
    p->L->n = n_plus_m;
    p->L->nz = -1;

    if (factorize(A, stgs, p) < 0) {
        scs_free_priv(p);
        return SCS_NULL;
    }
    p->totalSolveTime = 0.0;
    return p;
}

scs_int scs_solve_lin_sys(const ScsAMatrix *A, const ScsSettings *stgs, ScsPrivWorkspace *p,
        scs_float *b, const scs_float *s, scs_int iter) {
    /* returns solution to linear system */
    /* Ax = b with solution stored in b */
    ScsTimer linsysTimer;
    scs_tic(&linsysTimer);
    LDLSolve(b, b, p->L, p->D, p->P, p->bp);
    p->totalSolveTime += scs_toc_quiet(&linsysTimer);
    return 0;
}
