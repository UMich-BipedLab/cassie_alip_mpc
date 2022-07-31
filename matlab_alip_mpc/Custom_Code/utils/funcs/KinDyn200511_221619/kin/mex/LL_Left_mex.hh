/*
 * Automatically Generated from Mathematica.
 * Tue 2 Jun 2020 15:03:38 GMT-04:00
 */

#ifndef LL_LEFT_MEX_HH
#define LL_LEFT_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void LL_Left_mex_raw(double *p_output1, const double *var1);

  inline void LL_Left_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    LL_Left_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LL_LEFT_MEX_HH
