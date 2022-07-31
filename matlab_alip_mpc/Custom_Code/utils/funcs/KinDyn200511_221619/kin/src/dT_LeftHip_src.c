/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftHip_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t62;
  double t73;
  double t415;
  double t280;
  double t452;
  double t1095;
  double t961;
  double t509;
  double t1367;
  double t1715;
  double t1745;
  double t1755;
  double t2694;
  double t2724;
  double t2881;
  double t3150;
  double t3151;
  double t3157;
  double t3250;
  double t2158;
  double t2268;
  double t2282;
  double t3737;
  double t3764;
  double t3774;
  double t991;
  double t1160;
  double t1189;
  double t4028;
  double t4091;
  double t2375;
  double t2511;
  double t4144;
  double t2540;
  double t2546;
  double t2618;
  double t2900;
  double t4571;
  double t3506;
  double t3517;
  double t3519;
  double t3542;
  double t3589;
  double t5066;
  double t5091;
  double t5099;
  double t4060;
  double t4063;
  double t4101;
  double t4107;
  double t4397;
  double t4428;
  double t4448;
  double t4725;
  double t4278;
  double t4313;
  double t4323;
  double t5014;
  double t5015;
  double t5046;
  double t4604;
  double t4630;
  double t4648;
  double t4782;
  double t4842;
  double t4899;
  double t5168;
  double t5169;
  double t5176;
  double t5639;
  double t5669;
  double t5728;
  double t5797;
  double t5854;
  double t5856;
  double t5860;
  double t5889;
  double t5905;
  double t5677;
  double t5681;
  double t5701;
  double t5723;
  double t5731;
  double t4270;
  double t4366;
  double t4375;
  double t6221;
  double t6230;
  double t6232;
  double t4392;
  double t4455;
  double t4523;
  double t4145;
  double t4154;
  double t4155;
  double t5999;
  double t6015;
  double t6035;
  double t6049;
  double t6063;
  double t6695;
  double t4749;
  double t4900;
  double t4901;
  double t6569;
  double t6579;
  double t6581;
  double t6586;
  double t6589;
  double t4706;
  double t4726;
  double t7498;
  double t7505;
  double t7533;
  double t7551;
  double t7561;
  double t7584;
  double t7586;
  double t5135;
  double t5136;
  double t5142;
  double t5158;
  double t5177;
  double t5179;
  t62 = Cos(var1[3]);
  t73 = Cos(var1[4]);
  t415 = Cos(var1[6]);
  t280 = Cos(var1[5]);
  t452 = Sin(var1[5]);
  t1095 = Sin(var1[4]);
  t961 = Sin(var1[3]);
  t509 = Sin(var1[6]);
  t1367 = t62*t280*t1095;
  t1715 = t961*t452;
  t1745 = t1367 + t1715;
  t1755 = t1745*t509;
  t2694 = -1.*t62*t280;
  t2724 = -1.*t961*t1095*t452;
  t2881 = t2694 + t2724;
  t3150 = t280*t961*t1095;
  t3151 = -1.*t62*t452;
  t3157 = t3150 + t3151;
  t3250 = t3157*t509;
  t2158 = -1.*t280*t961;
  t2268 = t62*t1095*t452;
  t2282 = t2158 + t2268;
  t3737 = t73*t415*t452;
  t3764 = t73*t280*t509;
  t3774 = t3737 + t3764;
  t991 = t280*t961;
  t1160 = -1.*t62*t1095*t452;
  t1189 = t991 + t1160;
  t4028 = t415*t1745;
  t4091 = Sin(var1[7]);
  t2375 = t415*t2282;
  t2511 = t2375 + t1755;
  t4144 = Cos(var1[7]);
  t2540 = -1.*t280*t961*t1095;
  t2546 = t62*t452;
  t2618 = t2540 + t2546;
  t2900 = t2881*t509;
  t4571 = t415*t3157;
  t3506 = t62*t280;
  t3517 = t961*t1095*t452;
  t3519 = t3506 + t3517;
  t3542 = t415*t3519;
  t3589 = t3542 + t3250;
  t5066 = t73*t280*t415;
  t5091 = -1.*t73*t452*t509;
  t5099 = t5066 + t5091;
  t4060 = t1189*t509;
  t4063 = t4028 + t4060;
  t4101 = -1.*t2282*t509;
  t4107 = t4028 + t4101;
  t4397 = t415*t2881;
  t4428 = t2618*t509;
  t4448 = t4397 + t4428;
  t4725 = -1.*t73*t961*t4091;
  t4278 = t62*t73*t415*t452;
  t4313 = t62*t73*t280*t509;
  t4323 = t4278 + t4313;
  t5014 = t62*t73*t4144;
  t5015 = t2511*t4091;
  t5046 = t5014 + t5015;
  t4604 = t4571 + t2900;
  t4630 = -1.*t3519*t509;
  t4648 = t4571 + t4630;
  t4782 = t73*t415*t961*t452;
  t4842 = t73*t280*t961*t509;
  t4899 = t4782 + t4842;
  t5168 = -1.*t415*t1095*t452;
  t5169 = -1.*t280*t1095*t509;
  t5176 = t5168 + t5169;
  t5639 = -1.*t415;
  t5669 = 1. + t5639;
  t5728 = 0.07996*t509;
  t5797 = -1.*t1745*t509;
  t5854 = -1.*t4144;
  t5856 = 1. + t5854;
  t5860 = 0.135*t5856;
  t5889 = 0.08055*t4091;
  t5905 = 0. + t5860 + t5889;
  t5677 = 0.07996*t5669;
  t5681 = -0.135*t509;
  t5701 = 0. + t5677 + t5681;
  t5723 = 0.135*t5669;
  t5731 = 0. + t5723 + t5728;
  t4270 = -1.*t62*t4144*t1095;
  t4366 = t4323*t4091;
  t4375 = t4270 + t4366;
  t6221 = -0.08055*t5856;
  t6230 = 0.135*t4091;
  t6232 = 0. + t6221 + t6230;
  t4392 = -1.*t73*t4144*t961;
  t4455 = t4448*t4091;
  t4523 = t4392 + t4455;
  t4145 = t4144*t2511;
  t4154 = -1.*t62*t73*t4091;
  t4155 = t4145 + t4154;
  t5999 = -0.135*t415;
  t6015 = t5999 + t5728;
  t6035 = 0.07996*t415;
  t6049 = 0.135*t509;
  t6063 = t6035 + t6049;
  t6695 = -1.*t3157*t509;
  t4749 = -1.*t4144*t961*t1095;
  t4900 = t4899*t4091;
  t4901 = t4749 + t4900;
  t6569 = 0.135*t4144;
  t6579 = -0.08055*t4091;
  t6581 = t6569 + t6579;
  t6586 = 0.08055*t4144;
  t6589 = t6586 + t6230;
  t4706 = t4144*t3589;
  t4726 = t4706 + t4725;
  t7498 = -1.*t73*t415*t452;
  t7505 = -1.*t73*t280*t509;
  t7533 = t7498 + t7505;
  t7551 = 0.04566*t7533;
  t7561 = 0.135*t4144*t5099;
  t7584 = t5099*t5905;
  t7586 = -0.08055*t5099*t4091;
  t5135 = t4144*t3774;
  t5136 = t1095*t4091;
  t5142 = t5135 + t5136;
  t5158 = -1.*t73*t4144;
  t5177 = t5176*t4091;
  t5179 = t5158 + t5177;
  p_output1[0]=(t2900 - 1.*t2618*t415)*var2[3] + (-1.*t280*t415*t62*t73 + t452*t509*t62*t73)*var2[4] + (t1755 - 1.*t1189*t415)*var2[5] + t2511*var2[6];
  p_output1[1]=(-1.*t1745*t415 + t2282*t509)*var2[3] + (-1.*t280*t415*t73*t961 + t452*t509*t73*t961)*var2[4] + (t3250 - 1.*t2881*t415)*var2[5] + t3589*var2[6];
  p_output1[2]=(t1095*t280*t415 - 1.*t1095*t452*t509)*var2[4] + t3774*var2[5] + t3774*var2[6];
  p_output1[3]=0;
  p_output1[4]=t4523*var2[3] + t4375*var2[4] + t4063*t4091*var2[5] + t4091*t4107*var2[6] + t4155*var2[7];
  p_output1[5]=t5046*var2[3] + t4901*var2[4] + t4091*t4604*var2[5] + t4091*t4648*var2[6] + t4726*var2[7];
  p_output1[6]=t5179*var2[4] + t4091*t5099*var2[5] + t4091*t5099*var2[6] + t5142*var2[7];
  p_output1[7]=0;
  p_output1[8]=(-1.*t4144*t4448 + t4725)*var2[3] + (-1.*t4144*t4323 - 1.*t1095*t4091*t62)*var2[4] - 1.*t4063*t4144*var2[5] - 1.*t4107*t4144*var2[6] + t5046*var2[7];
  p_output1[9]=(-1.*t2511*t4144 + t4091*t62*t73)*var2[3] + (-1.*t4144*t4899 - 1.*t1095*t4091*t961)*var2[4] - 1.*t4144*t4604*var2[5] - 1.*t4144*t4648*var2[6] + (t3589*t4091 + t4144*t73*t961)*var2[7];
  p_output1[10]=(-1.*t4144*t5176 - 1.*t4091*t73)*var2[4] - 1.*t4144*t5099*var2[5] - 1.*t4144*t5099*var2[6] + (t3774*t4091 - 1.*t1095*t4144)*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t4523 + 0.04566*(t2618*t415 - 1.*t2881*t509) + t2618*t5701 + t2881*t5731 + t4448*t5905 - 1.*t6232*t73*t961 + 0.135*(t4144*t4448 + t4091*t73*t961))*var2[3] + (-0.08055*t4375 + t4323*t5905 + 0.135*(t4144*t4323 + t1095*t4091*t62) - 1.*t1095*t62*t6232 + t280*t5701*t62*t73 + t452*t5731*t62*t73 + 0.04566*(t280*t415*t62*t73 - 1.*t452*t509*t62*t73))*var2[4] + (-0.08055*t4063*t4091 + 0.135*t4063*t4144 + t1189*t5701 + t1745*t5731 + 0.04566*(t1189*t415 + t5797) + t4063*t5905)*var2[5] + (-0.08055*t4091*t4107 + 0.135*t4107*t4144 + 0.04566*(-1.*t2282*t415 + t5797) + t4107*t5905 + t1745*t6015 + t2282*t6063)*var2[6] + (-0.08055*t4155 + t2511*t6589 + t62*t6581*t73 + 0.135*(-1.*t2511*t4091 - 1.*t4144*t62*t73))*var2[7];
  p_output1[13]=var2[1] + (0.04566*t4107 + 0.135*t4155 - 0.08055*t5046 + t1745*t5701 + t2282*t5731 + t2511*t5905 + t62*t6232*t73)*var2[3] + (-0.08055*t4901 + t4899*t5905 - 1.*t1095*t6232*t961 + t280*t5701*t73*t961 + t452*t5731*t73*t961 + 0.135*(t4144*t4899 + t1095*t4091*t961) + 0.04566*(t280*t415*t73*t961 - 1.*t452*t509*t73*t961))*var2[4] + (-0.08055*t4091*t4604 + 0.135*t4144*t4604 + t2881*t5701 + t3157*t5731 + t4604*t5905 + 0.04566*(t4397 + t6695))*var2[5] + (-0.08055*t4091*t4648 + 0.135*t4144*t4648 + t4648*t5905 + t3157*t6015 + t3519*t6063 + 0.04566*(-1.*t3519*t415 + t6695))*var2[6] + (0.135*(-1.*t3589*t4091 + t4392) - 0.08055*t4726 + t3589*t6589 + t6581*t73*t961)*var2[7];
  p_output1[14]=var2[2] + (0.04566*(-1.*t1095*t280*t415 + t1095*t452*t509) - 0.08055*t5179 - 1.*t1095*t280*t5701 - 1.*t1095*t452*t5731 + t5176*t5905 - 1.*t6232*t73 + 0.135*(t4144*t5176 + t4091*t73))*var2[4] + (-1.*t452*t5701*t73 + t280*t5731*t73 + t7551 + t7561 + t7584 + t7586)*var2[5] + (t280*t6015*t73 + t452*t6063*t73 + t7551 + t7561 + t7584 + t7586)*var2[6] + (0.135*(-1.*t3774*t4091 + t1095*t4144) - 0.08055*t5142 - 1.*t1095*t6581 + t3774*t6589)*var2[7];
  p_output1[15]=0;
}



void dT_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
