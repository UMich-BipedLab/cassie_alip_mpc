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
#include "scs_parser.h"
#include <stdio.h>

#if(defined _WIN32 || defined _WIN64 || defined _WINDLL)
#define SCS_FORMAT_ZU "%Iu"
#else
#define SCS_FORMAT_ZU "%zu"
#endif

static const char SCS_EOL = '\n';
#define SCS_YAML_CHAR_LEN 64
static const char scs_yaml_meta[] = "meta";
static const char scs_yaml_meta_id[] = "id";
static const char scs_yaml_meta_creator[] = "creator";
static const char scs_yaml_meta_license[] = "license";
static const char scs_yaml_meta_date[] = "date";
static const char scs_yaml_meta_yaml_version[] = "yamlVersion";
static const char scs_yaml_problem[] = "problem";
static const char scs_yaml_problem_name[] = "name";
static const char scs_yaml_m[] = "m";
static const char scs_yaml_n[] = "n";
static const char scs_yaml_nnz[] = "nnz";
static const char scs_yaml_matrix_A[] = "A";
static const char scs_yaml_matrix_A_a[] = "a";
static const char scs_yaml_matrix_A_I[] = "I";
static const char scs_yaml_matrix_A_J[] = "J";
static const char scs_yaml_vector_b[] = "b";
static const char scs_yaml_vector_c[] = "c";
static const char scs_yaml_cone_K[] = "K";
static const char scs_yaml_cone_field_ep[] = "ep";
static const char scs_yaml_cone_field_ed[] = "ed";
static const char scs_yaml_cone_field_f[] = "f";
static const char scs_yaml_cone_field_l[] = "l";
static const char scs_yaml_cone_field_p[] = "p";
static const char scs_yaml_cone_field_q[] = "q";
static const char scs_yaml_cone_field_s[] = "s";
static const char scs_yaml_cone_field_psize[] = "psize";
static const char scs_yaml_cone_field_qsize[] = "qsize";
static const char scs_yaml_cone_field_ssize[] = "ssize";

static char scs_yaml_variable_name[SCS_YAML_CHAR_LEN];

static void scs_yaml_clear_char_array(void) {
    memset(scs_yaml_variable_name, 0, SCS_YAML_CHAR_LEN * sizeof (char));
}

static void scs_yaml_skip_to_end_of_line(FILE * fp) {
    int c;
    while ((c = fgetc(fp)) != EOF && c != SCS_EOL);
}

static char * scs_yaml_get_variable_name(FILE * fp) {
    int c;
    size_t k = 0;
    char colon = ':';
    char hash = '#';
    char begin_yaml[] = "---";
    char end_yaml[] = "...";

    scs_yaml_clear_char_array();

    /* read the first three characters (unless a hash is found - then stop) */
    while (k < 3 && (c = fgetc(fp)) != EOF && c != colon && c != hash)
        if (c != ' ' && c != '\n') scs_yaml_variable_name[k++] = (char) c;

    /* check whether the first three chars are --- or ... */
    if (strcmp(begin_yaml, scs_yaml_variable_name) == 0
            || strcmp(end_yaml, scs_yaml_variable_name) == 0) {
        scs_yaml_skip_to_end_of_line(fp); /* skip to the end of the line */
        return SCS_NULL;
    }

    if (c == hash) {
        scs_yaml_skip_to_end_of_line(fp); /* skip to the end of the line */
        return SCS_NULL;
    }
    if (c == colon) return scs_yaml_variable_name;

    /* read the rest */
    while ((c = fgetc(fp)) != EOF && c != colon)
        if (c != ' ') scs_yaml_variable_name[k++] = (char) c;

    return scs_yaml_variable_name; /* variable name */
}

static void scs_yaml_skip_to_problem(FILE * fp) {
    while (!feof(fp)) {
        char * var_name;
        var_name = scs_yaml_get_variable_name(fp);
        if (var_name != SCS_NULL) {
            scs_yaml_skip_to_end_of_line(fp);
            if (strcmp(var_name, scs_yaml_problem) == 0) break;
        }
    }
}

static size_t scs_yaml_read_size_t(FILE * fp) {
    size_t value_in_yaml;
    int status;
    status = fscanf(fp, SCS_FORMAT_ZU, &value_in_yaml);
    if (status <= 0) value_in_yaml = 0;
    return value_in_yaml;
}

static scs_float scs_yaml_read_numeric(FILE * fp) {
    scs_float value_in_yaml;
    int status;
    status = fscanf(fp, "%lf", &value_in_yaml);
    if (status <= 0) value_in_yaml = 0;
    return value_in_yaml;
}

static void scs_yaml_discover_matrix_sizes(FILE * fp, ScsData * data, scs_int * nnz) {
    size_t k = 0;
    while (k++ < 6 && !feof(fp)) {
        char * var_name;
        var_name = scs_yaml_get_variable_name(fp);
        if (var_name == SCS_NULL) {
            k--;
            continue;
        }
        if (strcmp(var_name, scs_yaml_m) == 0) {
            data->m = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_n) == 0) {
            data->n = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_nnz) == 0) {
            *nnz = scs_yaml_read_size_t(fp);
        }
        scs_yaml_skip_to_end_of_line(fp);
    }
}

static void scs_yaml_discover_cone_sizes(FILE * fp, ScsCone * cone) {
    size_t k = 0;
    while (k++ < 10 && !feof(fp)) {
        char * var_name;
        var_name = scs_yaml_get_variable_name(fp);
        if (var_name == SCS_NULL) {
            k--;
            continue;
        }
        if (strcmp(var_name, scs_yaml_cone_field_psize) == 0) {
            cone->psize = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_qsize) == 0) {
            cone->qsize = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_ssize) == 0) {
            cone->ssize = scs_yaml_read_size_t(fp);
        }
        scs_yaml_skip_to_end_of_line(fp);
    }
}

static int scs_yaml_discover_sizes(
        FILE * fp,
        ScsData * data,
        ScsCone * cone,
        scs_int * nnz) {
    int checkpoints = 0;
    /* fast-forward to the problem */
    scs_yaml_skip_to_problem(fp);

    /* parse the problem */
    while (!feof(fp)) {
        char * variable_name;
        variable_name = scs_yaml_get_variable_name(fp);
        scs_yaml_skip_to_end_of_line(fp);
        if (variable_name == SCS_NULL) continue;
        if (strcmp(variable_name, scs_yaml_matrix_A) == 0) {
            checkpoints++;
            scs_yaml_discover_matrix_sizes(fp, data, nnz);
        } else if (strcmp(variable_name, scs_yaml_cone_K) == 0) {
            checkpoints++;
            scs_yaml_discover_cone_sizes(fp, cone);
        }
    }
    return checkpoints == 2 ? 0 : 1;
}

static int scs_yaml_initialise_data_and_cone(ScsData * data, ScsCone * cone, scs_int nnz) {
    if (data == SCS_NULL || cone == SCS_NULL) return 700;
    if (data->m <= 0) return 701;
    if (data->n <= 0) return 702;
    if (cone->psize < 0) return 703;
    if (cone->qsize < 0) return 704;
    if (cone->ssize < 0) return 705;

    /* initialise matrix `A` */
    data->A = scs_malloc(sizeof (ScsAMatrix));
    if (data->A == SCS_NULL) goto yaml_init_error_0;
    data->A->m = data->m;
    data->A->n = data->n;
    data->A->i = scs_malloc(nnz * sizeof (scs_int));
    if (data->A->i == SCS_NULL) goto yaml_init_error_1;
    data->A->p = scs_malloc((data->n + 1) * sizeof (scs_int));
    if (data->A->p == SCS_NULL) goto yaml_init_error_2;
    data->A->x = scs_malloc(nnz * sizeof (scs_float));
    if (data->A->x == SCS_NULL) goto yaml_init_error_3;

    /* initialise `b` and `c` */
    data->b = scs_malloc(data->m * sizeof (scs_float));
    if (data->b == SCS_NULL) goto yaml_init_error_4;
    data->c = scs_malloc(data->n * sizeof (scs_float));
    if (data->c == SCS_NULL) goto yaml_init_error_5;

    /* initialise `cone` */
    cone->p = scs_malloc(cone->psize * sizeof (scs_float));
    if (cone->psize > 0 && cone->p == SCS_NULL) goto yaml_init_error_6;
    cone->q = scs_malloc(cone->qsize * sizeof (scs_int));
    if (cone->qsize > 0 && cone->q == SCS_NULL) goto yaml_init_error_7;
    cone->s = scs_malloc(cone->ssize * sizeof (scs_int));
    if (cone->ssize && cone->s == SCS_NULL) goto yaml_init_error_8;

    return 0;

    /* LCOV_EXCL_START */
yaml_init_error_8:
    scs_free(cone->q);
yaml_init_error_7:
    scs_free(cone->p);
yaml_init_error_6:
    scs_free(data->c);
yaml_init_error_5:
    scs_free(data->b);
yaml_init_error_4:
    scs_free(data->A->x);
yaml_init_error_3:
    scs_free(data->A->p);
yaml_init_error_2:
    scs_free(data->A->i);
yaml_init_error_1:
    scs_free(data->A);
yaml_init_error_0:
    return 1;
    /* LCOV_EXCL_STOP */
}

static int scs_yaml_parse_int_array(FILE * fp, scs_int * array, size_t len) {
    int temp;
    size_t i;
    if (fscanf(fp, " [ %d", &temp) == 0) return 1;
    array[0] = temp;
    for (i = 0; i < len - 1; ++i) {
        if (fscanf(fp, " , %d", &temp) == 0) return 1;
        array[i + 1] = temp;
    }
    return 0;
}

static int scs_yaml_parse_float_array(FILE * fp, scs_float * array, size_t len) {
    size_t i;
    if (fscanf(fp, " [ %lf ", array) == 0) return 1;
    for (i = 0; i < len - 1; ++i)
        if (fscanf(fp, " , %lf ", array + i + 1) == 0) return 1;
    return 0;
}

static int scs_yaml_parse_matrix_A(FILE * fp, ScsData * data, scs_int nonzeroes) {
    /* parse matrix A */
    size_t k = 0;
    int checkpoints = 0;
    while (k++ < 6 && !feof(fp)) {
        char * var_name;
        var_name = scs_yaml_get_variable_name(fp);
        if (var_name == SCS_NULL) {
            k--;
            continue;
        }
        if (strcmp(var_name, scs_yaml_matrix_A_I) == 0) {
            checkpoints++;
            if (scs_yaml_parse_int_array(fp, data->A->p, data->n + 1)) return 1;
        } else if (strcmp(var_name, scs_yaml_matrix_A_J) == 0) {
            checkpoints++;
            if (scs_yaml_parse_int_array(fp, data->A->i, nonzeroes)) return 1;
        } else if (strcmp(var_name, scs_yaml_matrix_A_a) == 0) {
            checkpoints++;
            if (scs_yaml_parse_float_array(fp, data->A->x, nonzeroes)) return 1;
        }
        scs_yaml_skip_to_end_of_line(fp);
    }
    return checkpoints == 3 ? 0 : 2;
}

static int scs_yaml_parse_cone_K(FILE * fp, ScsCone * cone) {
    size_t k = 0;
    char * var_name = SCS_NULL;
    while (k++ < 10 && !feof(fp)) {
        var_name = scs_yaml_get_variable_name(fp);
        if (var_name == SCS_NULL) {
            k--;
            continue;
        }
        if (strcmp(var_name, scs_yaml_cone_field_f) == 0) {
            cone->f = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_l) == 0) {
            cone->l = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_ep) == 0) {
            cone->ep = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_ed) == 0) {
            cone->ed = scs_yaml_read_size_t(fp);
        } else if (strcmp(var_name, scs_yaml_cone_field_q) == 0) {
            if (cone->qsize == 1) {
                cone->q[0] = (scs_int) scs_yaml_read_size_t(fp);
            } else if (cone->qsize > 1) {
                if (scs_yaml_parse_int_array(fp, cone->q, cone->qsize)) return 1;
            }
        } else if (strcmp(var_name, scs_yaml_cone_field_p) == 0) {
            if (cone->psize == 1) {
                cone->p[0] = scs_yaml_read_numeric(fp);
            } else if (cone->psize > 1) {
                if (scs_yaml_parse_float_array(fp, cone->p, cone->psize)) return 1;
            }
        } else if (strcmp(var_name, scs_yaml_cone_field_s) == 0) {
            if (cone->ssize == 1) {
                cone->s[0] = (scs_int) scs_yaml_read_size_t(fp);
            } else if (cone->ssize > 1) {
                if (scs_yaml_parse_int_array(fp, cone->s, cone->ssize)) return 1;
            }
        }
        scs_yaml_skip_to_end_of_line(fp);
    }
    return 0;
}

static int scs_yaml_parse_data_and_cone(
        FILE * fp,
        ScsData * data,
        ScsCone * cone,
        scs_int nonzeroes) {
    /* fast-forward to the problem */
    scs_yaml_skip_to_problem(fp);

    /* parse the problem */
    while (!feof(fp)) {
        scs_yaml_get_variable_name(fp);
        if (strcmp(scs_yaml_variable_name, scs_yaml_matrix_A) == 0) {
            scs_yaml_skip_to_end_of_line(fp);
            if (scs_yaml_parse_matrix_A(fp, data, nonzeroes)) return 1;
        } else if (strcmp(scs_yaml_variable_name, scs_yaml_cone_K) == 0) {
            scs_yaml_skip_to_end_of_line(fp);
            if (scs_yaml_parse_cone_K(fp, cone)) return 1;
        } else if (strcmp(scs_yaml_variable_name, scs_yaml_vector_b) == 0) {
            if (scs_yaml_parse_float_array(fp, data->b, data->m)) return 1;
            scs_yaml_skip_to_end_of_line(fp);
        } else if (strcmp(scs_yaml_variable_name, scs_yaml_vector_c) == 0) {
            if (scs_yaml_parse_float_array(fp, data->c, data->n)) return 1;
            scs_yaml_skip_to_end_of_line(fp);
        } else {
            scs_yaml_skip_to_end_of_line(fp);
        }
    }
    return 0;

}

static void scs_reset_cone(ScsCone * cone) {
    cone->ssize = 0;
    cone->ed = 0;
    cone->ep = 0;
    cone->f = 0;
    cone->l = 0;
    cone->psize = 0;
    cone->ssize = 0;
    cone->qsize = 0;
    cone->q = SCS_NULL;
    cone->p = SCS_NULL;
    cone->s = SCS_NULL;
}

scs_int scs_from_YAML(
        const char * filepath,
        ScsData ** data,
        ScsCone ** cone) {

    FILE *fp = SCS_NULL;
    scs_int status;
    scs_int nonzeroes;

    nonzeroes = 0;
    status = 0;

    *data = scs_init_data();
    if (data == SCS_NULL) {
        status = 501;
        goto exit_error_1;
    }

    *cone = scs_malloc(sizeof (ScsCone));
    scs_reset_cone(*cone);
    if (cone == SCS_NULL) {
        status = 502;
        goto exit_error_2;
    }

    fp = fopen(filepath, "r");

    if (fp == NULL) {
        status = 1000;
        goto exit_error_2;
    }


    /* first we need to know the sizes */
    if (scs_yaml_discover_sizes(fp, *data, *cone, &nonzeroes)) {
        status = 101;
        goto exit_error_2;
    }

    /* we know the dimensions - initialise `data` and `cone` */
    if ((status = scs_yaml_initialise_data_and_cone(*data, *cone, nonzeroes)))
        goto exit_error_2;

    /* rewind file */
    rewind(fp);

    /* parse `data` and `cone` */
    if (scs_yaml_parse_data_and_cone(fp, *data, *cone, nonzeroes)) {
        status = 103;
        goto exit_error_2;
    }

    if (fp != SCS_NULL) {
        if (0 != fclose(fp)) {
            status = 224;
        }
    }
    return status;

    /* LCOV_EXCL_START */
exit_error_2:
    scs_free_data_cone(*data, *cone);
exit_error_1:
    if (fp != SCS_NULL)
        fclose(fp);
    return status;
    /* LCOV_EXCL_STOP */
}

static int scs_double_num_digits = 17;
static char scs_yaml_space[] = "    ";
static char scs_yaml_double_space[] = "        ";

static void scs_serialize_array_to_YAML(
        FILE * RESTRICT fp,
        void * array,
        scs_int len,
        scs_int is_array_int
        ) {
    fprintf(fp, "[");
    if (len > 0) {
        size_t i;
        if (is_array_int) {
            scs_int * int_array = (scs_int *) array;
            for (i = 0; i < len - 1; ++i) {
                fprintf(fp, "%d,", (int) int_array[i]);
            }
            fprintf(fp, "%d", (int) int_array[len - 1]);
        } else {
            scs_float * float_array = (scs_float *) array;
            for (i = 0; i < len - 1; ++i) {
                fprintf(fp, "%.*g,", scs_double_num_digits, (double) float_array[i]);
            }
            fprintf(fp, "%.*g", scs_double_num_digits, (double) float_array[len - 1]);
        }
    }
    fprintf(fp, "]\n");
}

static void scs_serialize_sparse_matrix_to_YAML(
        FILE * RESTRICT fp,
        const ScsAMatrix * RESTRICT matrix) {
    scs_int num_nonzeroes = matrix->p[matrix->n];
    fprintf(fp, "%s%s:\n", scs_yaml_space, scs_yaml_matrix_A);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_m, (int) matrix->m);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_n, (int) matrix->n);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_nnz, (int) num_nonzeroes);
    fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_matrix_A_a);
    scs_serialize_array_to_YAML(fp, matrix->x, num_nonzeroes, 0);
    fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_matrix_A_I);
    scs_serialize_array_to_YAML(fp, matrix->p, matrix->n + 1, 1);
    fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_matrix_A_J);
    scs_serialize_array_to_YAML(fp, matrix->i, num_nonzeroes, 1);
}

static void scs_serialize_vectors_to_YAML(
        FILE * RESTRICT fp,
        const ScsData * RESTRICT data) {
    fprintf(fp, "%s%s: ", scs_yaml_space, scs_yaml_vector_b);
    scs_serialize_array_to_YAML(fp, data->b, data->m, 0);
    fprintf(fp, "%s%s: ", scs_yaml_space, scs_yaml_vector_c);
    scs_serialize_array_to_YAML(fp, data->c, data->n, 0);
}

static void scs_serialize_cone_to_YAML(
        FILE * RESTRICT fp,
        const ScsCone * RESTRICT cone) {
    fprintf(fp, "%s%s:\n", scs_yaml_space, scs_yaml_cone_K);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_psize, (int) cone->psize);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_qsize, (int) cone->qsize);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_ssize, (int) cone->ssize);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_f, (int) cone->f);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_l, (int) cone->l);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_ep, (int) cone->ep);
    fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_ed, (int) cone->ed);
    if (cone->qsize == 1) {
        fprintf(fp, "%s%s: %d\n", scs_yaml_double_space, scs_yaml_cone_field_q, (int) cone->q[0]);
    } else {
        fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_cone_field_q);
        scs_serialize_array_to_YAML(fp, cone->q, cone->qsize, 1);
    }
    if (cone->psize == 1) {
        fprintf(fp, "%s%s: %.*g\n", scs_yaml_double_space,
                scs_yaml_cone_field_p, scs_double_num_digits,
                (double) cone->p[0]);
    } else {
        fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_cone_field_p);
        scs_serialize_array_to_YAML(fp, cone->p, cone->psize, 0);
    }
    if (cone->ssize == 1) {
        fprintf(fp, "%s%s: %d\n", scs_yaml_double_space,
                scs_yaml_cone_field_s, (int) cone->s[0]);
    } else {
        fprintf(fp, "%s%s: ", scs_yaml_double_space, scs_yaml_cone_field_s);
        scs_serialize_array_to_YAML(fp, cone->s, cone->ssize, 1);
    }
}

scs_int scs_to_YAML(
        const char * RESTRICT filepath,
        ScsConicProblemMetadata * metadata,
        const ScsData * RESTRICT data,
        const ScsCone * RESTRICT cone) {
    scs_int status = 0;
    FILE *fp = SCS_NULL;
    scs_int should_free_metadata = 0;

    if (data == SCS_NULL) return 501;
    if (cone == SCS_NULL) return 502;
    if (filepath == SCS_NULL) return 503;

    if (metadata == SCS_NULL) {
        metadata = scs_init_conic_problem_metadata("anonymous-conic-problem");
        if (metadata == SCS_NULL) return 600;
        should_free_metadata = 1;
    }

    fp = fopen(filepath, "w");

    if (fp == NULL) {
        status = 101;
        goto to_yaml_exit_0;
    }
    fprintf(fp, "--- # SuperSCS Problem\n%s:\n", scs_yaml_meta);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_meta_id, metadata->id);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_meta_creator, metadata->creator);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_meta_yaml_version, metadata->yamlVersion);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_meta_license, metadata->license);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_meta_date, metadata->date);
    fprintf(fp, "%s:\n", scs_yaml_problem);
    fprintf(fp, "%s%s: '%s'\n", scs_yaml_space, scs_yaml_problem_name, metadata->problemName);
    scs_serialize_sparse_matrix_to_YAML(fp, data->A);
    scs_serialize_vectors_to_YAML(fp, data);
    scs_serialize_cone_to_YAML(fp, cone);
    fprintf(fp, "...");

to_yaml_exit_0:
    if (fp != SCS_NULL) {
        if (fclose(fp) != 0) {
            status = 250;
        }
    }
    if (should_free_metadata) {
        scs_free(metadata);
    }
    return status;
}

static int scs_time_offset(void) {
    time_t gmt, rawtime = time(NULL);
    struct tm *ptm;
#if !defined(WIN32)
    struct tm gbuf;
    ptm = gmtime_r(&rawtime, &gbuf);
#else
    ptm = gmtime(&rawtime);
#endif
    // Request that mktime() looksup dst in timezone database
    ptm->tm_isdst = -1;
    gmt = mktime(ptm);
    return (int) difftime(rawtime, gmt) / 3600;
}

ScsConicProblemMetadata * scs_init_conic_problem_metadata(const char * problemName) {
    ScsConicProblemMetadata * metadata = SCS_NULL;
    time_t t = time(NULL);
    struct tm date_time_now = *localtime(&t);

    metadata = scs_malloc(sizeof (*metadata));
    if (metadata == SCS_NULL) return SCS_NULL;
    strncpy(metadata->license,
            "https://github.com/kul-forbes/scs/blob/master/LICENSE.txt",
            SCS_METADATA_TEXT_SIZE);
    strncpy(metadata->problemName, problemName, SCS_METADATA_TEXT_SIZE);
    snprintf(metadata->id, SCS_METADATA_TEXT_SIZE, "http://superscs.org/problem/%s", problemName);
    snprintf(metadata->creator, SCS_METADATA_TEXT_SIZE, "%s", scs_version());
    snprintf(metadata->date, SCS_METADATA_TEXT_SIZE,
            "%d-%d-%d %d:%d:%d [GMT+%d]",
            date_time_now.tm_year + 1900,
            date_time_now.tm_mon + 1,
            date_time_now.tm_mday,
            date_time_now.tm_hour,
            date_time_now.tm_min,
            date_time_now.tm_sec,
            scs_time_offset());

    snprintf(metadata->yamlVersion, SCS_METADATA_TEXT_SIZE, "1.2");
    return metadata;
}
