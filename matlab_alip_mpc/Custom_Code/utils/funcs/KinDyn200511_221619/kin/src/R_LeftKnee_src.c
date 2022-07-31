/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftKnee_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t398;
  double t1707;
  double t1853;
  double t1750;
  double t2132;
  double t1589;
  double t2306;
  double t2652;
  double t2723;
  double t1844;
  double t2288;
  double t2293;
  double t2736;
  double t283;
  double t2861;
  double t2904;
  double t2906;
  double t490;
  double t929;
  double t1281;
  double t2298;
  double t2737;
  double t2779;
  double t2807;
  double t2809;
  double t2829;
  double t2909;
  double t246;
  double t3134;
  double t3203;
  double t3214;
  double t3049;
  double t3060;
  double t3079;
  double t2928;
  double t3282;
  double t3290;
  double t3319;
  double t3022;
  double t3092;
  double t3238;
  double t3251;
  double t3262;
  double t3272;
  double t3541;
  double t3586;
  double t3600;
  double t3479;
  double t3500;
  double t3505;
  double t3515;
  double t3516;
  double t3534;
  double t2839;
  double t2913;
  double t2916;
  double t2940;
  double t2962;
  double t2970;
  double t3281;
  double t3342;
  double t3364;
  double t3419;
  double t3446;
  double t3456;
  double t3535;
  double t3609;
  double t3642;
  double t3650;
  double t3684;
  double t3690;
  t398 = Cos(var1[3]);
  t1707 = Cos(var1[5]);
  t1853 = Sin(var1[4]);
  t1750 = Sin(var1[3]);
  t2132 = Sin(var1[5]);
  t1589 = Cos(var1[6]);
  t2306 = t398*t1707*t1853;
  t2652 = t1750*t2132;
  t2723 = t2306 + t2652;
  t1844 = -1.*t1707*t1750;
  t2288 = t398*t1853*t2132;
  t2293 = t1844 + t2288;
  t2736 = Sin(var1[6]);
  t283 = Cos(var1[8]);
  t2861 = t1589*t2723;
  t2904 = -1.*t2293*t2736;
  t2906 = t2861 + t2904;
  t490 = Cos(var1[4]);
  t929 = Cos(var1[7]);
  t1281 = t398*t490*t929;
  t2298 = t1589*t2293;
  t2737 = t2723*t2736;
  t2779 = t2298 + t2737;
  t2807 = Sin(var1[7]);
  t2809 = t2779*t2807;
  t2829 = t1281 + t2809;
  t2909 = Sin(var1[8]);
  t246 = Sin(var1[9]);
  t3134 = t1707*t1750*t1853;
  t3203 = -1.*t398*t2132;
  t3214 = t3134 + t3203;
  t3049 = t398*t1707;
  t3060 = t1750*t1853*t2132;
  t3079 = t3049 + t3060;
  t2928 = Cos(var1[9]);
  t3282 = t1589*t3214;
  t3290 = -1.*t3079*t2736;
  t3319 = t3282 + t3290;
  t3022 = t490*t929*t1750;
  t3092 = t1589*t3079;
  t3238 = t3214*t2736;
  t3251 = t3092 + t3238;
  t3262 = t3251*t2807;
  t3272 = t3022 + t3262;
  t3541 = t490*t1707*t1589;
  t3586 = -1.*t490*t2132*t2736;
  t3600 = t3541 + t3586;
  t3479 = -1.*t929*t1853;
  t3500 = t490*t1589*t2132;
  t3505 = t490*t1707*t2736;
  t3515 = t3500 + t3505;
  t3516 = t3515*t2807;
  t3534 = t3479 + t3516;
  t2839 = t283*t2829;
  t2913 = t2906*t2909;
  t2916 = t2839 + t2913;
  t2940 = t283*t2906;
  t2962 = -1.*t2829*t2909;
  t2970 = t2940 + t2962;
  t3281 = t283*t3272;
  t3342 = t3319*t2909;
  t3364 = t3281 + t3342;
  t3419 = t283*t3319;
  t3446 = -1.*t3272*t2909;
  t3456 = t3419 + t3446;
  t3535 = t283*t3534;
  t3609 = t3600*t2909;
  t3642 = t3535 + t3609;
  t3650 = t283*t3600;
  t3684 = -1.*t3534*t2909;
  t3690 = t3650 + t3684;
  p_output1[0]=t246*t2916 - 1.*t2928*t2970;
  p_output1[1]=t246*t3364 - 1.*t2928*t3456;
  p_output1[2]=t246*t3642 - 1.*t2928*t3690;
  p_output1[3]=t2916*t2928 + t246*t2970;
  p_output1[4]=t2928*t3364 + t246*t3456;
  p_output1[5]=t2928*t3642 + t246*t3690;
  p_output1[6]=t2807*t398*t490 - 1.*t2779*t929;
  p_output1[7]=t1750*t2807*t490 - 1.*t3251*t929;
  p_output1[8]=-1.*t1853*t2807 - 1.*t3515*t929;
}



void R_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
