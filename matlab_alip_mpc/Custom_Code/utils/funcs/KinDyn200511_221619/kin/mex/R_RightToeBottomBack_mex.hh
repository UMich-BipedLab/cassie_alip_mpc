/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:48 GMT-04:00
 */

#ifndef R_RIGHTTOEBOTTOMBACK_MEX_HH
#define R_RIGHTTOEBOTTOMBACK_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void R_RightToeBottomBack_mex_raw(double *p_output1, const double *var1);

  inline void R_RightToeBottomBack_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    R_RightToeBottomBack_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // R_RIGHTTOEBOTTOMBACK_MEX_HH
