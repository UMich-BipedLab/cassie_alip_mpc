/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeJoint_src.h"

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
  double t182;
  double t1009;
  double t1035;
  double t1098;
  double t1132;
  double t1349;
  double t1451;
  double t1365;
  double t1500;
  double t211;
  double t364;
  double t515;
  double t674;
  double t1430;
  double t1523;
  double t1558;
  double t1896;
  double t2091;
  double t2094;
  double t186;
  double t2313;
  double t2316;
  double t2323;
  double t2475;
  double t2476;
  double t2530;
  double t2596;
  double t2629;
  double t2663;
  double t2666;
  double t3367;
  double t3370;
  double t3420;
  double t3448;
  double t3496;
  double t3498;
  double t3567;
  double t3806;
  double t3846;
  double t3911;
  double t4047;
  double t4053;
  double t4104;
  double t4145;
  double t4190;
  double t4207;
  double t4287;
  double t4398;
  double t4409;
  double t4508;
  double t4780;
  double t4813;
  double t4827;
  double t4833;
  double t4846;
  double t4874;
  double t4962;
  double t5067;
  double t5084;
  double t5137;
  double t5252;
  double t5269;
  double t5275;
  double t5349;
  double t5361;
  double t5371;
  double t5400;
  double t5480;
  double t5485;
  double t5486;
  double t5753;
  double t5947;
  double t6001;
  double t584;
  double t930;
  double t957;
  double t1109;
  double t1135;
  double t1287;
  double t1642;
  double t1739;
  double t1836;
  double t2183;
  double t2222;
  double t2284;
  double t6317;
  double t6323;
  double t6453;
  double t6531;
  double t6538;
  double t6547;
  double t2592;
  double t2599;
  double t2623;
  double t6712;
  double t6964;
  double t7016;
  double t3126;
  double t3139;
  double t3289;
  double t3534;
  double t3651;
  double t3773;
  double t7055;
  double t7197;
  double t7281;
  double t7309;
  double t7315;
  double t7316;
  double t3975;
  double t3991;
  double t4012;
  double t4229;
  double t4337;
  double t4388;
  double t7397;
  double t7403;
  double t7406;
  double t7469;
  double t7523;
  double t7528;
  double t4618;
  double t4644;
  double t4741;
  double t4956;
  double t4994;
  double t5026;
  double t7549;
  double t7550;
  double t7552;
  double t7560;
  double t7561;
  double t7562;
  double t5179;
  double t5240;
  double t5248;
  double t5389;
  double t5414;
  double t5445;
  double t7612;
  double t7615;
  double t7620;
  double t7642;
  double t7644;
  double t7647;
  double t5563;
  double t5631;
  double t5744;
  double t7675;
  double t7676;
  double t7684;
  double t7686;
  double t7689;
  double t7724;
  double t7852;
  double t7864;
  double t7870;
  double t7877;
  double t7890;
  double t7910;
  double t7953;
  double t7954;
  double t7960;
  double t7964;
  double t7967;
  double t7968;
  double t7971;
  double t7976;
  double t7978;
  double t7984;
  double t7985;
  double t7987;
  double t7992;
  double t8000;
  double t8008;
  double t8015;
  double t8016;
  double t8018;
  double t8022;
  double t8024;
  double t8025;
  double t8029;
  double t8030;
  double t8032;
  double t8041;
  double t8047;
  double t8048;
  t182 = Cos(var1[3]);
  t1009 = Cos(var1[13]);
  t1035 = -1.*t1009;
  t1098 = 1. + t1035;
  t1132 = Sin(var1[13]);
  t1349 = Cos(var1[5]);
  t1451 = Sin(var1[3]);
  t1365 = Sin(var1[4]);
  t1500 = Sin(var1[5]);
  t211 = Cos(var1[14]);
  t364 = -1.*t211;
  t515 = 1. + t364;
  t674 = Sin(var1[14]);
  t1430 = t182*t1349*t1365;
  t1523 = t1451*t1500;
  t1558 = t1430 + t1523;
  t1896 = -1.*t1349*t1451;
  t2091 = t182*t1365*t1500;
  t2094 = t1896 + t2091;
  t186 = Cos(var1[4]);
  t2313 = t1132*t1558;
  t2316 = t1009*t2094;
  t2323 = t2313 + t2316;
  t2475 = Cos(var1[15]);
  t2476 = -1.*t2475;
  t2530 = 1. + t2476;
  t2596 = Sin(var1[15]);
  t2629 = t1009*t1558;
  t2663 = -1.*t1132*t2094;
  t2666 = t2629 + t2663;
  t3367 = t211*t182*t186;
  t3370 = t674*t2323;
  t3420 = t3367 + t3370;
  t3448 = Cos(var1[16]);
  t3496 = -1.*t3448;
  t3498 = 1. + t3496;
  t3567 = Sin(var1[16]);
  t3806 = t2596*t2666;
  t3846 = t2475*t3420;
  t3911 = t3806 + t3846;
  t4047 = t2475*t2666;
  t4053 = -1.*t2596*t3420;
  t4104 = t4047 + t4053;
  t4145 = Cos(var1[17]);
  t4190 = -1.*t4145;
  t4207 = 1. + t4190;
  t4287 = Sin(var1[17]);
  t4398 = -1.*t3567*t3911;
  t4409 = t3448*t4104;
  t4508 = t4398 + t4409;
  t4780 = t3448*t3911;
  t4813 = t3567*t4104;
  t4827 = t4780 + t4813;
  t4833 = Cos(var1[18]);
  t4846 = -1.*t4833;
  t4874 = 1. + t4846;
  t4962 = Sin(var1[18]);
  t5067 = t4287*t4508;
  t5084 = t4145*t4827;
  t5137 = t5067 + t5084;
  t5252 = t4145*t4508;
  t5269 = -1.*t4287*t4827;
  t5275 = t5252 + t5269;
  t5349 = Cos(var1[19]);
  t5361 = -1.*t5349;
  t5371 = 1. + t5361;
  t5400 = Sin(var1[19]);
  t5480 = -1.*t4962*t5137;
  t5485 = t4833*t5275;
  t5486 = t5480 + t5485;
  t5753 = t4833*t5137;
  t5947 = t4962*t5275;
  t6001 = t5753 + t5947;
  t584 = -0.08055*t515;
  t930 = -0.135*t674;
  t957 = 0. + t584 + t930;
  t1109 = 0.07996*t1098;
  t1135 = 0.135*t1132;
  t1287 = 0. + t1109 + t1135;
  t1642 = -0.135*t1098;
  t1739 = 0.07996*t1132;
  t1836 = 0. + t1642 + t1739;
  t2183 = -0.135*t515;
  t2222 = 0.08055*t674;
  t2284 = 0. + t2183 + t2222;
  t6317 = t1349*t1451*t1365;
  t6323 = -1.*t182*t1500;
  t6453 = t6317 + t6323;
  t6531 = t182*t1349;
  t6538 = t1451*t1365*t1500;
  t6547 = t6531 + t6538;
  t2592 = -0.01004*t2530;
  t2599 = 0.08055*t2596;
  t2623 = 0. + t2592 + t2599;
  t6712 = t1132*t6453;
  t6964 = t1009*t6547;
  t7016 = t6712 + t6964;
  t3126 = -0.08055*t2530;
  t3139 = -0.01004*t2596;
  t3289 = 0. + t3126 + t3139;
  t3534 = -0.08055*t3498;
  t3651 = -0.13004*t3567;
  t3773 = 0. + t3534 + t3651;
  t7055 = t1009*t6453;
  t7197 = -1.*t1132*t6547;
  t7281 = t7055 + t7197;
  t7309 = t211*t186*t1451;
  t7315 = t674*t7016;
  t7316 = t7309 + t7315;
  t3975 = -0.13004*t3498;
  t3991 = 0.08055*t3567;
  t4012 = 0. + t3975 + t3991;
  t4229 = -0.19074*t4207;
  t4337 = 0.03315*t4287;
  t4388 = 0. + t4229 + t4337;
  t7397 = t2596*t7281;
  t7403 = t2475*t7316;
  t7406 = t7397 + t7403;
  t7469 = t2475*t7281;
  t7523 = -1.*t2596*t7316;
  t7528 = t7469 + t7523;
  t4618 = -0.03315*t4207;
  t4644 = -0.19074*t4287;
  t4741 = 0. + t4618 + t4644;
  t4956 = -0.01315*t4874;
  t4994 = -0.62554*t4962;
  t5026 = 0. + t4956 + t4994;
  t7549 = -1.*t3567*t7406;
  t7550 = t3448*t7528;
  t7552 = t7549 + t7550;
  t7560 = t3448*t7406;
  t7561 = t3567*t7528;
  t7562 = t7560 + t7561;
  t5179 = -0.62554*t4874;
  t5240 = 0.01315*t4962;
  t5248 = 0. + t5179 + t5240;
  t5389 = -1.03354*t5371;
  t5414 = 0.05315*t5400;
  t5445 = 0. + t5389 + t5414;
  t7612 = t4287*t7552;
  t7615 = t4145*t7562;
  t7620 = t7612 + t7615;
  t7642 = t4145*t7552;
  t7644 = -1.*t4287*t7562;
  t7647 = t7642 + t7644;
  t5563 = -0.05315*t5371;
  t5631 = -1.03354*t5400;
  t5744 = 0. + t5563 + t5631;
  t7675 = -1.*t4962*t7620;
  t7676 = t4833*t7647;
  t7684 = t7675 + t7676;
  t7686 = t4833*t7620;
  t7689 = t4962*t7647;
  t7724 = t7686 + t7689;
  t7852 = t186*t1349*t1132;
  t7864 = t1009*t186*t1500;
  t7870 = t7852 + t7864;
  t7877 = t1009*t186*t1349;
  t7890 = -1.*t186*t1132*t1500;
  t7910 = t7877 + t7890;
  t7953 = -1.*t211*t1365;
  t7954 = t674*t7870;
  t7960 = t7953 + t7954;
  t7964 = t2596*t7910;
  t7967 = t2475*t7960;
  t7968 = t7964 + t7967;
  t7971 = t2475*t7910;
  t7976 = -1.*t2596*t7960;
  t7978 = t7971 + t7976;
  t7984 = -1.*t3567*t7968;
  t7985 = t3448*t7978;
  t7987 = t7984 + t7985;
  t7992 = t3448*t7968;
  t8000 = t3567*t7978;
  t8008 = t7992 + t8000;
  t8015 = t4287*t7987;
  t8016 = t4145*t8008;
  t8018 = t8015 + t8016;
  t8022 = t4145*t7987;
  t8024 = -1.*t4287*t8008;
  t8025 = t8022 + t8024;
  t8029 = -1.*t4962*t8018;
  t8030 = t4833*t8025;
  t8032 = t8029 + t8030;
  t8041 = t4833*t8018;
  t8047 = t4962*t8025;
  t8048 = t8041 + t8047;
  p_output1[0]=0. + t1287*t1558 + t1836*t2094 + t2284*t2323 + t2623*t2666 + t3289*t3420 + t3773*t3911 + t4012*t4104 + t4388*t4508 + t4741*t4827 + t5026*t5137 + t5248*t5275 + t5445*t5486 + t5744*t6001 - 0.05315*(t5400*t5486 + t5349*t6001) - 1.03354*(t5349*t5486 - 1.*t5400*t6001) - 0.1305*(t211*t2323 - 1.*t182*t186*t674) + t182*t186*t957 + var1[0];
  p_output1[1]=0. + t1287*t6453 + t1836*t6547 + t2284*t7016 - 0.1305*(-1.*t1451*t186*t674 + t211*t7016) + t2623*t7281 + t3289*t7316 + t3773*t7406 + t4012*t7528 + t4388*t7552 + t4741*t7562 + t5026*t7620 + t5248*t7647 + t5445*t7684 + t5744*t7724 - 0.05315*(t5400*t7684 + t5349*t7724) - 1.03354*(t5349*t7684 - 1.*t5400*t7724) + t1451*t186*t957 + var1[1];
  p_output1[2]=0. + t1287*t1349*t186 + t1500*t1836*t186 + t2284*t7870 - 0.1305*(t1365*t674 + t211*t7870) + t2623*t7910 + t3289*t7960 + t3773*t7968 + t4012*t7978 + t4388*t7987 + t4741*t8008 + t5026*t8018 + t5248*t8025 + t5445*t8032 + t5744*t8048 - 0.05315*(t5400*t8032 + t5349*t8048) - 1.03354*(t5349*t8032 - 1.*t5400*t8048) - 1.*t1365*t957 + var1[2];
}



void p_RightToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
