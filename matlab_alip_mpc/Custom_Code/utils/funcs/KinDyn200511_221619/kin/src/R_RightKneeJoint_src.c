/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightKneeJoint_src.h"

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
  double t384;
  double t1412;
  double t383;
  double t937;
  double t1442;
  double t1816;
  double t1326;
  double t1539;
  double t1620;
  double t170;
  double t1886;
  double t1951;
  double t1966;
  double t2209;
  double t1632;
  double t2112;
  double t2185;
  double t144;
  double t2210;
  double t2260;
  double t2269;
  double t2290;
  double t2297;
  double t2307;
  double t2318;
  double t2326;
  double t2328;
  double t143;
  double t2509;
  double t2524;
  double t2525;
  double t2577;
  double t2597;
  double t2625;
  double t2414;
  double t2572;
  double t2677;
  double t2683;
  double t2743;
  double t2775;
  double t2791;
  double t2792;
  double t2793;
  double t2831;
  double t2949;
  double t2964;
  double t2968;
  double t2996;
  double t3023;
  double t3052;
  double t3063;
  double t3066;
  double t3088;
  double t2197;
  double t2340;
  double t2380;
  double t2421;
  double t2445;
  double t2456;
  double t2726;
  double t2841;
  double t2873;
  double t2916;
  double t2917;
  double t2937;
  double t2978;
  double t3096;
  double t3132;
  double t3138;
  double t3152;
  double t3167;
  t384 = Cos(var1[5]);
  t1412 = Sin(var1[3]);
  t383 = Cos(var1[3]);
  t937 = Sin(var1[4]);
  t1442 = Sin(var1[5]);
  t1816 = Sin(var1[13]);
  t1326 = t383*t384*t937;
  t1539 = t1412*t1442;
  t1620 = t1326 + t1539;
  t170 = Cos(var1[13]);
  t1886 = -1.*t384*t1412;
  t1951 = t383*t937*t1442;
  t1966 = t1886 + t1951;
  t2209 = Cos(var1[15]);
  t1632 = t170*t1620;
  t2112 = -1.*t1816*t1966;
  t2185 = t1632 + t2112;
  t144 = Sin(var1[15]);
  t2210 = Cos(var1[14]);
  t2260 = Cos(var1[4]);
  t2269 = t2210*t383*t2260;
  t2290 = Sin(var1[14]);
  t2297 = t1816*t1620;
  t2307 = t170*t1966;
  t2318 = t2297 + t2307;
  t2326 = t2290*t2318;
  t2328 = t2269 + t2326;
  t143 = Sin(var1[16]);
  t2509 = t384*t1412*t937;
  t2524 = -1.*t383*t1442;
  t2525 = t2509 + t2524;
  t2577 = t383*t384;
  t2597 = t1412*t937*t1442;
  t2625 = t2577 + t2597;
  t2414 = Cos(var1[16]);
  t2572 = t170*t2525;
  t2677 = -1.*t1816*t2625;
  t2683 = t2572 + t2677;
  t2743 = t2210*t2260*t1412;
  t2775 = t1816*t2525;
  t2791 = t170*t2625;
  t2792 = t2775 + t2791;
  t2793 = t2290*t2792;
  t2831 = t2743 + t2793;
  t2949 = t170*t2260*t384;
  t2964 = -1.*t2260*t1816*t1442;
  t2968 = t2949 + t2964;
  t2996 = -1.*t2210*t937;
  t3023 = t2260*t384*t1816;
  t3052 = t170*t2260*t1442;
  t3063 = t3023 + t3052;
  t3066 = t2290*t3063;
  t3088 = t2996 + t3066;
  t2197 = t144*t2185;
  t2340 = t2209*t2328;
  t2380 = t2197 + t2340;
  t2421 = t2209*t2185;
  t2445 = -1.*t144*t2328;
  t2456 = t2421 + t2445;
  t2726 = t144*t2683;
  t2841 = t2209*t2831;
  t2873 = t2726 + t2841;
  t2916 = t2209*t2683;
  t2917 = -1.*t144*t2831;
  t2937 = t2916 + t2917;
  t2978 = t144*t2968;
  t3096 = t2209*t3088;
  t3132 = t2978 + t3096;
  t3138 = t2209*t2968;
  t3152 = -1.*t144*t3088;
  t3167 = t3138 + t3152;
  p_output1[0]=t143*t2380 - 1.*t2414*t2456;
  p_output1[1]=t143*t2873 - 1.*t2414*t2937;
  p_output1[2]=t143*t3132 - 1.*t2414*t3167;
  p_output1[3]=t2380*t2414 + t143*t2456;
  p_output1[4]=t2414*t2873 + t143*t2937;
  p_output1[5]=t2414*t3132 + t143*t3167;
  p_output1[6]=-1.*t2210*t2318 + t2260*t2290*t383;
  p_output1[7]=t1412*t2260*t2290 - 1.*t2210*t2792;
  p_output1[8]=-1.*t2210*t3063 - 1.*t2290*t937;
}



void R_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
