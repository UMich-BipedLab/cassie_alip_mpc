/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftTarsus_src.h"

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
  double t1541;
  double t1831;
  double t1885;
  double t1837;
  double t1902;
  double t1829;
  double t1988;
  double t2002;
  double t2006;
  double t1842;
  double t1933;
  double t1938;
  double t2013;
  double t1508;
  double t2182;
  double t2183;
  double t2187;
  double t1546;
  double t1791;
  double t1822;
  double t1962;
  double t2030;
  double t2053;
  double t2061;
  double t2072;
  double t2085;
  double t2192;
  double t2216;
  double t2124;
  double t2197;
  double t2199;
  double t1137;
  double t2231;
  double t2249;
  double t2259;
  double t2316;
  double t2202;
  double t2293;
  double t2294;
  double t1131;
  double t2317;
  double t2322;
  double t2334;
  double t1083;
  double t2530;
  double t2537;
  double t2545;
  double t2486;
  double t2491;
  double t2507;
  double t2667;
  double t2670;
  double t2678;
  double t2475;
  double t2523;
  double t2573;
  double t2618;
  double t2631;
  double t2652;
  double t2661;
  double t2680;
  double t2681;
  double t2691;
  double t2692;
  double t2693;
  double t2408;
  double t2689;
  double t2697;
  double t2730;
  double t2774;
  double t2782;
  double t2790;
  double t2942;
  double t2966;
  double t2976;
  double t2872;
  double t2877;
  double t2910;
  double t2920;
  double t2922;
  double t2923;
  double t2941;
  double t2977;
  double t2978;
  double t3015;
  double t3022;
  double t3028;
  double t2993;
  double t3052;
  double t3075;
  double t3100;
  double t3101;
  double t3103;
  double t2302;
  double t2335;
  double t2366;
  double t2416;
  double t2446;
  double t2448;
  double t2732;
  double t2813;
  double t2821;
  double t2836;
  double t2841;
  double t2846;
  double t3088;
  double t3115;
  double t3158;
  double t3179;
  double t3186;
  double t3198;
  t1541 = Cos(var1[3]);
  t1831 = Cos(var1[5]);
  t1885 = Sin(var1[4]);
  t1837 = Sin(var1[3]);
  t1902 = Sin(var1[5]);
  t1829 = Cos(var1[6]);
  t1988 = t1541*t1831*t1885;
  t2002 = t1837*t1902;
  t2006 = t1988 + t2002;
  t1842 = -1.*t1831*t1837;
  t1933 = t1541*t1885*t1902;
  t1938 = t1842 + t1933;
  t2013 = Sin(var1[6]);
  t1508 = Cos(var1[8]);
  t2182 = t1829*t2006;
  t2183 = -1.*t1938*t2013;
  t2187 = t2182 + t2183;
  t1546 = Cos(var1[4]);
  t1791 = Cos(var1[7]);
  t1822 = t1541*t1546*t1791;
  t1962 = t1829*t1938;
  t2030 = t2006*t2013;
  t2053 = t1962 + t2030;
  t2061 = Sin(var1[7]);
  t2072 = t2053*t2061;
  t2085 = t1822 + t2072;
  t2192 = Sin(var1[8]);
  t2216 = Cos(var1[9]);
  t2124 = t1508*t2085;
  t2197 = t2187*t2192;
  t2199 = t2124 + t2197;
  t1137 = Sin(var1[9]);
  t2231 = t1508*t2187;
  t2249 = -1.*t2085*t2192;
  t2259 = t2231 + t2249;
  t2316 = Cos(var1[10]);
  t2202 = -1.*t1137*t2199;
  t2293 = t2216*t2259;
  t2294 = t2202 + t2293;
  t1131 = Sin(var1[10]);
  t2317 = t2216*t2199;
  t2322 = t1137*t2259;
  t2334 = t2317 + t2322;
  t1083 = Sin(var1[11]);
  t2530 = t1831*t1837*t1885;
  t2537 = -1.*t1541*t1902;
  t2545 = t2530 + t2537;
  t2486 = t1541*t1831;
  t2491 = t1837*t1885*t1902;
  t2507 = t2486 + t2491;
  t2667 = t1829*t2545;
  t2670 = -1.*t2507*t2013;
  t2678 = t2667 + t2670;
  t2475 = t1546*t1791*t1837;
  t2523 = t1829*t2507;
  t2573 = t2545*t2013;
  t2618 = t2523 + t2573;
  t2631 = t2618*t2061;
  t2652 = t2475 + t2631;
  t2661 = t1508*t2652;
  t2680 = t2678*t2192;
  t2681 = t2661 + t2680;
  t2691 = t1508*t2678;
  t2692 = -1.*t2652*t2192;
  t2693 = t2691 + t2692;
  t2408 = Cos(var1[11]);
  t2689 = -1.*t1137*t2681;
  t2697 = t2216*t2693;
  t2730 = t2689 + t2697;
  t2774 = t2216*t2681;
  t2782 = t1137*t2693;
  t2790 = t2774 + t2782;
  t2942 = t1546*t1831*t1829;
  t2966 = -1.*t1546*t1902*t2013;
  t2976 = t2942 + t2966;
  t2872 = -1.*t1791*t1885;
  t2877 = t1546*t1829*t1902;
  t2910 = t1546*t1831*t2013;
  t2920 = t2877 + t2910;
  t2922 = t2920*t2061;
  t2923 = t2872 + t2922;
  t2941 = t1508*t2923;
  t2977 = t2976*t2192;
  t2978 = t2941 + t2977;
  t3015 = t1508*t2976;
  t3022 = -1.*t2923*t2192;
  t3028 = t3015 + t3022;
  t2993 = -1.*t1137*t2978;
  t3052 = t2216*t3028;
  t3075 = t2993 + t3052;
  t3100 = t2216*t2978;
  t3101 = t1137*t3028;
  t3103 = t3100 + t3101;
  t2302 = t1131*t2294;
  t2335 = t2316*t2334;
  t2366 = t2302 + t2335;
  t2416 = t2316*t2294;
  t2446 = -1.*t1131*t2334;
  t2448 = t2416 + t2446;
  t2732 = t1131*t2730;
  t2813 = t2316*t2790;
  t2821 = t2732 + t2813;
  t2836 = t2316*t2730;
  t2841 = -1.*t1131*t2790;
  t2846 = t2836 + t2841;
  t3088 = t1131*t3075;
  t3115 = t2316*t3103;
  t3158 = t3088 + t3115;
  t3179 = t2316*t3075;
  t3186 = -1.*t1131*t3103;
  t3198 = t3179 + t3186;
  p_output1[0]=t1083*t2366 - 1.*t2408*t2448;
  p_output1[1]=t1083*t2821 - 1.*t2408*t2846;
  p_output1[2]=t1083*t3158 - 1.*t2408*t3198;
  p_output1[3]=t2366*t2408 + t1083*t2448;
  p_output1[4]=t2408*t2821 + t1083*t2846;
  p_output1[5]=t2408*t3158 + t1083*t3198;
  p_output1[6]=-1.*t1791*t2053 + t1541*t1546*t2061;
  p_output1[7]=t1546*t1837*t2061 - 1.*t1791*t2618;
  p_output1[8]=-1.*t1885*t2061 - 1.*t1791*t2920;
}



void R_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
