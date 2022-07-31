/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:51 GMT-04:00
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
  double t1960;
  double t2183;
  double t1818;
  double t2216;
  double t2397;
  double t2165;
  double t2355;
  double t2361;
  double t337;
  double t768;
  double t1451;
  double t1472;
  double t1696;
  double t2379;
  double t2567;
  double t2603;
  double t2611;
  double t2977;
  double t3002;
  double t3345;
  double t3372;
  double t3766;
  double t4141;
  double t4187;
  double t4356;
  double t4592;
  double t4755;
  double t4826;
  double t5008;
  t1960 = Cos(var1[6]);
  t2183 = Sin(var1[5]);
  t1818 = Cos(var1[5]);
  t2216 = Sin(var1[6]);
  t2397 = Cos(var1[4]);
  t2165 = t1818*t1960;
  t2355 = -1.*t2183*t2216;
  t2361 = 0. + t2165 + t2355;
  t337 = Sin(var1[4]);
  t768 = -1.*t337;
  t1451 = 0. + t768;
  t1472 = var2[3]*t1451;
  t1696 = 0. + var2[5] + var2[6] + t1472;
  t2379 = var2[4]*t2361;
  t2567 = t1960*t2183;
  t2603 = t1818*t2216;
  t2611 = 0. + t2567 + t2603;
  t2977 = t2397*t2611;
  t3002 = 0. + t2977;
  t3345 = var2[3]*t3002;
  t3372 = 0. + t2379 + t3345;
  t3766 = -1.*t1960*t2183;
  t4141 = -1.*t1818*t2216;
  t4187 = 0. + t3766 + t4141;
  t4356 = var2[4]*t4187;
  t4592 = t2397*t2361;
  t4755 = 0. + t4592;
  t4826 = var2[3]*t4755;
  t5008 = 0. + t4356 + t4826;
  p_output1[0]=0.00272*t1696 + 1.e-6*t3372 + 2.e-6*t5008;
  p_output1[1]=1.e-6*t1696 + 0.00559*t3372 + 3.e-6*t5008;
  p_output1[2]=2.e-6*t1696 + 3.e-6*t3372 + 0.00464*t5008;
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

#include "AMBody_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void AMBody_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
