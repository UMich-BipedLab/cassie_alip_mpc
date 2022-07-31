/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:18 GMT-04:00
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
  double t703;
  double t1713;
  double t1718;
  double t1749;
  double t1881;
  double t2225;
  double t2334;
  double t2254;
  double t2343;
  double t991;
  double t1023;
  double t1265;
  double t1282;
  double t2315;
  double t2346;
  double t2457;
  double t2605;
  double t2610;
  double t2616;
  double t951;
  double t2907;
  double t2990;
  double t3078;
  double t3325;
  double t3338;
  double t3346;
  double t3376;
  double t3476;
  double t3575;
  double t3661;
  double t3934;
  double t3991;
  double t4065;
  double t1271;
  double t1365;
  double t1367;
  double t1769;
  double t2125;
  double t2203;
  double t2548;
  double t2590;
  double t2596;
  double t2714;
  double t2787;
  double t2850;
  double t4375;
  double t4557;
  double t4561;
  double t4593;
  double t4598;
  double t4670;
  double t3374;
  double t3413;
  double t3467;
  double t4717;
  double t4738;
  double t4741;
  double t3893;
  double t3894;
  double t3932;
  double t4753;
  double t4759;
  double t4765;
  double t4857;
  double t4863;
  double t4872;
  double t5002;
  double t5018;
  double t5020;
  double t5032;
  double t5033;
  double t5046;
  double t5149;
  double t5159;
  double t5167;
  t703 = Cos(var1[3]);
  t1713 = Cos(var1[13]);
  t1718 = -1.*t1713;
  t1749 = 1. + t1718;
  t1881 = Sin(var1[13]);
  t2225 = Cos(var1[5]);
  t2334 = Sin(var1[3]);
  t2254 = Sin(var1[4]);
  t2343 = Sin(var1[5]);
  t991 = Cos(var1[14]);
  t1023 = -1.*t991;
  t1265 = 1. + t1023;
  t1282 = Sin(var1[14]);
  t2315 = t703*t2225*t2254;
  t2346 = t2334*t2343;
  t2457 = t2315 + t2346;
  t2605 = -1.*t2225*t2334;
  t2610 = t703*t2254*t2343;
  t2616 = t2605 + t2610;
  t951 = Cos(var1[4]);
  t2907 = t1881*t2457;
  t2990 = t1713*t2616;
  t3078 = t2907 + t2990;
  t3325 = Cos(var1[15]);
  t3338 = -1.*t3325;
  t3346 = 1. + t3338;
  t3376 = Sin(var1[15]);
  t3476 = t1713*t2457;
  t3575 = -1.*t1881*t2616;
  t3661 = t3476 + t3575;
  t3934 = t991*t703*t951;
  t3991 = t1282*t3078;
  t4065 = t3934 + t3991;
  t1271 = -0.08055*t1265;
  t1365 = -0.135*t1282;
  t1367 = 0. + t1271 + t1365;
  t1769 = 0.07996*t1749;
  t2125 = 0.135*t1881;
  t2203 = 0. + t1769 + t2125;
  t2548 = -0.135*t1749;
  t2590 = 0.07996*t1881;
  t2596 = 0. + t2548 + t2590;
  t2714 = -0.135*t1265;
  t2787 = 0.08055*t1282;
  t2850 = 0. + t2714 + t2787;
  t4375 = t2225*t2334*t2254;
  t4557 = -1.*t703*t2343;
  t4561 = t4375 + t4557;
  t4593 = t703*t2225;
  t4598 = t2334*t2254*t2343;
  t4670 = t4593 + t4598;
  t3374 = -0.01004*t3346;
  t3413 = 0.08055*t3376;
  t3467 = 0. + t3374 + t3413;
  t4717 = t1881*t4561;
  t4738 = t1713*t4670;
  t4741 = t4717 + t4738;
  t3893 = -0.08055*t3346;
  t3894 = -0.01004*t3376;
  t3932 = 0. + t3893 + t3894;
  t4753 = t1713*t4561;
  t4759 = -1.*t1881*t4670;
  t4765 = t4753 + t4759;
  t4857 = t991*t951*t2334;
  t4863 = t1282*t4741;
  t4872 = t4857 + t4863;
  t5002 = t951*t2225*t1881;
  t5018 = t1713*t951*t2343;
  t5020 = t5002 + t5018;
  t5032 = t1713*t951*t2225;
  t5033 = -1.*t951*t1881*t2343;
  t5046 = t5032 + t5033;
  t5149 = -1.*t991*t2254;
  t5159 = t1282*t5020;
  t5167 = t5149 + t5159;
  p_output1[0]=0. + t2203*t2457 + t2596*t2616 + t2850*t3078 + t3467*t3661 + t3932*t4065 - 0.08045*(t3376*t3661 + t3325*t4065) - 0.06984*(t3325*t3661 - 1.*t3376*t4065) + t1367*t703*t951 - 0.1708*(-1.*t1282*t703*t951 + t3078*t991) + var1[0];
  p_output1[1]=0. + t2203*t4561 + t2596*t4670 + t2850*t4741 + t3467*t4765 + t3932*t4872 - 0.08045*(t3376*t4765 + t3325*t4872) - 0.06984*(t3325*t4765 - 1.*t3376*t4872) + t1367*t2334*t951 - 0.1708*(-1.*t1282*t2334*t951 + t4741*t991) + var1[1];
  p_output1[2]=0. - 1.*t1367*t2254 + t2850*t5020 + t3467*t5046 + t3932*t5167 - 0.08045*(t3376*t5046 + t3325*t5167) - 0.06984*(t3325*t5046 - 1.*t3376*t5167) + t2203*t2225*t951 + t2343*t2596*t951 - 0.1708*(t1282*t2254 + t5020*t991) + var1[2];
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

#include "p_RightThigh_mex.hh"

namespace SymExpression
{

void p_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
