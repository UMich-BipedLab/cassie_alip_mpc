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

// initialize variables
void d_init_var_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **ux, double **pi, double **pDCt, double **db, double **t, double **lam, double mu0, int warm_start);

// IPM without residuals computation
void d_update_hessian_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double **db, double sigma_mu, double **t, double **tinv, double **lam, double **lamt, double **dlam, double **Qx, double **qx);
void d_update_gradient_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double sigma_mu, double **dt, double **dlam, double **t_inv, double **qx);
void d_compute_alpha_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double *ptr_alpha, double **t, double **dt, double **lam, double **dlam, double **lamt, double **dux, double **pDCt, double **db);
void d_update_var_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double *ptr_mu, double mu_scal, double alpha, double **ux, double **dux, double **t, double **dt, double **lam, double **dlam, double **pi, double **dpi);
void d_compute_mu_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double *ptr_mu, double mu_scal, double alpha, double **lam, double **dlam, double **t, double **dt);
void d_update_gradient_new_rhs_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double **db, double **t_inv, double **lamt, double **qx);
void d_compute_t_lam_new_rhs_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **t_aff, double **lam_aff, double **lamt, double **tinv, double **dux, double **pDCt, double **db);

// IPM with residuals computation
void d_update_hessian_gradient_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double **res_d, double **res_m, double **t, double **lam, double **t_inv, double **Qx, double **qx);
void d_compute_alpha_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **dux, double **t, double **t_inv, double **lam, double **pDCt, double **res_d, double **res_m, double **dt, double **dlam, double *ptr_alpha);
void d_compute_dt_dlam_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **dux, double **t, double **t_inv, double **lam, double **pDCt, double **res_d, double **res_m, double **dt, double **dlam);
void d_update_var_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double alpha, double **ux, double **dux, double **pi, double **dpi, double **t, double **dt, double **lam, double **dlam);
void d_backup_update_var_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double alpha, double **ux_bkp, double **ux, double **dux, double **pi_bkp, double **pi, double **dpi, double **t_bkp, double **t, double **dt, double **lam_bkp, double **lam, double **dlam);
void d_compute_mu_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double alpha, double **lam, double **dlam, double **t, double **dt, double *ptr_mu, double mu_scal);
void d_compute_centering_correction_res_mpc_hard_tv(int N, int *nb, int *ng, double sigma_mu, double **dt, double **dlam, double **res_m);
void d_update_gradient_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int *ng, double **res_d, double **res_m, double **lam, double **t_inv, double **qx);

// residual computation
void d_res_res_mpc_hard_tv(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **hpBAbt, double **hb, double **hpQ, double **hq, double **hux, double **hpDCt, double **hd, double **hpi, double **hlam, double **ht, double *work, double **hrq, double **hrb, double **hrd, double **hrm, double *mu);
