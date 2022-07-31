/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightRotationJoint_src.h"

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
  double t176;
  double t232;
  double t128;
  double t200;
  double t255;
  double t68;
  double t422;
  double t1172;
  double t207;
  double t304;
  double t386;
  double t511;
  double t535;
  double t543;
  double t1280;
  double t1408;
  double t766;
  double t794;
  double t808;
  double t846;
  double t979;
  double t1009;
  double t1418;
  double t1511;
  double t1642;
  double t1720;
  double t1735;
  double t1743;
  double t1816;
  double t1831;
  double t1833;
  double t2318;
  double t2326;
  double t2243;
  double t2277;
  double t1319;
  double t1667;
  double t1709;
  double t2278;
  double t2286;
  double t2302;
  double t2370;
  double t2381;
  double t2399;
  double t2460;
  double t2522;
  double t2540;
  double t2610;
  double t2695;
  double t2701;
  double t1711;
  double t1764;
  double t1801;
  double t1812;
  double t1894;
  double t1903;
  t176 = Cos(var1[5]);
  t232 = Sin(var1[3]);
  t128 = Cos(var1[3]);
  t200 = Sin(var1[4]);
  t255 = Sin(var1[5]);
  t68 = Cos(var1[13]);
  t422 = Sin(var1[13]);
  t1172 = Cos(var1[4]);
  t207 = t128*t176*t200;
  t304 = t232*t255;
  t386 = t207 + t304;
  t511 = -1.*t176*t232;
  t535 = t128*t200*t255;
  t543 = t511 + t535;
  t1280 = Cos(var1[14]);
  t1408 = Sin(var1[14]);
  t766 = t176*t232*t200;
  t794 = -1.*t128*t255;
  t808 = t766 + t794;
  t846 = t128*t176;
  t979 = t232*t200*t255;
  t1009 = t846 + t979;
  t1418 = t422*t386;
  t1511 = t68*t543;
  t1642 = t1418 + t1511;
  t1720 = t422*t808;
  t1735 = t68*t1009;
  t1743 = t1720 + t1735;
  t1816 = t1172*t176*t422;
  t1831 = t68*t1172*t255;
  t1833 = t1816 + t1831;
  t2318 = -1.*t68;
  t2326 = 1. + t2318;
  t2243 = -1.*t1280;
  t2277 = 1. + t2243;
  t1319 = t1280*t128*t1172;
  t1667 = t1408*t1642;
  t1709 = t1319 + t1667;
  t2278 = -0.08055*t2277;
  t2286 = -0.135*t1408;
  t2302 = 0. + t2278 + t2286;
  t2370 = 0.07996*t2326;
  t2381 = 0.135*t422;
  t2399 = 0. + t2370 + t2381;
  t2460 = -0.135*t2326;
  t2522 = 0.07996*t422;
  t2540 = 0. + t2460 + t2522;
  t2610 = -0.135*t2277;
  t2695 = 0.08055*t1408;
  t2701 = 0. + t2610 + t2695;
  t1711 = t1280*t1172*t232;
  t1764 = t1408*t1743;
  t1801 = t1711 + t1764;
  t1812 = -1.*t1280*t200;
  t1894 = t1408*t1833;
  t1903 = t1812 + t1894;
  p_output1[0]=t422*t543 - 1.*t386*t68;
  p_output1[1]=t1009*t422 - 1.*t68*t808;
  p_output1[2]=t1172*t255*t422 - 1.*t1172*t176*t68;
  p_output1[3]=0.;
  p_output1[4]=t1709;
  p_output1[5]=t1801;
  p_output1[6]=t1903;
  p_output1[7]=0.;
  p_output1[8]=t1172*t128*t1408 - 1.*t1280*t1642;
  p_output1[9]=-1.*t1280*t1743 + t1172*t1408*t232;
  p_output1[10]=-1.*t1280*t1833 - 1.*t1408*t200;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t1172*t128*t1408 + t1280*t1642) - 0.08055*t1709 + t1172*t128*t2302 + t1642*t2701 + t2399*t386 + t2540*t543 - 0.01004*(-1.*t422*t543 + t386*t68) + var1[0];
  p_output1[13]=0. - 0.08055*t1801 + t1172*t2302*t232 - 0.135*(t1280*t1743 - 1.*t1172*t1408*t232) + t1009*t2540 + t1743*t2701 + t2399*t808 - 0.01004*(-1.*t1009*t422 + t68*t808) + var1[1];
  p_output1[14]=0. - 0.08055*t1903 - 0.135*(t1280*t1833 + t1408*t200) - 1.*t200*t2302 + t1172*t176*t2399 + t1172*t2540*t255 + t1833*t2701 - 0.01004*(-1.*t1172*t255*t422 + t1172*t176*t68) + var1[2];
  p_output1[15]=1.;
}



void T_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
