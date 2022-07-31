/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:48 GMT-04:00
 */

#ifndef INERTIA_LEFTTHIGH_MEX_HH
#define INERTIA_LEFTTHIGH_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void Inertia_LeftThigh_mex_raw(double *p_output1, const double *var1);

  inline void Inertia_LeftThigh_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Inertia_LeftThigh_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // INERTIA_LEFTTHIGH_MEX_HH
