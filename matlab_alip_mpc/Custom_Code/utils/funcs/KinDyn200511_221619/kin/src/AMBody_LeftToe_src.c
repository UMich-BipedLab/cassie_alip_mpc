/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftToe_src.h"

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
  double t255;
  double t277;
  double t523;
  double t1011;
  double t1012;
  double t217;
  double t560;
  double t636;
  double t828;
  double t188;
  double t871;
  double t936;
  double t937;
  double t2194;
  double t2047;
  double t2075;
  double t2204;
  double t2321;
  double t2104;
  double t2220;
  double t2258;
  double t1901;
  double t2347;
  double t2360;
  double t2366;
  double t2788;
  double t2312;
  double t2427;
  double t2483;
  double t1860;
  double t2982;
  double t3096;
  double t3181;
  double t1859;
  double t3378;
  double t3557;
  double t3691;
  double t2715;
  double t3228;
  double t3325;
  double t3700;
  double t3927;
  double t3934;
  double t3953;
  double t3967;
  double t3994;
  double t3345;
  double t3880;
  double t3890;
  double t4160;
  double t4352;
  double t1331;
  double t1180;
  double t4149;
  double t4486;
  double t4835;
  double t5117;
  double t5162;
  double t5341;
  double t6320;
  double t6333;
  double t6351;
  double t6317;
  double t6383;
  double t6394;
  double t6420;
  double t6430;
  double t6775;
  double t6829;
  double t7040;
  double t6397;
  double t6461;
  double t6720;
  double t7115;
  double t7264;
  double t7272;
  double t7282;
  double t7287;
  double t6739;
  double t7041;
  double t7043;
  double t7592;
  double t7700;
  double t7590;
  double t7701;
  double t7709;
  double t8003;
  double t8011;
  double t8074;
  double t3907;
  double t4093;
  double t4111;
  double t5004;
  double t5385;
  double t5496;
  double t5545;
  double t5610;
  double t5682;
  double t5789;
  double t5810;
  double t6017;
  double t6102;
  double t6223;
  double t6245;
  double t7114;
  double t7473;
  double t7506;
  double t7900;
  double t8105;
  double t8115;
  double t8143;
  double t8147;
  double t8155;
  double t8168;
  double t8187;
  double t8210;
  double t8216;
  double t8396;
  double t8416;
  double t793;
  double t942;
  double t986;
  double t993;
  double t1058;
  double t1101;
  double t1226;
  double t1269;
  double t1279;
  double t1309;
  double t1344;
  double t1634;
  double t1777;
  double t1834;
  t255 = Cos(var1[7]);
  t277 = -1.*t255;
  t523 = 0. + t277;
  t1011 = Sin(var1[7]);
  t1012 = 0. + t1011;
  t217 = Cos(var1[6]);
  t560 = t217*t523;
  t636 = 0. + t560;
  t828 = Sin(var1[5]);
  t188 = Cos(var1[5]);
  t871 = Sin(var1[6]);
  t936 = t523*t871;
  t937 = 0. + t936;
  t2194 = Cos(var1[11]);
  t2047 = Cos(var1[12]);
  t2075 = Sin(var1[11]);
  t2204 = Sin(var1[12]);
  t2321 = Cos(var1[10]);
  t2104 = t2047*t2075;
  t2220 = t2194*t2204;
  t2258 = 0. + t2104 + t2220;
  t1901 = Sin(var1[10]);
  t2347 = t2194*t2047;
  t2360 = -1.*t2075*t2204;
  t2366 = 0. + t2347 + t2360;
  t2788 = Cos(var1[9]);
  t2312 = -1.*t1901*t2258;
  t2427 = t2321*t2366;
  t2483 = 0. + t2312 + t2427;
  t1860 = Sin(var1[9]);
  t2982 = t2321*t2258;
  t3096 = t1901*t2366;
  t3181 = 0. + t2982 + t3096;
  t1859 = Cos(var1[8]);
  t3378 = t2788*t2483;
  t3557 = -1.*t1860*t3181;
  t3691 = 0. + t3378 + t3557;
  t2715 = t1860*t2483;
  t3228 = t2788*t3181;
  t3325 = 0. + t2715 + t3228;
  t3700 = Sin(var1[8]);
  t3927 = t1859*t3691;
  t3934 = -1.*t3325*t3700;
  t3953 = 0. + t3927 + t3934;
  t3967 = t255*t3953;
  t3994 = 0. + t3967;
  t3345 = t1859*t3325;
  t3880 = t3691*t3700;
  t3890 = 0. + t3345 + t3880;
  t4160 = t1011*t3953;
  t4352 = 0. + t4160;
  t1331 = Sin(var1[4]);
  t1180 = Cos(var1[4]);
  t4149 = -1.*t871*t3890;
  t4486 = t217*t4352;
  t4835 = 0. + t4149 + t4486;
  t5117 = t217*t3890;
  t5162 = t871*t4352;
  t5341 = 0. + t5117 + t5162;
  t6320 = -1.*t2194*t2047;
  t6333 = t2075*t2204;
  t6351 = 0. + t6320 + t6333;
  t6317 = t1901*t2258;
  t6383 = t2321*t6351;
  t6394 = 0. + t6317 + t6383;
  t6420 = -1.*t1901*t6351;
  t6430 = 0. + t2982 + t6420;
  t6775 = -1.*t1860*t6394;
  t6829 = t2788*t6430;
  t7040 = 0. + t6775 + t6829;
  t6397 = t2788*t6394;
  t6461 = t1860*t6430;
  t6720 = 0. + t6397 + t6461;
  t7115 = t1859*t7040;
  t7264 = -1.*t6720*t3700;
  t7272 = 0. + t7115 + t7264;
  t7282 = t255*t7272;
  t7287 = 0. + t7282;
  t6739 = t1859*t6720;
  t7041 = t7040*t3700;
  t7043 = 0. + t6739 + t7041;
  t7592 = t1011*t7272;
  t7700 = 0. + t7592;
  t7590 = -1.*t871*t7043;
  t7701 = t217*t7700;
  t7709 = 0. + t7590 + t7701;
  t8003 = t217*t7043;
  t8011 = t871*t7700;
  t8074 = 0. + t8003 + t8011;
  t3907 = var2[7]*t3890;
  t4093 = var2[5]*t3994;
  t4111 = var2[6]*t3994;
  t5004 = t188*t4835;
  t5385 = -1.*t828*t5341;
  t5496 = 0. + t5004 + t5385;
  t5545 = var2[4]*t5496;
  t5610 = -1.*t1331*t3994;
  t5682 = t828*t4835;
  t5789 = t188*t5341;
  t5810 = 0. + t5682 + t5789;
  t6017 = t1180*t5810;
  t6102 = 0. + t5610 + t6017;
  t6223 = var2[3]*t6102;
  t6245 = 0. + t3907 + t4093 + t4111 + t5545 + t6223;
  t7114 = var2[7]*t7043;
  t7473 = var2[5]*t7287;
  t7506 = var2[6]*t7287;
  t7900 = t188*t7709;
  t8105 = -1.*t828*t8074;
  t8115 = 0. + t7900 + t8105;
  t8143 = var2[4]*t8115;
  t8147 = -1.*t1331*t7287;
  t8155 = t828*t7709;
  t8168 = t188*t8074;
  t8187 = 0. + t8155 + t8168;
  t8210 = t1180*t8187;
  t8216 = 0. + t8147 + t8210;
  t8396 = var2[3]*t8216;
  t8416 = 0. + t7114 + t7473 + t7506 + t8143 + t8396;
  t793 = t188*t636;
  t942 = -1.*t828*t937;
  t986 = 0. + t793 + t942;
  t993 = var2[4]*t986;
  t1058 = var2[5]*t1012;
  t1101 = var2[6]*t1012;
  t1226 = t636*t828;
  t1269 = t188*t937;
  t1279 = 0. + t1226 + t1269;
  t1309 = t1180*t1279;
  t1344 = -1.*t1331*t1012;
  t1634 = 0. + t1309 + t1344;
  t1777 = var2[3]*t1634;
  t1834 = 0. + var2[9] + var2[10] + var2[11] + var2[12] + var2[8] + t993 + t1058 + t1101 + t1777;
  p_output1[0]=-1.e-6*t1834 - 0.000099*t6245 + 0.000287*t8416;
  p_output1[1]=0. + 0.000171*t6245 - 0.000099*t8416;
  p_output1[2]=0. + 0.000449*t1834 - 1.e-6*t8416;
}



void AMBody_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
