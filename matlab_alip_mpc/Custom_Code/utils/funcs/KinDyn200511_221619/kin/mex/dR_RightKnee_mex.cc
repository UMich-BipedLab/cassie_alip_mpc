/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:07 GMT-04:00
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
  double t2126;
  double t2493;
  double t3289;
  double t3344;
  double t1315;
  double t3355;
  double t3842;
  double t3311;
  double t3653;
  double t3732;
  double t432;
  double t3886;
  double t3901;
  double t3902;
  double t3922;
  double t3953;
  double t3956;
  double t4001;
  double t4005;
  double t4033;
  double t52;
  double t4171;
  double t4154;
  double t4176;
  double t4185;
  double t4199;
  double t4200;
  double t4201;
  double t4078;
  double t4196;
  double t4237;
  double t4240;
  double t4261;
  double t4264;
  double t4285;
  double t4323;
  double t4327;
  double t4329;
  double t4338;
  double t4341;
  double t4354;
  double t4364;
  double t4365;
  double t4371;
  double t4396;
  double t4397;
  double t4403;
  double t4409;
  double t4465;
  double t4474;
  double t4482;
  double t4501;
  double t4505;
  double t4509;
  double t4512;
  double t4550;
  double t4556;
  double t4563;
  double t4575;
  double t4577;
  double t4584;
  double t4571;
  double t4585;
  double t4587;
  double t4591;
  double t4595;
  double t4601;
  double t4602;
  double t4603;
  double t4607;
  double t4653;
  double t4660;
  double t4661;
  double t4667;
  double t4668;
  double t4669;
  double t4671;
  double t4672;
  double t4673;
  double t4721;
  double t4739;
  double t4744;
  double t4746;
  double t4751;
  double t4759;
  double t4769;
  double t4771;
  double t4817;
  double t4818;
  double t4819;
  double t4835;
  double t4851;
  double t4853;
  double t4861;
  double t4880;
  double t4884;
  double t4927;
  double t4935;
  double t4941;
  double t4950;
  double t4533;
  double t4539;
  double t4541;
  double t5036;
  double t5039;
  double t5042;
  double t5056;
  double t5070;
  double t5074;
  double t5076;
  double t5102;
  double t5109;
  double t5114;
  double t5116;
  double t5123;
  double t5124;
  double t5150;
  double t5153;
  double t5156;
  double t5176;
  double t5179;
  double t5183;
  double t5159;
  double t5188;
  double t5192;
  double t5193;
  double t5195;
  double t5198;
  double t5206;
  double t5207;
  double t5208;
  double t5217;
  double t5218;
  double t5222;
  double t5232;
  double t5233;
  double t5241;
  double t5243;
  double t5273;
  double t5275;
  double t5281;
  double t5291;
  double t5292;
  double t5294;
  double t5295;
  double t5300;
  double t5302;
  double t3735;
  double t4044;
  double t4072;
  double t4108;
  double t4128;
  double t4132;
  double t4258;
  double t4288;
  double t4292;
  double t4300;
  double t4306;
  double t4308;
  double t4398;
  double t4415;
  double t4416;
  double t4420;
  double t4424;
  double t4432;
  double t4452;
  double t4490;
  double t4492;
  double t5405;
  double t4590;
  double t4615;
  double t4618;
  double t4627;
  double t4629;
  double t4630;
  double t4662;
  double t4681;
  double t4682;
  double t4686;
  double t4688;
  double t4698;
  double t4758;
  double t4773;
  double t4786;
  double t4796;
  double t4804;
  double t4805;
  double t4939;
  double t4953;
  double t4957;
  double t4978;
  double t4979;
  double t4986;
  double t4543;
  double t4544;
  double t5021;
  double t5044;
  double t5045;
  double t5083;
  double t5084;
  double t5085;
  double t5510;
  double t5557;
  double t5559;
  double t5562;
  double t5216;
  double t5223;
  double t5226;
  double t5255;
  double t5256;
  double t5259;
  double t5576;
  double t5284;
  double t5306;
  double t5314;
  double t5316;
  double t5317;
  double t5320;
  t2126 = Cos(var1[3]);
  t2493 = Cos(var1[4]);
  t3289 = Cos(var1[5]);
  t3344 = Sin(var1[13]);
  t1315 = Cos(var1[13]);
  t3355 = Sin(var1[5]);
  t3842 = Cos(var1[15]);
  t3311 = t1315*t2126*t2493*t3289;
  t3653 = -1.*t2126*t2493*t3344*t3355;
  t3732 = t3311 + t3653;
  t432 = Sin(var1[15]);
  t3886 = Cos(var1[14]);
  t3901 = Sin(var1[4]);
  t3902 = -1.*t3886*t2126*t3901;
  t3922 = Sin(var1[14]);
  t3953 = t2126*t2493*t3289*t3344;
  t3956 = t1315*t2126*t2493*t3355;
  t4001 = t3953 + t3956;
  t4005 = t3922*t4001;
  t4033 = t3902 + t4005;
  t52 = Sin(var1[16]);
  t4171 = Sin(var1[3]);
  t4154 = t2126*t3289*t3901;
  t4176 = t4171*t3355;
  t4185 = t4154 + t4176;
  t4199 = t3289*t4171;
  t4200 = -1.*t2126*t3901*t3355;
  t4201 = t4199 + t4200;
  t4078 = Cos(var1[16]);
  t4196 = -1.*t3344*t4185;
  t4237 = t1315*t4201;
  t4240 = t4196 + t4237;
  t4261 = t1315*t4185;
  t4264 = t3344*t4201;
  t4285 = t4261 + t4264;
  t4323 = -1.*t2126*t2493*t3922;
  t4327 = t3344*t4185;
  t4329 = -1.*t3289*t4171;
  t4338 = t2126*t3901*t3355;
  t4341 = t4329 + t4338;
  t4354 = t1315*t4341;
  t4364 = t4327 + t4354;
  t4365 = t3886*t4364;
  t4371 = t4323 + t4365;
  t4396 = -1.*t1315*t4341;
  t4397 = t4196 + t4396;
  t4403 = -1.*t3344*t4341;
  t4409 = t4261 + t4403;
  t4465 = t3886*t2126*t2493;
  t4474 = t3922*t4364;
  t4482 = t4465 + t4474;
  t4501 = t3842*t4409;
  t4505 = -1.*t432*t4482;
  t4509 = t4501 + t4505;
  t4512 = t52*t4509;
  t4550 = -1.*t3289*t4171*t3901;
  t4556 = t2126*t3355;
  t4563 = t4550 + t4556;
  t4575 = -1.*t2126*t3289;
  t4577 = -1.*t4171*t3901*t3355;
  t4584 = t4575 + t4577;
  t4571 = t1315*t4563;
  t4585 = -1.*t3344*t4584;
  t4587 = t4571 + t4585;
  t4591 = -1.*t3886*t2493*t4171;
  t4595 = t3344*t4563;
  t4601 = t1315*t4584;
  t4602 = t4595 + t4601;
  t4603 = t3922*t4602;
  t4607 = t4591 + t4603;
  t4653 = t1315*t2493*t3289*t4171;
  t4660 = -1.*t2493*t3344*t4171*t3355;
  t4661 = t4653 + t4660;
  t4667 = -1.*t3886*t4171*t3901;
  t4668 = t2493*t3289*t3344*t4171;
  t4669 = t1315*t2493*t4171*t3355;
  t4671 = t4668 + t4669;
  t4672 = t3922*t4671;
  t4673 = t4667 + t4672;
  t4721 = t3289*t4171*t3901;
  t4739 = -1.*t2126*t3355;
  t4744 = t4721 + t4739;
  t4746 = -1.*t3344*t4744;
  t4751 = t4746 + t4601;
  t4759 = t1315*t4744;
  t4769 = t3344*t4584;
  t4771 = t4759 + t4769;
  t4817 = -1.*t2493*t3922*t4171;
  t4818 = t3344*t4744;
  t4819 = t2126*t3289;
  t4835 = t4171*t3901*t3355;
  t4851 = t4819 + t4835;
  t4853 = t1315*t4851;
  t4861 = t4818 + t4853;
  t4880 = t3886*t4861;
  t4884 = t4817 + t4880;
  t4927 = -1.*t1315*t4851;
  t4935 = t4746 + t4927;
  t4941 = -1.*t3344*t4851;
  t4950 = t4759 + t4941;
  t4533 = t432*t4409;
  t4539 = t3842*t4482;
  t4541 = t4533 + t4539;
  t5036 = t3886*t2493*t4171;
  t5039 = t3922*t4861;
  t5042 = t5036 + t5039;
  t5056 = t3842*t4950;
  t5070 = -1.*t432*t5042;
  t5074 = t5056 + t5070;
  t5076 = t52*t5074;
  t5102 = t3922*t3901;
  t5109 = t2493*t3289*t3344;
  t5114 = t1315*t2493*t3355;
  t5116 = t5109 + t5114;
  t5123 = t3886*t5116;
  t5124 = t5102 + t5123;
  t5150 = -1.*t2493*t3289*t3344;
  t5153 = -1.*t1315*t2493*t3355;
  t5156 = t5150 + t5153;
  t5176 = t1315*t2493*t3289;
  t5179 = -1.*t2493*t3344*t3355;
  t5183 = t5176 + t5179;
  t5159 = t432*t5156;
  t5188 = t3842*t3922*t5183;
  t5192 = t5159 + t5188;
  t5193 = t52*t5192;
  t5195 = t3842*t5156;
  t5198 = -1.*t3922*t432*t5183;
  t5206 = t5195 + t5198;
  t5207 = -1.*t4078*t5206;
  t5208 = t5193 + t5207;
  t5217 = -1.*t3886*t3901;
  t5218 = t3922*t5116;
  t5222 = t5217 + t5218;
  t5232 = t3842*t5183;
  t5233 = -1.*t432*t5222;
  t5241 = t5232 + t5233;
  t5243 = t52*t5241;
  t5273 = -1.*t1315*t3289*t3901;
  t5275 = t3344*t3901*t3355;
  t5281 = t5273 + t5275;
  t5291 = -1.*t3886*t2493;
  t5292 = -1.*t3289*t3344*t3901;
  t5294 = -1.*t1315*t3901*t3355;
  t5295 = t5292 + t5294;
  t5300 = t3922*t5295;
  t5302 = t5291 + t5300;
  t3735 = t432*t3732;
  t4044 = t3842*t4033;
  t4072 = t3735 + t4044;
  t4108 = t3842*t3732;
  t4128 = -1.*t432*t4033;
  t4132 = t4108 + t4128;
  t4258 = t432*t4240;
  t4288 = t3842*t3922*t4285;
  t4292 = t4258 + t4288;
  t4300 = t3842*t4240;
  t4306 = -1.*t3922*t432*t4285;
  t4308 = t4300 + t4306;
  t4398 = t432*t4397;
  t4415 = t3842*t3922*t4409;
  t4416 = t4398 + t4415;
  t4420 = t3842*t4397;
  t4424 = -1.*t3922*t432*t4409;
  t4432 = t4420 + t4424;
  t4452 = -1.*t432*t4409;
  t4490 = -1.*t3842*t4482;
  t4492 = t4452 + t4490;
  t5405 = t4078*t4509;
  t4590 = t432*t4587;
  t4615 = t3842*t4607;
  t4618 = t4590 + t4615;
  t4627 = t3842*t4587;
  t4629 = -1.*t432*t4607;
  t4630 = t4627 + t4629;
  t4662 = t432*t4661;
  t4681 = t3842*t4673;
  t4682 = t4662 + t4681;
  t4686 = t3842*t4661;
  t4688 = -1.*t432*t4673;
  t4698 = t4686 + t4688;
  t4758 = t432*t4751;
  t4773 = t3842*t3922*t4771;
  t4786 = t4758 + t4773;
  t4796 = t3842*t4751;
  t4804 = -1.*t3922*t432*t4771;
  t4805 = t4796 + t4804;
  t4939 = t432*t4935;
  t4953 = t3842*t3922*t4950;
  t4957 = t4939 + t4953;
  t4978 = t3842*t4935;
  t4979 = -1.*t3922*t432*t4950;
  t4986 = t4978 + t4979;
  t4543 = t4078*t4541;
  t4544 = t4543 + t4512;
  t5021 = -1.*t432*t4950;
  t5044 = -1.*t3842*t5042;
  t5045 = t5021 + t5044;
  t5083 = t432*t4950;
  t5084 = t3842*t5042;
  t5085 = t5083 + t5084;
  t5510 = t4078*t5074;
  t5557 = t4078*t5192;
  t5559 = t52*t5206;
  t5562 = t5557 + t5559;
  t5216 = -1.*t432*t5183;
  t5223 = -1.*t3842*t5222;
  t5226 = t5216 + t5223;
  t5255 = t432*t5183;
  t5256 = t3842*t5222;
  t5259 = t5255 + t5256;
  t5576 = t4078*t5241;
  t5284 = t432*t5281;
  t5306 = t3842*t5302;
  t5314 = t5284 + t5306;
  t5316 = t3842*t5281;
  t5317 = -1.*t432*t5302;
  t5320 = t5316 + t5317;
  p_output1[0]=(-1.*t4078*t4630 + t4618*t52)*var2[3] + (-1.*t4078*t4132 + t4072*t52)*var2[4] + (-1.*t4078*t4308 + t4292*t52)*var2[5] + (-1.*t4078*t4432 + t4416*t52)*var2[13] + (t4078*t432*t4371 + t3842*t4371*t52)*var2[14] + (-1.*t4078*t4492 + t4512)*var2[15] + t4544*var2[16];
  p_output1[1]=(-1.*t4078*t4509 + t4541*t52)*var2[3] + (-1.*t4078*t4698 + t4682*t52)*var2[4] + (-1.*t4078*t4805 + t4786*t52)*var2[5] + (-1.*t4078*t4986 + t4957*t52)*var2[13] + (t4078*t432*t4884 + t3842*t4884*t52)*var2[14] + (-1.*t4078*t5045 + t5076)*var2[15] + (t5076 + t4078*t5085)*var2[16];
  p_output1[2]=(t52*t5314 - 1.*t4078*t5320)*var2[4] + t5208*var2[5] + t5208*var2[13] + (t4078*t432*t5124 + t3842*t5124*t52)*var2[14] + (-1.*t4078*t5226 + t5243)*var2[15] + (t5243 + t4078*t5259)*var2[16];
  p_output1[3]=(t4078*t4618 + t4630*t52)*var2[3] + (t4072*t4078 + t4132*t52)*var2[4] + (t4078*t4292 + t4308*t52)*var2[5] + (t4078*t4416 + t4432*t52)*var2[13] + (t3842*t4078*t4371 - 1.*t432*t4371*t52)*var2[14] + (t4492*t52 + t5405)*var2[15] + (-1.*t4541*t52 + t5405)*var2[16];
  p_output1[4]=t4544*var2[3] + (t4078*t4682 + t4698*t52)*var2[4] + (t4078*t4786 + t4805*t52)*var2[5] + (t4078*t4957 + t4986*t52)*var2[13] + (t3842*t4078*t4884 - 1.*t432*t4884*t52)*var2[14] + (t5045*t52 + t5510)*var2[15] + (-1.*t5085*t52 + t5510)*var2[16];
  p_output1[5]=(t4078*t5314 + t52*t5320)*var2[4] + t5562*var2[5] + t5562*var2[13] + (t3842*t4078*t5124 - 1.*t432*t5124*t52)*var2[14] + (t52*t5226 + t5576)*var2[15] + (-1.*t52*t5259 + t5576)*var2[16];
  p_output1[6]=(-1.*t3886*t4602 + t4817)*var2[3] + (-1.*t2126*t3901*t3922 - 1.*t3886*t4001)*var2[4] - 1.*t3886*t4285*var2[5] - 1.*t3886*t4409*var2[13] + t4482*var2[14];
  p_output1[7]=(t2126*t2493*t3922 - 1.*t3886*t4364)*var2[3] + (-1.*t3901*t3922*t4171 - 1.*t3886*t4671)*var2[4] - 1.*t3886*t4771*var2[5] - 1.*t3886*t4950*var2[13] + t5042*var2[14];
  p_output1[8]=(-1.*t2493*t3922 - 1.*t3886*t5295)*var2[4] - 1.*t3886*t5183*var2[5] - 1.*t3886*t5183*var2[13] + t5222*var2[14];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_RightKnee_mex.hh"

namespace SymExpression
{

void dR_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
