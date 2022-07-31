/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:31 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1603;
  double t2050;
  double t1284;
  double t1692;
  double t2097;
  double t2481;
  double t2496;
  double t2870;
  double t3078;
  double t3200;
  double t3438;
  double t3442;
  double t1822;
  double t2405;
  double t2441;
  double t3590;
  double t3597;
  double t3601;
  double t3733;
  double t3538;
  double t3553;
  double t3569;
  double t3832;
  double t4658;
  double t4773;
  double t4778;
  double t4786;
  double t4558;
  double t4568;
  double t4578;
  double t5038;
  double t5209;
  double t5215;
  double t2958;
  double t3082;
  double t3137;
  double t3456;
  double t3457;
  double t3527;
  double t5713;
  double t5715;
  double t5730;
  double t5642;
  double t5681;
  double t5689;
  double t3677;
  double t3754;
  double t3769;
  double t3874;
  double t4103;
  double t4205;
  double t5737;
  double t5744;
  double t5756;
  double t4780;
  double t4791;
  double t4830;
  double t5221;
  double t5244;
  double t5259;
  double t5901;
  double t5905;
  double t5906;
  double t5931;
  double t5939;
  double t5953;
  double t6064;
  double t6079;
  double t6086;
  double t6101;
  double t6102;
  double t6108;
  double t6121;
  double t6123;
  double t6125;
  t1603 = Cos(var1[5]);
  t2050 = Sin(var1[3]);
  t1284 = Cos(var1[3]);
  t1692 = Sin(var1[4]);
  t2097 = Sin(var1[5]);
  t2481 = Cos(var1[6]);
  t2496 = -1.*t2481;
  t2870 = 1. + t2496;
  t3078 = Sin(var1[6]);
  t3200 = -1.*t1603*t2050;
  t3438 = t1284*t1692*t2097;
  t3442 = t3200 + t3438;
  t1822 = t1284*t1603*t1692;
  t2405 = t2050*t2097;
  t2441 = t1822 + t2405;
  t3590 = Cos(var1[7]);
  t3597 = -1.*t3590;
  t3601 = 1. + t3597;
  t3733 = Sin(var1[7]);
  t3538 = t2481*t3442;
  t3553 = t2441*t3078;
  t3569 = t3538 + t3553;
  t3832 = Cos(var1[4]);
  t4658 = Cos(var1[8]);
  t4773 = -1.*t4658;
  t4778 = 1. + t4773;
  t4786 = Sin(var1[8]);
  t4558 = t1284*t3832*t3590;
  t4568 = t3569*t3733;
  t4578 = t4558 + t4568;
  t5038 = t2481*t2441;
  t5209 = -1.*t3442*t3078;
  t5215 = t5038 + t5209;
  t2958 = 0.07996*t2870;
  t3082 = -0.135*t3078;
  t3137 = 0. + t2958 + t3082;
  t3456 = 0.135*t2870;
  t3457 = 0.07996*t3078;
  t3527 = 0. + t3456 + t3457;
  t5713 = t1284*t1603;
  t5715 = t2050*t1692*t2097;
  t5730 = t5713 + t5715;
  t5642 = t1603*t2050*t1692;
  t5681 = -1.*t1284*t2097;
  t5689 = t5642 + t5681;
  t3677 = 0.135*t3601;
  t3754 = 0.08055*t3733;
  t3769 = 0. + t3677 + t3754;
  t3874 = -0.08055*t3601;
  t4103 = 0.135*t3733;
  t4205 = 0. + t3874 + t4103;
  t5737 = t2481*t5730;
  t5744 = t5689*t3078;
  t5756 = t5737 + t5744;
  t4780 = -0.08055*t4778;
  t4791 = -0.01004*t4786;
  t4830 = 0. + t4780 + t4791;
  t5221 = -0.01004*t4778;
  t5244 = 0.08055*t4786;
  t5259 = 0. + t5221 + t5244;
  t5901 = t3832*t3590*t2050;
  t5905 = t5756*t3733;
  t5906 = t5901 + t5905;
  t5931 = t2481*t5689;
  t5939 = -1.*t5730*t3078;
  t5953 = t5931 + t5939;
  t6064 = t3832*t2481*t2097;
  t6079 = t3832*t1603*t3078;
  t6086 = t6064 + t6079;
  t6101 = -1.*t3590*t1692;
  t6102 = t6086*t3733;
  t6108 = t6101 + t6102;
  t6121 = t3832*t1603*t2481;
  t6123 = -1.*t3832*t2097*t3078;
  t6125 = t6121 + t6123;
  p_output1[0]=0. + t2441*t3137 + t3442*t3527 + t3569*t3769 + 0.1708*(t3569*t3590 - 1.*t1284*t3733*t3832) + t1284*t3832*t4205 + t4578*t4830 - 0.06984*(-1.*t4578*t4786 + t4658*t5215) - 0.08045*(t4578*t4658 + t4786*t5215) + t5215*t5259 + var1[0];
  p_output1[1]=0. + t2050*t3832*t4205 + t3137*t5689 + t3527*t5730 + t3769*t5756 + 0.1708*(-1.*t2050*t3733*t3832 + t3590*t5756) + t4830*t5906 + t5259*t5953 - 0.06984*(-1.*t4786*t5906 + t4658*t5953) - 0.08045*(t4658*t5906 + t4786*t5953) + var1[1];
  p_output1[2]=0. + t1603*t3137*t3832 + t2097*t3527*t3832 - 1.*t1692*t4205 + t3769*t6086 + 0.1708*(t1692*t3733 + t3590*t6086) + t4830*t6108 + t5259*t6125 - 0.06984*(-1.*t4786*t6108 + t4658*t6125) - 0.08045*(t4658*t6108 + t4786*t6125) + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftThigh_mex.hh"

namespace SymExpression
{

void p_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
