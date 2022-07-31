/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeJoint_src.h"

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
  double t1187;
  double t1673;
  double t1117;
  double t1223;
  double t1695;
  double t2087;
  double t1631;
  double t1863;
  double t1886;
  double t869;
  double t2104;
  double t2106;
  double t2107;
  double t2121;
  double t1941;
  double t2108;
  double t2111;
  double t805;
  double t2131;
  double t2136;
  double t2162;
  double t2186;
  double t2192;
  double t2210;
  double t2217;
  double t2221;
  double t2224;
  double t2233;
  double t2118;
  double t2226;
  double t2229;
  double t754;
  double t2238;
  double t2262;
  double t2265;
  double t2291;
  double t2231;
  double t2267;
  double t2274;
  double t657;
  double t2303;
  double t2304;
  double t2364;
  double t2388;
  double t2290;
  double t2367;
  double t2371;
  double t638;
  double t2415;
  double t2420;
  double t2442;
  double t502;
  double t2566;
  double t2569;
  double t2630;
  double t2637;
  double t2645;
  double t2658;
  double t2636;
  double t2663;
  double t2674;
  double t2704;
  double t2720;
  double t2722;
  double t2737;
  double t2740;
  double t2745;
  double t2697;
  double t2750;
  double t2757;
  double t2768;
  double t2769;
  double t2779;
  double t2767;
  double t2787;
  double t2788;
  double t2809;
  double t2847;
  double t2867;
  double t2485;
  double t2793;
  double t2871;
  double t2872;
  double t2893;
  double t2899;
  double t2901;
  double t3006;
  double t3027;
  double t3028;
  double t3033;
  double t3054;
  double t3061;
  double t3065;
  double t3068;
  double t3074;
  double t3029;
  double t3087;
  double t3097;
  double t3110;
  double t3136;
  double t3138;
  double t3103;
  double t3142;
  double t3144;
  double t3160;
  double t3168;
  double t3170;
  double t3152;
  double t3179;
  double t3193;
  double t3199;
  double t3223;
  double t3224;
  double t2382;
  double t2453;
  double t2465;
  double t2492;
  double t2494;
  double t2504;
  double t2878;
  double t2903;
  double t2922;
  double t2940;
  double t2964;
  double t2986;
  double t3197;
  double t3236;
  double t3258;
  double t3266;
  double t3270;
  double t3279;
  t1187 = Cos(var1[5]);
  t1673 = Sin(var1[3]);
  t1117 = Cos(var1[3]);
  t1223 = Sin(var1[4]);
  t1695 = Sin(var1[5]);
  t2087 = Sin(var1[13]);
  t1631 = t1117*t1187*t1223;
  t1863 = t1673*t1695;
  t1886 = t1631 + t1863;
  t869 = Cos(var1[13]);
  t2104 = -1.*t1187*t1673;
  t2106 = t1117*t1223*t1695;
  t2107 = t2104 + t2106;
  t2121 = Cos(var1[15]);
  t1941 = t869*t1886;
  t2108 = -1.*t2087*t2107;
  t2111 = t1941 + t2108;
  t805 = Sin(var1[15]);
  t2131 = Cos(var1[14]);
  t2136 = Cos(var1[4]);
  t2162 = t2131*t1117*t2136;
  t2186 = Sin(var1[14]);
  t2192 = t2087*t1886;
  t2210 = t869*t2107;
  t2217 = t2192 + t2210;
  t2221 = t2186*t2217;
  t2224 = t2162 + t2221;
  t2233 = Cos(var1[16]);
  t2118 = t805*t2111;
  t2226 = t2121*t2224;
  t2229 = t2118 + t2226;
  t754 = Sin(var1[16]);
  t2238 = t2121*t2111;
  t2262 = -1.*t805*t2224;
  t2265 = t2238 + t2262;
  t2291 = Cos(var1[17]);
  t2231 = -1.*t754*t2229;
  t2267 = t2233*t2265;
  t2274 = t2231 + t2267;
  t657 = Sin(var1[17]);
  t2303 = t2233*t2229;
  t2304 = t754*t2265;
  t2364 = t2303 + t2304;
  t2388 = Cos(var1[18]);
  t2290 = t657*t2274;
  t2367 = t2291*t2364;
  t2371 = t2290 + t2367;
  t638 = Sin(var1[18]);
  t2415 = t2291*t2274;
  t2420 = -1.*t657*t2364;
  t2442 = t2415 + t2420;
  t502 = Cos(var1[19]);
  t2566 = t1187*t1673*t1223;
  t2569 = -1.*t1117*t1695;
  t2630 = t2566 + t2569;
  t2637 = t1117*t1187;
  t2645 = t1673*t1223*t1695;
  t2658 = t2637 + t2645;
  t2636 = t869*t2630;
  t2663 = -1.*t2087*t2658;
  t2674 = t2636 + t2663;
  t2704 = t2131*t2136*t1673;
  t2720 = t2087*t2630;
  t2722 = t869*t2658;
  t2737 = t2720 + t2722;
  t2740 = t2186*t2737;
  t2745 = t2704 + t2740;
  t2697 = t805*t2674;
  t2750 = t2121*t2745;
  t2757 = t2697 + t2750;
  t2768 = t2121*t2674;
  t2769 = -1.*t805*t2745;
  t2779 = t2768 + t2769;
  t2767 = -1.*t754*t2757;
  t2787 = t2233*t2779;
  t2788 = t2767 + t2787;
  t2809 = t2233*t2757;
  t2847 = t754*t2779;
  t2867 = t2809 + t2847;
  t2485 = Sin(var1[19]);
  t2793 = t657*t2788;
  t2871 = t2291*t2867;
  t2872 = t2793 + t2871;
  t2893 = t2291*t2788;
  t2899 = -1.*t657*t2867;
  t2901 = t2893 + t2899;
  t3006 = t869*t2136*t1187;
  t3027 = -1.*t2136*t2087*t1695;
  t3028 = t3006 + t3027;
  t3033 = -1.*t2131*t1223;
  t3054 = t2136*t1187*t2087;
  t3061 = t869*t2136*t1695;
  t3065 = t3054 + t3061;
  t3068 = t2186*t3065;
  t3074 = t3033 + t3068;
  t3029 = t805*t3028;
  t3087 = t2121*t3074;
  t3097 = t3029 + t3087;
  t3110 = t2121*t3028;
  t3136 = -1.*t805*t3074;
  t3138 = t3110 + t3136;
  t3103 = -1.*t754*t3097;
  t3142 = t2233*t3138;
  t3144 = t3103 + t3142;
  t3160 = t2233*t3097;
  t3168 = t754*t3138;
  t3170 = t3160 + t3168;
  t3152 = t657*t3144;
  t3179 = t2291*t3170;
  t3193 = t3152 + t3179;
  t3199 = t2291*t3144;
  t3223 = -1.*t657*t3170;
  t3224 = t3199 + t3223;
  t2382 = -1.*t638*t2371;
  t2453 = t2388*t2442;
  t2465 = t2382 + t2453;
  t2492 = t2388*t2371;
  t2494 = t638*t2442;
  t2504 = t2492 + t2494;
  t2878 = -1.*t638*t2872;
  t2903 = t2388*t2901;
  t2922 = t2878 + t2903;
  t2940 = t2388*t2872;
  t2964 = t638*t2901;
  t2986 = t2940 + t2964;
  t3197 = -1.*t638*t3193;
  t3236 = t2388*t3224;
  t3258 = t3197 + t3236;
  t3266 = t2388*t3193;
  t3270 = t638*t3224;
  t3279 = t3266 + t3270;
  p_output1[0]=t2485*t2504 - 1.*t2465*t502;
  p_output1[1]=t2485*t2986 - 1.*t2922*t502;
  p_output1[2]=t2485*t3279 - 1.*t3258*t502;
  p_output1[3]=t2465*t2485 + t2504*t502;
  p_output1[4]=t2485*t2922 + t2986*t502;
  p_output1[5]=t2485*t3258 + t3279*t502;
  p_output1[6]=t1117*t2136*t2186 - 1.*t2131*t2217;
  p_output1[7]=t1673*t2136*t2186 - 1.*t2131*t2737;
  p_output1[8]=-1.*t1223*t2186 - 1.*t2131*t3065;
}



void R_RightToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
