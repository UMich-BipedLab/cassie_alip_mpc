/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightThighJoint_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t123;
  double t126;
  double t380;
  double t516;
  double t108;
  double t731;
  double t46;
  double t1014;
  double t1875;
  double t1219;
  double t1007;
  double t1851;
  double t1931;
  double t1943;
  double t1974;
  double t1988;
  double t1997;
  double t1008;
  double t1973;
  double t2360;
  double t2382;
  double t2388;
  double t2122;
  double t2552;
  double t2560;
  double t2324;
  double t2406;
  double t2428;
  double t2811;
  double t2818;
  double t2835;
  double t2852;
  double t2873;
  double t2876;
  double t2967;
  double t3215;
  double t3216;
  double t3229;
  double t3231;
  double t3346;
  double t3356;
  double t3369;
  double t3258;
  double t2683;
  double t2694;
  double t2730;
  double t3539;
  double t3558;
  double t3340;
  double t3377;
  double t3393;
  double t3915;
  double t3935;
  double t3961;
  double t3973;
  double t3975;
  double t3980;
  double t3985;
  double t3995;
  double t3996;
  double t3855;
  double t3856;
  double t3866;
  double t499;
  double t732;
  double t788;
  double t1059;
  double t1263;
  double t1451;
  double t1583;
  double t1681;
  double t1705;
  double t2038;
  double t2077;
  double t2152;
  double t2208;
  double t2321;
  double t2435;
  double t2437;
  double t2495;
  double t2530;
  double t2845;
  double t2890;
  double t2898;
  double t2920;
  double t2935;
  double t2974;
  double t2983;
  double t2988;
  double t3034;
  double t3037;
  double t3043;
  double t3061;
  double t3072;
  double t3090;
  double t3098;
  double t3106;
  double t3126;
  double t3236;
  double t3285;
  double t3293;
  double t3332;
  double t3407;
  double t3426;
  double t3513;
  double t3528;
  double t2674;
  double t2765;
  double t2786;
  double t3805;
  double t3806;
  double t3810;
  double t3824;
  double t3887;
  double t3893;
  double t4382;
  double t4383;
  double t4394;
  double t4038;
  double t4046;
  double t4047;
  double t4068;
  double t4069;
  double t4074;
  double t4086;
  double t4089;
  double t4091;
  double t4093;
  double t4094;
  double t4101;
  double t4733;
  double t4738;
  double t4763;
  double t4768;
  double t4907;
  double t4910;
  double t4150;
  double t4155;
  double t4163;
  double t4787;
  double t4788;
  double t4806;
  double t4740;
  double t4753;
  double t4756;
  double t4911;
  double t4912;
  double t4938;
  double t4841;
  double t4853;
  double t4882;
  double t4969;
  double t4973;
  double t4974;
  double t4167;
  double t4186;
  double t4188;
  double t4775;
  double t4212;
  double t4217;
  double t4221;
  double t4226;
  double t4227;
  double t4244;
  double t4773;
  double t4778;
  double t4251;
  double t4252;
  double t4253;
  double t4257;
  double t4263;
  double t4268;
  double t4270;
  double t4272;
  double t4288;
  double t5087;
  double t5089;
  double t5090;
  double t5102;
  double t5105;
  double t5201;
  double t5202;
  double t5207;
  double t5209;
  double t5212;
  double t4303;
  double t4304;
  double t4315;
  double t5291;
  double t5299;
  double t5304;
  double t5310;
  double t5313;
  double t4325;
  double t4331;
  double t4336;
  double t5894;
  double t5898;
  double t5899;
  double t5900;
  double t5902;
  double t5905;
  double t5906;
  double t5907;
  double t5908;
  double t4413;
  double t4420;
  double t4428;
  double t4449;
  double t4471;
  double t4473;
  t123 = Cos(var1[3]);
  t126 = Cos(var1[4]);
  t380 = Cos(var1[5]);
  t516 = Sin(var1[13]);
  t108 = Cos(var1[13]);
  t731 = Sin(var1[5]);
  t46 = Cos(var1[15]);
  t1014 = Sin(var1[4]);
  t1875 = Sin(var1[3]);
  t1219 = Sin(var1[14]);
  t1007 = Sin(var1[15]);
  t1851 = t123*t380*t1014;
  t1931 = t1875*t731;
  t1943 = t1851 + t1931;
  t1974 = t380*t1875;
  t1988 = -1.*t123*t1014*t731;
  t1997 = t1974 + t1988;
  t1008 = Cos(var1[14]);
  t1973 = -1.*t516*t1943;
  t2360 = -1.*t380*t1875;
  t2382 = t123*t1014*t731;
  t2388 = t2360 + t2382;
  t2122 = t108*t1943;
  t2552 = -1.*t516*t2388;
  t2560 = t2122 + t2552;
  t2324 = t516*t1943;
  t2406 = t108*t2388;
  t2428 = t2324 + t2406;
  t2811 = -1.*t380*t1875*t1014;
  t2818 = t123*t731;
  t2835 = t2811 + t2818;
  t2852 = -1.*t123*t380;
  t2873 = -1.*t1875*t1014*t731;
  t2876 = t2852 + t2873;
  t2967 = t108*t2876;
  t3215 = t380*t1875*t1014;
  t3216 = -1.*t123*t731;
  t3229 = t3215 + t3216;
  t3231 = -1.*t516*t3229;
  t3346 = t123*t380;
  t3356 = t1875*t1014*t731;
  t3369 = t3346 + t3356;
  t3258 = t108*t3229;
  t2683 = t1008*t123*t126;
  t2694 = t1219*t2428;
  t2730 = t2683 + t2694;
  t3539 = -1.*t516*t3369;
  t3558 = t3258 + t3539;
  t3340 = t516*t3229;
  t3377 = t108*t3369;
  t3393 = t3340 + t3377;
  t3915 = -1.*t126*t380*t516;
  t3935 = -1.*t108*t126*t731;
  t3961 = t3915 + t3935;
  t3973 = -1.*t46*t3961;
  t3975 = t108*t126*t380;
  t3980 = -1.*t126*t516*t731;
  t3985 = t3975 + t3980;
  t3995 = t1219*t1007*t3985;
  t3996 = t3973 + t3995;
  t3855 = t126*t380*t516;
  t3856 = t108*t126*t731;
  t3866 = t3855 + t3856;
  t499 = t108*t123*t126*t380;
  t732 = -1.*t123*t126*t516*t731;
  t788 = t499 + t732;
  t1059 = -1.*t1008*t123*t1014;
  t1263 = t123*t126*t380*t516;
  t1451 = t108*t123*t126*t731;
  t1583 = t1263 + t1451;
  t1681 = t1219*t1583;
  t1705 = t1059 + t1681;
  t2038 = t108*t1997;
  t2077 = t1973 + t2038;
  t2152 = t516*t1997;
  t2208 = t2122 + t2152;
  t2321 = -1.*t123*t126*t1219;
  t2435 = t1008*t2428;
  t2437 = t2321 + t2435;
  t2495 = -1.*t108*t2388;
  t2530 = t1973 + t2495;
  t2845 = t108*t2835;
  t2890 = -1.*t516*t2876;
  t2898 = t2845 + t2890;
  t2920 = -1.*t1008*t126*t1875;
  t2935 = t516*t2835;
  t2974 = t2935 + t2967;
  t2983 = t1219*t2974;
  t2988 = t2920 + t2983;
  t3034 = t108*t126*t380*t1875;
  t3037 = -1.*t126*t516*t1875*t731;
  t3043 = t3034 + t3037;
  t3061 = -1.*t1008*t1875*t1014;
  t3072 = t126*t380*t516*t1875;
  t3090 = t108*t126*t1875*t731;
  t3098 = t3072 + t3090;
  t3106 = t1219*t3098;
  t3126 = t3061 + t3106;
  t3236 = t3231 + t2967;
  t3285 = t516*t2876;
  t3293 = t3258 + t3285;
  t3332 = -1.*t126*t1219*t1875;
  t3407 = t1008*t3393;
  t3426 = t3332 + t3407;
  t3513 = -1.*t108*t3369;
  t3528 = t3231 + t3513;
  t2674 = t1007*t2560;
  t2765 = t46*t2730;
  t2786 = t2674 + t2765;
  t3805 = t1008*t126*t1875;
  t3806 = t1219*t3393;
  t3810 = t3805 + t3806;
  t3824 = t1219*t1014;
  t3887 = t1008*t3866;
  t3893 = t3824 + t3887;
  t4382 = t1007*t3961;
  t4383 = t46*t1219*t3985;
  t4394 = t4382 + t4383;
  t4038 = -1.*t1008*t1014;
  t4046 = t1219*t3866;
  t4047 = t4038 + t4046;
  t4068 = -1.*t108*t380*t1014;
  t4069 = t516*t1014*t731;
  t4074 = t4068 + t4069;
  t4086 = -1.*t1008*t126;
  t4089 = -1.*t380*t516*t1014;
  t4091 = -1.*t108*t1014*t731;
  t4093 = t4089 + t4091;
  t4094 = t1219*t4093;
  t4101 = t4086 + t4094;
  t4733 = -1.*t108;
  t4738 = 1. + t4733;
  t4763 = -1.*t1008;
  t4768 = 1. + t4763;
  t4907 = -1.*t46;
  t4910 = 1. + t4907;
  t4150 = t1007*t788;
  t4155 = t46*t1705;
  t4163 = t4150 + t4155;
  t4787 = -0.135*t4738;
  t4788 = 0.07996*t516;
  t4806 = 0. + t4787 + t4788;
  t4740 = 0.07996*t4738;
  t4753 = 0.135*t516;
  t4756 = 0. + t4740 + t4753;
  t4911 = -0.01004*t4910;
  t4912 = 0.08055*t1007;
  t4938 = 0. + t4911 + t4912;
  t4841 = -0.135*t4768;
  t4853 = 0.08055*t1219;
  t4882 = 0. + t4841 + t4853;
  t4969 = -0.08055*t4910;
  t4973 = -0.01004*t1007;
  t4974 = 0. + t4969 + t4973;
  t4167 = t1007*t2077;
  t4186 = t46*t1219*t2208;
  t4188 = t4167 + t4186;
  t4775 = -0.135*t1219;
  t4212 = t1007*t2530;
  t4217 = t46*t1219*t2560;
  t4221 = t4212 + t4217;
  t4226 = t46*t2560;
  t4227 = -1.*t1007*t2730;
  t4244 = t4226 + t4227;
  t4773 = -0.08055*t4768;
  t4778 = 0. + t4773 + t4775;
  t4251 = t1007*t2898;
  t4252 = t46*t2988;
  t4253 = t4251 + t4252;
  t4257 = t1007*t3043;
  t4263 = t46*t3126;
  t4268 = t4257 + t4263;
  t4270 = t1007*t3236;
  t4272 = t46*t1219*t3293;
  t4288 = t4270 + t4272;
  t5087 = -0.135*t1008;
  t5089 = -0.08055*t1219;
  t5090 = t5087 + t5089;
  t5102 = 0.08055*t1008;
  t5105 = t5102 + t4775;
  t5201 = 0.135*t108;
  t5202 = t5201 + t4788;
  t5207 = 0.07996*t108;
  t5209 = -0.135*t516;
  t5212 = t5207 + t5209;
  t4303 = t1007*t3528;
  t4304 = t46*t1219*t3558;
  t4315 = t4303 + t4304;
  t5291 = 0.08055*t46;
  t5299 = t5291 + t4973;
  t5304 = -0.01004*t46;
  t5310 = -0.08055*t1007;
  t5313 = t5304 + t5310;
  t4325 = t46*t3558;
  t4331 = -1.*t1007*t3810;
  t4336 = t4325 + t4331;
  t5894 = t4938*t3961;
  t5898 = -0.135*t1008*t3985;
  t5899 = t4882*t3985;
  t5900 = t1219*t4974*t3985;
  t5902 = -0.08055*t4394;
  t5905 = t46*t3961;
  t5906 = -1.*t1219*t1007*t3985;
  t5907 = t5905 + t5906;
  t5908 = -0.01004*t5907;
  t4413 = t46*t3985;
  t4420 = -1.*t1007*t4047;
  t4428 = t4413 + t4420;
  t4449 = t1007*t4074;
  t4471 = t46*t4101;
  t4473 = t4449 + t4471;
  p_output1[0]=(t1007*t2988 - 1.*t2898*t46)*var2[3] + (t1007*t1705 - 1.*t46*t788)*var2[4] + (t1007*t1219*t2208 - 1.*t2077*t46)*var2[5] + (t1007*t1219*t2560 - 1.*t2530*t46)*var2[13] + t1007*t2437*var2[14] + t2786*var2[15];
  p_output1[1]=(t1007*t2730 - 1.*t2560*t46)*var2[3] + (t1007*t3126 - 1.*t3043*t46)*var2[4] + (t1007*t1219*t3293 - 1.*t3236*t46)*var2[5] + (t1007*t1219*t3558 - 1.*t3528*t46)*var2[13] + t1007*t3426*var2[14] + (t1007*t3558 + t3810*t46)*var2[15];
  p_output1[2]=(t1007*t4101 - 1.*t4074*t46)*var2[4] + t3996*var2[5] + t3996*var2[13] + t1007*t3893*var2[14] + (t1007*t3985 + t4047*t46)*var2[15];
  p_output1[3]=0;
  p_output1[4]=t4253*var2[3] + t4163*var2[4] + t4188*var2[5] + t4221*var2[13] + t2437*t46*var2[14] + t4244*var2[15];
  p_output1[5]=t2786*var2[3] + t4268*var2[4] + t4288*var2[5] + t4315*var2[13] + t3426*t46*var2[14] + t4336*var2[15];
  p_output1[6]=t4473*var2[4] + t4394*var2[5] + t4394*var2[13] + t3893*t46*var2[14] + t4428*var2[15];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1008*t2974 + t3332)*var2[3] + (-1.*t1014*t1219*t123 - 1.*t1008*t1583)*var2[4] - 1.*t1008*t2208*var2[5] - 1.*t1008*t2560*var2[13] + t2730*var2[14];
  p_output1[9]=(t1219*t123*t126 - 1.*t1008*t2428)*var2[3] + (-1.*t1014*t1219*t1875 - 1.*t1008*t3098)*var2[4] - 1.*t1008*t3293*var2[5] - 1.*t1008*t3558*var2[13] + t3810*var2[14];
  p_output1[10]=(-1.*t1219*t126 - 1.*t1008*t4093)*var2[4] - 1.*t1008*t3985*var2[5] - 1.*t1008*t3985*var2[13] + t4047*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.135*(t1219*t126*t1875 + t1008*t2974) - 0.08055*t4253 - 0.01004*(-1.*t1007*t2988 + t2898*t46) + t2835*t4756 - 1.*t126*t1875*t4778 + t2876*t4806 + t2974*t4882 + t2898*t4938 + t2988*t4974)*var2[3] + (-0.135*(t1014*t1219*t123 + t1008*t1583) - 0.08055*t4163 + t123*t126*t380*t4756 - 1.*t1014*t123*t4778 + t1583*t4882 + t1705*t4974 + t123*t126*t4806*t731 + t4938*t788 - 0.01004*(-1.*t1007*t1705 + t46*t788))*var2[4] + (-0.135*t1008*t2208 - 0.08055*t4188 - 0.01004*(-1.*t1007*t1219*t2208 + t2077*t46) + t1997*t4756 + t1943*t4806 + t2208*t4882 + t2077*t4938 + t1219*t2208*t4974)*var2[5] + (-0.135*t1008*t2560 - 0.08055*t4221 - 0.01004*(-1.*t1007*t1219*t2560 + t2530*t46) + t2560*t4882 + t2530*t4938 + t1219*t2560*t4974 + t1943*t5202 + t2388*t5212)*var2[13] + (-0.135*(-1.*t1008*t123*t126 - 1.*t1219*t2428) + 0.01004*t1007*t2437 - 0.08055*t2437*t46 + t2437*t4974 + t123*t126*t5090 + t2428*t5105)*var2[14] + (-0.08055*t4244 - 0.01004*(-1.*t1007*t2560 - 1.*t2730*t46) + t2560*t5299 + t2730*t5313)*var2[15];
  p_output1[13]=var2[1] + (-0.135*t2437 - 0.08055*t2786 - 0.01004*t4244 + t1943*t4756 + t123*t126*t4778 + t2388*t4806 + t2428*t4882 + t2560*t4938 + t2730*t4974)*var2[3] + (-0.135*(t1014*t1219*t1875 + t1008*t3098) - 0.08055*t4268 - 0.01004*(-1.*t1007*t3126 + t3043*t46) + t126*t1875*t380*t4756 - 1.*t1014*t1875*t4778 + t3098*t4882 + t3043*t4938 + t3126*t4974 + t126*t1875*t4806*t731)*var2[4] + (-0.135*t1008*t3293 - 0.08055*t4288 - 0.01004*(-1.*t1007*t1219*t3293 + t3236*t46) + t2876*t4756 + t3229*t4806 + t3293*t4882 + t3236*t4938 + t1219*t3293*t4974)*var2[5] + (-0.135*t1008*t3558 - 0.08055*t4315 - 0.01004*(-1.*t1007*t1219*t3558 + t3528*t46) + t3558*t4882 + t3528*t4938 + t1219*t3558*t4974 + t3229*t5202 + t3369*t5212)*var2[13] + (-0.135*(t2920 - 1.*t1219*t3393) + 0.01004*t1007*t3426 - 0.08055*t3426*t46 + t3426*t4974 + t126*t1875*t5090 + t3393*t5105)*var2[14] + (-0.08055*t4336 - 0.01004*(-1.*t1007*t3558 - 1.*t3810*t46) + t3558*t5299 + t3810*t5313)*var2[15];
  p_output1[14]=var2[2] + (-0.135*(t1219*t126 + t1008*t4093) - 0.08055*t4473 - 0.01004*(-1.*t1007*t4101 + t4074*t46) - 1.*t1014*t380*t4756 - 1.*t126*t4778 + t4093*t4882 + t4074*t4938 + t4101*t4974 - 1.*t1014*t4806*t731)*var2[4] + (t126*t380*t4806 + t5894 + t5898 + t5899 + t5900 + t5902 + t5908 - 1.*t126*t4756*t731)*var2[5] + (t126*t380*t5202 + t5894 + t5898 + t5899 + t5900 + t5902 + t5908 + t126*t5212*t731)*var2[13] + (-0.135*(t1008*t1014 - 1.*t1219*t3866) + 0.01004*t1007*t3893 - 0.08055*t3893*t46 + t3893*t4974 - 1.*t1014*t5090 + t3866*t5105)*var2[14] + (-0.08055*t4428 - 0.01004*(-1.*t1007*t3985 - 1.*t4047*t46) + t3985*t5299 + t4047*t5313)*var2[15];
  p_output1[15]=0;
}



void dT_RightThighJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
