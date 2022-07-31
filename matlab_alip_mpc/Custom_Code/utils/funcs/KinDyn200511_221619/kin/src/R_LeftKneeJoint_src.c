/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftKneeJoint_src.h"

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
  double t1176;
  double t1884;
  double t2171;
  double t1885;
  double t2173;
  double t1816;
  double t2311;
  double t2332;
  double t2343;
  double t2095;
  double t2271;
  double t2285;
  double t2387;
  double t526;
  double t2510;
  double t2526;
  double t2548;
  double t1357;
  double t1398;
  double t1432;
  double t2294;
  double t2392;
  double t2404;
  double t2407;
  double t2440;
  double t2494;
  double t2561;
  double t140;
  double t2763;
  double t2769;
  double t2796;
  double t2730;
  double t2742;
  double t2758;
  double t2613;
  double t2863;
  double t2892;
  double t2922;
  double t2729;
  double t2760;
  double t2843;
  double t2844;
  double t2850;
  double t2855;
  double t3201;
  double t3206;
  double t3229;
  double t3051;
  double t3057;
  double t3079;
  double t3119;
  double t3159;
  double t3174;
  double t2502;
  double t2565;
  double t2575;
  double t2624;
  double t2633;
  double t2649;
  double t2859;
  double t2935;
  double t2941;
  double t2986;
  double t2995;
  double t3003;
  double t3191;
  double t3230;
  double t3237;
  double t3300;
  double t3323;
  double t3349;
  t1176 = Cos(var1[3]);
  t1884 = Cos(var1[5]);
  t2171 = Sin(var1[4]);
  t1885 = Sin(var1[3]);
  t2173 = Sin(var1[5]);
  t1816 = Cos(var1[6]);
  t2311 = t1176*t1884*t2171;
  t2332 = t1885*t2173;
  t2343 = t2311 + t2332;
  t2095 = -1.*t1884*t1885;
  t2271 = t1176*t2171*t2173;
  t2285 = t2095 + t2271;
  t2387 = Sin(var1[6]);
  t526 = Cos(var1[8]);
  t2510 = t1816*t2343;
  t2526 = -1.*t2285*t2387;
  t2548 = t2510 + t2526;
  t1357 = Cos(var1[4]);
  t1398 = Cos(var1[7]);
  t1432 = t1176*t1357*t1398;
  t2294 = t1816*t2285;
  t2392 = t2343*t2387;
  t2404 = t2294 + t2392;
  t2407 = Sin(var1[7]);
  t2440 = t2404*t2407;
  t2494 = t1432 + t2440;
  t2561 = Sin(var1[8]);
  t140 = Sin(var1[9]);
  t2763 = t1884*t1885*t2171;
  t2769 = -1.*t1176*t2173;
  t2796 = t2763 + t2769;
  t2730 = t1176*t1884;
  t2742 = t1885*t2171*t2173;
  t2758 = t2730 + t2742;
  t2613 = Cos(var1[9]);
  t2863 = t1816*t2796;
  t2892 = -1.*t2758*t2387;
  t2922 = t2863 + t2892;
  t2729 = t1357*t1398*t1885;
  t2760 = t1816*t2758;
  t2843 = t2796*t2387;
  t2844 = t2760 + t2843;
  t2850 = t2844*t2407;
  t2855 = t2729 + t2850;
  t3201 = t1357*t1884*t1816;
  t3206 = -1.*t1357*t2173*t2387;
  t3229 = t3201 + t3206;
  t3051 = -1.*t1398*t2171;
  t3057 = t1357*t1816*t2173;
  t3079 = t1357*t1884*t2387;
  t3119 = t3057 + t3079;
  t3159 = t3119*t2407;
  t3174 = t3051 + t3159;
  t2502 = t526*t2494;
  t2565 = t2548*t2561;
  t2575 = t2502 + t2565;
  t2624 = t526*t2548;
  t2633 = -1.*t2494*t2561;
  t2649 = t2624 + t2633;
  t2859 = t526*t2855;
  t2935 = t2922*t2561;
  t2941 = t2859 + t2935;
  t2986 = t526*t2922;
  t2995 = -1.*t2855*t2561;
  t3003 = t2986 + t2995;
  t3191 = t526*t3174;
  t3230 = t3229*t2561;
  t3237 = t3191 + t3230;
  t3300 = t526*t3229;
  t3323 = -1.*t3174*t2561;
  t3349 = t3300 + t3323;
  p_output1[0]=t140*t2575 - 1.*t2613*t2649;
  p_output1[1]=t140*t2941 - 1.*t2613*t3003;
  p_output1[2]=t140*t3237 - 1.*t2613*t3349;
  p_output1[3]=t2575*t2613 + t140*t2649;
  p_output1[4]=t2613*t2941 + t140*t3003;
  p_output1[5]=t2613*t3237 + t140*t3349;
  p_output1[6]=-1.*t1398*t2404 + t1176*t1357*t2407;
  p_output1[7]=t1357*t1885*t2407 - 1.*t1398*t2844;
  p_output1[8]=-1.*t2171*t2407 - 1.*t1398*t3119;
}



void R_LeftKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
