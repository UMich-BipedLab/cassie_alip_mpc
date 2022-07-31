/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftTarsus_src.h"

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
  double t338;
  double t668;
  double t51;
  double t556;
  double t960;
  double t1286;
  double t1339;
  double t1370;
  double t1429;
  double t1635;
  double t1646;
  double t1671;
  double t645;
  double t1127;
  double t1205;
  double t2243;
  double t2406;
  double t2547;
  double t2740;
  double t2061;
  double t2203;
  double t2218;
  double t3003;
  double t4016;
  double t4140;
  double t4249;
  double t4291;
  double t3875;
  double t3878;
  double t3996;
  double t4592;
  double t4595;
  double t4622;
  double t5004;
  double t5030;
  double t5102;
  double t5227;
  double t5268;
  double t5279;
  double t5327;
  double t5725;
  double t5837;
  double t5924;
  double t5971;
  double t5997;
  double t6015;
  double t6059;
  double t6229;
  double t6241;
  double t6366;
  double t6693;
  double t6774;
  double t6778;
  double t6891;
  double t6939;
  double t6959;
  double t7078;
  double t7173;
  double t7208;
  double t7216;
  double t7269;
  double t7278;
  double t7285;
  double t1396;
  double t1499;
  double t1583;
  double t1722;
  double t1759;
  double t1777;
  double t7487;
  double t7495;
  double t7504;
  double t7450;
  double t7461;
  double t7465;
  double t2569;
  double t2747;
  double t2843;
  double t3073;
  double t3168;
  double t3199;
  double t7511;
  double t7514;
  double t7518;
  double t4257;
  double t4345;
  double t4407;
  double t4661;
  double t4682;
  double t4703;
  double t5181;
  double t5256;
  double t5266;
  double t7585;
  double t7589;
  double t7594;
  double t7598;
  double t7600;
  double t7602;
  double t5357;
  double t5552;
  double t5679;
  double t6032;
  double t6061;
  double t6074;
  double t7626;
  double t7628;
  double t7637;
  double t7645;
  double t7653;
  double t7656;
  double t6504;
  double t6648;
  double t6685;
  double t7031;
  double t7083;
  double t7154;
  double t7676;
  double t7678;
  double t7689;
  double t7705;
  double t7708;
  double t7711;
  double t7241;
  double t7261;
  double t7268;
  double t7731;
  double t7732;
  double t7745;
  double t7748;
  double t7749;
  double t7752;
  double t7830;
  double t7836;
  double t7837;
  double t7853;
  double t7854;
  double t7857;
  double t7864;
  double t7868;
  double t7874;
  double t7882;
  double t7883;
  double t7885;
  double t7887;
  double t7889;
  double t7891;
  double t7898;
  double t7904;
  double t7905;
  double t7908;
  double t7909;
  double t7913;
  double t7921;
  double t7927;
  double t7929;
  double t7933;
  double t7935;
  double t7938;
  t338 = Cos(var1[5]);
  t668 = Sin(var1[3]);
  t51 = Cos(var1[3]);
  t556 = Sin(var1[4]);
  t960 = Sin(var1[5]);
  t1286 = Cos(var1[6]);
  t1339 = -1.*t1286;
  t1370 = 1. + t1339;
  t1429 = Sin(var1[6]);
  t1635 = -1.*t338*t668;
  t1646 = t51*t556*t960;
  t1671 = t1635 + t1646;
  t645 = t51*t338*t556;
  t1127 = t668*t960;
  t1205 = t645 + t1127;
  t2243 = Cos(var1[7]);
  t2406 = -1.*t2243;
  t2547 = 1. + t2406;
  t2740 = Sin(var1[7]);
  t2061 = t1286*t1671;
  t2203 = t1205*t1429;
  t2218 = t2061 + t2203;
  t3003 = Cos(var1[4]);
  t4016 = Cos(var1[8]);
  t4140 = -1.*t4016;
  t4249 = 1. + t4140;
  t4291 = Sin(var1[8]);
  t3875 = t51*t3003*t2243;
  t3878 = t2218*t2740;
  t3996 = t3875 + t3878;
  t4592 = t1286*t1205;
  t4595 = -1.*t1671*t1429;
  t4622 = t4592 + t4595;
  t5004 = Cos(var1[9]);
  t5030 = -1.*t5004;
  t5102 = 1. + t5030;
  t5227 = Sin(var1[9]);
  t5268 = t4016*t3996;
  t5279 = t4622*t4291;
  t5327 = t5268 + t5279;
  t5725 = t4016*t4622;
  t5837 = -1.*t3996*t4291;
  t5924 = t5725 + t5837;
  t5971 = Cos(var1[10]);
  t5997 = -1.*t5971;
  t6015 = 1. + t5997;
  t6059 = Sin(var1[10]);
  t6229 = -1.*t5227*t5327;
  t6241 = t5004*t5924;
  t6366 = t6229 + t6241;
  t6693 = t5004*t5327;
  t6774 = t5227*t5924;
  t6778 = t6693 + t6774;
  t6891 = Cos(var1[11]);
  t6939 = -1.*t6891;
  t6959 = 1. + t6939;
  t7078 = Sin(var1[11]);
  t7173 = t6059*t6366;
  t7208 = t5971*t6778;
  t7216 = t7173 + t7208;
  t7269 = t5971*t6366;
  t7278 = -1.*t6059*t6778;
  t7285 = t7269 + t7278;
  t1396 = 0.07996*t1370;
  t1499 = -0.135*t1429;
  t1583 = 0. + t1396 + t1499;
  t1722 = 0.135*t1370;
  t1759 = 0.07996*t1429;
  t1777 = 0. + t1722 + t1759;
  t7487 = t51*t338;
  t7495 = t668*t556*t960;
  t7504 = t7487 + t7495;
  t7450 = t338*t668*t556;
  t7461 = -1.*t51*t960;
  t7465 = t7450 + t7461;
  t2569 = 0.135*t2547;
  t2747 = 0.08055*t2740;
  t2843 = 0. + t2569 + t2747;
  t3073 = -0.08055*t2547;
  t3168 = 0.135*t2740;
  t3199 = 0. + t3073 + t3168;
  t7511 = t1286*t7504;
  t7514 = t7465*t1429;
  t7518 = t7511 + t7514;
  t4257 = -0.08055*t4249;
  t4345 = -0.01004*t4291;
  t4407 = 0. + t4257 + t4345;
  t4661 = -0.01004*t4249;
  t4682 = 0.08055*t4291;
  t4703 = 0. + t4661 + t4682;
  t5181 = -0.08055*t5102;
  t5256 = -0.13004*t5227;
  t5266 = 0. + t5181 + t5256;
  t7585 = t3003*t2243*t668;
  t7589 = t7518*t2740;
  t7594 = t7585 + t7589;
  t7598 = t1286*t7465;
  t7600 = -1.*t7504*t1429;
  t7602 = t7598 + t7600;
  t5357 = -0.13004*t5102;
  t5552 = 0.08055*t5227;
  t5679 = 0. + t5357 + t5552;
  t6032 = -0.19074*t6015;
  t6061 = 0.03315*t6059;
  t6074 = 0. + t6032 + t6061;
  t7626 = t4016*t7594;
  t7628 = t7602*t4291;
  t7637 = t7626 + t7628;
  t7645 = t4016*t7602;
  t7653 = -1.*t7594*t4291;
  t7656 = t7645 + t7653;
  t6504 = -0.03315*t6015;
  t6648 = -0.19074*t6059;
  t6685 = 0. + t6504 + t6648;
  t7031 = -0.01315*t6959;
  t7083 = -0.62554*t7078;
  t7154 = 0. + t7031 + t7083;
  t7676 = -1.*t5227*t7637;
  t7678 = t5004*t7656;
  t7689 = t7676 + t7678;
  t7705 = t5004*t7637;
  t7708 = t5227*t7656;
  t7711 = t7705 + t7708;
  t7241 = -0.62554*t6959;
  t7261 = 0.01315*t7078;
  t7268 = 0. + t7241 + t7261;
  t7731 = t6059*t7689;
  t7732 = t5971*t7711;
  t7745 = t7731 + t7732;
  t7748 = t5971*t7689;
  t7749 = -1.*t6059*t7711;
  t7752 = t7748 + t7749;
  t7830 = t3003*t1286*t960;
  t7836 = t3003*t338*t1429;
  t7837 = t7830 + t7836;
  t7853 = -1.*t2243*t556;
  t7854 = t7837*t2740;
  t7857 = t7853 + t7854;
  t7864 = t3003*t338*t1286;
  t7868 = -1.*t3003*t960*t1429;
  t7874 = t7864 + t7868;
  t7882 = t4016*t7857;
  t7883 = t7874*t4291;
  t7885 = t7882 + t7883;
  t7887 = t4016*t7874;
  t7889 = -1.*t7857*t4291;
  t7891 = t7887 + t7889;
  t7898 = -1.*t5227*t7885;
  t7904 = t5004*t7891;
  t7905 = t7898 + t7904;
  t7908 = t5004*t7885;
  t7909 = t5227*t7891;
  t7913 = t7908 + t7909;
  t7921 = t6059*t7905;
  t7927 = t5971*t7913;
  t7929 = t7921 + t7927;
  t7933 = t5971*t7905;
  t7935 = -1.*t6059*t7913;
  t7938 = t7933 + t7935;
  p_output1[0]=0. + t1205*t1583 + t1671*t1777 + t2218*t2843 + t3996*t4407 + t4622*t4703 + t3003*t3199*t51 + 0.1318*(t2218*t2243 - 1.*t2740*t3003*t51) + t5266*t5327 + t5679*t5924 + t6074*t6366 + t6685*t6778 + t7154*t7216 + t7268*t7285 - 0.73604*(-1.*t7078*t7216 + t6891*t7285) - 0.04375*(t6891*t7216 + t7078*t7285) + var1[0];
  p_output1[1]=0. + t3003*t3199*t668 + t1583*t7465 + t1777*t7504 + t2843*t7518 + 0.1318*(-1.*t2740*t3003*t668 + t2243*t7518) + t4407*t7594 + t4703*t7602 + t5266*t7637 + t5679*t7656 + t6074*t7689 + t6685*t7711 + t7154*t7745 + t7268*t7752 - 0.73604*(-1.*t7078*t7745 + t6891*t7752) - 0.04375*(t6891*t7745 + t7078*t7752) + var1[1];
  p_output1[2]=0. + t1583*t3003*t338 - 1.*t3199*t556 + t2843*t7837 + 0.1318*(t2740*t556 + t2243*t7837) + t4407*t7857 + t4703*t7874 + t5266*t7885 + t5679*t7891 + t6074*t7905 + t6685*t7913 + t7154*t7929 + t7268*t7938 - 0.73604*(-1.*t7078*t7929 + t6891*t7938) - 0.04375*(t6891*t7929 + t7078*t7938) + t1777*t3003*t960 + var1[2];
}



void p_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
