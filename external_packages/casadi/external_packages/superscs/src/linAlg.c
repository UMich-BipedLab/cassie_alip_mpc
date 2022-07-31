/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
 * Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */
#include "linAlg.h"
#include <math.h>
#include <stdio.h>


#ifdef LAPACK_LIB_FOUND

#define SCS_NO_SUFFIX 
#define SCS_IAMAX stitch__(i, BLAS(amax), SCS_NO_SUFFIX)

extern blasint SCS_IAMAX(
        const blasint *n,
        const scs_float *x,
        const blasint *inc_x);

extern scs_float BLAS(nrm2)(
        const blasint *n,
        const scs_float *x,
        const blasint *incx);

/* y += ax */
extern void BLAS(axpy)(
        const blasint* n,
        const scs_float* alpha,
        const scs_float* x,
        const blasint* inc_x,
        scs_float* y,
        const blasint* inc_y);

extern void BLAS(scal)(
        const blasint* n,
        const scs_float* alpha,
        scs_float* x,
        const blasint* inc_x);

extern scs_float BLAS(dot)(
        const blasint* n,
        const scs_float* x,
        const blasint* inc_x,
        const scs_float* y,
        const blasint* inc_y);

extern void BLAS(gemm)(
        const char* trans_a,
        const char* trans_b,
        const blasint* m,
        const blasint* n,
        const blasint* k,
        const scs_float* alpha,
        const scs_float* A,
        const blasint* lda,
        const scs_float* B,
        const blasint* ldb,
        const scs_float* beta,
        scs_float* C,
        const blasint* ldc);

extern void LPCK(gels)(
        const char* trans,
        const blasint* m,
        const blasint* n,
        const blasint* nrhs,
        const scs_float* a,
        const blasint* lda,
        scs_float* b,
        const blasint* ldb,
        scs_float* work,
        blasint* lwork,
        blasint* info);

extern void LPCK(gelss)(
        const blasint* m,
        const blasint* n,
        const blasint* nrhs,
        const scs_float* A,
        const blasint* lda,
        scs_float* b,
        const blasint* ldb,
        scs_float* S,
        const scs_float* rcond,
        blasint* rank,
        scs_float* work,
        blasint* lwork,
        blasint* info);

#define scs_iamax_ SCS_IAMAX
#define scs_nrm2_  BLAS(nrm2)
#define scs_axpy_  BLAS(axpy)
#define scs_scal_  BLAS(scal)
#define scs_dot_  BLAS(dot)
#define scs_gemm_ BLAS(gemm)
#define scs_gels_ LPCK(gels)
#define scs_dgelss_ LPCK(gelss)
#endif

/* static void printVec(char** name, int len, scs_float* x) {
    int i;
    for (i = 0; i < len; ++i) {
         printf("%s[%d]=%g\n", name, i, x[i]);
    }
    printf("\n");
}*/


/* LCOV_EXCL_START */
#define SCS_DGEMM_NN_MC  384
#define SCS_DGEMM_NN_KC  384
#define SCS_DGEMM_NN_NC  4096

#define SCS_DGEMM_NN_MR  4
#define SCS_DGEMM_NN_NR  4

/* 
 *   Local buffers for storing panels from A, B and C
 */
static double SCS_DGEMM_NN__A[SCS_DGEMM_NN_MC*SCS_DGEMM_NN_KC];
static double SCS_DGEMM_NN__B[SCS_DGEMM_NN_KC*SCS_DGEMM_NN_NC];
static double SCS_DGEMM_NN__C[SCS_DGEMM_NN_MR*SCS_DGEMM_NN_NR];

/*
 *  Packing complete panels from A (i.e. without padding)
 */
static void
scs_pack_MRxk(int k, const double *A, int incRowA, int incColA,
        double *buffer) {
    int i, j;

    for (j = 0; j < k; ++j) {
        for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
            buffer[i] = A[i * incRowA];
        }
        buffer += SCS_DGEMM_NN_MR;
        A += incColA;
    }
}

/*
 *  Packing panels from A with padding if required
 */
static void
scs_pack_A(int mc, int kc, const double *A, int incRowA, int incColA,
        double *buffer) {
    int mp = mc / SCS_DGEMM_NN_MR;
    int _mr = mc % SCS_DGEMM_NN_MR;

    int i;

    for (i = 0; i < mp; ++i) {
        scs_pack_MRxk(kc, A, incRowA, incColA, buffer);
        buffer += kc*SCS_DGEMM_NN_MR;
        A += SCS_DGEMM_NN_MR*incRowA;
    }
    if (_mr > 0) {
        int j;
        for (j = 0; j < kc; ++j) {
            for (i = 0; i < _mr; ++i) {
                buffer[i] = A[i * incRowA];
            }
            for (i = _mr; i < SCS_DGEMM_NN_MR; ++i) {
                buffer[i] = 0.0;
            }
            buffer += SCS_DGEMM_NN_MR;
            A += incColA;
        }
    }
}

/*
 *  Packing complete panels from B (i.e. without padding)
 */
static void
scs_pack_kxNR(int k, const double *B, int incRowB, int incColB,
        double *buffer) {
    int i, j;

    for (i = 0; i < k; ++i) {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            buffer[j] = B[j * incColB];
        }
        buffer += SCS_DGEMM_NN_NR;
        B += incRowB;
    }
}

/*
 *  Packing panels from B with padding if required
 */
static void
scs_pack_B(int kc, int nc, const double *B, int incRowB, int incColB,
        double *buffer) {
    int np = nc / SCS_DGEMM_NN_NR;
    int _nr = nc % SCS_DGEMM_NN_NR;

    int j;

    for (j = 0; j < np; ++j) {
        scs_pack_kxNR(kc, B, incRowB, incColB, buffer);
        buffer += kc*SCS_DGEMM_NN_NR;
        B += SCS_DGEMM_NN_NR*incColB;
    }
    if (_nr > 0) {
        int i;
        for (i = 0; i < kc; ++i) {
            for (j = 0; j < _nr; ++j) {
                buffer[j] = B[j * incColB];
            }
            for (j = _nr; j < SCS_DGEMM_NN_NR; ++j) {
                buffer[j] = 0.0;
            }
            buffer += SCS_DGEMM_NN_NR;
            B += incRowB;
        }
    }
}

/*
 *  Micro kernel for multiplying panels from A and B.
 */
static void
scs_dgemm_micro_kernel(int kc,
        double alpha, const double *A, const double *B,
        double beta,
        double *C, int incRowC, int incColC) {
    double AB[SCS_DGEMM_NN_MR * SCS_DGEMM_NN_NR];

    int i, j, l;

    /*  Compute AB = A*B */
    for (l = 0; l < SCS_DGEMM_NN_MR * SCS_DGEMM_NN_NR; ++l) {
        AB[l] = 0;
    }
    for (l = 0; l < kc; ++l) {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
                AB[i + j * SCS_DGEMM_NN_MR] += A[i] * B[j];
            }
        }
        A += SCS_DGEMM_NN_MR;
        B += SCS_DGEMM_NN_NR;
    }

    /*
     *  Update C <- beta*C
     */
    if (beta == 0.0) {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
                C[i * incRowC + j * incColC] = 0.0;
            }
        }
    } else if (beta != 1.0) {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
                C[i * incRowC + j * incColC] *= beta;
            }
        }
    }

    /*
     *  Update C <- C + alpha*AB (note: the case alpha==0.0 was already treated in
     *                                  the above layer dgemm_nn)
     */
    if (alpha == 1.0) {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
                C[i * incRowC + j * incColC] += AB[i + j * SCS_DGEMM_NN_MR];
            }
        }
    } else {
        for (j = 0; j < SCS_DGEMM_NN_NR; ++j) {
            for (i = 0; i < SCS_DGEMM_NN_MR; ++i) {
                C[i * incRowC + j * incColC] += alpha * AB[i + j * SCS_DGEMM_NN_MR];
            }
        }
    }
}

/*
 *  Compute Y += alpha*X
 */
static void
scs_dgeaxpy(int m,
        int n,
        double alpha,
        const double *X,
        int incRowX,
        int incColX,
        double *Y,
        int incRowY,
        int incColY) {
    int i, j;


    if (alpha != 1.0) {
        for (j = 0; j < n; ++j) {
            for (i = 0; i < m; ++i) {
                Y[i * incRowY + j * incColY] += alpha * X[i * incRowX + j * incColX];
            }
        }
    } else {
        for (j = 0; j < n; ++j) {
            for (i = 0; i < m; ++i) {
                Y[i * incRowY + j * incColY] += X[i * incRowX + j * incColX];
            }
        }
    }
}

/*
 *  Compute X *= alpha
 */
static void
scs_dgescal(int m,
        int n,
        double alpha,
        double *X,
        int incRowX,
        int incColX) {
    int i, j;

    if (alpha != 0.0) {
        for (j = 0; j < n; ++j) {
            for (i = 0; i < m; ++i) {
                X[i * incRowX + j * incColX] *= alpha;
            }
        }
    } else {
        for (j = 0; j < n; ++j) {
            for (i = 0; i < m; ++i) {
                X[i * incRowX + j * incColX] = 0.0;
            }
        }
    }
}

/*
 * Macro Kernel for the multiplication of blocks of A and B.  We assume that
 *  these blocks were previously packed to buffers _A and _B.
 */
static void
scs_dgemm_macro_kernel(int mc,
        int nc,
        int kc,
        double alpha,
        double beta,
        double *C,
        int incRowC,
        int incColC) {
    int mp = (mc + SCS_DGEMM_NN_MR - 1) / SCS_DGEMM_NN_MR;
    int np = (nc + SCS_DGEMM_NN_NR - 1) / SCS_DGEMM_NN_NR;

    int _mr = mc % SCS_DGEMM_NN_MR;
    int _nr = nc % SCS_DGEMM_NN_NR;

    int mr;
    int i, j;

    for (j = 0; j < np; ++j) {
        int nr;
        nr = (j != np - 1 || _nr == 0) ? SCS_DGEMM_NN_NR : _nr;

        for (i = 0; i < mp; ++i) {
            mr = (i != mp - 1 || _mr == 0) ? SCS_DGEMM_NN_MR : _mr;

            if (mr == SCS_DGEMM_NN_MR && nr == SCS_DGEMM_NN_NR) {
                scs_dgemm_micro_kernel(kc, alpha, &SCS_DGEMM_NN__A[i * kc * SCS_DGEMM_NN_MR], &SCS_DGEMM_NN__B[j * kc * SCS_DGEMM_NN_NR],
                        beta,
                        &C[i * SCS_DGEMM_NN_MR * incRowC + j * SCS_DGEMM_NN_NR * incColC],
                        incRowC, incColC);
            } else {
                scs_dgemm_micro_kernel(kc, alpha, &SCS_DGEMM_NN__A[i * kc * SCS_DGEMM_NN_MR], &SCS_DGEMM_NN__B[j * kc * SCS_DGEMM_NN_NR],
                        0.0,
                        SCS_DGEMM_NN__C, 1, SCS_DGEMM_NN_MR);
                scs_dgescal(mr, nr, beta,
                        &C[i * SCS_DGEMM_NN_MR * incRowC + j * SCS_DGEMM_NN_NR * incColC], incRowC, incColC);
                scs_dgeaxpy(mr, nr, 1.0, SCS_DGEMM_NN__C, 1, SCS_DGEMM_NN_MR,
                        &C[i * SCS_DGEMM_NN_MR * incRowC + j * SCS_DGEMM_NN_NR * incColC], incRowC, incColC);
            }
        }
    }
}

/*  Compute C <- beta*C + alpha*A*B */

/**
 * Perofrms the operation
 * \f[
 *    C \leftarrow \beta C + \alpha A B
 * \f]
 * 
 * @param m number of rows of matrix \f$A\f$
 * @param n number of columns of matrix \f$B\f$
 * @param k number of rows of matrix \f$B\f$ (columns of \f$A\f$)
 * @param alpha coefficient \f$\alpha\f$
 * @param A pointer to matrix \f$A\f$
 * @param incRowA increment in traversing the rows of \f$A\f$
 * @param incColA increment in traversing the columns of \f$A\f$
 * @param B pointer to matrix \f$B\f$
 * @param incRowB increment in traversing the rows of \f$B\f$
 * @param incColB increment in traversing the columns of \f$B\f$
 * @param beta coefficient \f$\beta\f$
 * @param C pointer to matrix \f$C\f$
 * @param incRowC increment in traversing the rows of \f$C\f$
 * @param incColC increment in traversing the columns of \f$C\f$
 * 
 * @see ::scs_matrix_multiply
 * 
 * \note The implementation of this method is that of 
 * [ULMBLAS](http://apfel.mathematik.uni-ulm.de/~lehn/sghpc/gemm/page13/index.html).
 * 
 * \note The original source code is available at 
 * [this link](http://apfel.mathematik.uni-ulm.de/~lehn/sghpc/gemm/page13/index.html).
 * 
 * \note The [ULMBLAS project](https://github.com/michael-lehn/ulmBLAS) is available
 * on github and is licensed with the 
 * [new BSD licence](https://github.com/michael-lehn/ulmBLAS/blob/master/LICENSE).
 * 
 * \warning This function works only with \c double precision data.
 * 
 */
void
scs_dgemm_nn(int m,
        int n,
        int k,
        double alpha,
        const double *A,
        int incRowA,
        int incColA,
        const double *B,
        int incRowB,
        int incColB,
        double beta,
        double *C,
        int incRowC,
        int incColC) {
    int mb = (m + SCS_DGEMM_NN_MC - 1) / SCS_DGEMM_NN_MC;
    int nb = (n + SCS_DGEMM_NN_NC - 1) / SCS_DGEMM_NN_NC;
    int kb = (k + SCS_DGEMM_NN_KC - 1) / SCS_DGEMM_NN_KC;

    int _mc = m % SCS_DGEMM_NN_MC;
    int _nc = n % SCS_DGEMM_NN_NC;
    int _kc = k % SCS_DGEMM_NN_KC;

    int mc, kc;
    int i, j, l;

    double _beta;

    if (alpha == 0.0 || k == 0) {
        scs_dgescal(m, n, beta, C, incRowC, incColC);
        return;
    }

    for (j = 0; j < nb; ++j) {
        int nc;
        nc = (j != nb - 1 || _nc == 0) ? SCS_DGEMM_NN_NC : _nc;

        for (l = 0; l < kb; ++l) {
            kc = (l != kb - 1 || _kc == 0) ? SCS_DGEMM_NN_KC : _kc;
            _beta = (l == 0) ? beta : 1.0;

            scs_pack_B(kc, nc,
                    &B[l * SCS_DGEMM_NN_KC * incRowB + j * SCS_DGEMM_NN_NC * incColB], incRowB, incColB,
                    SCS_DGEMM_NN__B);

            for (i = 0; i < mb; ++i) {
                mc = (i != mb - 1 || _mc == 0) ? SCS_DGEMM_NN_MC : _mc;

                scs_pack_A(mc, kc,
                        &A[i * SCS_DGEMM_NN_MC * incRowA + l * SCS_DGEMM_NN_KC * incColA], incRowA, incColA,
                        SCS_DGEMM_NN__A);

                scs_dgemm_macro_kernel(mc, nc, kc, alpha, _beta,
                        &C[i * SCS_DGEMM_NN_MC * incRowC + j * SCS_DGEMM_NN_NC * incColC],
                        incRowC, incColC);
            }
        }
    }
}

/* LCOV_EXCL_STOP */



void scs_matrix_multiply(
        scs_int m,
        scs_int n,
        scs_int k,
        scs_float alpha,
        const scs_float * RESTRICT A,
        scs_float beta,
        const scs_float * RESTRICT B,
        scs_float *C) {
#ifdef LAPACK_LIB_FOUND
    /* Use BLAS to multiply the two matrices */
    const char no_transpose = 'N';
    const blasint m_ = m;
    const blasint n_ = n;
    const blasint k_ = k;
    scs_gemm_(&no_transpose, &no_transpose,
            &m_, &n_, &k_, &alpha, A, &m_, B, &k_, &beta, C, &m_);
#else
    scs_dgemm_nn(m, n, k, alpha, A, 1, m, B, 1, k, beta, C, 1, m);
#endif

}

void scs_matrix_transpose_multiply(
        scs_int m,
        scs_int n,
        scs_int k,
        scs_float alpha,
        const scs_float *A,
        scs_float beta,
        const scs_float *B,
        scs_float *C) {

#ifdef LAPACK_LIB_FOUND
    const char no_transpose = 'N';
    const char transpose = 'T';
    const blasint m_ = m;
    const blasint n_ = n;
    const blasint k_ = k;
    scs_gemm_(&transpose, &no_transpose,
            &m_, &n_, &k_, &alpha, A, &k_, B, &k_, &beta, C, &m_);
#else
    scs_dgemm_nn(m, n, k, alpha, A, k, 1, B, 1, k, beta, C, 1, m);
#endif


}

/* x = b*a */
void scs_set_as_scaled_array(
        scs_float * RESTRICT x,
        const scs_float * RESTRICT a,
        const scs_float b,
        scs_int len) {
#ifdef LAPACK_LIB_FOUND
    memcpy(x, a, len * sizeof (*x));
    scs_scale_array(x, b, len);
#else
    register scs_int j;
    const scs_int block_size = 4;
    const scs_int block_len = len >> 2;
    const scs_int remaining = len % block_size;
    j = 0;
    while (j < block_len * block_size) {
        x[j] = b * a[j];
        ++j;
        x[j] = b * a[j];
        ++j;
        x[j] = b * a[j];
        ++j;
        x[j] = b * a[j];
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: x[j + 2] = b * a[j + 2];
        case 2: x[j + 1] = b * a[j + 1];
        case 1: x[j] = b * a[j];
        case 0:;
    }
#endif
}

/* a *= b */
void scs_scale_array(scs_float * RESTRICT a, const scs_float b, scs_int len) {
#ifdef LAPACK_LIB_FOUND
    const blasint one = 1;
    const blasint len_ = len;
    scs_scal_(&len_, &b, a, &one);
#else
    register scs_int j;
    const scs_int block_size = 4;
    const scs_int block_len = len >> 2;
    const scs_int remaining = len % block_size;
    j = 0;
    while (j < block_len * block_size) {
        a[j] *= b;
        ++j;
        a[j] *= b;
        ++j;
        a[j] *= b;
        ++j;
        a[j] *= b;
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: a[j + 2] *= b;
        case 2: a[j + 1] *= b;
        case 1: a[j] *= b;
        case 0:;
    }
#endif    
}

/* x'*y */
scs_float scs_inner_product(
        const scs_float * RESTRICT x,
        const scs_float * RESTRICT y,
        scs_int len) {
#ifdef LAPACK_LIB_FOUND
    blasint one = 1;
    const blasint len_ = len;
    scs_float dot_product = scs_dot_(&len_, x, &one, y, &one);
    return dot_product;
#else
    register scs_int j;
    register scs_float ip = 0.;
    register scs_float s0 = 0.;
    register scs_float s1 = 0.;
    register scs_float s2 = 0.;
    register scs_float s3 = 0.;
    static const scs_int block_size = 4;
    const scs_int block_len = len >> 2;
    const scs_int remaining = len % block_size;

    j = 0;
    while (j < block_len * block_size) {
        s0 += x[j] * y[j];
        ++j;
        s1 += x[j] * y[j];
        ++j;
        s2 += x[j] * y[j];
        ++j;
        s3 += x[j] * y[j];
        ++j;
    }
    ip = s0 + s1 + s2 + s3;
    j = block_size * block_len;
    switch (remaining) {
        case 3: ip += x[j + 2] * y[j + 2];
        case 2: ip += x[j + 1] * y[j + 1];
        case 1: ip += x[j] * y[j];
        case 0:;
    }
    return ip;
#endif
}

/* ||v||_2^2 */
scs_float scs_norm_squared(const scs_float * RESTRICT v, scs_int len) {
    return scs_inner_product(v, v, len);
}

/* ||v||_2 */
scs_float scs_norm(const scs_float * RESTRICT v, scs_int len) {
#ifdef LAPACK_LIB_FOUND
    blasint one = 1;
    blasint len_ = len;
    return scs_nrm2_(&len_, v, &one);
#else
    return SQRTF(scs_norm_squared(v, len));
#endif
}

scs_float scs_norm_infinity(
        const scs_float * RESTRICT a,
        scs_int l) {
#ifdef LAPACK_LIB_FOUND
    blasint one = 1;
    blasint len_ = l;
    blasint idx_max = scs_iamax_(&len_, a, &one);
    return a[idx_max];
#else
    scs_float tmp, max = 0.0;
    scs_int i;
    for (i = 0; i < l; ++i) {
        tmp = ABS(a[i]);
        if (tmp > max)
            max = tmp;
    }
    return max;
#endif
}

/* saxpy a += sc*b */
void scs_add_scaled_array(
        scs_float * RESTRICT a,
        const scs_float * RESTRICT b,
        scs_int len,
        const scs_float sc) {
#ifdef LAPACK_LIB_FOUND    
    blasint one = 1;
    const blasint len_ = len;
    scs_axpy_(&len_, &sc, b, &one, a, &one);
#else
    register scs_int j;
    const scs_int block_size = 4;
    const scs_int block_len = len >> 2; /* divide by 4*/
    const scs_int remaining = len % block_size;
    j = 0;
    while (j < block_len * block_size) {
        a[j] += sc * b[j];
        ++j;
        a[j] += sc * b[j];
        ++j;
        a[j] += sc * b[j];
        ++j;
        a[j] += sc * b[j];
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: a[j + 2] += sc * b[j + 2];
        case 2: a[j + 1] += sc * b[j + 1];
        case 1: a[j] += sc * b[j];
        case 0:;
    }
#endif
}

void scs_axpy(
        scs_float * RESTRICT x,
        const scs_float * RESTRICT u,
        const scs_float * RESTRICT v,
        scs_float alpha,
        scs_float beta,
        scs_int n) {
#ifdef LAPACK_LIB_FOUND
    scs_float tol = 1e-16;
    if (x != u) {
        if (ABS(alpha - 1) > tol) {
            /* x = a * u */
            scs_set_as_scaled_array(x, u, alpha, n);
        } else {
            memcpy(x, u, n * sizeof (*x));
        }
    } else {
        scs_scale_array(x, alpha, n);
    }
    /* x += b * v */
    scs_add_scaled_array(x, v, n, beta);
#else
    register scs_int j;
    const scs_int block_size = 4;
    const scs_int block_len = n >> 2; /* divide by 4*/
    const scs_int remaining = n % block_size;
    j = 0;
    while (j < block_len * block_size) {
        x[j] = alpha * u[j] + beta * v[j];
        ++j;
        x[j] = alpha * u[j] + beta * v[j];
        ++j;
        x[j] = alpha * u[j] + beta * v[j];
        ++j;
        x[j] = alpha * u[j] + beta * v[j];
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: x[j + 2] = alpha * u[j + 2] + beta * v[j + 2];
        case 2: x[j + 1] = alpha * u[j + 1] + beta * v[j + 1];
        case 1: x[j] = alpha * u[j] + beta * v[j];
        case 0:;
    }
#endif
}

void scs_add_array(
        scs_float * RESTRICT a,
        const scs_float * RESTRICT b,
        scs_int len) {
#ifdef LAPACK_LIB_FOUND
    scs_add_scaled_array(a, b, len, 1.0);
#else
    register scs_int j = 0;
    const scs_int block_size = 4;
    const scs_int block_len = len >> 2;
    const scs_int remaining = len % block_size;
    while (j < block_len * block_size) {
        a[j] += b[j];
        ++j;
        a[j] += b[j];
        ++j;
        a[j] += b[j];
        ++j;
        a[j] += b[j];
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: a[j + 2] += b[j + 2];
        case 2: a[j + 1] += b[j + 1];
        case 1: a[j] += b[j];
        case 0:;
    }
#endif
}

void scs_subtract_array(
        scs_float * RESTRICT a,
        const scs_float * RESTRICT b,
        scs_int len) {
#ifdef LAPACK_LIB_FOUND
    scs_add_scaled_array(a, b, len, -1.0);
#else
    register scs_int j = 0;
    const scs_int block_size = 4;
    const scs_int block_len = len >> 2;
    const scs_int remaining = len % block_size;

    j = 0;
    while (j < block_len * block_size) {
        a[j] -= b[j];
        ++j;
        a[j] -= b[j];
        ++j;
        a[j] -= b[j];
        ++j;
        a[j] -= b[j];
        ++j;
    }
    j = block_size * block_len;
    switch (remaining) {
        case 3: a[j + 2] -= b[j + 2];
        case 2: a[j + 1] -= b[j + 1];
        case 1: a[j] -= b[j];
        case 0:;
    }
#endif
}

scs_float scs_norm_difference(
        const scs_float * RESTRICT a,
        const scs_float * RESTRICT b,
        scs_int l) {
    scs_float nmDiff = 0.0, tmp;
    scs_int i;
    for (i = 0; i < l; ++i) {
        tmp = (a[i] - b[i]);
        nmDiff += tmp * tmp;
    }
    return SQRTF(nmDiff);
}

scs_float scs_norm_infinity_difference(
        const scs_float * RESTRICT a,
        const scs_float * RESTRICT b,
        scs_int l) {
    scs_float tmp, max = 0.0;
    scs_int i;
    for (i = 0; i < l; ++i) {
        tmp = ABS(a[i] - b[i]);
        if (tmp > max)
            max = tmp;
    }
    return max;
}

scs_float * scs_cgls_malloc_workspace(scs_int m, scs_int n) {
    const scs_int maxmn = m > n ? m : n;
    if (m <= 0 || n <= 0) {
        return SCS_NULL;
    }
    return malloc((maxmn + m + 2 * n) * sizeof (scs_float));
}

scs_int scs_cgls(
        scs_int m,
        scs_int n,
        const scs_float * RESTRICT A,
        const scs_float * RESTRICT b,
        scs_float * RESTRICT x,
        scs_float tol,
        scs_int * RESTRICT maxiter,
        scs_float * RESTRICT workspace
        ) {
    const scs_int maxmn = m > n ? m : n;
    scs_float * r = workspace;
    scs_float * p = r + n;
    scs_float * t = p;
    scs_float * xi = p + maxmn;
    scs_float * phi = xi + n;
    scs_float r_norm_old;
    scs_float r_norm_new;
    scs_int k;


    /* t = b */
    memcpy(t, b, m * sizeof (*t));
    /* t = t - Ax */
    scs_matrix_multiply(m, 1, n, -1.0, A, 1.0, x, t);
    /* r = A' * t */
    scs_matrix_transpose_multiply(n, 1, m, 1.0, A, 0.0, t, r);
    /* p = r */
    memcpy(p, r, n * sizeof (*p));
    /* r_norm_old = norm(r)^2 */
    r_norm_old = scs_norm_squared(r, n);

    for (k = 0; k < *maxiter; ++k) {
        double alpha;
        /* phi = A * p */
        scs_matrix_multiply(m, 1, n, 1.0, A, 0.0, p, phi);
        /* xi = A' * phi */
        scs_matrix_transpose_multiply(n, 1, m, 1.0, A, 0.0, phi, xi);
        /* alpha = r_norm_old / (p'*xi) */
        alpha = r_norm_old / scs_inner_product(p, xi, n);
        /*  x = x + alpha * p */
        scs_axpy(x, x, p, 1.0, alpha, n);
        /* r = r - alpha * xi */
        scs_axpy(r, r, xi, 1.0, -alpha, n);
        /* r_norm_new = norm(r)^2 */
        r_norm_new = scs_norm_squared(r, n);
        if (sqrt(r_norm_new) < tol) {
            break;
        }
        /* p = beta * p + r*/
        scs_axpy(p, p, r, r_norm_new / r_norm_old, 1.0, n);
        r_norm_old = r_norm_new;
    }

    if (k == *maxiter) {
        return 1;
    }

    *maxiter = k + 1;

    return 0;
}

#ifdef LAPACK_LIB_FOUND

scs_int scs_qr_workspace_size(
        scs_int m,
        scs_int n
        ) {
    blasint lwork = -1;
    blasint status;
    blasint nrhs = 1;
    blasint lda = m;
    blasint ldb = m;
    scs_float wkopt;
    blasint m_ = m;
    blasint n_ = n;
    if (m <= 0 || n <= 0) {
        return 0;
    }
    scs_gels_((char *) "No transpose", &m_, &n_, &nrhs, 0, &lda, 0, &ldb, &wkopt, &lwork,
            &status);
    return (scs_int) wkopt;
}

scs_int scs_qrls(
        scs_int m,
        scs_int n,
        scs_float * RESTRICT A,
        scs_float * RESTRICT b,
        scs_float * RESTRICT wspace,
        scs_int wsize
        ) {
    blasint status;
    blasint nrhs = 1;
    blasint lda = m;
    blasint ldb = m;
    blasint m_ = m;
    blasint n_ = n;
    blasint wsize_ = wsize;
    scs_gels_("No transpose", &m_, &n_, &nrhs, A, &lda, b, &ldb, wspace, &wsize_, &status);
    return status;
}

scs_int scs_svd_workspace_size(
        scs_int m,
        scs_int n
        ) {
    blasint status;
    blasint nrhs = 1;
    scs_float rcond = 1.;
    scs_float wkopt;
    scs_float singular_values;
    blasint rank;
    blasint lwork = -1;
    blasint m_ = m;
    blasint n_ = n;

    if (m <= 0 || n <= 0) {
        return 0;
    }

    scs_dgelss_(&m_, &n_, &nrhs, 0, &m_, 0, &m_,
            &singular_values, &rcond, &rank,
            &wkopt, &lwork, &status);

    return (scs_int) wkopt;
}

scs_int scs_svdls(
        scs_int m,
        scs_int n,
        scs_float * RESTRICT A,
        scs_float * RESTRICT b,
        scs_float * RESTRICT wspace,
        scs_int wsize,
        scs_float rcond,
        scs_float * RESTRICT singular_values,
        scs_int * RESTRICT rank
        ) {

    blasint status;
    blasint nrhs = 1;
    blasint m_ = m;
    blasint n_ = n;
    blasint wsize_ = wsize;
    blasint rank_ = *rank;
    scs_dgelss_(&m_, &n_, &nrhs, A, &m_, b, &m_,
            singular_values, &rcond, &rank_,
            wspace, &wsize_, &status);
    *rank = rank_;
    return (scs_int) status;
}
#endif /* #ifdef LAPACK_LIB_FOUND */
