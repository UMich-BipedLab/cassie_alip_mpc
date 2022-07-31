/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:13 GMT-04:00
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
  double t634;
  double t766;
  double t1190;
  double t846;
  double t1205;
  double t30;
  double t1735;
  double t1709;
  double t1720;
  double t1765;
  double t1801;
  double t1816;
  double t2155;
  double t2159;
  double t2278;
  double t2522;
  double t2540;
  double t2544;
  double t3024;
  double t3067;
  double t3076;
  double t3095;
  double t3284;
  double t3304;
  double t3317;
  double t3520;
  double t1894;
  double t1912;
  double t1962;
  double t3675;
  double t3500;
  double t2284;
  double t2304;
  double t2399;
  double t2403;
  double t2454;
  double t2610;
  double t4196;
  double t3175;
  double t3190;
  double t3227;
  double t3233;
  double t3235;
  double t4518;
  double t4531;
  double t4539;
  double t3535;
  double t3543;
  double t3616;
  double t3678;
  double t3684;
  double t3700;
  double t3734;
  double t4339;
  double t4436;
  double t4448;
  double t4468;
  double t3847;
  double t3888;
  double t3894;
  double t4045;
  double t4053;
  double t4061;
  double t4216;
  double t4296;
  double t4301;
  double t4667;
  double t4671;
  double t4710;
  double t5300;
  double t5315;
  double t5379;
  double t5384;
  double t3511;
  double t3621;
  double t3668;
  double t5405;
  double t5417;
  double t5419;
  double t5339;
  double t5354;
  double t5363;
  double t5439;
  double t5454;
  double t5456;
  double t5637;
  double t5402;
  double t3753;
  double t3755;
  double t3789;
  double t5385;
  double t5403;
  double t3823;
  double t3899;
  double t3910;
  double t3999;
  double t4080;
  double t4147;
  double t5759;
  double t5761;
  double t5772;
  double t5799;
  double t5800;
  double t6479;
  double t5883;
  double t5884;
  double t5903;
  double t5918;
  double t5919;
  double t4472;
  double t4482;
  double t7209;
  double t7243;
  double t7246;
  double t7258;
  double t7272;
  double t7286;
  double t7402;
  double t4544;
  double t4594;
  double t4610;
  double t4652;
  double t4714;
  double t4730;
  t634 = Cos(var1[3]);
  t766 = Cos(var1[4]);
  t1190 = Sin(var1[13]);
  t846 = Cos(var1[5]);
  t1205 = Sin(var1[5]);
  t30 = Cos(var1[13]);
  t1735 = Sin(var1[3]);
  t1709 = Sin(var1[4]);
  t1720 = t634*t846*t1709;
  t1765 = t1735*t1205;
  t1801 = t1720 + t1765;
  t1816 = t1190*t1801;
  t2155 = -1.*t846*t1735;
  t2159 = t634*t1709*t1205;
  t2278 = t2155 + t2159;
  t2522 = -1.*t634*t846;
  t2540 = -1.*t1735*t1709*t1205;
  t2544 = t2522 + t2540;
  t3024 = t846*t1735*t1709;
  t3067 = -1.*t634*t1205;
  t3076 = t3024 + t3067;
  t3095 = t1190*t3076;
  t3284 = t766*t846*t1190;
  t3304 = t30*t766*t1205;
  t3317 = t3284 + t3304;
  t3520 = Sin(var1[14]);
  t1894 = t846*t1735;
  t1912 = -1.*t634*t1709*t1205;
  t1962 = t1894 + t1912;
  t3675 = t30*t1801;
  t3500 = Cos(var1[14]);
  t2284 = t30*t2278;
  t2304 = t1816 + t2284;
  t2399 = -1.*t846*t1735*t1709;
  t2403 = t634*t1205;
  t2454 = t2399 + t2403;
  t2610 = t1190*t2544;
  t4196 = t30*t3076;
  t3175 = t634*t846;
  t3190 = t1735*t1709*t1205;
  t3227 = t3175 + t3190;
  t3233 = t30*t3227;
  t3235 = t3095 + t3233;
  t4518 = t30*t766*t846;
  t4531 = -1.*t766*t1190*t1205;
  t4539 = t4518 + t4531;
  t3535 = t634*t766*t846*t1190;
  t3543 = t30*t634*t766*t1205;
  t3616 = t3535 + t3543;
  t3678 = t1190*t1962;
  t3684 = t3675 + t3678;
  t3700 = -1.*t1190*t2278;
  t3734 = t3675 + t3700;
  t4339 = t3500*t634*t766;
  t4436 = t3520*t2304;
  t4448 = t4339 + t4436;
  t4468 = -1.*t766*t3520*t1735;
  t3847 = t1190*t2454;
  t3888 = t30*t2544;
  t3894 = t3847 + t3888;
  t4045 = t766*t846*t1190*t1735;
  t4053 = t30*t766*t1735*t1205;
  t4061 = t4045 + t4053;
  t4216 = t4196 + t2610;
  t4296 = -1.*t1190*t3227;
  t4301 = t4196 + t4296;
  t4667 = -1.*t846*t1190*t1709;
  t4671 = -1.*t30*t1709*t1205;
  t4710 = t4667 + t4671;
  t5300 = -1.*t30;
  t5315 = 1. + t5300;
  t5379 = -1.*t3500;
  t5384 = 1. + t5379;
  t3511 = -1.*t3500*t634*t1709;
  t3621 = t3520*t3616;
  t3668 = t3511 + t3621;
  t5405 = -0.135*t5315;
  t5417 = 0.07996*t1190;
  t5419 = 0. + t5405 + t5417;
  t5339 = 0.07996*t5315;
  t5354 = 0.135*t1190;
  t5363 = 0. + t5339 + t5354;
  t5439 = -0.135*t5384;
  t5454 = 0.08055*t3520;
  t5456 = 0. + t5439 + t5454;
  t5637 = -1.*t1190*t1801;
  t5402 = -0.135*t3520;
  t3753 = -1.*t634*t766*t3520;
  t3755 = t3500*t2304;
  t3789 = t3753 + t3755;
  t5385 = -0.08055*t5384;
  t5403 = 0. + t5385 + t5402;
  t3823 = -1.*t3500*t766*t1735;
  t3899 = t3520*t3894;
  t3910 = t3823 + t3899;
  t3999 = -1.*t3500*t1735*t1709;
  t4080 = t3520*t4061;
  t4147 = t3999 + t4080;
  t5759 = 0.135*t30;
  t5761 = t5759 + t5417;
  t5772 = 0.07996*t30;
  t5799 = -0.135*t1190;
  t5800 = t5772 + t5799;
  t6479 = -1.*t1190*t3076;
  t5883 = -0.135*t3500;
  t5884 = -0.08055*t3520;
  t5903 = t5883 + t5884;
  t5918 = 0.08055*t3500;
  t5919 = t5918 + t5402;
  t4472 = t3500*t3235;
  t4482 = t4468 + t4472;
  t7209 = -1.*t766*t846*t1190;
  t7243 = -1.*t30*t766*t1205;
  t7246 = t7209 + t7243;
  t7258 = -0.01004*t7246;
  t7272 = -0.135*t3500*t4539;
  t7286 = t5456*t4539;
  t7402 = -0.08055*t3520*t4539;
  t4544 = t3520*t1709;
  t4594 = t3500*t3317;
  t4610 = t4544 + t4594;
  t4652 = -1.*t3500*t766;
  t4714 = t3520*t4710;
  t4730 = t4652 + t4714;
  p_output1[0]=(t2610 - 1.*t2454*t30)*var2[3] + (t1190*t1205*t634*t766 - 1.*t30*t634*t766*t846)*var2[4] + (t1816 - 1.*t1962*t30)*var2[5] + t2304*var2[13];
  p_output1[1]=(t1190*t2278 - 1.*t1801*t30)*var2[3] + (t1190*t1205*t1735*t766 - 1.*t1735*t30*t766*t846)*var2[4] + (-1.*t2544*t30 + t3095)*var2[5] + t3235*var2[13];
  p_output1[2]=(-1.*t1190*t1205*t1709 + t1709*t30*t846)*var2[4] + t3317*var2[5] + t3317*var2[13];
  p_output1[3]=0;
  p_output1[4]=t3910*var2[3] + t3668*var2[4] + t3520*t3684*var2[5] + t3520*t3734*var2[13] + t3789*var2[14];
  p_output1[5]=t4448*var2[3] + t4147*var2[4] + t3520*t4216*var2[5] + t3520*t4301*var2[13] + t4482*var2[14];
  p_output1[6]=t4730*var2[4] + t3520*t4539*var2[5] + t3520*t4539*var2[13] + t4610*var2[14];
  p_output1[7]=0;
  p_output1[8]=(-1.*t3500*t3894 + t4468)*var2[3] + (-1.*t3500*t3616 - 1.*t1709*t3520*t634)*var2[4] - 1.*t3500*t3684*var2[5] - 1.*t3500*t3734*var2[13] + t4448*var2[14];
  p_output1[9]=(-1.*t2304*t3500 + t3520*t634*t766)*var2[3] + (-1.*t1709*t1735*t3520 - 1.*t3500*t4061)*var2[4] - 1.*t3500*t4216*var2[5] - 1.*t3500*t4301*var2[13] + (t3235*t3520 + t1735*t3500*t766)*var2[14];
  p_output1[10]=(-1.*t3500*t4710 - 1.*t3520*t766)*var2[4] - 1.*t3500*t4539*var2[5] - 1.*t3500*t4539*var2[13] + (-1.*t1709*t3500 + t3317*t3520)*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.01004*(-1.*t1190*t2544 + t2454*t30) - 0.08055*t3910 + t2454*t5363 + t2544*t5419 + t3894*t5456 - 1.*t1735*t5403*t766 - 0.135*(t3500*t3894 + t1735*t3520*t766))*var2[3] + (-0.08055*t3668 + t3616*t5456 - 1.*t1709*t5403*t634 - 0.135*(t3500*t3616 + t1709*t3520*t634) + t1205*t5419*t634*t766 + t5363*t634*t766*t846 - 0.01004*(-1.*t1190*t1205*t634*t766 + t30*t634*t766*t846))*var2[4] + (-0.135*t3500*t3684 - 0.08055*t3520*t3684 + t1962*t5363 + t1801*t5419 + t3684*t5456 - 0.01004*(t1962*t30 + t5637))*var2[5] + (-0.135*t3500*t3734 - 0.08055*t3520*t3734 + t3734*t5456 - 0.01004*(-1.*t2278*t30 + t5637) + t1801*t5761 + t2278*t5800)*var2[13] + (-0.08055*t3789 + t2304*t5919 + t5903*t634*t766 - 0.135*(-1.*t2304*t3520 - 1.*t3500*t634*t766))*var2[14];
  p_output1[13]=var2[1] + (-0.01004*t3734 - 0.135*t3789 - 0.08055*t4448 + t1801*t5363 + t2278*t5419 + t2304*t5456 + t5403*t634*t766)*var2[3] + (-0.135*(t1709*t1735*t3520 + t3500*t4061) - 0.08055*t4147 - 1.*t1709*t1735*t5403 + t4061*t5456 + t1205*t1735*t5419*t766 + t1735*t5363*t766*t846 - 0.01004*(-1.*t1190*t1205*t1735*t766 + t1735*t30*t766*t846))*var2[4] + (-0.135*t3500*t4216 - 0.08055*t3520*t4216 + t2544*t5363 + t3076*t5419 + t4216*t5456 - 0.01004*(t3888 + t6479))*var2[5] + (-0.135*t3500*t4301 - 0.08055*t3520*t4301 + t4301*t5456 + t3076*t5761 + t3227*t5800 - 0.01004*(-1.*t30*t3227 + t6479))*var2[13] + (-0.135*(-1.*t3235*t3520 + t3823) - 0.08055*t4482 + t3235*t5919 + t1735*t5903*t766)*var2[14];
  p_output1[14]=var2[2] + (-0.08055*t4730 - 1.*t1205*t1709*t5419 + t4710*t5456 - 1.*t5403*t766 - 0.135*(t3500*t4710 + t3520*t766) - 1.*t1709*t5363*t846 - 0.01004*(t1190*t1205*t1709 - 1.*t1709*t30*t846))*var2[4] + (t7258 + t7272 + t7286 + t7402 - 1.*t1205*t5363*t766 + t5419*t766*t846)*var2[5] + (t7258 + t7272 + t7286 + t7402 + t1205*t5800*t766 + t5761*t766*t846)*var2[13] + (-0.135*(t1709*t3500 - 1.*t3317*t3520) - 0.08055*t4610 - 1.*t1709*t5903 + t3317*t5919)*var2[14];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightRotationJoint_mex.hh"

namespace SymExpression
{

void dT_RightRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
