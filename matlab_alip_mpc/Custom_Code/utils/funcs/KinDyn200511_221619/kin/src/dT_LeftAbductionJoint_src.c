/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftAbductionJoint_src.h"

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
  double t2130;
  double t797;
  double t1060;
  double t2985;
  double t3166;
  double t3183;
  double t3171;
  double t3187;
  double t3251;
  double t3257;
  double t3259;
  double t3262;
  double t3284;
  double t3285;
  double t3299;
  double t3214;
  double t3215;
  double t3221;
  double t3356;
  double t3358;
  double t3359;
  double t3361;
  double t3411;
  double t3412;
  double t3421;
  double t3265;
  double t3266;
  double t3270;
  double t3467;
  double t3230;
  double t3235;
  double t3236;
  double t3229;
  double t3375;
  double t3376;
  double t3382;
  double t3511;
  double t3301;
  double t3302;
  double t3529;
  double t3530;
  double t3532;
  double t3561;
  double t3563;
  double t3174;
  double t3190;
  double t3195;
  double t3433;
  double t3436;
  double t3437;
  double t3565;
  double t3568;
  double t3571;
  double t3575;
  double t3578;
  double t3580;
  double t3460;
  double t3468;
  double t3273;
  double t3279;
  double t3479;
  double t3480;
  double t3239;
  double t3241;
  double t3484;
  double t3487;
  double t3499;
  double t3311;
  double t3323;
  double t3324;
  double t3503;
  double t3504;
  double t3507;
  double t3340;
  double t3345;
  double t3348;
  double t3512;
  double t3364;
  double t3365;
  double t3608;
  double t3609;
  double t3616;
  double t3618;
  double t3619;
  double t3516;
  double t3522;
  double t3384;
  double t3385;
  double t3701;
  double t3702;
  double t3397;
  double t3400;
  double t3406;
  double t3545;
  double t3550;
  double t3551;
  t2130 = Cos(var1[3]);
  t797 = Cos(var1[4]);
  t1060 = Sin(var1[3]);
  t2985 = Sin(var1[4]);
  t3166 = Cos(var1[6]);
  t3183 = Cos(var1[5]);
  t3171 = Sin(var1[5]);
  t3187 = Sin(var1[6]);
  t3251 = t2130*t3183*t2985;
  t3257 = t1060*t3171;
  t3259 = t3251 + t3257;
  t3262 = t3166*t3259;
  t3284 = -1.*t3183*t1060;
  t3285 = t2130*t2985*t3171;
  t3299 = t3284 + t3285;
  t3214 = -1.*t2130*t3183;
  t3215 = -1.*t1060*t2985*t3171;
  t3221 = t3214 + t3215;
  t3356 = t3183*t1060*t2985;
  t3358 = -1.*t2130*t3171;
  t3359 = t3356 + t3358;
  t3361 = t3166*t3359;
  t3411 = t797*t3183*t3166;
  t3412 = -1.*t797*t3171*t3187;
  t3421 = t3411 + t3412;
  t3265 = t3183*t1060;
  t3266 = -1.*t2130*t2985*t3171;
  t3270 = t3265 + t3266;
  t3467 = -1.*t3259*t3187;
  t3230 = -1.*t3183*t1060*t2985;
  t3235 = t2130*t3171;
  t3236 = t3230 + t3235;
  t3229 = t3166*t3221;
  t3375 = t2130*t3183;
  t3376 = t1060*t2985*t3171;
  t3382 = t3375 + t3376;
  t3511 = -1.*t3359*t3187;
  t3301 = -1.*t3299*t3187;
  t3302 = t3262 + t3301;
  t3529 = -1.*t797*t3166*t3171;
  t3530 = -1.*t797*t3183*t3187;
  t3532 = t3529 + t3530;
  t3561 = -1.*t3166;
  t3563 = 1. + t3561;
  t3174 = t2130*t797*t3166*t3171;
  t3190 = t2130*t797*t3183*t3187;
  t3195 = t3174 + t3190;
  t3433 = t2130*t797*t3183*t3166;
  t3436 = -1.*t2130*t797*t3171*t3187;
  t3437 = t3433 + t3436;
  t3565 = 0.07996*t3563;
  t3568 = -0.135*t3187;
  t3571 = 0. + t3565 + t3568;
  t3575 = 0.135*t3563;
  t3578 = 0.07996*t3187;
  t3580 = 0. + t3575 + t3578;
  t3460 = t3166*t3270;
  t3468 = t3460 + t3467;
  t3273 = t3270*t3187;
  t3279 = t3262 + t3273;
  t3479 = -1.*t3166*t3299;
  t3480 = t3479 + t3467;
  t3239 = t3236*t3187;
  t3241 = t3229 + t3239;
  t3484 = t3166*t3236;
  t3487 = -1.*t3221*t3187;
  t3499 = t3484 + t3487;
  t3311 = t797*t3166*t1060*t3171;
  t3323 = t797*t3183*t1060*t3187;
  t3324 = t3311 + t3323;
  t3503 = t797*t3183*t3166*t1060;
  t3504 = -1.*t797*t1060*t3171*t3187;
  t3507 = t3503 + t3504;
  t3340 = t3166*t3299;
  t3345 = t3259*t3187;
  t3348 = t3340 + t3345;
  t3512 = t3229 + t3511;
  t3364 = t3221*t3187;
  t3365 = t3361 + t3364;
  t3608 = -0.135*t3166;
  t3609 = t3608 + t3578;
  t3616 = 0.07996*t3166;
  t3618 = 0.135*t3187;
  t3619 = t3616 + t3618;
  t3516 = -1.*t3166*t3382;
  t3522 = t3516 + t3511;
  t3384 = -1.*t3382*t3187;
  t3385 = t3361 + t3384;
  t3701 = 0.07996*t3532;
  t3702 = 0.135*t3421;
  t3397 = -1.*t3166*t2985*t3171;
  t3400 = -1.*t3183*t2985*t3187;
  t3406 = t3397 + t3400;
  t3545 = -1.*t3183*t3166*t2985;
  t3550 = t2985*t3171*t3187;
  t3551 = t3545 + t3550;
  p_output1[0]=-1.*t1060*t797*var2[3] - 1.*t2130*t2985*var2[4];
  p_output1[1]=t2130*t797*var2[3] - 1.*t1060*t2985*var2[4];
  p_output1[2]=-1.*t797*var2[4];
  p_output1[3]=0;
  p_output1[4]=t3241*var2[3] + t3195*var2[4] + t3279*var2[5] + t3302*var2[6];
  p_output1[5]=t3348*var2[3] + t3324*var2[4] + t3365*var2[5] + t3385*var2[6];
  p_output1[6]=t3406*var2[4] + t3421*var2[5] + t3421*var2[6];
  p_output1[7]=0;
  p_output1[8]=t3499*var2[3] + t3437*var2[4] + t3468*var2[5] + t3480*var2[6];
  p_output1[9]=t3302*var2[3] + t3507*var2[4] + t3512*var2[5] + t3522*var2[6];
  p_output1[10]=t3551*var2[4] + t3532*var2[5] + t3532*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.135*t3241 + 0.07996*t3499 + t3236*t3571 + t3221*t3580 + 0.08055*t1060*t797)*var2[3] + (0.08055*t2130*t2985 + 0.135*t3195 + 0.07996*t3437 + t2130*t3183*t3571*t797 + t2130*t3171*t3580*t797)*var2[4] + (0.135*t3279 + 0.07996*t3468 + t3270*t3571 + t3259*t3580)*var2[5] + (0.135*t3302 + 0.07996*t3480 + t3259*t3609 + t3299*t3619)*var2[6];
  p_output1[13]=var2[1] + (0.07996*t3302 + 0.135*t3348 + t3259*t3571 + t3299*t3580 - 0.08055*t2130*t797)*var2[3] + (0.08055*t1060*t2985 + 0.135*t3324 + 0.07996*t3507 + t1060*t3183*t3571*t797 + t1060*t3171*t3580*t797)*var2[4] + (0.135*t3365 + 0.07996*t3512 + t3221*t3571 + t3359*t3580)*var2[5] + (0.135*t3385 + 0.07996*t3522 + t3359*t3609 + t3382*t3619)*var2[6];
  p_output1[14]=var2[2] + (0.135*t3406 + 0.07996*t3551 - 1.*t2985*t3183*t3571 - 1.*t2985*t3171*t3580 + 0.08055*t797)*var2[4] + (t3701 + t3702 - 1.*t3171*t3571*t797 + t3183*t3580*t797)*var2[5] + (t3701 + t3702 + t3183*t3609*t797 + t3171*t3619*t797)*var2[6];
  p_output1[15]=0;
}



void dT_LeftAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
