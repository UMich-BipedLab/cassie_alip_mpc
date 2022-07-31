/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightKnee_src.h"

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
  double t1261;
  double t1424;
  double t1194;
  double t1304;
  double t1713;
  double t1966;
  double t1341;
  double t1808;
  double t1812;
  double t885;
  double t2092;
  double t2183;
  double t2184;
  double t2276;
  double t1934;
  double t2236;
  double t2238;
  double t761;
  double t2306;
  double t2312;
  double t2313;
  double t2323;
  double t2324;
  double t2335;
  double t2384;
  double t2397;
  double t2424;
  double t586;
  double t2552;
  double t2586;
  double t2589;
  double t2616;
  double t2655;
  double t2661;
  double t2502;
  double t2611;
  double t2675;
  double t2692;
  double t2746;
  double t2752;
  double t2754;
  double t2762;
  double t2767;
  double t2774;
  double t2958;
  double t2975;
  double t2982;
  double t3014;
  double t3021;
  double t3022;
  double t3029;
  double t3044;
  double t3062;
  double t2266;
  double t2437;
  double t2443;
  double t2516;
  double t2544;
  double t2545;
  double t2693;
  double t2792;
  double t2804;
  double t2843;
  double t2846;
  double t2855;
  double t2989;
  double t3075;
  double t3078;
  double t3088;
  double t3113;
  double t3119;
  t1261 = Cos(var1[5]);
  t1424 = Sin(var1[3]);
  t1194 = Cos(var1[3]);
  t1304 = Sin(var1[4]);
  t1713 = Sin(var1[5]);
  t1966 = Sin(var1[13]);
  t1341 = t1194*t1261*t1304;
  t1808 = t1424*t1713;
  t1812 = t1341 + t1808;
  t885 = Cos(var1[13]);
  t2092 = -1.*t1261*t1424;
  t2183 = t1194*t1304*t1713;
  t2184 = t2092 + t2183;
  t2276 = Cos(var1[15]);
  t1934 = t885*t1812;
  t2236 = -1.*t1966*t2184;
  t2238 = t1934 + t2236;
  t761 = Sin(var1[15]);
  t2306 = Cos(var1[14]);
  t2312 = Cos(var1[4]);
  t2313 = t2306*t1194*t2312;
  t2323 = Sin(var1[14]);
  t2324 = t1966*t1812;
  t2335 = t885*t2184;
  t2384 = t2324 + t2335;
  t2397 = t2323*t2384;
  t2424 = t2313 + t2397;
  t586 = Sin(var1[16]);
  t2552 = t1261*t1424*t1304;
  t2586 = -1.*t1194*t1713;
  t2589 = t2552 + t2586;
  t2616 = t1194*t1261;
  t2655 = t1424*t1304*t1713;
  t2661 = t2616 + t2655;
  t2502 = Cos(var1[16]);
  t2611 = t885*t2589;
  t2675 = -1.*t1966*t2661;
  t2692 = t2611 + t2675;
  t2746 = t2306*t2312*t1424;
  t2752 = t1966*t2589;
  t2754 = t885*t2661;
  t2762 = t2752 + t2754;
  t2767 = t2323*t2762;
  t2774 = t2746 + t2767;
  t2958 = t885*t2312*t1261;
  t2975 = -1.*t2312*t1966*t1713;
  t2982 = t2958 + t2975;
  t3014 = -1.*t2306*t1304;
  t3021 = t2312*t1261*t1966;
  t3022 = t885*t2312*t1713;
  t3029 = t3021 + t3022;
  t3044 = t2323*t3029;
  t3062 = t3014 + t3044;
  t2266 = t761*t2238;
  t2437 = t2276*t2424;
  t2443 = t2266 + t2437;
  t2516 = t2276*t2238;
  t2544 = -1.*t761*t2424;
  t2545 = t2516 + t2544;
  t2693 = t761*t2692;
  t2792 = t2276*t2774;
  t2804 = t2693 + t2792;
  t2843 = t2276*t2692;
  t2846 = -1.*t761*t2774;
  t2855 = t2843 + t2846;
  t2989 = t761*t2982;
  t3075 = t2276*t3062;
  t3078 = t2989 + t3075;
  t3088 = t2276*t2982;
  t3113 = -1.*t761*t3062;
  t3119 = t3088 + t3113;
  p_output1[0]=-1.*t2502*t2545 + t2443*t586;
  p_output1[1]=-1.*t2502*t2855 + t2804*t586;
  p_output1[2]=-1.*t2502*t3119 + t3078*t586;
  p_output1[3]=t2443*t2502 + t2545*t586;
  p_output1[4]=t2502*t2804 + t2855*t586;
  p_output1[5]=t2502*t3078 + t3119*t586;
  p_output1[6]=t1194*t2312*t2323 - 1.*t2306*t2384;
  p_output1[7]=t1424*t2312*t2323 - 1.*t2306*t2762;
  p_output1[8]=-1.*t1304*t2323 - 1.*t2306*t3029;
}



void R_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
