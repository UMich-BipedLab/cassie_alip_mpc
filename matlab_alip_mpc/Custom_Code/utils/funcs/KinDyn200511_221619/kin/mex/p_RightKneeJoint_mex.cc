/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:36 GMT-04:00
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
  double t4;
  double t1077;
  double t1251;
  double t1428;
  double t1750;
  double t1984;
  double t2053;
  double t2014;
  double t2456;
  double t465;
  double t469;
  double t586;
  double t795;
  double t2028;
  double t2622;
  double t2646;
  double t2770;
  double t2791;
  double t2804;
  double t318;
  double t3058;
  double t3185;
  double t3249;
  double t3324;
  double t3444;
  double t3483;
  double t3548;
  double t3730;
  double t3797;
  double t3841;
  double t4782;
  double t4800;
  double t4824;
  double t4875;
  double t5030;
  double t5121;
  double t5135;
  double t5229;
  double t5291;
  double t5316;
  double t5387;
  double t5544;
  double t5551;
  double t627;
  double t824;
  double t945;
  double t1457;
  double t1754;
  double t1949;
  double t2725;
  double t2733;
  double t2768;
  double t2884;
  double t2953;
  double t2992;
  double t5594;
  double t5636;
  double t5678;
  double t5717;
  double t5747;
  double t5750;
  double t3489;
  double t3627;
  double t3688;
  double t5776;
  double t5808;
  double t5809;
  double t4160;
  double t4204;
  double t4746;
  double t5130;
  double t5172;
  double t5174;
  double t5822;
  double t5824;
  double t5827;
  double t5846;
  double t5850;
  double t5862;
  double t5359;
  double t5383;
  double t5386;
  double t5871;
  double t5872;
  double t5874;
  double t5886;
  double t5888;
  double t5891;
  double t5955;
  double t5965;
  double t5966;
  double t5972;
  double t5975;
  double t5978;
  double t6023;
  double t6024;
  double t6039;
  double t6052;
  double t6054;
  double t6055;
  double t6062;
  double t6064;
  double t6065;
  t4 = Cos(var1[3]);
  t1077 = Cos(var1[13]);
  t1251 = -1.*t1077;
  t1428 = 1. + t1251;
  t1750 = Sin(var1[13]);
  t1984 = Cos(var1[5]);
  t2053 = Sin(var1[3]);
  t2014 = Sin(var1[4]);
  t2456 = Sin(var1[5]);
  t465 = Cos(var1[14]);
  t469 = -1.*t465;
  t586 = 1. + t469;
  t795 = Sin(var1[14]);
  t2028 = t4*t1984*t2014;
  t2622 = t2053*t2456;
  t2646 = t2028 + t2622;
  t2770 = -1.*t1984*t2053;
  t2791 = t4*t2014*t2456;
  t2804 = t2770 + t2791;
  t318 = Cos(var1[4]);
  t3058 = t1750*t2646;
  t3185 = t1077*t2804;
  t3249 = t3058 + t3185;
  t3324 = Cos(var1[15]);
  t3444 = -1.*t3324;
  t3483 = 1. + t3444;
  t3548 = Sin(var1[15]);
  t3730 = t1077*t2646;
  t3797 = -1.*t1750*t2804;
  t3841 = t3730 + t3797;
  t4782 = t465*t4*t318;
  t4800 = t795*t3249;
  t4824 = t4782 + t4800;
  t4875 = Cos(var1[16]);
  t5030 = -1.*t4875;
  t5121 = 1. + t5030;
  t5135 = Sin(var1[16]);
  t5229 = t3548*t3841;
  t5291 = t3324*t4824;
  t5316 = t5229 + t5291;
  t5387 = t3324*t3841;
  t5544 = -1.*t3548*t4824;
  t5551 = t5387 + t5544;
  t627 = -0.08055*t586;
  t824 = -0.135*t795;
  t945 = 0. + t627 + t824;
  t1457 = 0.07996*t1428;
  t1754 = 0.135*t1750;
  t1949 = 0. + t1457 + t1754;
  t2725 = -0.135*t1428;
  t2733 = 0.07996*t1750;
  t2768 = 0. + t2725 + t2733;
  t2884 = -0.135*t586;
  t2953 = 0.08055*t795;
  t2992 = 0. + t2884 + t2953;
  t5594 = t1984*t2053*t2014;
  t5636 = -1.*t4*t2456;
  t5678 = t5594 + t5636;
  t5717 = t4*t1984;
  t5747 = t2053*t2014*t2456;
  t5750 = t5717 + t5747;
  t3489 = -0.01004*t3483;
  t3627 = 0.08055*t3548;
  t3688 = 0. + t3489 + t3627;
  t5776 = t1750*t5678;
  t5808 = t1077*t5750;
  t5809 = t5776 + t5808;
  t4160 = -0.08055*t3483;
  t4204 = -0.01004*t3548;
  t4746 = 0. + t4160 + t4204;
  t5130 = -0.08055*t5121;
  t5172 = -0.13004*t5135;
  t5174 = 0. + t5130 + t5172;
  t5822 = t1077*t5678;
  t5824 = -1.*t1750*t5750;
  t5827 = t5822 + t5824;
  t5846 = t465*t318*t2053;
  t5850 = t795*t5809;
  t5862 = t5846 + t5850;
  t5359 = -0.13004*t5121;
  t5383 = 0.08055*t5135;
  t5386 = 0. + t5359 + t5383;
  t5871 = t3548*t5827;
  t5872 = t3324*t5862;
  t5874 = t5871 + t5872;
  t5886 = t3324*t5827;
  t5888 = -1.*t3548*t5862;
  t5891 = t5886 + t5888;
  t5955 = t318*t1984*t1750;
  t5965 = t1077*t318*t2456;
  t5966 = t5955 + t5965;
  t5972 = t1077*t318*t1984;
  t5975 = -1.*t318*t1750*t2456;
  t5978 = t5972 + t5975;
  t6023 = -1.*t465*t2014;
  t6024 = t795*t5966;
  t6039 = t6023 + t6024;
  t6052 = t3548*t5978;
  t6054 = t3324*t6039;
  t6055 = t6052 + t6054;
  t6062 = t3324*t5978;
  t6064 = -1.*t3548*t6039;
  t6065 = t6062 + t6064;
  p_output1[0]=0. + t1949*t2646 + t2768*t2804 + t2992*t3249 + t3688*t3841 + t4746*t4824 + t5174*t5316 + t5386*t5551 - 0.13004*(-1.*t5135*t5316 + t4875*t5551) - 0.08055*(t4875*t5316 + t5135*t5551) - 0.1305*(t3249*t465 - 1.*t318*t4*t795) + t318*t4*t945 + var1[0];
  p_output1[1]=0. + t1949*t5678 + t2768*t5750 + t2992*t5809 + t3688*t5827 + t4746*t5862 + t5174*t5874 + t5386*t5891 - 0.13004*(-1.*t5135*t5874 + t4875*t5891) - 0.08055*(t4875*t5874 + t5135*t5891) - 0.1305*(t465*t5809 - 1.*t2053*t318*t795) + t2053*t318*t945 + var1[1];
  p_output1[2]=0. + t1949*t1984*t318 + t2456*t2768*t318 + t2992*t5966 + t3688*t5978 + t4746*t6039 + t5174*t6055 + t5386*t6065 - 0.13004*(-1.*t5135*t6055 + t4875*t6065) - 0.08055*(t4875*t6055 + t5135*t6065) - 0.1305*(t465*t5966 + t2014*t795) - 1.*t2014*t945 + var1[2];
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

#include "p_RightKneeJoint_mex.hh"

namespace SymExpression
{

void p_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
