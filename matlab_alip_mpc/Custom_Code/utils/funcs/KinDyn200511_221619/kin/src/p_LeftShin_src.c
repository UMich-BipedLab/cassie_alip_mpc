/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftShin_src.h"

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
  double t742;
  double t1071;
  double t581;
  double t790;
  double t1179;
  double t1305;
  double t1360;
  double t1507;
  double t1578;
  double t1730;
  double t1839;
  double t1985;
  double t912;
  double t1250;
  double t1254;
  double t2359;
  double t2369;
  double t2378;
  double t2393;
  double t2256;
  double t2309;
  double t2333;
  double t2601;
  double t3148;
  double t3153;
  double t3156;
  double t3286;
  double t2992;
  double t3129;
  double t3143;
  double t3483;
  double t3502;
  double t3605;
  double t3800;
  double t3817;
  double t3875;
  double t3883;
  double t3948;
  double t3966;
  double t4012;
  double t4178;
  double t4184;
  double t4229;
  double t4248;
  double t4274;
  double t4286;
  double t4329;
  double t4370;
  double t4379;
  double t4401;
  double t4512;
  double t4517;
  double t4523;
  double t1569;
  double t1622;
  double t1642;
  double t2029;
  double t2128;
  double t2225;
  double t4913;
  double t4971;
  double t5033;
  double t4842;
  double t4852;
  double t4881;
  double t2385;
  double t2403;
  double t2419;
  double t2622;
  double t2661;
  double t2729;
  double t5043;
  double t5061;
  double t5096;
  double t3204;
  double t3351;
  double t3403;
  double t3681;
  double t3703;
  double t3739;
  double t3877;
  double t3899;
  double t3910;
  double t5230;
  double t5238;
  double t5251;
  double t5318;
  double t5326;
  double t5352;
  double t4081;
  double t4088;
  double t4153;
  double t4288;
  double t4337;
  double t4340;
  double t5384;
  double t5415;
  double t5431;
  double t5457;
  double t5465;
  double t5470;
  double t4479;
  double t4489;
  double t4492;
  double t5551;
  double t5565;
  double t5572;
  double t5580;
  double t5582;
  double t5590;
  double t5793;
  double t5795;
  double t5819;
  double t5878;
  double t5885;
  double t5887;
  double t5904;
  double t5915;
  double t5916;
  double t5951;
  double t5952;
  double t5956;
  double t6003;
  double t6013;
  double t6019;
  double t6045;
  double t6057;
  double t6058;
  double t6093;
  double t6115;
  double t6150;
  t742 = Cos(var1[5]);
  t1071 = Sin(var1[3]);
  t581 = Cos(var1[3]);
  t790 = Sin(var1[4]);
  t1179 = Sin(var1[5]);
  t1305 = Cos(var1[6]);
  t1360 = -1.*t1305;
  t1507 = 1. + t1360;
  t1578 = Sin(var1[6]);
  t1730 = -1.*t742*t1071;
  t1839 = t581*t790*t1179;
  t1985 = t1730 + t1839;
  t912 = t581*t742*t790;
  t1250 = t1071*t1179;
  t1254 = t912 + t1250;
  t2359 = Cos(var1[7]);
  t2369 = -1.*t2359;
  t2378 = 1. + t2369;
  t2393 = Sin(var1[7]);
  t2256 = t1305*t1985;
  t2309 = t1254*t1578;
  t2333 = t2256 + t2309;
  t2601 = Cos(var1[4]);
  t3148 = Cos(var1[8]);
  t3153 = -1.*t3148;
  t3156 = 1. + t3153;
  t3286 = Sin(var1[8]);
  t2992 = t581*t2601*t2359;
  t3129 = t2333*t2393;
  t3143 = t2992 + t3129;
  t3483 = t1305*t1254;
  t3502 = -1.*t1985*t1578;
  t3605 = t3483 + t3502;
  t3800 = Cos(var1[9]);
  t3817 = -1.*t3800;
  t3875 = 1. + t3817;
  t3883 = Sin(var1[9]);
  t3948 = t3148*t3143;
  t3966 = t3605*t3286;
  t4012 = t3948 + t3966;
  t4178 = t3148*t3605;
  t4184 = -1.*t3143*t3286;
  t4229 = t4178 + t4184;
  t4248 = Cos(var1[10]);
  t4274 = -1.*t4248;
  t4286 = 1. + t4274;
  t4329 = Sin(var1[10]);
  t4370 = -1.*t3883*t4012;
  t4379 = t3800*t4229;
  t4401 = t4370 + t4379;
  t4512 = t3800*t4012;
  t4517 = t3883*t4229;
  t4523 = t4512 + t4517;
  t1569 = 0.07996*t1507;
  t1622 = -0.135*t1578;
  t1642 = 0. + t1569 + t1622;
  t2029 = 0.135*t1507;
  t2128 = 0.07996*t1578;
  t2225 = 0. + t2029 + t2128;
  t4913 = t581*t742;
  t4971 = t1071*t790*t1179;
  t5033 = t4913 + t4971;
  t4842 = t742*t1071*t790;
  t4852 = -1.*t581*t1179;
  t4881 = t4842 + t4852;
  t2385 = 0.135*t2378;
  t2403 = 0.08055*t2393;
  t2419 = 0. + t2385 + t2403;
  t2622 = -0.08055*t2378;
  t2661 = 0.135*t2393;
  t2729 = 0. + t2622 + t2661;
  t5043 = t1305*t5033;
  t5061 = t4881*t1578;
  t5096 = t5043 + t5061;
  t3204 = -0.08055*t3156;
  t3351 = -0.01004*t3286;
  t3403 = 0. + t3204 + t3351;
  t3681 = -0.01004*t3156;
  t3703 = 0.08055*t3286;
  t3739 = 0. + t3681 + t3703;
  t3877 = -0.08055*t3875;
  t3899 = -0.13004*t3883;
  t3910 = 0. + t3877 + t3899;
  t5230 = t2601*t2359*t1071;
  t5238 = t5096*t2393;
  t5251 = t5230 + t5238;
  t5318 = t1305*t4881;
  t5326 = -1.*t5033*t1578;
  t5352 = t5318 + t5326;
  t4081 = -0.13004*t3875;
  t4088 = 0.08055*t3883;
  t4153 = 0. + t4081 + t4088;
  t4288 = -0.19074*t4286;
  t4337 = 0.03315*t4329;
  t4340 = 0. + t4288 + t4337;
  t5384 = t3148*t5251;
  t5415 = t5352*t3286;
  t5431 = t5384 + t5415;
  t5457 = t3148*t5352;
  t5465 = -1.*t5251*t3286;
  t5470 = t5457 + t5465;
  t4479 = -0.03315*t4286;
  t4489 = -0.19074*t4329;
  t4492 = 0. + t4479 + t4489;
  t5551 = -1.*t3883*t5431;
  t5565 = t3800*t5470;
  t5572 = t5551 + t5565;
  t5580 = t3800*t5431;
  t5582 = t3883*t5470;
  t5590 = t5580 + t5582;
  t5793 = t2601*t1305*t1179;
  t5795 = t2601*t742*t1578;
  t5819 = t5793 + t5795;
  t5878 = -1.*t2359*t790;
  t5885 = t5819*t2393;
  t5887 = t5878 + t5885;
  t5904 = t2601*t742*t1305;
  t5915 = -1.*t2601*t1179*t1578;
  t5916 = t5904 + t5915;
  t5951 = t3148*t5887;
  t5952 = t5916*t3286;
  t5956 = t5951 + t5952;
  t6003 = t3148*t5916;
  t6013 = -1.*t5887*t3286;
  t6019 = t6003 + t6013;
  t6045 = -1.*t3883*t5956;
  t6057 = t3800*t6019;
  t6058 = t6045 + t6057;
  t6093 = t3800*t5956;
  t6115 = t3883*t6019;
  t6150 = t6093 + t6115;
  p_output1[0]=0. + t1254*t1642 + t1985*t2225 + t2333*t2419 + t3143*t3403 + t3605*t3739 + t3910*t4012 + t4153*t4229 + t4340*t4401 + t4492*t4523 - 0.03195*(t4329*t4401 + t4248*t4523) - 0.37414*(t4248*t4401 - 1.*t4329*t4523) + t2601*t2729*t581 + 0.1303*(t2333*t2359 - 1.*t2393*t2601*t581) + var1[0];
  p_output1[1]=0. + t1071*t2601*t2729 + t1642*t4881 + t2225*t5033 + t2419*t5096 + 0.1303*(-1.*t1071*t2393*t2601 + t2359*t5096) + t3403*t5251 + t3739*t5352 + t3910*t5431 + t4153*t5470 + t4340*t5572 + t4492*t5590 - 0.03195*(t4329*t5572 + t4248*t5590) - 0.37414*(t4248*t5572 - 1.*t4329*t5590) + var1[1];
  p_output1[2]=0. + t1179*t2225*t2601 + t2419*t5819 + t3403*t5887 + t3739*t5916 + t3910*t5956 + t4153*t6019 + t4340*t6058 + t4492*t6150 - 0.03195*(t4329*t6058 + t4248*t6150) - 0.37414*(t4248*t6058 - 1.*t4329*t6150) + t1642*t2601*t742 - 1.*t2729*t790 + 0.1303*(t2359*t5819 + t2393*t790) + var1[2];
}



void p_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
