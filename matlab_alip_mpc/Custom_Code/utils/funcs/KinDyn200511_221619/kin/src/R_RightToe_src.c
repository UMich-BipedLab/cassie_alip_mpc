/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToe_src.h"

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
  double t833;
  double t1198;
  double t507;
  double t1150;
  double t1518;
  double t1874;
  double t1196;
  double t1562;
  double t1567;
  double t491;
  double t1901;
  double t1986;
  double t2023;
  double t2051;
  double t1637;
  double t2036;
  double t2044;
  double t341;
  double t2052;
  double t2054;
  double t2057;
  double t2059;
  double t2067;
  double t2072;
  double t2082;
  double t2102;
  double t2113;
  double t2137;
  double t2045;
  double t2117;
  double t2119;
  double t211;
  double t2139;
  double t2141;
  double t2161;
  double t2193;
  double t2134;
  double t2173;
  double t2186;
  double t206;
  double t2211;
  double t2216;
  double t2218;
  double t2260;
  double t2188;
  double t2225;
  double t2229;
  double t193;
  double t2273;
  double t2282;
  double t2288;
  double t127;
  double t2384;
  double t2411;
  double t2416;
  double t2458;
  double t2461;
  double t2471;
  double t2440;
  double t2476;
  double t2478;
  double t2534;
  double t2550;
  double t2552;
  double t2563;
  double t2570;
  double t2573;
  double t2528;
  double t2578;
  double t2597;
  double t2650;
  double t2678;
  double t2690;
  double t2614;
  double t2715;
  double t2722;
  double t2733;
  double t2738;
  double t2745;
  double t2319;
  double t2730;
  double t2781;
  double t2786;
  double t2812;
  double t2841;
  double t2857;
  double t2927;
  double t2934;
  double t2940;
  double t2957;
  double t2991;
  double t3004;
  double t3009;
  double t3010;
  double t3013;
  double t2946;
  double t3018;
  double t3020;
  double t3042;
  double t3056;
  double t3068;
  double t3040;
  double t3073;
  double t3081;
  double t3104;
  double t3109;
  double t3122;
  double t3096;
  double t3138;
  double t3148;
  double t3159;
  double t3160;
  double t3161;
  double t2240;
  double t2291;
  double t2302;
  double t2332;
  double t2364;
  double t2367;
  double t2805;
  double t2860;
  double t2861;
  double t2874;
  double t2879;
  double t2883;
  double t3153;
  double t3162;
  double t3165;
  double t3180;
  double t3187;
  double t3192;
  t833 = Cos(var1[5]);
  t1198 = Sin(var1[3]);
  t507 = Cos(var1[3]);
  t1150 = Sin(var1[4]);
  t1518 = Sin(var1[5]);
  t1874 = Sin(var1[13]);
  t1196 = t507*t833*t1150;
  t1562 = t1198*t1518;
  t1567 = t1196 + t1562;
  t491 = Cos(var1[13]);
  t1901 = -1.*t833*t1198;
  t1986 = t507*t1150*t1518;
  t2023 = t1901 + t1986;
  t2051 = Cos(var1[15]);
  t1637 = t491*t1567;
  t2036 = -1.*t1874*t2023;
  t2044 = t1637 + t2036;
  t341 = Sin(var1[15]);
  t2052 = Cos(var1[14]);
  t2054 = Cos(var1[4]);
  t2057 = t2052*t507*t2054;
  t2059 = Sin(var1[14]);
  t2067 = t1874*t1567;
  t2072 = t491*t2023;
  t2082 = t2067 + t2072;
  t2102 = t2059*t2082;
  t2113 = t2057 + t2102;
  t2137 = Cos(var1[16]);
  t2045 = t341*t2044;
  t2117 = t2051*t2113;
  t2119 = t2045 + t2117;
  t211 = Sin(var1[16]);
  t2139 = t2051*t2044;
  t2141 = -1.*t341*t2113;
  t2161 = t2139 + t2141;
  t2193 = Cos(var1[17]);
  t2134 = -1.*t211*t2119;
  t2173 = t2137*t2161;
  t2186 = t2134 + t2173;
  t206 = Sin(var1[17]);
  t2211 = t2137*t2119;
  t2216 = t211*t2161;
  t2218 = t2211 + t2216;
  t2260 = Cos(var1[18]);
  t2188 = t206*t2186;
  t2225 = t2193*t2218;
  t2229 = t2188 + t2225;
  t193 = Sin(var1[18]);
  t2273 = t2193*t2186;
  t2282 = -1.*t206*t2218;
  t2288 = t2273 + t2282;
  t127 = Cos(var1[19]);
  t2384 = t833*t1198*t1150;
  t2411 = -1.*t507*t1518;
  t2416 = t2384 + t2411;
  t2458 = t507*t833;
  t2461 = t1198*t1150*t1518;
  t2471 = t2458 + t2461;
  t2440 = t491*t2416;
  t2476 = -1.*t1874*t2471;
  t2478 = t2440 + t2476;
  t2534 = t2052*t2054*t1198;
  t2550 = t1874*t2416;
  t2552 = t491*t2471;
  t2563 = t2550 + t2552;
  t2570 = t2059*t2563;
  t2573 = t2534 + t2570;
  t2528 = t341*t2478;
  t2578 = t2051*t2573;
  t2597 = t2528 + t2578;
  t2650 = t2051*t2478;
  t2678 = -1.*t341*t2573;
  t2690 = t2650 + t2678;
  t2614 = -1.*t211*t2597;
  t2715 = t2137*t2690;
  t2722 = t2614 + t2715;
  t2733 = t2137*t2597;
  t2738 = t211*t2690;
  t2745 = t2733 + t2738;
  t2319 = Sin(var1[19]);
  t2730 = t206*t2722;
  t2781 = t2193*t2745;
  t2786 = t2730 + t2781;
  t2812 = t2193*t2722;
  t2841 = -1.*t206*t2745;
  t2857 = t2812 + t2841;
  t2927 = t491*t2054*t833;
  t2934 = -1.*t2054*t1874*t1518;
  t2940 = t2927 + t2934;
  t2957 = -1.*t2052*t1150;
  t2991 = t2054*t833*t1874;
  t3004 = t491*t2054*t1518;
  t3009 = t2991 + t3004;
  t3010 = t2059*t3009;
  t3013 = t2957 + t3010;
  t2946 = t341*t2940;
  t3018 = t2051*t3013;
  t3020 = t2946 + t3018;
  t3042 = t2051*t2940;
  t3056 = -1.*t341*t3013;
  t3068 = t3042 + t3056;
  t3040 = -1.*t211*t3020;
  t3073 = t2137*t3068;
  t3081 = t3040 + t3073;
  t3104 = t2137*t3020;
  t3109 = t211*t3068;
  t3122 = t3104 + t3109;
  t3096 = t206*t3081;
  t3138 = t2193*t3122;
  t3148 = t3096 + t3138;
  t3159 = t2193*t3081;
  t3160 = -1.*t206*t3122;
  t3161 = t3159 + t3160;
  t2240 = -1.*t193*t2229;
  t2291 = t2260*t2288;
  t2302 = t2240 + t2291;
  t2332 = t2260*t2229;
  t2364 = t193*t2288;
  t2367 = t2332 + t2364;
  t2805 = -1.*t193*t2786;
  t2860 = t2260*t2857;
  t2861 = t2805 + t2860;
  t2874 = t2260*t2786;
  t2879 = t193*t2857;
  t2883 = t2874 + t2879;
  t3153 = -1.*t193*t3148;
  t3162 = t2260*t3161;
  t3165 = t3153 + t3162;
  t3180 = t2260*t3148;
  t3187 = t193*t3161;
  t3192 = t3180 + t3187;
  p_output1[0]=-1.*t127*t2302 + t2319*t2367;
  p_output1[1]=-1.*t127*t2861 + t2319*t2883;
  p_output1[2]=-1.*t127*t3165 + t2319*t3192;
  p_output1[3]=t2302*t2319 + t127*t2367;
  p_output1[4]=t2319*t2861 + t127*t2883;
  p_output1[5]=t2319*t3165 + t127*t3192;
  p_output1[6]=-1.*t2052*t2082 + t2054*t2059*t507;
  p_output1[7]=t1198*t2054*t2059 - 1.*t2052*t2563;
  p_output1[8]=-1.*t1150*t2059 - 1.*t2052*t3009;
}



void R_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
