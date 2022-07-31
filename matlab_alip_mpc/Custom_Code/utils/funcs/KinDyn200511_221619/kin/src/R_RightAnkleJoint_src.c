/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightAnkleJoint_src.h"

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
  double t1182;
  double t1304;
  double t1173;
  double t1201;
  double t1404;
  double t1648;
  double t1269;
  double t1468;
  double t1482;
  double t1114;
  double t1653;
  double t1866;
  double t1985;
  double t2040;
  double t1594;
  double t1994;
  double t2032;
  double t1002;
  double t2052;
  double t2069;
  double t2070;
  double t2072;
  double t2092;
  double t2108;
  double t2109;
  double t2173;
  double t2177;
  double t2204;
  double t2039;
  double t2182;
  double t2188;
  double t783;
  double t2209;
  double t2213;
  double t2217;
  double t2243;
  double t2197;
  double t2233;
  double t2235;
  double t507;
  double t2250;
  double t2251;
  double t2273;
  double t148;
  double t2402;
  double t2407;
  double t2411;
  double t2426;
  double t2428;
  double t2434;
  double t2418;
  double t2469;
  double t2514;
  double t2563;
  double t2571;
  double t2579;
  double t2583;
  double t2584;
  double t2587;
  double t2521;
  double t2598;
  double t2601;
  double t2631;
  double t2633;
  double t2638;
  double t2333;
  double t2604;
  double t2649;
  double t2658;
  double t2667;
  double t2668;
  double t2669;
  double t2782;
  double t2812;
  double t2815;
  double t2830;
  double t2833;
  double t2854;
  double t2863;
  double t2870;
  double t2875;
  double t2822;
  double t2876;
  double t2887;
  double t2905;
  double t2908;
  double t2927;
  double t2891;
  double t2936;
  double t2939;
  double t2951;
  double t2980;
  double t2990;
  double t2240;
  double t2277;
  double t2279;
  double t2337;
  double t2352;
  double t2353;
  double t2665;
  double t2678;
  double t2684;
  double t2700;
  double t2736;
  double t2756;
  double t2945;
  double t3004;
  double t3009;
  double t3028;
  double t3031;
  double t3040;
  t1182 = Cos(var1[5]);
  t1304 = Sin(var1[3]);
  t1173 = Cos(var1[3]);
  t1201 = Sin(var1[4]);
  t1404 = Sin(var1[5]);
  t1648 = Sin(var1[13]);
  t1269 = t1173*t1182*t1201;
  t1468 = t1304*t1404;
  t1482 = t1269 + t1468;
  t1114 = Cos(var1[13]);
  t1653 = -1.*t1182*t1304;
  t1866 = t1173*t1201*t1404;
  t1985 = t1653 + t1866;
  t2040 = Cos(var1[15]);
  t1594 = t1114*t1482;
  t1994 = -1.*t1648*t1985;
  t2032 = t1594 + t1994;
  t1002 = Sin(var1[15]);
  t2052 = Cos(var1[14]);
  t2069 = Cos(var1[4]);
  t2070 = t2052*t1173*t2069;
  t2072 = Sin(var1[14]);
  t2092 = t1648*t1482;
  t2108 = t1114*t1985;
  t2109 = t2092 + t2108;
  t2173 = t2072*t2109;
  t2177 = t2070 + t2173;
  t2204 = Cos(var1[16]);
  t2039 = t1002*t2032;
  t2182 = t2040*t2177;
  t2188 = t2039 + t2182;
  t783 = Sin(var1[16]);
  t2209 = t2040*t2032;
  t2213 = -1.*t1002*t2177;
  t2217 = t2209 + t2213;
  t2243 = Cos(var1[17]);
  t2197 = -1.*t783*t2188;
  t2233 = t2204*t2217;
  t2235 = t2197 + t2233;
  t507 = Sin(var1[17]);
  t2250 = t2204*t2188;
  t2251 = t783*t2217;
  t2273 = t2250 + t2251;
  t148 = Sin(var1[18]);
  t2402 = t1182*t1304*t1201;
  t2407 = -1.*t1173*t1404;
  t2411 = t2402 + t2407;
  t2426 = t1173*t1182;
  t2428 = t1304*t1201*t1404;
  t2434 = t2426 + t2428;
  t2418 = t1114*t2411;
  t2469 = -1.*t1648*t2434;
  t2514 = t2418 + t2469;
  t2563 = t2052*t2069*t1304;
  t2571 = t1648*t2411;
  t2579 = t1114*t2434;
  t2583 = t2571 + t2579;
  t2584 = t2072*t2583;
  t2587 = t2563 + t2584;
  t2521 = t1002*t2514;
  t2598 = t2040*t2587;
  t2601 = t2521 + t2598;
  t2631 = t2040*t2514;
  t2633 = -1.*t1002*t2587;
  t2638 = t2631 + t2633;
  t2333 = Cos(var1[18]);
  t2604 = -1.*t783*t2601;
  t2649 = t2204*t2638;
  t2658 = t2604 + t2649;
  t2667 = t2204*t2601;
  t2668 = t783*t2638;
  t2669 = t2667 + t2668;
  t2782 = t1114*t2069*t1182;
  t2812 = -1.*t2069*t1648*t1404;
  t2815 = t2782 + t2812;
  t2830 = -1.*t2052*t1201;
  t2833 = t2069*t1182*t1648;
  t2854 = t1114*t2069*t1404;
  t2863 = t2833 + t2854;
  t2870 = t2072*t2863;
  t2875 = t2830 + t2870;
  t2822 = t1002*t2815;
  t2876 = t2040*t2875;
  t2887 = t2822 + t2876;
  t2905 = t2040*t2815;
  t2908 = -1.*t1002*t2875;
  t2927 = t2905 + t2908;
  t2891 = -1.*t783*t2887;
  t2936 = t2204*t2927;
  t2939 = t2891 + t2936;
  t2951 = t2204*t2887;
  t2980 = t783*t2927;
  t2990 = t2951 + t2980;
  t2240 = t507*t2235;
  t2277 = t2243*t2273;
  t2279 = t2240 + t2277;
  t2337 = t2243*t2235;
  t2352 = -1.*t507*t2273;
  t2353 = t2337 + t2352;
  t2665 = t507*t2658;
  t2678 = t2243*t2669;
  t2684 = t2665 + t2678;
  t2700 = t2243*t2658;
  t2736 = -1.*t507*t2669;
  t2756 = t2700 + t2736;
  t2945 = t507*t2939;
  t3004 = t2243*t2990;
  t3009 = t2945 + t3004;
  t3028 = t2243*t2939;
  t3031 = -1.*t507*t2990;
  t3040 = t3028 + t3031;
  p_output1[0]=t148*t2279 - 1.*t2333*t2353;
  p_output1[1]=t148*t2684 - 1.*t2333*t2756;
  p_output1[2]=t148*t3009 - 1.*t2333*t3040;
  p_output1[3]=t2279*t2333 + t148*t2353;
  p_output1[4]=t2333*t2684 + t148*t2756;
  p_output1[5]=t2333*t3009 + t148*t3040;
  p_output1[6]=t1173*t2069*t2072 - 1.*t2052*t2109;
  p_output1[7]=t1304*t2069*t2072 - 1.*t2052*t2583;
  p_output1[8]=-1.*t1201*t2072 - 1.*t2052*t2863;
}



void R_RightAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
