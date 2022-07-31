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
#include "test_runner_dir.h"
#include "test_superscs.h"
#include "linsys/indirect/private.h"

int main(int argc, char** argv) {
    int r;
    number_of_assertions = 0;

    printf("\n***** Test Results *****\n\n");

    r = TEST_SUCCESS;

    /* Test functions: */
    r += scs_test(&test_dummy_method, "Dummy passing test");
    r += scs_test(&test_problem_metadata, "Metadata");
    r += scs_test(&test_serialize_YAML, "Saving to YAML");
    r += scs_test(&test_serialize_YAML_no_metadata, "Saving to YAML (no meta)");
    r += scs_test(&test_copy_YAML, "Copying YAML");
    r += scs_test(&test_parse_YAML, "Reading from YAML");
    r += scs_test(&test_parse_YAML_2, "YAML with qsize=2");
    r += scs_test(&test_parse_YAML_3, "YAML with ssize=2");
    r += scs_test(&test_SDP_from_YAML, "Solve SDP from YAML");
    r += scs_test(&test_logreg_from_YAML, "Solve logreg from YAML");
    r += scs_test(&test_power_from_YAML, "Solve power cone problem from YAML");
    r += scs_test(&test_exponential_unbdd_from_YAML, "Solve exp cone problem from YAML");
    r += scs_test(&test_overtime_stop, "Stop on overtime (SuperSCS)");
    r += scs_test(&test_overtime_stop_scs, "Stop on overtime (SCS)");
    r += scs_test(&test_superscs_with_anderson, "Test SuperSCS with Anderson's accel.");
    r += scs_test(&test_superscs_011_progress, "Test SuperSCS (0,1,1) thoroughly");
    r += scs_test(&testscs_millis_to_time, "Milliseconds to time");
    r += scs_test(&test_scs_axpy, "AXPY2");
    r += scs_test(&test_scs_inner_product, "Unrolled dot");
    r += scs_test(&test_scs_subtract_array, "Unrolled subtraction");
    r += scs_test(&test_scs_norm_difference, "Norm of difference");
    r += scs_test(&test_project_linsys_v2, "Test projLinSysv2");
    r += scs_test(&test_scs_cgls_square_matrix, "Test CGLS");
    r += scs_test(&test_scs_cgls_tall_matrix, "Test CGLS with tall matrix");
    r += scs_test(&test_scs_cgls_fat_matrix, "Test CGLS with fat matrix");
    r += scs_test(&test_scs_qr_least_sq_tall_matrix, "QR-based least squares (tall)");
    r += scs_test(&test_scs_svd_least_sq_tall_matrix, "SVD-based least squares (tall)");
    r += scs_test(&test_scs_svd_least_sq_rank_deficient, "SVD-based least squares (rank def.)");
    r += scs_test(&test_scs_scale_array, "Test scs_scale_array");
    r += scs_test(&test_scs_gemm, "Test GEMM");
    r += scs_test(&test_scs_gemm_cp, "Test GEMM/CP");
    r += scs_test(&test_scs_gemm_trans_cp, "Test GEMM/Tran/CP");
    r += scs_test(&test_cache_increments, "Test Restarted Broyden cache");
    r += scs_test(&test_broyden_direction_empty_memory, "Test Restarted Broyden direction");
    r += scs_test(&test_full_broyden, "Test full Broyden");
    r += scs_test(&test_cache_s, "Test Broyden S-Cache");
    r += scs_test(&test_broyden, "Test Broyden dir correctness");
    r += scs_test(&test_superscs_solve, "Test SuperSCS");
    r += scs_test(&test_superscs_000, "Test SuperSCS (0,0,0)");
    r += scs_test(&test_superscs_001_fpr, "Test SuperSCS (0,0,1) with FPR");
    r += scs_test(&test_superscs_001_rbroyden, "Test SuperSCS (0,0,1) with R-Broyden");
    r += scs_test(&test_superscs_100_rbroyden, "Test SuperSCS (1,0,0) with R-Broyden");
    r += scs_test(&test_residuals, "Test residuals");
    r += scs_test(&test_rho_x, "Test rho_x");
    r += scs_test(&test_validation, "Test validation");
    r += scs_test(&test_set_memory, "Test set_memory");
    r += scs_test(&test_set_tolerance, "Test set_tolerance");
    r += scs_test(&test_no_normalization, "Test SuperSCS unnormalized");
    r += scs_test(&test_warm_start, "Test SuperSCS warm_start");
    r += scs_test(&test_scale, "Test SuperSCS scalings");
    r += scs_test(&test_scs_set_tolerance, "Test set_tolerance");
    r += scs_test(&test_scs_set_restarted_broyden_settings, "Test scs_set_restarted_broyden_settings");
    r += scs_test(&test_scs_set_anderson_settings, "Test scs_set_anderson_settings");
    printf("\nTotal assertions: %d\n", number_of_assertions);
    if (r == TEST_SUCCESS) {
        printf("\n~ All tests passed\n\n");
        return (EXIT_SUCCESS);
    } else {
        printf("\n~ %d Tests Failed\n\n", r);
        return (EXIT_FAILURE);
    }

}
