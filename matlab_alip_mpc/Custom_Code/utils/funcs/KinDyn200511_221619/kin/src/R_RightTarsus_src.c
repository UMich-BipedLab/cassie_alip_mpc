/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightTarsus_src.h"

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
  double t1240;
  double t1483;
  double t1147;
  double t1341;
  double t1495;
  double t1850;
  double t1343;
  double t1514;
  double t1516;
  double t1104;
  double t1942;
  double t1944;
  double t1948;
  double t1958;
  double t1561;
  double t1949;
  double t1951;
  double t1081;
  double t1962;
  double t1972;
  double t1975;
  double t1978;
  double t2047;
  double t2065;
  double t2068;
  double t2084;
  double t2087;
  double t2116;
  double t1955;
  double t2088;
  double t2090;
  double t1071;
  double t2117;
  double t2120;
  double t2124;
  double t2187;
  double t2101;
  double t2154;
  double t2168;
  double t1015;
  double t2192;
  double t2199;
  double t2207;
  double t24;
  double t2374;
  double t2414;
  double t2417;
  double t2448;
  double t2464;
  double t2471;
  double t2422;
  double t2480;
  double t2500;
  double t2561;
  double t2566;
  double t2570;
  double t2590;
  double t2601;
  double t2606;
  double t2551;
  double t2611;
  double t2617;
  double t2684;
  double t2701;
  double t2732;
  double t2267;
  double t2649;
  double t2733;
  double t2744;
  double t2751;
  double t2821;
  double t2826;
  double t2916;
  double t2917;
  double t2930;
  double t2946;
  double t2972;
  double t2976;
  double t2991;
  double t2993;
  double t3003;
  double t2932;
  double t3010;
  double t3043;
  double t3069;
  double t3093;
  double t3098;
  double t3048;
  double t3104;
  double t3105;
  double t3128;
  double t3132;
  double t3154;
  double t2186;
  double t2227;
  double t2238;
  double t2278;
  double t2286;
  double t2304;
  double t2745;
  double t2827;
  double t2828;
  double t2834;
  double t2835;
  double t2839;
  double t3114;
  double t3156;
  double t3170;
  double t3191;
  double t3202;
  double t3206;
  t1240 = Cos(var1[5]);
  t1483 = Sin(var1[3]);
  t1147 = Cos(var1[3]);
  t1341 = Sin(var1[4]);
  t1495 = Sin(var1[5]);
  t1850 = Sin(var1[13]);
  t1343 = t1147*t1240*t1341;
  t1514 = t1483*t1495;
  t1516 = t1343 + t1514;
  t1104 = Cos(var1[13]);
  t1942 = -1.*t1240*t1483;
  t1944 = t1147*t1341*t1495;
  t1948 = t1942 + t1944;
  t1958 = Cos(var1[15]);
  t1561 = t1104*t1516;
  t1949 = -1.*t1850*t1948;
  t1951 = t1561 + t1949;
  t1081 = Sin(var1[15]);
  t1962 = Cos(var1[14]);
  t1972 = Cos(var1[4]);
  t1975 = t1962*t1147*t1972;
  t1978 = Sin(var1[14]);
  t2047 = t1850*t1516;
  t2065 = t1104*t1948;
  t2068 = t2047 + t2065;
  t2084 = t1978*t2068;
  t2087 = t1975 + t2084;
  t2116 = Cos(var1[16]);
  t1955 = t1081*t1951;
  t2088 = t1958*t2087;
  t2090 = t1955 + t2088;
  t1071 = Sin(var1[16]);
  t2117 = t1958*t1951;
  t2120 = -1.*t1081*t2087;
  t2124 = t2117 + t2120;
  t2187 = Cos(var1[17]);
  t2101 = -1.*t1071*t2090;
  t2154 = t2116*t2124;
  t2168 = t2101 + t2154;
  t1015 = Sin(var1[17]);
  t2192 = t2116*t2090;
  t2199 = t1071*t2124;
  t2207 = t2192 + t2199;
  t24 = Sin(var1[18]);
  t2374 = t1240*t1483*t1341;
  t2414 = -1.*t1147*t1495;
  t2417 = t2374 + t2414;
  t2448 = t1147*t1240;
  t2464 = t1483*t1341*t1495;
  t2471 = t2448 + t2464;
  t2422 = t1104*t2417;
  t2480 = -1.*t1850*t2471;
  t2500 = t2422 + t2480;
  t2561 = t1962*t1972*t1483;
  t2566 = t1850*t2417;
  t2570 = t1104*t2471;
  t2590 = t2566 + t2570;
  t2601 = t1978*t2590;
  t2606 = t2561 + t2601;
  t2551 = t1081*t2500;
  t2611 = t1958*t2606;
  t2617 = t2551 + t2611;
  t2684 = t1958*t2500;
  t2701 = -1.*t1081*t2606;
  t2732 = t2684 + t2701;
  t2267 = Cos(var1[18]);
  t2649 = -1.*t1071*t2617;
  t2733 = t2116*t2732;
  t2744 = t2649 + t2733;
  t2751 = t2116*t2617;
  t2821 = t1071*t2732;
  t2826 = t2751 + t2821;
  t2916 = t1104*t1972*t1240;
  t2917 = -1.*t1972*t1850*t1495;
  t2930 = t2916 + t2917;
  t2946 = -1.*t1962*t1341;
  t2972 = t1972*t1240*t1850;
  t2976 = t1104*t1972*t1495;
  t2991 = t2972 + t2976;
  t2993 = t1978*t2991;
  t3003 = t2946 + t2993;
  t2932 = t1081*t2930;
  t3010 = t1958*t3003;
  t3043 = t2932 + t3010;
  t3069 = t1958*t2930;
  t3093 = -1.*t1081*t3003;
  t3098 = t3069 + t3093;
  t3048 = -1.*t1071*t3043;
  t3104 = t2116*t3098;
  t3105 = t3048 + t3104;
  t3128 = t2116*t3043;
  t3132 = t1071*t3098;
  t3154 = t3128 + t3132;
  t2186 = t1015*t2168;
  t2227 = t2187*t2207;
  t2238 = t2186 + t2227;
  t2278 = t2187*t2168;
  t2286 = -1.*t1015*t2207;
  t2304 = t2278 + t2286;
  t2745 = t1015*t2744;
  t2827 = t2187*t2826;
  t2828 = t2745 + t2827;
  t2834 = t2187*t2744;
  t2835 = -1.*t1015*t2826;
  t2839 = t2834 + t2835;
  t3114 = t1015*t3105;
  t3156 = t2187*t3154;
  t3170 = t3114 + t3156;
  t3191 = t2187*t3105;
  t3202 = -1.*t1015*t3154;
  t3206 = t3191 + t3202;
  p_output1[0]=-1.*t2267*t2304 + t2238*t24;
  p_output1[1]=t24*t2828 - 1.*t2267*t2839;
  p_output1[2]=t24*t3170 - 1.*t2267*t3206;
  p_output1[3]=t2238*t2267 + t2304*t24;
  p_output1[4]=t2267*t2828 + t24*t2839;
  p_output1[5]=t2267*t3170 + t24*t3206;
  p_output1[6]=t1147*t1972*t1978 - 1.*t1962*t2068;
  p_output1[7]=t1483*t1972*t1978 - 1.*t1962*t2590;
  p_output1[8]=-1.*t1341*t1978 - 1.*t1962*t2991;
}



void R_RightTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
