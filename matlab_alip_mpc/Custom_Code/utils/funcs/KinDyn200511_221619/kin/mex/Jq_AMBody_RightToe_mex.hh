/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:06 GMT-04:00
 */

#ifndef JQ_AMBODY_RIGHTTOE_MEX_HH
#define JQ_AMBODY_RIGHTTOE_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void Jq_AMBody_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2);

  inline void Jq_AMBody_RightToe_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);
    assert_size_matrix(var2, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jq_AMBody_RightToe_mex_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JQ_AMBODY_RIGHTTOE_MEX_HH
