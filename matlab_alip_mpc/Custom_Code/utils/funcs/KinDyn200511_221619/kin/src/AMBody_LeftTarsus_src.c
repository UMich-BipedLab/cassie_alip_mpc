/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftTarsus_src.h"

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
  double t104;
  double t153;
  double t212;
  double t1039;
  double t1056;
  double t59;
  double t229;
  double t334;
  double t440;
  double t21;
  double t610;
  double t647;
  double t668;
  double t2140;
  double t2062;
  double t2067;
  double t2227;
  double t2695;
  double t2096;
  double t2237;
  double t2412;
  double t1953;
  double t2758;
  double t2764;
  double t2783;
  double t1893;
  double t2948;
  double t2956;
  double t2979;
  double t2467;
  double t2808;
  double t2831;
  double t2998;
  double t3156;
  double t3183;
  double t3185;
  double t3277;
  double t3379;
  double t2917;
  double t3002;
  double t3024;
  double t3681;
  double t3763;
  double t1481;
  double t1260;
  double t3543;
  double t3882;
  double t4069;
  double t4213;
  double t4245;
  double t4272;
  double t5678;
  double t5741;
  double t5867;
  double t6170;
  double t6213;
  double t5634;
  double t5947;
  double t6027;
  double t6355;
  double t6373;
  double t6402;
  double t6411;
  double t6412;
  double t6050;
  double t6233;
  double t6234;
  double t6472;
  double t6486;
  double t6469;
  double t6512;
  double t6543;
  double t6622;
  double t6629;
  double t6630;
  double t335;
  double t712;
  double t776;
  double t988;
  double t1150;
  double t1256;
  double t1266;
  double t1336;
  double t1380;
  double t1469;
  double t1499;
  double t1540;
  double t1650;
  double t1820;
  double t3121;
  double t3387;
  double t3467;
  double t4193;
  double t4346;
  double t4505;
  double t4517;
  double t4663;
  double t4789;
  double t4804;
  double t4969;
  double t5056;
  double t5124;
  double t5321;
  double t5382;
  double t6329;
  double t6455;
  double t6456;
  double t6579;
  double t6695;
  double t6715;
  double t6728;
  double t6764;
  double t6781;
  double t6795;
  double t6806;
  double t6807;
  double t6843;
  double t6860;
  double t6871;
  t104 = Cos(var1[7]);
  t153 = -1.*t104;
  t212 = 0. + t153;
  t1039 = Sin(var1[7]);
  t1056 = 0. + t1039;
  t59 = Cos(var1[6]);
  t229 = t59*t212;
  t334 = 0. + t229;
  t440 = Sin(var1[5]);
  t21 = Cos(var1[5]);
  t610 = Sin(var1[6]);
  t647 = t212*t610;
  t668 = 0. + t647;
  t2140 = Cos(var1[10]);
  t2062 = Cos(var1[11]);
  t2067 = Sin(var1[10]);
  t2227 = Sin(var1[11]);
  t2695 = Sin(var1[9]);
  t2096 = t2062*t2067;
  t2237 = t2140*t2227;
  t2412 = 0. + t2096 + t2237;
  t1953 = Cos(var1[9]);
  t2758 = t2140*t2062;
  t2764 = -1.*t2067*t2227;
  t2783 = 0. + t2758 + t2764;
  t1893 = Cos(var1[8]);
  t2948 = -1.*t2695*t2412;
  t2956 = t1953*t2783;
  t2979 = 0. + t2948 + t2956;
  t2467 = t1953*t2412;
  t2808 = t2695*t2783;
  t2831 = 0. + t2467 + t2808;
  t2998 = Sin(var1[8]);
  t3156 = t1893*t2979;
  t3183 = -1.*t2831*t2998;
  t3185 = 0. + t3156 + t3183;
  t3277 = t104*t3185;
  t3379 = 0. + t3277;
  t2917 = t1893*t2831;
  t3002 = t2979*t2998;
  t3024 = 0. + t2917 + t3002;
  t3681 = t1039*t3185;
  t3763 = 0. + t3681;
  t1481 = Sin(var1[4]);
  t1260 = Cos(var1[4]);
  t3543 = -1.*t610*t3024;
  t3882 = t59*t3763;
  t4069 = 0. + t3543 + t3882;
  t4213 = t59*t3024;
  t4245 = t610*t3763;
  t4272 = 0. + t4213 + t4245;
  t5678 = -1.*t2140*t2062;
  t5741 = t2067*t2227;
  t5867 = 0. + t5678 + t5741;
  t6170 = -1.*t2695*t5867;
  t6213 = 0. + t2467 + t6170;
  t5634 = t2695*t2412;
  t5947 = t1953*t5867;
  t6027 = 0. + t5634 + t5947;
  t6355 = t1893*t6213;
  t6373 = -1.*t6027*t2998;
  t6402 = 0. + t6355 + t6373;
  t6411 = t104*t6402;
  t6412 = 0. + t6411;
  t6050 = t1893*t6027;
  t6233 = t6213*t2998;
  t6234 = 0. + t6050 + t6233;
  t6472 = t1039*t6402;
  t6486 = 0. + t6472;
  t6469 = -1.*t610*t6234;
  t6512 = t59*t6486;
  t6543 = 0. + t6469 + t6512;
  t6622 = t59*t6234;
  t6629 = t610*t6486;
  t6630 = 0. + t6622 + t6629;
  t335 = t21*t334;
  t712 = -1.*t440*t668;
  t776 = 0. + t335 + t712;
  t988 = var2[4]*t776;
  t1150 = var2[5]*t1056;
  t1256 = var2[6]*t1056;
  t1266 = t334*t440;
  t1336 = t21*t668;
  t1380 = 0. + t1266 + t1336;
  t1469 = t1260*t1380;
  t1499 = -1.*t1481*t1056;
  t1540 = 0. + t1469 + t1499;
  t1650 = var2[3]*t1540;
  t1820 = 0. + var2[9] + var2[10] + var2[11] + var2[8] + t988 + t1150 + t1256 + t1650;
  t3121 = var2[7]*t3024;
  t3387 = var2[5]*t3379;
  t3467 = var2[6]*t3379;
  t4193 = t21*t4069;
  t4346 = -1.*t440*t4272;
  t4505 = 0. + t4193 + t4346;
  t4517 = var2[4]*t4505;
  t4663 = -1.*t1481*t3379;
  t4789 = t440*t4069;
  t4804 = t21*t4272;
  t4969 = 0. + t4789 + t4804;
  t5056 = t1260*t4969;
  t5124 = 0. + t4663 + t5056;
  t5321 = var2[3]*t5124;
  t5382 = 0. + t3121 + t3387 + t3467 + t4517 + t5321;
  t6329 = var2[7]*t6234;
  t6455 = var2[5]*t6412;
  t6456 = var2[6]*t6412;
  t6579 = t21*t6543;
  t6695 = -1.*t440*t6630;
  t6715 = 0. + t6579 + t6695;
  t6728 = var2[4]*t6715;
  t6764 = -1.*t1481*t6412;
  t6781 = t440*t6543;
  t6795 = t21*t6630;
  t6806 = 0. + t6781 + t6795;
  t6807 = t1260*t6806;
  t6843 = 0. + t6764 + t6807;
  t6860 = var2[3]*t6843;
  t6871 = 0. + t6329 + t6455 + t6456 + t6728 + t6860;
  p_output1[0]=-0.000063*t1820 - 0.00288*t5382 + 0.00113*t6871;
  p_output1[1]=0.000036*t1820 + 0.0231*t5382 - 0.00288*t6871;
  p_output1[2]=0.0239*t1820 + 0.000036*t5382 - 0.000063*t6871;
}



void AMBody_LeftTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
