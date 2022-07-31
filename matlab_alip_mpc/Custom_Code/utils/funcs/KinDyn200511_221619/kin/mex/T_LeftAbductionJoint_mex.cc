/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:31 GMT-04:00
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
  double t2270;
  double t2430;
  double t130;
  double t2516;
  double t2574;
  double t2592;
  double t2570;
  double t2696;
  double t2636;
  double t2647;
  double t2658;
  double t2579;
  double t2605;
  double t2627;
  double t2996;
  double t2998;
  double t3006;
  double t2923;
  double t2949;
  double t2982;
  double t3143;
  double t3144;
  double t2628;
  double t2835;
  double t2920;
  double t3085;
  double t3089;
  double t3090;
  double t3145;
  double t3149;
  double t3150;
  double t3158;
  double t3159;
  double t3166;
  double t2985;
  double t3010;
  double t3013;
  double t3094;
  double t3095;
  double t3099;
  double t3029;
  double t3050;
  double t3082;
  double t3129;
  double t3131;
  double t3134;
  t2270 = Cos(var1[4]);
  t2430 = Sin(var1[3]);
  t130 = Cos(var1[3]);
  t2516 = Sin(var1[4]);
  t2574 = Cos(var1[5]);
  t2592 = Sin(var1[5]);
  t2570 = Cos(var1[6]);
  t2696 = Sin(var1[6]);
  t2636 = t130*t2574*t2516;
  t2647 = t2430*t2592;
  t2658 = t2636 + t2647;
  t2579 = -1.*t2574*t2430;
  t2605 = t130*t2516*t2592;
  t2627 = t2579 + t2605;
  t2996 = t2574*t2430*t2516;
  t2998 = -1.*t130*t2592;
  t3006 = t2996 + t2998;
  t2923 = t130*t2574;
  t2949 = t2430*t2516*t2592;
  t2982 = t2923 + t2949;
  t3143 = -1.*t2570;
  t3144 = 1. + t3143;
  t2628 = t2570*t2627;
  t2835 = t2658*t2696;
  t2920 = t2628 + t2835;
  t3085 = t2570*t2658;
  t3089 = -1.*t2627*t2696;
  t3090 = t3085 + t3089;
  t3145 = 0.07996*t3144;
  t3149 = -0.135*t2696;
  t3150 = 0. + t3145 + t3149;
  t3158 = 0.135*t3144;
  t3159 = 0.07996*t2696;
  t3166 = 0. + t3158 + t3159;
  t2985 = t2570*t2982;
  t3010 = t3006*t2696;
  t3013 = t2985 + t3010;
  t3094 = t2570*t3006;
  t3095 = -1.*t2982*t2696;
  t3099 = t3094 + t3095;
  t3029 = t2270*t2570*t2592;
  t3050 = t2270*t2574*t2696;
  t3082 = t3029 + t3050;
  t3129 = t2270*t2574*t2570;
  t3131 = -1.*t2270*t2592*t2696;
  t3134 = t3129 + t3131;
  p_output1[0]=t130*t2270;
  p_output1[1]=t2270*t2430;
  p_output1[2]=-1.*t2516;
  p_output1[3]=0.;
  p_output1[4]=t2920;
  p_output1[5]=t3013;
  p_output1[6]=t3082;
  p_output1[7]=0.;
  p_output1[8]=t3090;
  p_output1[9]=t3099;
  p_output1[10]=t3134;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t130*t2270 + 0.135*t2920 + 0.07996*t3090 + t2658*t3150 + t2627*t3166 + var1[0];
  p_output1[13]=0. - 0.08055*t2270*t2430 + 0.135*t3013 + 0.07996*t3099 + t3006*t3150 + t2982*t3166 + var1[1];
  p_output1[14]=0. + 0.08055*t2516 + 0.135*t3082 + 0.07996*t3134 + t2270*t2574*t3150 + t2270*t2592*t3166 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void T_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
