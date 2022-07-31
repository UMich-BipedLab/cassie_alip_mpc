/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightToe_src.h"

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
  double t175;
  double t218;
  double t315;
  double t319;
  double t320;
  double t361;
  double t601;
  double t628;
  double t750;
  double t312;
  double t322;
  double t332;
  double t894;
  double t2545;
  double t2472;
  double t2493;
  double t2587;
  double t2981;
  double t2518;
  double t2707;
  double t2763;
  double t2433;
  double t3129;
  double t3258;
  double t3325;
  double t3385;
  double t2965;
  double t3331;
  double t3335;
  double t2341;
  double t3397;
  double t3536;
  double t3544;
  double t3639;
  double t3367;
  double t3547;
  double t3548;
  double t2329;
  double t3658;
  double t3862;
  double t3934;
  double t4370;
  double t4731;
  double t4751;
  double t4761;
  double t4777;
  double t3550;
  double t4051;
  double t4052;
  double t5100;
  double t5195;
  double t1349;
  double t1527;
  double t5480;
  double t5487;
  double t5944;
  double t5075;
  double t5331;
  double t5400;
  double t7378;
  double t7555;
  double t7573;
  double t7196;
  double t7585;
  double t7681;
  double t7747;
  double t7754;
  double t7692;
  double t7776;
  double t7779;
  double t7783;
  double t7793;
  double t7798;
  double t8043;
  double t8044;
  double t8064;
  double t8116;
  double t8385;
  double t7781;
  double t7850;
  double t7929;
  double t8418;
  double t8486;
  double t8508;
  double t8509;
  double t8512;
  double t8415;
  double t8490;
  double t8497;
  double t4122;
  double t4841;
  double t4906;
  double t5447;
  double t6025;
  double t6074;
  double t6108;
  double t6433;
  double t6575;
  double t6646;
  double t6788;
  double t6811;
  double t7067;
  double t7068;
  double t7086;
  double t7991;
  double t8413;
  double t8414;
  double t8503;
  double t8519;
  double t8523;
  double t8565;
  double t8586;
  double t8603;
  double t8605;
  double t8607;
  double t8652;
  double t8653;
  double t8680;
  double t8685;
  double t239;
  double t305;
  double t478;
  double t1033;
  double t1122;
  double t1292;
  double t1451;
  double t1610;
  double t1733;
  double t1749;
  double t1835;
  double t1916;
  double t2095;
  double t2168;
  t175 = Sin(var1[14]);
  t218 = 0. + t175;
  t315 = Cos(var1[14]);
  t319 = -1.*t315;
  t320 = 0. + t319;
  t361 = Cos(var1[5]);
  t601 = Sin(var1[13]);
  t628 = t320*t601;
  t750 = 0. + t628;
  t312 = Cos(var1[13]);
  t322 = t312*t320;
  t332 = 0. + t322;
  t894 = Sin(var1[5]);
  t2545 = Cos(var1[18]);
  t2472 = Cos(var1[19]);
  t2493 = Sin(var1[18]);
  t2587 = Sin(var1[19]);
  t2981 = Cos(var1[17]);
  t2518 = t2472*t2493;
  t2707 = t2545*t2587;
  t2763 = 0. + t2518 + t2707;
  t2433 = Sin(var1[17]);
  t3129 = t2545*t2472;
  t3258 = -1.*t2493*t2587;
  t3325 = 0. + t3129 + t3258;
  t3385 = Cos(var1[16]);
  t2965 = -1.*t2433*t2763;
  t3331 = t2981*t3325;
  t3335 = 0. + t2965 + t3331;
  t2341 = Sin(var1[16]);
  t3397 = t2981*t2763;
  t3536 = t2433*t3325;
  t3544 = 0. + t3397 + t3536;
  t3639 = Sin(var1[15]);
  t3367 = t2341*t3335;
  t3547 = t3385*t3544;
  t3548 = 0. + t3367 + t3547;
  t2329 = Cos(var1[15]);
  t3658 = t3385*t3335;
  t3862 = -1.*t2341*t3544;
  t3934 = 0. + t3658 + t3862;
  t4370 = -1.*t3639*t3548;
  t4731 = t2329*t3934;
  t4751 = 0. + t4370 + t4731;
  t4761 = t315*t4751;
  t4777 = 0. + t4761;
  t3550 = t2329*t3548;
  t4051 = t3639*t3934;
  t4052 = 0. + t3550 + t4051;
  t5100 = t175*t4751;
  t5195 = 0. + t5100;
  t1349 = Sin(var1[4]);
  t1527 = Cos(var1[4]);
  t5480 = t312*t4052;
  t5487 = t601*t5195;
  t5944 = 0. + t5480 + t5487;
  t5075 = -1.*t601*t4052;
  t5331 = t312*t5195;
  t5400 = 0. + t5075 + t5331;
  t7378 = -1.*t2545*t2472;
  t7555 = t2493*t2587;
  t7573 = 0. + t7378 + t7555;
  t7196 = t2433*t2763;
  t7585 = t2981*t7573;
  t7681 = 0. + t7196 + t7585;
  t7747 = -1.*t2433*t7573;
  t7754 = 0. + t3397 + t7747;
  t7692 = -1.*t2341*t7681;
  t7776 = t3385*t7754;
  t7779 = 0. + t7692 + t7776;
  t7783 = t3385*t7681;
  t7793 = t2341*t7754;
  t7798 = 0. + t7783 + t7793;
  t8043 = t2329*t7779;
  t8044 = -1.*t3639*t7798;
  t8064 = 0. + t8043 + t8044;
  t8116 = t315*t8064;
  t8385 = 0. + t8116;
  t7781 = t3639*t7779;
  t7850 = t2329*t7798;
  t7929 = 0. + t7781 + t7850;
  t8418 = t175*t8064;
  t8486 = 0. + t8418;
  t8508 = t312*t7929;
  t8509 = t601*t8486;
  t8512 = 0. + t8508 + t8509;
  t8415 = -1.*t601*t7929;
  t8490 = t312*t8486;
  t8497 = 0. + t8415 + t8490;
  t4122 = var2[14]*t4052;
  t4841 = var2[13]*t4777;
  t4906 = var2[5]*t4777;
  t5447 = t361*t5400;
  t6025 = -1.*t5944*t894;
  t6074 = 0. + t5447 + t6025;
  t6108 = var2[4]*t6074;
  t6433 = -1.*t4777*t1349;
  t6575 = t361*t5944;
  t6646 = t5400*t894;
  t6788 = 0. + t6575 + t6646;
  t6811 = t1527*t6788;
  t7067 = 0. + t6433 + t6811;
  t7068 = var2[3]*t7067;
  t7086 = 0. + t4122 + t4841 + t4906 + t6108 + t7068;
  t7991 = var2[14]*t7929;
  t8413 = var2[13]*t8385;
  t8414 = var2[5]*t8385;
  t8503 = t361*t8497;
  t8519 = -1.*t8512*t894;
  t8523 = 0. + t8503 + t8519;
  t8565 = var2[4]*t8523;
  t8586 = -1.*t8385*t1349;
  t8603 = t361*t8512;
  t8605 = t8497*t894;
  t8607 = 0. + t8603 + t8605;
  t8652 = t1527*t8607;
  t8653 = 0. + t8586 + t8652;
  t8680 = var2[3]*t8653;
  t8685 = 0. + t7991 + t8413 + t8414 + t8565 + t8680;
  t239 = var2[13]*t218;
  t305 = var2[5]*t218;
  t478 = t332*t361;
  t1033 = -1.*t750*t894;
  t1122 = 0. + t478 + t1033;
  t1292 = var2[4]*t1122;
  t1451 = -1.*t218*t1349;
  t1610 = t361*t750;
  t1733 = t332*t894;
  t1749 = 0. + t1610 + t1733;
  t1835 = t1527*t1749;
  t1916 = 0. + t1451 + t1835;
  t2095 = var2[3]*t1916;
  t2168 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + var2[19] + t239 + t305 + t1292 + t2095;
  p_output1[0]=1.e-6*t2168 - 0.000099*t7086 + 0.000287*t8685;
  p_output1[1]=0. + 0.000171*t7086 - 0.000099*t8685;
  p_output1[2]=0. + 0.000449*t2168 + 1.e-6*t8685;
}



void AMBody_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
