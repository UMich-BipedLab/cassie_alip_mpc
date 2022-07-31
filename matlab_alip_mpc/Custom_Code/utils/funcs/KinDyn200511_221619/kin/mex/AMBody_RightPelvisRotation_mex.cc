/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:38 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t623;
  double t663;
  double t548;
  double t709;
  double t1008;
  double t630;
  double t770;
  double t815;
  double t79;
  double t85;
  double t306;
  double t354;
  double t526;
  double t1004;
  double t1189;
  double t1229;
  double t1238;
  double t1251;
  double t1272;
  double t1465;
  double t1496;
  double t1530;
  double t1651;
  double t1667;
  double t1782;
  double t1795;
  double t1988;
  double t2232;
  double t2514;
  t623 = Cos(var1[5]);
  t663 = Sin(var1[13]);
  t548 = Cos(var1[13]);
  t709 = Sin(var1[5]);
  t1008 = Cos(var1[4]);
  t630 = t548*t623;
  t770 = -1.*t663*t709;
  t815 = 0. + t630 + t770;
  t79 = Sin(var1[4]);
  t85 = -1.*t79;
  t306 = 0. + t85;
  t354 = var2[3]*t306;
  t526 = 0. + var2[13] + var2[5] + t354;
  t1004 = var2[4]*t815;
  t1189 = t623*t663;
  t1229 = t548*t709;
  t1238 = 0. + t1189 + t1229;
  t1251 = t1008*t1238;
  t1272 = 0. + t1251;
  t1465 = var2[3]*t1272;
  t1496 = 0. + t1004 + t1465;
  t1530 = -1.*t623*t663;
  t1651 = -1.*t548*t709;
  t1667 = 0. + t1530 + t1651;
  t1782 = var2[4]*t1667;
  t1795 = t1008*t815;
  t1988 = 0. + t1795;
  t2232 = var2[3]*t1988;
  t2514 = 0. + t1782 + t2232;
  p_output1[0]=-1.e-6*t1496 + 2.e-6*t2514 + 0.00272*t526;
  p_output1[1]=0.00559*t1496 - 3.e-6*t2514 - 1.e-6*t526;
  p_output1[2]=-3.e-6*t1496 + 0.00464*t2514 + 2.e-6*t526;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMBody_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void AMBody_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
