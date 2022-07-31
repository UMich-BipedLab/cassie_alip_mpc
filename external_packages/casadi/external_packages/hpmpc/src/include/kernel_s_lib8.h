/**************************************************************************************************
*                                                                                                 *
* This file is part of HPMPC.                                                                     *
*                                                                                                 *
* HPMPC -- Library for High-Performance implementation of solvers for MPC.                        *
* Copyright (C) 2014-2015 by Technical University of Denmark. All rights reserved.                *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                                                                                                 *
**************************************************************************************************/

void kernel_sgemm_nt_24x4_lib8(int kmax, float *A0, float *A1, float *A2, float *B, float *C0, float *C1, float *C2, float *D0, float *D1, float *D2, int alg);
void kernel_sgemm_nt_16x4_lib8(int kmax, float *A0, float *A1, float *B, float *C0, float *C1, float *D0, float *D1, int alg);
void kernel_sgemm_nt_8x8_lib8(int kmax, float *A0, float *B, float *C0, float *D0, int alg);
void kernel_sgemm_nt_8x4_lib8(int kmax, float *A0, float *B, float *C0, float *D0, int alg);
void kernel_sgemm_nt_4x8_lib8(int kmax, float *A0, float *B, float *C0, float *D0, int alg);
void kernel_sgemm_nt_4x4_lib8(int kmax, float *A, float *B, float *C, float *D, int alg);
void kernel_strmm_nt_16x4_lib8(int kadd, float *A0, float *A1, float *B, float *D0, float *D1);
void kernel_strmm_nt_8x4_lib8(int kadd, float *A0, float *B, float *D0);
void corner_strmm_nt_16x3_lib8(float *A0, float *A1, float *B, float *C0, float *C1);
void corner_strmm_nt_16x2_lib8(float *A0, float *A1, float *B, float *C0, float *C1);
void corner_strmm_nt_16x1_lib8(float *A0, float *A1, float *B, float *C0, float *C1);
void corner_strmm_nt_8x3_lib8(float *A0, float *B, float *C0);
void corner_strmm_nt_8x2_lib8(float *A0, float *B, float *C0);
void corner_strmm_nt_8x1_lib8(float *A0, float *B, float *C0);
void kernel_sgemm_strsm_nt_24x4_lib8(int kadd, int ksub, float *A0, float *A1, float *A2, float *B, float *C0, float *C1, float *C2, float *D0, float *D1, float *D2, float *fact);
void kernel_sgemm_strsm_nt_16x4_lib8(int kadd, int ksub, float *A0, float *A1, float *B, float *C0, float *C1, float *D0, float *D1, float *fact);
void kernel_sgemm_strsm_nt_8x4_lib8(int kadd, int ksub, float *A0, float *B, float *C0, float *D0, float *fact);
void kernel_ssyrk_spotrf_nt_16x4_lib8(int kadd, int ksub, float *A0, float *A1, float *B, float *C0, float *C1, float *D0, float *D1, float *fact);
void kernel_ssyrk_spotrf_nt_12x4_lib8(int kadd, int ksub, float *A0, float *A1, float *B, float *C0, float *C1, float *D0, float *D1, float *fact);
void kernel_ssyrk_spotrf_nt_8x4_lib8(int kadd, int ksub, float *A0, float *B, float *C0, float *D0, float *fact);
void kernel_ssyrk_spotrf_nt_8x2_lib8(int kadd, int ksub, float *A0, float *B, float *C0, float *D0, float *fact);
void kernel_ssyrk_spotrf_nt_4x4_lib8(int kadd, int ksub, float *A0, float *B, float *C0, float *D0, float *fact);
void kernel_ssyrk_spotrf_nt_4x2_lib8(int kadd, int ksub, float *A0, float *B, float *C0, float *D0, float *fact);
void kernel_sgemv_t_8_lib8(int kmax, int kna, float *A, int sda, float *x, float *y, int alg);
void kernel_sgemv_t_4_lib8(int kmax, int kna, float *A, int sda, float *x, float *y, int alg);
void kernel_sgemv_t_3_lib8(int kmax, int kna, float *A, int sda, float *x, float *y, int alg);
void kernel_sgemv_t_2_lib8(int kmax, int kna, float *A, int sda, float *x, float *y, int alg);
void kernel_sgemv_t_1_lib8(int kmax, int kna, float *A, int sda, float *x, float *y, int alg);
void kernel_sgemv_n_16_lib8(int kmax, float *A0, float *A1, float *x, float *y, int alg);
void kernel_sgemv_n_8_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_sgemv_n_4_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_sgemv_n_2_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_sgemv_n_1_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_strmv_u_t_8_lib8(int kmax, float *A, int sda, float *x, float *y, int alg);
void kernel_strmv_u_t_4_lib8(int kmax, float *A, int sda, float *x, float *y, int alg);
void kernel_strmv_u_t_2_lib8(int kmax, float *A, int sda, float *x, float *y, int alg);
void kernel_strmv_u_t_1_lib8(int kmax, float *A, int sda, float *x, float *y, int alg);
void kernel_strmv_u_n_8_lib8(int kmax, float *A0, float *x, float *y, int alg);
void kernel_strmv_u_n_4_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_strmv_u_n_2_lib8(int kmax, float *A, float *x, float *y, int alg);
void kernel_strsv_n_8_lib8(int kmax, int ksv, float *A, float *x, float *y);
void kernel_strsv_t_4_lib8(int kmax, int kna, float *A, int sda, float *x);
void kernel_strsv_t_3_lib8(int kmax, int kna, float *A, int sda, float *x);
void kernel_strsv_t_2_lib8(int kmax, int kna, float *A, int sda, float *x);
void kernel_strsv_t_1_lib8(int kmax, int kna, float *A, int sda, float *x);
void kernel_ssymv_4_lib8(int kmax, int kna, float *A, int sda, float *x_n, float *y_n, float *x_t, float *y_t, int tri, int alg);
void kernel_ssymv_2_lib8(int kmax, int kna, float *A, int sda, float *x_n, float *y_n, float *x_t, float *y_t, int tri, int alg);
void kernel_ssymv_1_lib8(int kmax, int kna, float *A, int sda, float *x_n, float *y_n, float *x_t, float *y_t, int tri, int alg);
void kernel_stran_8_lib8(int kmax, int kna, float *A, int sda, float *C);

