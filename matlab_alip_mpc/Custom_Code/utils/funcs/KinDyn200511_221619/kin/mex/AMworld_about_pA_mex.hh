/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:40 GMT-04:00
 */

#ifndef AMWORLD_ABOUT_PA_MEX_HH
#define AMWORLD_ABOUT_PA_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void AMworld_about_pA_mex_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void AMworld_about_pA_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);
    assert_size_matrix(var2, 20, 1);
    assert_size_matrix(var3, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    AMworld_about_pA_mex_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AMWORLD_ABOUT_PA_MEX_HH
