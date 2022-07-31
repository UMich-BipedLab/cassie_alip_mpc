/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:30 GMT-04:00
 */

#ifndef T_RIGHTTHIGH_MEX_HH
#define T_RIGHTTHIGH_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void T_RightThigh_mex_raw(double *p_output1, const double *var1);

  inline void T_RightThigh_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    T_RightThigh_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // T_RIGHTTHIGH_MEX_HH
