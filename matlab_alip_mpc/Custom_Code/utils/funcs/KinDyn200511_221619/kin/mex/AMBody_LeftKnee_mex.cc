/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:20 GMT-04:00
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
  double t275;
  double t301;
  double t381;
  double t1555;
  double t1583;
  double t57;
  double t430;
  double t610;
  double t760;
  double t50;
  double t843;
  double t846;
  double t872;
  double t2328;
  double t2421;
  double t2285;
  double t2522;
  double t2707;
  double t2795;
  double t2838;
  double t2856;
  double t2887;
  double t2353;
  double t2524;
  double t2526;
  double t3181;
  double t3284;
  double t1972;
  double t1836;
  double t3122;
  double t3299;
  double t3359;
  double t3511;
  double t3512;
  double t3583;
  double t5542;
  double t5585;
  double t5701;
  double t5731;
  double t5753;
  double t6092;
  double t6177;
  double t6026;
  double t6218;
  double t6221;
  double t6482;
  double t6526;
  double t6595;
  double t704;
  double t925;
  double t1110;
  double t1213;
  double t1776;
  double t1811;
  double t1873;
  double t1897;
  double t1915;
  double t1943;
  double t1978;
  double t2011;
  double t2174;
  double t2203;
  double t2660;
  double t3023;
  double t3067;
  double t3492;
  double t3636;
  double t4168;
  double t4269;
  double t4272;
  double t4385;
  double t4480;
  double t4863;
  double t4888;
  double t4998;
  double t5010;
  double t5130;
  double t5205;
  double t6020;
  double t6025;
  double t6228;
  double t6629;
  double t6659;
  double t6679;
  double t6693;
  double t6705;
  double t6724;
  double t6751;
  double t6774;
  double t6822;
  double t6823;
  double t6848;
  t275 = Cos(var1[7]);
  t301 = -1.*t275;
  t381 = 0. + t301;
  t1555 = Sin(var1[7]);
  t1583 = 0. + t1555;
  t57 = Cos(var1[6]);
  t430 = t57*t381;
  t610 = 0. + t430;
  t760 = Sin(var1[5]);
  t50 = Cos(var1[5]);
  t843 = Sin(var1[6]);
  t846 = t381*t843;
  t872 = 0. + t846;
  t2328 = Cos(var1[8]);
  t2421 = Sin(var1[9]);
  t2285 = Cos(var1[9]);
  t2522 = Sin(var1[8]);
  t2707 = t2328*t2421;
  t2795 = t2285*t2522;
  t2838 = 0. + t2707 + t2795;
  t2856 = t275*t2838;
  t2887 = 0. + t2856;
  t2353 = -1.*t2285*t2328;
  t2524 = t2421*t2522;
  t2526 = 0. + t2353 + t2524;
  t3181 = t1555*t2838;
  t3284 = 0. + t3181;
  t1972 = Sin(var1[4]);
  t1836 = Cos(var1[4]);
  t3122 = -1.*t843*t2526;
  t3299 = t57*t3284;
  t3359 = 0. + t3122 + t3299;
  t3511 = t57*t2526;
  t3512 = t843*t3284;
  t3583 = 0. + t3511 + t3512;
  t5542 = t2285*t2328;
  t5585 = -1.*t2421*t2522;
  t5701 = 0. + t5542 + t5585;
  t5731 = t275*t5701;
  t5753 = 0. + t5731;
  t6092 = t1555*t5701;
  t6177 = 0. + t6092;
  t6026 = -1.*t843*t2838;
  t6218 = t57*t6177;
  t6221 = 0. + t6026 + t6218;
  t6482 = t57*t2838;
  t6526 = t843*t6177;
  t6595 = 0. + t6482 + t6526;
  t704 = t50*t610;
  t925 = -1.*t760*t872;
  t1110 = 0. + t704 + t925;
  t1213 = var2[4]*t1110;
  t1776 = var2[5]*t1583;
  t1811 = var2[6]*t1583;
  t1873 = t610*t760;
  t1897 = t50*t872;
  t1915 = 0. + t1873 + t1897;
  t1943 = t1836*t1915;
  t1978 = -1.*t1972*t1583;
  t2011 = 0. + t1943 + t1978;
  t2174 = var2[3]*t2011;
  t2203 = 0. + var2[9] + var2[8] + t1213 + t1776 + t1811 + t2174;
  t2660 = var2[7]*t2526;
  t3023 = var2[5]*t2887;
  t3067 = var2[6]*t2887;
  t3492 = t50*t3359;
  t3636 = -1.*t760*t3583;
  t4168 = 0. + t3492 + t3636;
  t4269 = var2[4]*t4168;
  t4272 = -1.*t1972*t2887;
  t4385 = t760*t3359;
  t4480 = t50*t3583;
  t4863 = 0. + t4385 + t4480;
  t4888 = t1836*t4863;
  t4998 = 0. + t4272 + t4888;
  t5010 = var2[3]*t4998;
  t5130 = 0. + t2660 + t3023 + t3067 + t4269 + t5010;
  t5205 = var2[7]*t2838;
  t6020 = var2[5]*t5753;
  t6025 = var2[6]*t5753;
  t6228 = t50*t6221;
  t6629 = -1.*t760*t6595;
  t6659 = 0. + t6228 + t6629;
  t6679 = var2[4]*t6659;
  t6693 = -1.*t1972*t5753;
  t6705 = t760*t6221;
  t6724 = t50*t6595;
  t6751 = 0. + t6705 + t6724;
  t6774 = t1836*t6751;
  t6822 = 0. + t6693 + t6774;
  t6823 = var2[3]*t6822;
  t6848 = 0. + t5205 + t6020 + t6025 + t6679 + t6823;
  p_output1[0]=3.e-6*t2203 + 0.00216*t5130 + 0.000956*t6848;
  p_output1[1]=1.e-6*t2203 + 0.000956*t5130 + 0.00144*t6848;
  p_output1[2]=0.00334*t2203 + 3.e-6*t5130 + 1.e-6*t6848;
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

#include "AMBody_LeftKnee_mex.hh"

namespace SymExpression
{

void AMBody_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
