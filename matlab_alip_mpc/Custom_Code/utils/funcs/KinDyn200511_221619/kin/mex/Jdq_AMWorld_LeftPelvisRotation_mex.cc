/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:59 GMT-04:00
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
  double t501;
  double t1250;
  double t733;
  double t742;
  double t1985;
  double t489;
  double t506;
  double t3037;
  double t556;
  double t572;
  double t965;
  double t1986;
  double t2024;
  double t2154;
  double t2243;
  double t2621;
  double t2622;
  double t2639;
  double t2666;
  double t2703;
  double t3222;
  double t3315;
  double t3400;
  double t3062;
  double t3084;
  double t3093;
  double t730;
  double t2613;
  double t2841;
  double t2984;
  double t3630;
  double t3649;
  double t3698;
  double t3729;
  double t5120;
  double t5122;
  double t5170;
  double t4996;
  double t5005;
  double t5092;
  double t4003;
  double t4058;
  double t4172;
  double t4206;
  double t3787;
  double t3872;
  double t3993;
  double t6741;
  double t6747;
  double t6750;
  double t3220;
  double t3449;
  double t3610;
  double t6909;
  double t7110;
  double t7491;
  double t5420;
  double t5431;
  double t5671;
  double t7652;
  double t7810;
  double t7825;
  double t5095;
  double t5389;
  double t5414;
  double t8674;
  double t8723;
  double t8805;
  double t5902;
  double t5925;
  double t6521;
  double t5784;
  double t5793;
  double t5819;
  double t9432;
  double t9434;
  double t9443;
  double t9446;
  double t9448;
  double t9453;
  double t9456;
  double t9457;
  double t9479;
  double t9480;
  double t9485;
  double t9486;
  t501 = Cos(var1[4]);
  t1250 = Cos(var1[5]);
  t733 = Cos(var1[6]);
  t742 = Sin(var1[5]);
  t1985 = Sin(var1[6]);
  t489 = Cos(var1[3]);
  t506 = Sin(var1[4]);
  t3037 = Sin(var1[3]);
  t556 = -1.*t506;
  t572 = 0. + t556;
  t965 = t733*t742;
  t1986 = t1250*t1985;
  t2024 = 0. + t965 + t1986;
  t2154 = t501*t2024;
  t2243 = 0. + t2154;
  t2621 = t1250*t733;
  t2622 = -1.*t742*t1985;
  t2639 = 0. + t2621 + t2622;
  t2666 = t501*t2639;
  t2703 = 0. + t2666;
  t3222 = t489*t1250*t506;
  t3315 = t3037*t742;
  t3400 = t3222 + t3315;
  t3062 = -1.*t1250*t3037;
  t3084 = t489*t506*t742;
  t3093 = t3062 + t3084;
  t730 = 0.00272*t572;
  t2613 = 1.e-6*t2243;
  t2841 = 2.e-6*t2703;
  t2984 = t730 + t2613 + t2841;
  t3630 = 1.e-6*t572;
  t3649 = 0.00559*t2243;
  t3698 = 3.e-6*t2703;
  t3729 = t3630 + t3649 + t3698;
  t5120 = t1250*t3037*t506;
  t5122 = -1.*t489*t742;
  t5170 = t5120 + t5122;
  t4996 = t489*t1250;
  t5005 = t3037*t506*t742;
  t5092 = t4996 + t5005;
  t4003 = 2.e-6*t572;
  t4058 = 3.e-6*t2243;
  t4172 = 0.00464*t2703;
  t4206 = t4003 + t4058 + t4172;
  t3787 = t733*t3400;
  t3872 = -1.*t3093*t1985;
  t3993 = t3787 + t3872;
  t6741 = -1.*t733*t742;
  t6747 = -1.*t1250*t1985;
  t6750 = 0. + t6741 + t6747;
  t3220 = t733*t3093;
  t3449 = t3400*t1985;
  t3610 = t3220 + t3449;
  t6909 = 2.e-6*t6750;
  t7110 = 1.e-6*t2639;
  t7491 = t6909 + t7110;
  t5420 = t733*t5170;
  t5431 = -1.*t5092*t1985;
  t5671 = t5420 + t5431;
  t7652 = 0.00464*t6750;
  t7810 = 3.e-6*t2639;
  t7825 = t7652 + t7810;
  t5095 = t733*t5092;
  t5389 = t5170*t1985;
  t5414 = t5095 + t5389;
  t8674 = 3.e-6*t6750;
  t8723 = 0.00559*t2639;
  t8805 = t8674 + t8723;
  t5902 = t501*t1250*t733;
  t5925 = -1.*t501*t742*t1985;
  t6521 = t5902 + t5925;
  t5784 = t501*t733*t742;
  t5793 = t501*t1250*t1985;
  t5819 = t5784 + t5793;
  t9432 = 0.00272*t489*t501;
  t9434 = 1.e-6*t3610;
  t9443 = 2.e-6*t3993;
  t9446 = t9432 + t9434 + t9443;
  t9448 = 0.00272*t501*t3037;
  t9453 = 1.e-6*t5414;
  t9456 = 2.e-6*t5671;
  t9457 = t9448 + t9453 + t9456;
  t9479 = -0.00272*t506;
  t9480 = 1.e-6*t5819;
  t9485 = 2.e-6*t6521;
  t9486 = t9479 + t9480 + t9485;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3610*t3729 + t3993*t4206 + t2984*t489*t501;
  p_output1[10]=t2984*t3037*t501 + t3729*t5414 + t4206*t5671;
  p_output1[11]=-1.*t2984*t506 + t3729*t5819 + t4206*t6521;
  p_output1[12]=t489*t501*t7491 + t3993*t7825 + t3610*t8805;
  p_output1[13]=t3037*t501*t7491 + t5671*t7825 + t5414*t8805;
  p_output1[14]=-1.*t506*t7491 + t6521*t7825 + t5819*t8805;
  p_output1[15]=t9446;
  p_output1[16]=t9457;
  p_output1[17]=t9486;
  p_output1[18]=t9446;
  p_output1[19]=t9457;
  p_output1[20]=t9486;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMWorld_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
