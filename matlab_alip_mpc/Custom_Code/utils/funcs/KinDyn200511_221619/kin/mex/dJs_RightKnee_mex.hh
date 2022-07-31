/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:00 GMT-04:00
 */

#ifndef DJS_RIGHTKNEE_MEX_HH
#define DJS_RIGHTKNEE_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void dJs_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJs_RightKnee_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);
    assert_size_matrix(var2, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJs_RightKnee_mex_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJS_RIGHTKNEE_MEX_HH
