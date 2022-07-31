/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:37:42 GMT-04:00
 */

#ifndef GRAVITYVECTOR_MEX_HH
#define GRAVITYVECTOR_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void GravityVector_mex_raw(double *p_output1, const double *var1);

  inline void GravityVector_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    GravityVector_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // GRAVITYVECTOR_MEX_HH
