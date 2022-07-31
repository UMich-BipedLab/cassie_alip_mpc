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



void d_ric_trf_mhe_if_blas(int nx, int nw, int ndN, int N, double **A, double **G, double **Q, double **R, double **AGU, double **Up, double **Ue, double **Ur, double *Ud);
void d_ric_trs_mhe_if_blas(int nx, int nw, int ndN, int N, double **AGU, double **Up, double **Ue, double **Ur, double *Ud, double **q, double **r, double **f, double **xp, double **x, double **w, double **lam, double *work);

void d_back_ric_trf_tv_blas(int N, int *nx, int *nu, double **BAbt, double **Q, double **Lp, double *BAbtL);
void d_back_ric_trs_tv_blas(int N, int *nx, int *nu, double **BAbt, double **b, double **Lp, double **q, double **l, double **ux, double *work, int compute_Pb, double ** Pb, int compute_pi, double **pi);
int d_forward_schur_trf_tv_blas(int N, int *nv, int *ne, double reg, int *diag_hessian, double **QA, double **LA, double **Le, double *Le_tmp);
int d_forward_schur_trs_tv_blas(int N, int *nv, int *ne, int *diag_hessian, double **qb, double **LA, double **Le, double **xupi, double *work);
