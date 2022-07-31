/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightTarsus_src.h"

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
  double t49;
  double t69;
  double t470;
  double t483;
  double t533;
  double t616;
  double t745;
  double t788;
  double t973;
  double t450;
  double t550;
  double t579;
  double t978;
  double t2004;
  double t1843;
  double t1845;
  double t2035;
  double t2306;
  double t1916;
  double t2043;
  double t2200;
  double t1819;
  double t2316;
  double t2428;
  double t2543;
  double t2634;
  double t2221;
  double t2558;
  double t2560;
  double t1808;
  double t2677;
  double t2683;
  double t2885;
  double t3273;
  double t3277;
  double t3324;
  double t3402;
  double t3403;
  double t2583;
  double t2912;
  double t3204;
  double t3660;
  double t3752;
  double t1013;
  double t1025;
  double t4091;
  double t4201;
  double t4273;
  double t3605;
  double t3959;
  double t4034;
  double t5079;
  double t5130;
  double t5392;
  double t5050;
  double t5495;
  double t5499;
  double t5678;
  double t5710;
  double t5896;
  double t5924;
  double t5963;
  double t5998;
  double t6059;
  double t5621;
  double t5719;
  double t5750;
  double t6235;
  double t6372;
  double t6860;
  double t6904;
  double t6954;
  double t6166;
  double t6386;
  double t6430;
  double t121;
  double t181;
  double t661;
  double t981;
  double t984;
  double t985;
  double t1023;
  double t1052;
  double t1287;
  double t1439;
  double t1615;
  double t1630;
  double t1643;
  double t1687;
  double t3236;
  double t3500;
  double t3510;
  double t4041;
  double t4304;
  double t4329;
  double t4373;
  double t4420;
  double t4429;
  double t4471;
  double t4771;
  double t4778;
  double t4809;
  double t4842;
  double t4982;
  double t5877;
  double t6062;
  double t6129;
  double t6726;
  double t7013;
  double t7121;
  double t7213;
  double t7231;
  double t7236;
  double t7253;
  double t7259;
  double t7271;
  double t7272;
  double t7316;
  double t7417;
  t49 = Sin(var1[14]);
  t69 = 0. + t49;
  t470 = Cos(var1[14]);
  t483 = -1.*t470;
  t533 = 0. + t483;
  t616 = Cos(var1[5]);
  t745 = Sin(var1[13]);
  t788 = t533*t745;
  t973 = 0. + t788;
  t450 = Cos(var1[13]);
  t550 = t450*t533;
  t579 = 0. + t550;
  t978 = Sin(var1[5]);
  t2004 = Cos(var1[17]);
  t1843 = Cos(var1[18]);
  t1845 = Sin(var1[17]);
  t2035 = Sin(var1[18]);
  t2306 = Cos(var1[16]);
  t1916 = t1843*t1845;
  t2043 = t2004*t2035;
  t2200 = 0. + t1916 + t2043;
  t1819 = Sin(var1[16]);
  t2316 = t2004*t1843;
  t2428 = -1.*t1845*t2035;
  t2543 = 0. + t2316 + t2428;
  t2634 = Cos(var1[15]);
  t2221 = -1.*t1819*t2200;
  t2558 = t2306*t2543;
  t2560 = 0. + t2221 + t2558;
  t1808 = Sin(var1[15]);
  t2677 = t2306*t2200;
  t2683 = t1819*t2543;
  t2885 = 0. + t2677 + t2683;
  t3273 = t2634*t2560;
  t3277 = -1.*t1808*t2885;
  t3324 = 0. + t3273 + t3277;
  t3402 = t470*t3324;
  t3403 = 0. + t3402;
  t2583 = t1808*t2560;
  t2912 = t2634*t2885;
  t3204 = 0. + t2583 + t2912;
  t3660 = t49*t3324;
  t3752 = 0. + t3660;
  t1013 = Sin(var1[4]);
  t1025 = Cos(var1[4]);
  t4091 = t450*t3204;
  t4201 = t745*t3752;
  t4273 = 0. + t4091 + t4201;
  t3605 = -1.*t745*t3204;
  t3959 = t450*t3752;
  t4034 = 0. + t3605 + t3959;
  t5079 = -1.*t2004*t1843;
  t5130 = t1845*t2035;
  t5392 = 0. + t5079 + t5130;
  t5050 = t1819*t2200;
  t5495 = t2306*t5392;
  t5499 = 0. + t5050 + t5495;
  t5678 = -1.*t1819*t5392;
  t5710 = 0. + t2677 + t5678;
  t5896 = -1.*t1808*t5499;
  t5924 = t2634*t5710;
  t5963 = 0. + t5896 + t5924;
  t5998 = t470*t5963;
  t6059 = 0. + t5998;
  t5621 = t2634*t5499;
  t5719 = t1808*t5710;
  t5750 = 0. + t5621 + t5719;
  t6235 = t49*t5963;
  t6372 = 0. + t6235;
  t6860 = t450*t5750;
  t6904 = t745*t6372;
  t6954 = 0. + t6860 + t6904;
  t6166 = -1.*t745*t5750;
  t6386 = t450*t6372;
  t6430 = 0. + t6166 + t6386;
  t121 = var2[13]*t69;
  t181 = var2[5]*t69;
  t661 = t579*t616;
  t981 = -1.*t973*t978;
  t984 = 0. + t661 + t981;
  t985 = var2[4]*t984;
  t1023 = -1.*t69*t1013;
  t1052 = t616*t973;
  t1287 = t579*t978;
  t1439 = 0. + t1052 + t1287;
  t1615 = t1025*t1439;
  t1630 = 0. + t1023 + t1615;
  t1643 = var2[3]*t1630;
  t1687 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + t121 + t181 + t985 + t1643;
  t3236 = var2[14]*t3204;
  t3500 = var2[13]*t3403;
  t3510 = var2[5]*t3403;
  t4041 = t616*t4034;
  t4304 = -1.*t4273*t978;
  t4329 = 0. + t4041 + t4304;
  t4373 = var2[4]*t4329;
  t4420 = -1.*t3403*t1013;
  t4429 = t616*t4273;
  t4471 = t4034*t978;
  t4771 = 0. + t4429 + t4471;
  t4778 = t1025*t4771;
  t4809 = 0. + t4420 + t4778;
  t4842 = var2[3]*t4809;
  t4982 = 0. + t3236 + t3500 + t3510 + t4373 + t4842;
  t5877 = var2[14]*t5750;
  t6062 = var2[13]*t6059;
  t6129 = var2[5]*t6059;
  t6726 = t616*t6430;
  t7013 = -1.*t6954*t978;
  t7121 = 0. + t6726 + t7013;
  t7213 = var2[4]*t7121;
  t7231 = -1.*t6059*t1013;
  t7236 = t616*t6954;
  t7253 = t6430*t978;
  t7259 = 0. + t7236 + t7253;
  t7271 = t1025*t7259;
  t7272 = 0. + t7231 + t7271;
  t7316 = var2[3]*t7272;
  t7417 = 0. + t5877 + t6062 + t6129 + t7213 + t7316;
  p_output1[0]=0.000063*t1687 - 0.00288*t4982 + 0.00113*t7417;
  p_output1[1]=-0.000036*t1687 + 0.0231*t4982 - 0.00288*t7417;
  p_output1[2]=0.0239*t1687 - 0.000036*t4982 + 0.000063*t7417;
}



void AMBody_RightTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
