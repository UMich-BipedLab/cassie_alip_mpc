/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:21 GMT-04:00
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
  double t307;
  double t77;
  double t214;
  double t360;
  double t1726;
  double t2306;
  double t2327;
  double t894;
  double t1750;
  double t1765;
  double t1830;
  double t1870;
  double t4132;
  double t3656;
  double t4312;
  double t4376;
  double t4500;
  double t4502;
  double t46;
  double t283;
  double t391;
  double t465;
  double t755;
  double t975;
  double t1125;
  double t1267;
  double t1373;
  double t1408;
  double t1521;
  double t1536;
  double t1826;
  double t2004;
  double t2090;
  double t2288;
  double t2472;
  double t2509;
  double t2682;
  double t3135;
  double t3441;
  double t3637;
  double t3756;
  double t3957;
  double t3964;
  double t3996;
  t307 = Cos(var1[5]);
  t77 = Cos(var1[6]);
  t214 = Sin(var1[5]);
  t360 = Sin(var1[6]);
  t1726 = Cos(var1[7]);
  t2306 = Sin(var1[7]);
  t2327 = 0. + t2306;
  t894 = Cos(var1[4]);
  t1750 = -1.*t77*t1726;
  t1765 = 0. + t1750;
  t1830 = -1.*t1726*t360;
  t1870 = 0. + t1830;
  t4132 = 0. + t1726;
  t3656 = Sin(var1[4]);
  t4312 = t77*t2306;
  t4376 = 0. + t4312;
  t4500 = t360*t2306;
  t4502 = 0. + t4500;
  t46 = -1.*var2[7];
  t283 = t77*t214;
  t391 = t307*t360;
  t465 = 0. + t283 + t391;
  t755 = var2[4]*t465;
  t975 = -1.*t307*t77;
  t1125 = t214*t360;
  t1267 = 0. + t975 + t1125;
  t1373 = t894*t1267;
  t1408 = 0. + t1373;
  t1521 = var2[3]*t1408;
  t1536 = 0. + t46 + t755 + t1521;
  t1826 = t307*t1765;
  t2004 = -1.*t214*t1870;
  t2090 = 0. + t1826 + t2004;
  t2288 = var2[4]*t2090;
  t2472 = var2[5]*t2327;
  t2509 = var2[6]*t2327;
  t2682 = t1765*t214;
  t3135 = t307*t1870;
  t3441 = 0. + t2682 + t3135;
  t3637 = t894*t3441;
  t3756 = -1.*t3656*t2327;
  t3957 = 0. + t3637 + t3756;
  t3964 = var2[3]*t3957;
  t3996 = 0. + t2288 + t2472 + t2509 + t3964;
  p_output1[0]=0. + 0.000842*t1536 - 1.e-6*t3996;
  p_output1[1]=0. + 0.00608*(0. + (0. - 1.*t3656*t4132 + (0. + t214*t4376 + t307*t4502)*t894)*var2[3] + (0. + t307*t4376 - 1.*t214*t4502)*var2[4] + t4132*var2[5] + t4132*var2[6]);
  p_output1[2]=0. - 1.e-6*t1536 + 0.00644*t3996;
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

#include "AMBody_LeftHip_mex.hh"

namespace SymExpression
{

void AMBody_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
