/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftKnee_src.h"

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
  double t1014;
  double t368;
  double t1387;
  double t586;
  double t1424;
  double t289;
  double t8;
  double t3059;
  double t3097;
  double t2277;
  double t2923;
  double t3142;
  double t2790;
  double t3103;
  double t3108;
  double t3111;
  double t3112;
  double t3236;
  double t3249;
  double t3224;
  double t3258;
  double t3302;
  double t3309;
  double t3314;
  double t3349;
  double t3357;
  double t3239;
  double t3266;
  double t3279;
  double t3403;
  double t3409;
  double t3390;
  double t3426;
  double t3429;
  double t3443;
  double t3484;
  double t3545;
  double t3738;
  double t3776;
  double t3818;
  double t3828;
  double t3830;
  double t3858;
  double t3861;
  double t3857;
  double t3867;
  double t3888;
  double t3890;
  double t3895;
  double t3913;
  double t934;
  double t1477;
  double t1537;
  double t1581;
  double t1862;
  double t2124;
  double t2250;
  double t2452;
  double t2612;
  double t4326;
  double t4331;
  double t4335;
  double t4306;
  double t4315;
  double t4320;
  double t3110;
  double t3114;
  double t3118;
  double t3124;
  double t3144;
  double t3169;
  double t3170;
  double t3179;
  double t3183;
  double t3192;
  double t3193;
  double t3197;
  double t3199;
  double t3208;
  double t3287;
  double t3365;
  double t3388;
  double t3434;
  double t3573;
  double t3595;
  double t3598;
  double t3610;
  double t3640;
  double t3681;
  double t3685;
  double t3701;
  double t3705;
  double t3725;
  double t3727;
  double t3733;
  double t3831;
  double t3836;
  double t3889;
  double t3931;
  double t3971;
  double t3993;
  double t3999;
  double t4056;
  double t4059;
  double t4079;
  double t4085;
  double t4087;
  double t4209;
  double t4233;
  double t4325;
  double t4407;
  double t4410;
  double t4494;
  double t4505;
  double t4537;
  double t3223;
  double t3729;
  double t4245;
  double t4301;
  double t4707;
  double t4712;
  double t4730;
  double t4745;
  double t4767;
  double t4768;
  double t4772;
  double t4777;
  double t4798;
  double t5491;
  double t5686;
  double t5731;
  double t5111;
  double t5117;
  double t5119;
  double t4559;
  double t4590;
  double t4602;
  double t4610;
  double t5373;
  double t6101;
  double t6122;
  double t6170;
  double t6215;
  double t6253;
  double t4645;
  double t4653;
  double t4676;
  double t4677;
  double t6767;
  double t6769;
  double t6874;
  double t7362;
  double t7363;
  double t7365;
  double t7260;
  double t7309;
  double t7310;
  double t7321;
  double t7402;
  double t7437;
  double t7536;
  double t7537;
  double t7541;
  t1014 = Cos(var1[3]);
  t368 = Cos(var1[5]);
  t1387 = Sin(var1[4]);
  t586 = Sin(var1[3]);
  t1424 = Sin(var1[5]);
  t289 = Cos(var1[6]);
  t8 = Cos(var1[7]);
  t3059 = -1.*t8;
  t3097 = 0. + t3059;
  t2277 = Sin(var1[6]);
  t2923 = Sin(var1[7]);
  t3142 = 0. + t2923;
  t2790 = Cos(var1[4]);
  t3103 = t289*t3097;
  t3108 = 0. + t3103;
  t3111 = t3097*t2277;
  t3112 = 0. + t3111;
  t3236 = Cos(var1[8]);
  t3249 = Sin(var1[9]);
  t3224 = Cos(var1[9]);
  t3258 = Sin(var1[8]);
  t3302 = t3236*t3249;
  t3309 = t3224*t3258;
  t3314 = 0. + t3302 + t3309;
  t3349 = t8*t3314;
  t3357 = 0. + t3349;
  t3239 = -1.*t3224*t3236;
  t3266 = t3249*t3258;
  t3279 = 0. + t3239 + t3266;
  t3403 = t2923*t3314;
  t3409 = 0. + t3403;
  t3390 = -1.*t2277*t3279;
  t3426 = t289*t3409;
  t3429 = 0. + t3390 + t3426;
  t3443 = t289*t3279;
  t3484 = t2277*t3409;
  t3545 = 0. + t3443 + t3484;
  t3738 = t3224*t3236;
  t3776 = -1.*t3249*t3258;
  t3818 = 0. + t3738 + t3776;
  t3828 = t8*t3818;
  t3830 = 0. + t3828;
  t3858 = t2923*t3818;
  t3861 = 0. + t3858;
  t3857 = -1.*t2277*t3314;
  t3867 = t289*t3861;
  t3888 = 0. + t3857 + t3867;
  t3890 = t289*t3314;
  t3895 = t2277*t3861;
  t3913 = 0. + t3890 + t3895;
  t934 = -1.*t368*t586;
  t1477 = t1014*t1387*t1424;
  t1537 = t934 + t1477;
  t1581 = t289*t1537;
  t1862 = t1014*t368*t1387;
  t2124 = t586*t1424;
  t2250 = t1862 + t2124;
  t2452 = t2250*t2277;
  t2612 = t1581 + t2452;
  t4326 = t289*t2250;
  t4331 = -1.*t1537*t2277;
  t4335 = t4326 + t4331;
  t4306 = t1014*t2790*t8;
  t4315 = t2612*t2923;
  t4320 = t4306 + t4315;
  t3110 = t368*t3108;
  t3114 = -1.*t1424*t3112;
  t3118 = 0. + t3110 + t3114;
  t3124 = var2[4]*t3118;
  t3144 = var2[5]*t3142;
  t3169 = var2[6]*t3142;
  t3170 = t3108*t1424;
  t3179 = t368*t3112;
  t3183 = 0. + t3170 + t3179;
  t3192 = t2790*t3183;
  t3193 = -1.*t1387*t3142;
  t3197 = 0. + t3192 + t3193;
  t3199 = var2[3]*t3197;
  t3208 = 0. + var2[9] + var2[8] + t3124 + t3144 + t3169 + t3199;
  t3287 = var2[7]*t3279;
  t3365 = var2[5]*t3357;
  t3388 = var2[6]*t3357;
  t3434 = t368*t3429;
  t3573 = -1.*t1424*t3545;
  t3595 = 0. + t3434 + t3573;
  t3598 = var2[4]*t3595;
  t3610 = -1.*t1387*t3357;
  t3640 = t1424*t3429;
  t3681 = t368*t3545;
  t3685 = 0. + t3640 + t3681;
  t3701 = t2790*t3685;
  t3705 = 0. + t3610 + t3701;
  t3725 = var2[3]*t3705;
  t3727 = 0. + t3287 + t3365 + t3388 + t3598 + t3725;
  t3733 = var2[7]*t3314;
  t3831 = var2[5]*t3830;
  t3836 = var2[6]*t3830;
  t3889 = t368*t3888;
  t3931 = -1.*t1424*t3913;
  t3971 = 0. + t3889 + t3931;
  t3993 = var2[4]*t3971;
  t3999 = -1.*t1387*t3830;
  t4056 = t1424*t3888;
  t4059 = t368*t3913;
  t4079 = 0. + t4056 + t4059;
  t4085 = t2790*t4079;
  t4087 = 0. + t3999 + t4085;
  t4209 = var2[3]*t4087;
  t4233 = 0. + t3733 + t3831 + t3836 + t3993 + t4209;
  t4325 = t3236*t4320;
  t4407 = t4335*t3258;
  t4410 = t4325 + t4407;
  t4494 = t3236*t4335;
  t4505 = -1.*t4320*t3258;
  t4537 = t4494 + t4505;
  t3223 = 0.00334*t3208;
  t3729 = 3.e-6*t3727;
  t4245 = 1.e-6*t4233;
  t4301 = t3223 + t3729 + t4245;
  t4707 = t1014*t368;
  t4712 = t586*t1387*t1424;
  t4730 = t4707 + t4712;
  t4745 = t289*t4730;
  t4767 = t368*t586*t1387;
  t4768 = -1.*t1014*t1424;
  t4772 = t4767 + t4768;
  t4777 = t4772*t2277;
  t4798 = t4745 + t4777;
  t5491 = t289*t4772;
  t5686 = -1.*t4730*t2277;
  t5731 = t5491 + t5686;
  t5111 = t2790*t8*t586;
  t5117 = t4798*t2923;
  t5119 = t5111 + t5117;
  t4559 = 3.e-6*t3208;
  t4590 = 0.00216*t3727;
  t4602 = 0.000956*t4233;
  t4610 = t4559 + t4590 + t4602;
  t5373 = t3236*t5119;
  t6101 = t5731*t3258;
  t6122 = t5373 + t6101;
  t6170 = t3236*t5731;
  t6215 = -1.*t5119*t3258;
  t6253 = t6170 + t6215;
  t4645 = 1.e-6*t3208;
  t4653 = 0.000956*t3727;
  t4676 = 0.00144*t4233;
  t4677 = t4645 + t4653 + t4676;
  t6767 = t2790*t289*t1424;
  t6769 = t2790*t368*t2277;
  t6874 = t6767 + t6769;
  t7362 = t2790*t368*t289;
  t7363 = -1.*t2790*t1424*t2277;
  t7365 = t7362 + t7363;
  t7260 = -1.*t8*t1387;
  t7309 = t6874*t2923;
  t7310 = t7260 + t7309;
  t7321 = t3236*t7310;
  t7402 = t7365*t3258;
  t7437 = t7321 + t7402;
  t7536 = t3236*t7365;
  t7537 = -1.*t7310*t3258;
  t7541 = t7536 + t7537;
  p_output1[0]=(t3249*t4410 - 1.*t3224*t4537)*t4610 + (t3224*t4410 + t3249*t4537)*t4677 + t4301*(t1014*t2790*t2923 - 1.*t2612*t8);
  p_output1[1]=t4610*(t3249*t6122 - 1.*t3224*t6253) + t4677*(t3224*t6122 + t3249*t6253) + t4301*(t2790*t2923*t586 - 1.*t4798*t8);
  p_output1[2]=t4610*(t3249*t7437 - 1.*t3224*t7541) + t4677*(t3224*t7437 + t3249*t7541) + t4301*(-1.*t1387*t2923 - 1.*t6874*t8);
}



void AMWorld_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
