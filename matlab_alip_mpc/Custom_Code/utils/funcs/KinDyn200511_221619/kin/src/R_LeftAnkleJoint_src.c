/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftAnkleJoint_src.h"

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
  double t1063;
  double t1279;
  double t1527;
  double t1469;
  double t1774;
  double t1271;
  double t1846;
  double t1867;
  double t1877;
  double t1515;
  double t1813;
  double t1827;
  double t1887;
  double t265;
  double t1960;
  double t1967;
  double t1968;
  double t1096;
  double t1123;
  double t1179;
  double t1845;
  double t1896;
  double t1907;
  double t1919;
  double t1927;
  double t1928;
  double t1970;
  double t2003;
  double t1952;
  double t1981;
  double t1986;
  double t160;
  double t2004;
  double t2025;
  double t2039;
  double t2086;
  double t1996;
  double t2058;
  double t2075;
  double t145;
  double t2091;
  double t2126;
  double t2146;
  double t29;
  double t2316;
  double t2319;
  double t2341;
  double t2296;
  double t2298;
  double t2300;
  double t2467;
  double t2468;
  double t2477;
  double t2254;
  double t2308;
  double t2352;
  double t2371;
  double t2419;
  double t2432;
  double t2448;
  double t2515;
  double t2525;
  double t2548;
  double t2561;
  double t2575;
  double t2183;
  double t2547;
  double t2576;
  double t2600;
  double t2634;
  double t2635;
  double t2661;
  double t2827;
  double t2834;
  double t2850;
  double t2789;
  double t2795;
  double t2805;
  double t2809;
  double t2817;
  double t2822;
  double t2823;
  double t2856;
  double t2879;
  double t2918;
  double t2926;
  double t2930;
  double t2893;
  double t2936;
  double t2951;
  double t2982;
  double t3011;
  double t3020;
  double t2085;
  double t2148;
  double t2152;
  double t2185;
  double t2192;
  double t2197;
  double t2625;
  double t2682;
  double t2702;
  double t2712;
  double t2714;
  double t2751;
  double t2962;
  double t3023;
  double t3026;
  double t3039;
  double t3047;
  double t3054;
  t1063 = Cos(var1[3]);
  t1279 = Cos(var1[5]);
  t1527 = Sin(var1[4]);
  t1469 = Sin(var1[3]);
  t1774 = Sin(var1[5]);
  t1271 = Cos(var1[6]);
  t1846 = t1063*t1279*t1527;
  t1867 = t1469*t1774;
  t1877 = t1846 + t1867;
  t1515 = -1.*t1279*t1469;
  t1813 = t1063*t1527*t1774;
  t1827 = t1515 + t1813;
  t1887 = Sin(var1[6]);
  t265 = Cos(var1[8]);
  t1960 = t1271*t1877;
  t1967 = -1.*t1827*t1887;
  t1968 = t1960 + t1967;
  t1096 = Cos(var1[4]);
  t1123 = Cos(var1[7]);
  t1179 = t1063*t1096*t1123;
  t1845 = t1271*t1827;
  t1896 = t1877*t1887;
  t1907 = t1845 + t1896;
  t1919 = Sin(var1[7]);
  t1927 = t1907*t1919;
  t1928 = t1179 + t1927;
  t1970 = Sin(var1[8]);
  t2003 = Cos(var1[9]);
  t1952 = t265*t1928;
  t1981 = t1968*t1970;
  t1986 = t1952 + t1981;
  t160 = Sin(var1[9]);
  t2004 = t265*t1968;
  t2025 = -1.*t1928*t1970;
  t2039 = t2004 + t2025;
  t2086 = Cos(var1[10]);
  t1996 = -1.*t160*t1986;
  t2058 = t2003*t2039;
  t2075 = t1996 + t2058;
  t145 = Sin(var1[10]);
  t2091 = t2003*t1986;
  t2126 = t160*t2039;
  t2146 = t2091 + t2126;
  t29 = Sin(var1[11]);
  t2316 = t1279*t1469*t1527;
  t2319 = -1.*t1063*t1774;
  t2341 = t2316 + t2319;
  t2296 = t1063*t1279;
  t2298 = t1469*t1527*t1774;
  t2300 = t2296 + t2298;
  t2467 = t1271*t2341;
  t2468 = -1.*t2300*t1887;
  t2477 = t2467 + t2468;
  t2254 = t1096*t1123*t1469;
  t2308 = t1271*t2300;
  t2352 = t2341*t1887;
  t2371 = t2308 + t2352;
  t2419 = t2371*t1919;
  t2432 = t2254 + t2419;
  t2448 = t265*t2432;
  t2515 = t2477*t1970;
  t2525 = t2448 + t2515;
  t2548 = t265*t2477;
  t2561 = -1.*t2432*t1970;
  t2575 = t2548 + t2561;
  t2183 = Cos(var1[11]);
  t2547 = -1.*t160*t2525;
  t2576 = t2003*t2575;
  t2600 = t2547 + t2576;
  t2634 = t2003*t2525;
  t2635 = t160*t2575;
  t2661 = t2634 + t2635;
  t2827 = t1096*t1279*t1271;
  t2834 = -1.*t1096*t1774*t1887;
  t2850 = t2827 + t2834;
  t2789 = -1.*t1123*t1527;
  t2795 = t1096*t1271*t1774;
  t2805 = t1096*t1279*t1887;
  t2809 = t2795 + t2805;
  t2817 = t2809*t1919;
  t2822 = t2789 + t2817;
  t2823 = t265*t2822;
  t2856 = t2850*t1970;
  t2879 = t2823 + t2856;
  t2918 = t265*t2850;
  t2926 = -1.*t2822*t1970;
  t2930 = t2918 + t2926;
  t2893 = -1.*t160*t2879;
  t2936 = t2003*t2930;
  t2951 = t2893 + t2936;
  t2982 = t2003*t2879;
  t3011 = t160*t2930;
  t3020 = t2982 + t3011;
  t2085 = t145*t2075;
  t2148 = t2086*t2146;
  t2152 = t2085 + t2148;
  t2185 = t2086*t2075;
  t2192 = -1.*t145*t2146;
  t2197 = t2185 + t2192;
  t2625 = t145*t2600;
  t2682 = t2086*t2661;
  t2702 = t2625 + t2682;
  t2712 = t2086*t2600;
  t2714 = -1.*t145*t2661;
  t2751 = t2712 + t2714;
  t2962 = t145*t2951;
  t3023 = t2086*t3020;
  t3026 = t2962 + t3023;
  t3039 = t2086*t2951;
  t3047 = -1.*t145*t3020;
  t3054 = t3039 + t3047;
  p_output1[0]=-1.*t2183*t2197 + t2152*t29;
  p_output1[1]=-1.*t2183*t2751 + t2702*t29;
  p_output1[2]=t29*t3026 - 1.*t2183*t3054;
  p_output1[3]=t2152*t2183 + t2197*t29;
  p_output1[4]=t2183*t2702 + t2751*t29;
  p_output1[5]=t2183*t3026 + t29*t3054;
  p_output1[6]=-1.*t1123*t1907 + t1063*t1096*t1919;
  p_output1[7]=t1096*t1469*t1919 - 1.*t1123*t2371;
  p_output1[8]=-1.*t1527*t1919 - 1.*t1123*t2809;
}



void R_LeftAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
