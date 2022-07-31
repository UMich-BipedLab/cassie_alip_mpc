/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightShin_src.h"

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
  double t792;
  double t2071;
  double t2303;
  double t2537;
  double t2600;
  double t2830;
  double t2983;
  double t2907;
  double t2995;
  double t935;
  double t1187;
  double t1191;
  double t1557;
  double t2977;
  double t3012;
  double t3042;
  double t3682;
  double t3691;
  double t3798;
  double t929;
  double t3949;
  double t3958;
  double t3965;
  double t4030;
  double t4070;
  double t4248;
  double t4290;
  double t4528;
  double t4536;
  double t4605;
  double t4834;
  double t4875;
  double t5002;
  double t5064;
  double t5087;
  double t5160;
  double t5271;
  double t5378;
  double t5392;
  double t5423;
  double t5596;
  double t5661;
  double t5676;
  double t5742;
  double t5753;
  double t5769;
  double t5820;
  double t5881;
  double t5918;
  double t5919;
  double t6043;
  double t6054;
  double t6065;
  double t1384;
  double t1659;
  double t1833;
  double t2566;
  double t2782;
  double t2823;
  double t3241;
  double t3390;
  double t3497;
  double t3917;
  double t3919;
  double t3948;
  double t6194;
  double t6207;
  double t6223;
  double t6258;
  double t6265;
  double t6267;
  double t4273;
  double t4428;
  double t4476;
  double t6274;
  double t6284;
  double t6285;
  double t4767;
  double t4793;
  double t4830;
  double t5270;
  double t5297;
  double t5332;
  double t6287;
  double t6288;
  double t6292;
  double t6324;
  double t6325;
  double t6336;
  double t5512;
  double t5538;
  double t5540;
  double t5790;
  double t5828;
  double t5834;
  double t6343;
  double t6345;
  double t6346;
  double t6356;
  double t6370;
  double t6381;
  double t5994;
  double t6008;
  double t6042;
  double t6393;
  double t6395;
  double t6402;
  double t6448;
  double t6476;
  double t6477;
  double t6580;
  double t6589;
  double t6596;
  double t6611;
  double t6612;
  double t6632;
  double t6690;
  double t6707;
  double t6711;
  double t6723;
  double t6725;
  double t6729;
  double t6771;
  double t6782;
  double t6804;
  double t6812;
  double t6829;
  double t6835;
  double t6884;
  double t6897;
  double t6899;
  t792 = Cos(var1[3]);
  t2071 = Cos(var1[13]);
  t2303 = -1.*t2071;
  t2537 = 1. + t2303;
  t2600 = Sin(var1[13]);
  t2830 = Cos(var1[5]);
  t2983 = Sin(var1[3]);
  t2907 = Sin(var1[4]);
  t2995 = Sin(var1[5]);
  t935 = Cos(var1[14]);
  t1187 = -1.*t935;
  t1191 = 1. + t1187;
  t1557 = Sin(var1[14]);
  t2977 = t792*t2830*t2907;
  t3012 = t2983*t2995;
  t3042 = t2977 + t3012;
  t3682 = -1.*t2830*t2983;
  t3691 = t792*t2907*t2995;
  t3798 = t3682 + t3691;
  t929 = Cos(var1[4]);
  t3949 = t2600*t3042;
  t3958 = t2071*t3798;
  t3965 = t3949 + t3958;
  t4030 = Cos(var1[15]);
  t4070 = -1.*t4030;
  t4248 = 1. + t4070;
  t4290 = Sin(var1[15]);
  t4528 = t2071*t3042;
  t4536 = -1.*t2600*t3798;
  t4605 = t4528 + t4536;
  t4834 = t935*t792*t929;
  t4875 = t1557*t3965;
  t5002 = t4834 + t4875;
  t5064 = Cos(var1[16]);
  t5087 = -1.*t5064;
  t5160 = 1. + t5087;
  t5271 = Sin(var1[16]);
  t5378 = t4290*t4605;
  t5392 = t4030*t5002;
  t5423 = t5378 + t5392;
  t5596 = t4030*t4605;
  t5661 = -1.*t4290*t5002;
  t5676 = t5596 + t5661;
  t5742 = Cos(var1[17]);
  t5753 = -1.*t5742;
  t5769 = 1. + t5753;
  t5820 = Sin(var1[17]);
  t5881 = -1.*t5271*t5423;
  t5918 = t5064*t5676;
  t5919 = t5881 + t5918;
  t6043 = t5064*t5423;
  t6054 = t5271*t5676;
  t6065 = t6043 + t6054;
  t1384 = -0.08055*t1191;
  t1659 = -0.135*t1557;
  t1833 = 0. + t1384 + t1659;
  t2566 = 0.07996*t2537;
  t2782 = 0.135*t2600;
  t2823 = 0. + t2566 + t2782;
  t3241 = -0.135*t2537;
  t3390 = 0.07996*t2600;
  t3497 = 0. + t3241 + t3390;
  t3917 = -0.135*t1191;
  t3919 = 0.08055*t1557;
  t3948 = 0. + t3917 + t3919;
  t6194 = t2830*t2983*t2907;
  t6207 = -1.*t792*t2995;
  t6223 = t6194 + t6207;
  t6258 = t792*t2830;
  t6265 = t2983*t2907*t2995;
  t6267 = t6258 + t6265;
  t4273 = -0.01004*t4248;
  t4428 = 0.08055*t4290;
  t4476 = 0. + t4273 + t4428;
  t6274 = t2600*t6223;
  t6284 = t2071*t6267;
  t6285 = t6274 + t6284;
  t4767 = -0.08055*t4248;
  t4793 = -0.01004*t4290;
  t4830 = 0. + t4767 + t4793;
  t5270 = -0.08055*t5160;
  t5297 = -0.13004*t5271;
  t5332 = 0. + t5270 + t5297;
  t6287 = t2071*t6223;
  t6288 = -1.*t2600*t6267;
  t6292 = t6287 + t6288;
  t6324 = t935*t929*t2983;
  t6325 = t1557*t6285;
  t6336 = t6324 + t6325;
  t5512 = -0.13004*t5160;
  t5538 = 0.08055*t5271;
  t5540 = 0. + t5512 + t5538;
  t5790 = -0.19074*t5769;
  t5828 = 0.03315*t5820;
  t5834 = 0. + t5790 + t5828;
  t6343 = t4290*t6292;
  t6345 = t4030*t6336;
  t6346 = t6343 + t6345;
  t6356 = t4030*t6292;
  t6370 = -1.*t4290*t6336;
  t6381 = t6356 + t6370;
  t5994 = -0.03315*t5769;
  t6008 = -0.19074*t5820;
  t6042 = 0. + t5994 + t6008;
  t6393 = -1.*t5271*t6346;
  t6395 = t5064*t6381;
  t6402 = t6393 + t6395;
  t6448 = t5064*t6346;
  t6476 = t5271*t6381;
  t6477 = t6448 + t6476;
  t6580 = t929*t2830*t2600;
  t6589 = t2071*t929*t2995;
  t6596 = t6580 + t6589;
  t6611 = t2071*t929*t2830;
  t6612 = -1.*t929*t2600*t2995;
  t6632 = t6611 + t6612;
  t6690 = -1.*t935*t2907;
  t6707 = t1557*t6596;
  t6711 = t6690 + t6707;
  t6723 = t4290*t6632;
  t6725 = t4030*t6711;
  t6729 = t6723 + t6725;
  t6771 = t4030*t6632;
  t6782 = -1.*t4290*t6711;
  t6804 = t6771 + t6782;
  t6812 = -1.*t5271*t6729;
  t6829 = t5064*t6804;
  t6835 = t6812 + t6829;
  t6884 = t5064*t6729;
  t6897 = t5271*t6804;
  t6899 = t6884 + t6897;
  p_output1[0]=0. + t2823*t3042 + t3497*t3798 + t3948*t3965 + t4476*t4605 + t4830*t5002 + t5332*t5423 + t5540*t5676 + t5834*t5919 + t6042*t6065 - 0.03195*(t5820*t5919 + t5742*t6065) - 0.37414*(t5742*t5919 - 1.*t5820*t6065) + t1833*t792*t929 - 0.1303*(-1.*t1557*t792*t929 + t3965*t935) + var1[0];
  p_output1[1]=0. + t2823*t6223 + t3497*t6267 + t3948*t6285 + t4476*t6292 + t4830*t6336 + t5332*t6346 + t5540*t6381 + t5834*t6402 + t6042*t6477 - 0.03195*(t5820*t6402 + t5742*t6477) - 0.37414*(t5742*t6402 - 1.*t5820*t6477) + t1833*t2983*t929 - 0.1303*(-1.*t1557*t2983*t929 + t6285*t935) + var1[1];
  p_output1[2]=0. - 1.*t1833*t2907 + t3948*t6596 + t4476*t6632 + t4830*t6711 + t5332*t6729 + t5540*t6804 + t5834*t6835 + t6042*t6899 - 0.03195*(t5820*t6835 + t5742*t6899) - 0.37414*(t5742*t6835 - 1.*t5820*t6899) + t2823*t2830*t929 + t2995*t3497*t929 - 0.1303*(t1557*t2907 + t6596*t935) + var1[2];
}



void p_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
