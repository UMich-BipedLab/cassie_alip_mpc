/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:06 GMT-04:00
 */

#ifndef INERTIA_RIGHTHIP_MEX_HH
#define INERTIA_RIGHTHIP_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void Inertia_RightHip_mex_raw(double *p_output1, const double *var1);

  inline void Inertia_RightHip_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Inertia_RightHip_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // INERTIA_RIGHTHIP_MEX_HH
