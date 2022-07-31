/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:22 GMT-04:00
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
  double t2264;
  double t272;
  double t1239;
  double t1405;
  double t1467;
  double t1652;
  double t455;
  double t2735;
  double t1580;
  double t1900;
  double t2253;
  double t3214;
  double t2297;
  double t2614;
  double t2652;
  double t2690;
  double t3327;
  double t3396;
  double t3421;
  double t3453;
  double t3499;
  double t3519;
  double t3811;
  double t3840;
  double t3843;
  double t3991;
  double t3999;
  double t4055;
  double t4068;
  double t4130;
  double t4142;
  double t4164;
  double t4093;
  double t4942;
  double t4981;
  double t5103;
  double t3535;
  double t3763;
  double t3787;
  double t3875;
  double t3974;
  double t3981;
  double t5188;
  double t5395;
  double t5409;
  double t5419;
  double t5342;
  double t4102;
  double t4112;
  double t4582;
  double t4594;
  double t4637;
  double t5666;
  double t5676;
  double t5694;
  double t5696;
  double t5697;
  double t2265;
  double t2434;
  double t2812;
  double t2840;
  double t2881;
  double t2925;
  double t2931;
  double t2993;
  double t3021;
  double t3089;
  double t3155;
  double t3158;
  double t3232;
  double t4412;
  double t4413;
  double t4439;
  double t4474;
  double t4476;
  double t4487;
  double t4501;
  double t4725;
  double t4779;
  double t5862;
  double t5866;
  double t5867;
  double t5878;
  double t5891;
  double t5523;
  double t6283;
  double t6293;
  double t6297;
  double t6298;
  double t6300;
  double t6309;
  double t6316;
  double t6328;
  double t5721;
  double t5723;
  double t5724;
  double t3446;
  double t3525;
  double t3533;
  double t3540;
  double t3542;
  double t3554;
  double t3570;
  double t3587;
  double t3615;
  double t5296;
  double t4128;
  double t4170;
  double t4182;
  double t4231;
  double t4284;
  double t4312;
  double t4351;
  double t4354;
  double t4389;
  double t5926;
  double t5937;
  double t5983;
  double t5110;
  double t5170;
  double t5325;
  double t5343;
  double t5345;
  double t5350;
  double t5372;
  double t6485;
  double t6491;
  double t6496;
  double t5584;
  double t5546;
  double t5556;
  double t5570;
  double t5590;
  double t5611;
  double t5614;
  double t6173;
  double t6178;
  double t6183;
  double t6185;
  double t6186;
  double t6193;
  double t6196;
  double t6200;
  double t6204;
  double t6210;
  double t6347;
  double t6361;
  double t6367;
  double t5643;
  double t5664;
  double t5716;
  double t6403;
  double t6404;
  double t6407;
  double t6408;
  double t6437;
  double t6441;
  double t6454;
  double t5443;
  double t5446;
  double t3850;
  double t4060;
  double t4069;
  double t4086;
  double t4090;
  double t4120;
  double t4121;
  double t5856;
  double t5861;
  double t5920;
  double t5388;
  double t5425;
  double t5448;
  double t5479;
  double t5502;
  double t5506;
  double t5514;
  double t6497;
  double t6505;
  double t6511;
  double t6523;
  double t6529;
  double t6540;
  double t6541;
  double t6558;
  double t6559;
  double t6809;
  double t6817;
  double t6837;
  double t6707;
  double t6785;
  double t6789;
  double t6222;
  double t6260;
  double t6331;
  t2264 = Sin(var1[3]);
  t272 = Cos(var1[4]);
  t1239 = Cos(var1[13]);
  t1405 = -1.*t1239;
  t1467 = 1. + t1405;
  t1652 = Sin(var1[13]);
  t455 = Cos(var1[5]);
  t2735 = Sin(var1[5]);
  t1580 = 0.07996*t1467;
  t1900 = 0.135*t1652;
  t2253 = 0. + t1580 + t1900;
  t3214 = Cos(var1[3]);
  t2297 = Sin(var1[4]);
  t2614 = -0.135*t1467;
  t2652 = 0.07996*t1652;
  t2690 = 0. + t2614 + t2652;
  t3327 = -1.*t3214*t455*t2297;
  t3396 = -1.*t2264*t2735;
  t3421 = t3327 + t3396;
  t3453 = t455*t2264;
  t3499 = -1.*t3214*t2297*t2735;
  t3519 = t3453 + t3499;
  t3811 = -1.*t455*t2264*t2297;
  t3840 = t3214*t2735;
  t3843 = t3811 + t3840;
  t3991 = -1.*t3214*t455;
  t3999 = -1.*t2264*t2297*t2735;
  t4055 = t3991 + t3999;
  t4068 = -1.*t1652*t3843;
  t4130 = t3214*t455;
  t4142 = t2264*t2297*t2735;
  t4164 = t4130 + t4142;
  t4093 = t1239*t3843;
  t4942 = t3214*t455*t2297;
  t4981 = t2264*t2735;
  t5103 = t4942 + t4981;
  t3535 = t1239*t3519;
  t3763 = 0.135*t1239;
  t3787 = t3763 + t2652;
  t3875 = 0.07996*t1239;
  t3974 = -0.135*t1652;
  t3981 = t3875 + t3974;
  t5188 = -1.*t1652*t5103;
  t5395 = -1.*t455*t2264;
  t5409 = t3214*t2297*t2735;
  t5419 = t5395 + t5409;
  t5342 = t1239*t5103;
  t4102 = -1.*t1652*t4055;
  t4112 = t4093 + t4102;
  t4582 = t1239*t3214*t272*t455;
  t4594 = -1.*t3214*t272*t1652*t2735;
  t4637 = t4582 + t4594;
  t5666 = -1.*t3214*t272*t455*t1652;
  t5676 = -1.*t1239*t3214*t272*t2735;
  t5694 = t5666 + t5676;
  t5696 = 0.09786*t5694;
  t5697 = -0.1351*t4637;
  t2265 = -1.*t272*t455*t2253*t2264;
  t2434 = -0.05485*t2264*t2297;
  t2812 = -1.*t272*t2690*t2264*t2735;
  t2840 = -1.*t272*t455*t1652*t2264;
  t2881 = -1.*t1239*t272*t2264*t2735;
  t2925 = t2840 + t2881;
  t2931 = -0.1351*t2925;
  t2993 = -1.*t1239*t272*t455*t2264;
  t3021 = t272*t1652*t2264*t2735;
  t3089 = t2993 + t3021;
  t3155 = 0.09786*t3089;
  t3158 = t2265 + t2434 + t2812 + t2931 + t3155;
  t3232 = 0.05485*t3214*t272;
  t4412 = t3214*t272*t455*t2253;
  t4413 = 0.05485*t3214*t2297;
  t4439 = t3214*t272*t2690*t2735;
  t4474 = t3214*t272*t455*t1652;
  t4476 = t1239*t3214*t272*t2735;
  t4487 = t4474 + t4476;
  t4501 = -0.1351*t4487;
  t4725 = 0.09786*t4637;
  t4779 = t4412 + t4413 + t4439 + t4501 + t4725;
  t5862 = 0.09786*t2925;
  t5866 = t1239*t272*t455*t2264;
  t5867 = -1.*t272*t1652*t2264*t2735;
  t5878 = t5866 + t5867;
  t5891 = -0.1351*t5878;
  t5523 = 0.05485*t272*t2264;
  t6283 = t455*t1652*t2297;
  t6293 = t1239*t2297*t2735;
  t6297 = t6283 + t6293;
  t6298 = 0.09786*t6297;
  t6300 = -1.*t1239*t455*t2297;
  t6309 = t1652*t2297*t2735;
  t6316 = t6300 + t6309;
  t6328 = -0.1351*t6316;
  t5721 = t3214*t272*t455*t2690;
  t5723 = -1.*t3214*t272*t2253*t2735;
  t5724 = t5721 + t5723 + t5696 + t5697;
  t3446 = t2253*t3421;
  t3525 = t2690*t3519;
  t3533 = t1652*t3421;
  t3540 = t3533 + t3535;
  t3542 = -0.1351*t3540;
  t3554 = t1239*t3421;
  t3570 = -1.*t1652*t3519;
  t3587 = t3554 + t3570;
  t3615 = 0.09786*t3587;
  t5296 = t5188 + t3535;
  t4128 = t2690*t3843;
  t4170 = t2253*t4164;
  t4182 = t1239*t4164;
  t4231 = t4068 + t4182;
  t4284 = 0.09786*t4231;
  t4312 = t1652*t4164;
  t4351 = t4093 + t4312;
  t4354 = -0.1351*t4351;
  t4389 = t4128 + t4170 + t4284 + t4354;
  t5926 = t272*t455*t2690*t2264;
  t5937 = -1.*t272*t2253*t2264*t2735;
  t5983 = t5926 + t5937 + t5862 + t5891;
  t5110 = t2690*t5103;
  t5170 = t2253*t3519;
  t5325 = 0.09786*t5296;
  t5343 = t1652*t3519;
  t5345 = t5342 + t5343;
  t5350 = -0.1351*t5345;
  t5372 = t5110 + t5170 + t5325 + t5350;
  t6485 = t455*t2264*t2297;
  t6491 = -1.*t3214*t2735;
  t6496 = t6485 + t6491;
  t5584 = t1239*t4055;
  t5546 = t2253*t3843;
  t5556 = t2690*t4055;
  t5570 = t1652*t3843;
  t5590 = t5570 + t5584;
  t5611 = -0.1351*t5590;
  t5614 = 0.09786*t4112;
  t6173 = -1.*t272*t455*t2253;
  t6178 = -1.*t272*t2690*t2735;
  t6183 = -1.*t272*t455*t1652;
  t6185 = -1.*t1239*t272*t2735;
  t6186 = t6183 + t6185;
  t6193 = -0.1351*t6186;
  t6196 = -1.*t1239*t272*t455;
  t6200 = t272*t1652*t2735;
  t6204 = t6196 + t6200;
  t6210 = 0.09786*t6204;
  t6347 = -1.*t455*t2690*t2297;
  t6361 = t2253*t2297*t2735;
  t6367 = t6347 + t6361 + t6298 + t6328;
  t5643 = t3214*t272*t455*t3787;
  t5664 = t3214*t272*t3981*t2735;
  t5716 = t5643 + t5664 + t5696 + t5697;
  t6403 = t3981*t5103;
  t6404 = t3787*t3519;
  t6407 = -0.1351*t5296;
  t6408 = -1.*t1239*t5103;
  t6437 = t6408 + t3570;
  t6441 = 0.09786*t6437;
  t6454 = t6403 + t6404 + t6407 + t6441;
  t5443 = -1.*t1239*t5419;
  t5446 = t5188 + t5443;
  t3850 = t3787*t3843;
  t4060 = t3981*t4055;
  t4069 = -1.*t1239*t4055;
  t4086 = t4068 + t4069;
  t4090 = 0.09786*t4086;
  t4120 = -0.1351*t4112;
  t4121 = t3850 + t4060 + t4090 + t4120;
  t5856 = t272*t455*t3787*t2264;
  t5861 = t272*t3981*t2264*t2735;
  t5920 = t5856 + t5861 + t5862 + t5891;
  t5388 = t3787*t5103;
  t5425 = t3981*t5419;
  t5448 = 0.09786*t5446;
  t5479 = -1.*t1652*t5419;
  t5502 = t5342 + t5479;
  t5506 = -0.1351*t5502;
  t5514 = t5388 + t5425 + t5448 + t5506;
  t6497 = t3981*t6496;
  t6505 = t3787*t4055;
  t6511 = -1.*t1652*t6496;
  t6523 = t6511 + t5584;
  t6529 = -0.1351*t6523;
  t6540 = -1.*t1239*t6496;
  t6541 = t6540 + t4102;
  t6558 = 0.09786*t6541;
  t6559 = t6497 + t6505 + t6529 + t6558;
  t6809 = -0.135*t1239;
  t6817 = -0.07996*t1652;
  t6837 = t6809 + t6817;
  t6707 = t272*t455*t3981;
  t6785 = -1.*t272*t3787*t2735;
  t6789 = t6707 + t6785 + t6193 + t6210;
  t6222 = -1.*t455*t3787*t2297;
  t6260 = -1.*t3981*t2297*t2735;
  t6331 = t6222 + t6260 + t6298 + t6328;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t3232 + t3446 + t3525 + t3542 + t3615)*var2[3] + t3158*var2[4] + t4389*var2[5] + t4121*var2[13];
  p_output1[10]=(t5523 + t5546 + t5556 + t5611 + t5614)*var2[3] + t4779*var2[4] + t5372*var2[5] + t5514*var2[13];
  p_output1[11]=0;
  p_output1[12]=t3158*var2[3] + (-1.*t2297*t2690*t2735*t3214 + t3232 - 1.*t2253*t2297*t3214*t455 + 0.09786*(t1652*t2297*t2735*t3214 - 1.*t1239*t2297*t3214*t455) - 0.1351*(-1.*t1239*t2297*t2735*t3214 - 1.*t1652*t2297*t3214*t455))*var2[4] + t5724*var2[5] + t5716*var2[13];
  p_output1[13]=t4779*var2[3] + (-1.*t2264*t2297*t2690*t2735 - 1.*t2253*t2264*t2297*t455 + 0.09786*(t1652*t2264*t2297*t2735 - 1.*t1239*t2264*t2297*t455) - 0.1351*(-1.*t1239*t2264*t2297*t2735 - 1.*t1652*t2264*t2297*t455) + t5523)*var2[4] + t5983*var2[5] + t5920*var2[13];
  p_output1[14]=(-0.05485*t2297 + t6173 + t6178 + t6193 + t6210)*var2[4] + t6367*var2[5] + t6331*var2[13];
  p_output1[15]=t4389*var2[3] + t5724*var2[4] + (t3446 + t3525 + t3542 + t3615)*var2[5] + t6454*var2[13];
  p_output1[16]=t5372*var2[3] + t5983*var2[4] + (t5546 + t5556 + t5611 + t5614)*var2[5] + t6559*var2[13];
  p_output1[17]=t6367*var2[4] + (t6173 + t6178 + t6193 + t6210)*var2[5] + t6789*var2[13];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=t4121*var2[3] + t5716*var2[4] + t6454*var2[5] + (-0.1351*t5446 + t6403 + 0.09786*(t1652*t5419 + t6408) + t5419*t6837)*var2[13];
  p_output1[40]=t5514*var2[3] + t5920*var2[4] + t6559*var2[5] + (t6497 - 0.1351*(-1.*t1239*t4164 + t6511) + 0.09786*(t4312 + t6540) + t4164*t6837)*var2[13];
  p_output1[41]=t6331*var2[4] + t6789*var2[5] + (t6193 + t6210 + t6707 + t272*t2735*t6837)*var2[13];
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

#include "dJp_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void dJp_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
