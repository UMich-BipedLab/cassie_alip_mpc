/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightKneeSpringJoint_src.h"

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
  double t1106;
  double t1527;
  double t1079;
  double t1206;
  double t1559;
  double t1869;
  double t1218;
  double t1575;
  double t1793;
  double t991;
  double t1888;
  double t1889;
  double t1892;
  double t1948;
  double t1867;
  double t1898;
  double t1931;
  double t929;
  double t1965;
  double t1977;
  double t1984;
  double t1996;
  double t2004;
  double t2014;
  double t2046;
  double t2050;
  double t2062;
  double t2097;
  double t1942;
  double t2071;
  double t2076;
  double t575;
  double t2101;
  double t2109;
  double t2117;
  double t149;
  double t2271;
  double t2276;
  double t2293;
  double t2304;
  double t2317;
  double t2327;
  double t2302;
  double t2328;
  double t2342;
  double t2370;
  double t2376;
  double t2390;
  double t2392;
  double t2395;
  double t2423;
  double t2189;
  double t2359;
  double t2429;
  double t2445;
  double t2492;
  double t2503;
  double t2505;
  double t2624;
  double t2633;
  double t2635;
  double t2644;
  double t2651;
  double t2669;
  double t2685;
  double t2686;
  double t2690;
  double t2640;
  double t2699;
  double t2707;
  double t2747;
  double t2749;
  double t2752;
  double t2094;
  double t2136;
  double t2174;
  double t2198;
  double t2199;
  double t2207;
  double t2450;
  double t2510;
  double t2517;
  double t2541;
  double t2589;
  double t2598;
  double t2724;
  double t2758;
  double t2774;
  double t2794;
  double t2803;
  double t2815;
  t1106 = Cos(var1[5]);
  t1527 = Sin(var1[3]);
  t1079 = Cos(var1[3]);
  t1206 = Sin(var1[4]);
  t1559 = Sin(var1[5]);
  t1869 = Sin(var1[13]);
  t1218 = t1079*t1106*t1206;
  t1575 = t1527*t1559;
  t1793 = t1218 + t1575;
  t991 = Cos(var1[13]);
  t1888 = -1.*t1106*t1527;
  t1889 = t1079*t1206*t1559;
  t1892 = t1888 + t1889;
  t1948 = Cos(var1[15]);
  t1867 = t991*t1793;
  t1898 = -1.*t1869*t1892;
  t1931 = t1867 + t1898;
  t929 = Sin(var1[15]);
  t1965 = Cos(var1[14]);
  t1977 = Cos(var1[4]);
  t1984 = t1965*t1079*t1977;
  t1996 = Sin(var1[14]);
  t2004 = t1869*t1793;
  t2014 = t991*t1892;
  t2046 = t2004 + t2014;
  t2050 = t1996*t2046;
  t2062 = t1984 + t2050;
  t2097 = Cos(var1[16]);
  t1942 = t929*t1931;
  t2071 = t1948*t2062;
  t2076 = t1942 + t2071;
  t575 = Sin(var1[16]);
  t2101 = t1948*t1931;
  t2109 = -1.*t929*t2062;
  t2117 = t2101 + t2109;
  t149 = Cos(var1[17]);
  t2271 = t1106*t1527*t1206;
  t2276 = -1.*t1079*t1559;
  t2293 = t2271 + t2276;
  t2304 = t1079*t1106;
  t2317 = t1527*t1206*t1559;
  t2327 = t2304 + t2317;
  t2302 = t991*t2293;
  t2328 = -1.*t1869*t2327;
  t2342 = t2302 + t2328;
  t2370 = t1965*t1977*t1527;
  t2376 = t1869*t2293;
  t2390 = t991*t2327;
  t2392 = t2376 + t2390;
  t2395 = t1996*t2392;
  t2423 = t2370 + t2395;
  t2189 = Sin(var1[17]);
  t2359 = t929*t2342;
  t2429 = t1948*t2423;
  t2445 = t2359 + t2429;
  t2492 = t1948*t2342;
  t2503 = -1.*t929*t2423;
  t2505 = t2492 + t2503;
  t2624 = t991*t1977*t1106;
  t2633 = -1.*t1977*t1869*t1559;
  t2635 = t2624 + t2633;
  t2644 = -1.*t1965*t1206;
  t2651 = t1977*t1106*t1869;
  t2669 = t991*t1977*t1559;
  t2685 = t2651 + t2669;
  t2686 = t1996*t2685;
  t2690 = t2644 + t2686;
  t2640 = t929*t2635;
  t2699 = t1948*t2690;
  t2707 = t2640 + t2699;
  t2747 = t1948*t2635;
  t2749 = -1.*t929*t2690;
  t2752 = t2747 + t2749;
  t2094 = -1.*t575*t2076;
  t2136 = t2097*t2117;
  t2174 = t2094 + t2136;
  t2198 = t2097*t2076;
  t2199 = t575*t2117;
  t2207 = t2198 + t2199;
  t2450 = -1.*t575*t2445;
  t2510 = t2097*t2505;
  t2517 = t2450 + t2510;
  t2541 = t2097*t2445;
  t2589 = t575*t2505;
  t2598 = t2541 + t2589;
  t2724 = -1.*t575*t2707;
  t2758 = t2097*t2752;
  t2774 = t2724 + t2758;
  t2794 = t2097*t2707;
  t2803 = t575*t2752;
  t2815 = t2794 + t2803;
  p_output1[0]=-1.*t149*t2174 + t2189*t2207;
  p_output1[1]=-1.*t149*t2517 + t2189*t2598;
  p_output1[2]=-1.*t149*t2774 + t2189*t2815;
  p_output1[3]=t2174*t2189 + t149*t2207;
  p_output1[4]=t2189*t2517 + t149*t2598;
  p_output1[5]=t2189*t2774 + t149*t2815;
  p_output1[6]=t1079*t1977*t1996 - 1.*t1965*t2046;
  p_output1[7]=t1527*t1977*t1996 - 1.*t1965*t2392;
  p_output1[8]=-1.*t1206*t1996 - 1.*t1965*t2685;
}



void R_RightKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
