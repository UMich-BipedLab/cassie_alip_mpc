/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:06 GMT-04:00
 */

#ifndef JB_LEFTHIP_MEX_HH
#define JB_LEFTHIP_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void Jb_LeftHip_mex_raw(double *p_output1, const double *var1);

  inline void Jb_LeftHip_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jb_LeftHip_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JB_LEFTHIP_MEX_HH
