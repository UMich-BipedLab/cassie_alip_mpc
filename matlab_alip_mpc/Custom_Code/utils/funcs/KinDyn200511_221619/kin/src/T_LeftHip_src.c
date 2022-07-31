/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftHip_src.h"

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
  double t343;
  double t455;
  double t243;
  double t418;
  double t473;
  double t71;
  double t745;
  double t1315;
  double t597;
  double t610;
  double t653;
  double t430;
  double t481;
  double t541;
  double t1713;
  double t940;
  double t991;
  double t1148;
  double t813;
  double t860;
  double t919;
  double t1962;
  double t1749;
  double t1755;
  double t1914;
  double t2138;
  double t2146;
  double t2240;
  double t2320;
  double t2375;
  double t2464;
  double t2719;
  double t2727;
  double t3115;
  double t3126;
  double t1745;
  double t1990;
  double t1998;
  double t2881;
  double t2900;
  double t2924;
  double t2946;
  double t2957;
  double t3039;
  double t3149;
  double t3150;
  double t3151;
  double t3325;
  double t3337;
  double t3347;
  double t2073;
  double t2263;
  double t2310;
  double t2313;
  double t2513;
  double t2532;
  t343 = Cos(var1[5]);
  t455 = Sin(var1[3]);
  t243 = Cos(var1[3]);
  t418 = Sin(var1[4]);
  t473 = Sin(var1[5]);
  t71 = Cos(var1[6]);
  t745 = Sin(var1[6]);
  t1315 = Cos(var1[4]);
  t597 = -1.*t343*t455;
  t610 = t243*t418*t473;
  t653 = t597 + t610;
  t430 = t243*t343*t418;
  t481 = t455*t473;
  t541 = t430 + t481;
  t1713 = Cos(var1[7]);
  t940 = t243*t343;
  t991 = t455*t418*t473;
  t1148 = t940 + t991;
  t813 = t343*t455*t418;
  t860 = -1.*t243*t473;
  t919 = t813 + t860;
  t1962 = Sin(var1[7]);
  t1749 = t71*t653;
  t1755 = t541*t745;
  t1914 = t1749 + t1755;
  t2138 = t71*t1148;
  t2146 = t919*t745;
  t2240 = t2138 + t2146;
  t2320 = t1315*t71*t473;
  t2375 = t1315*t343*t745;
  t2464 = t2320 + t2375;
  t2719 = -1.*t71;
  t2727 = 1. + t2719;
  t3115 = -1.*t1713;
  t3126 = 1. + t3115;
  t1745 = t243*t1315*t1713;
  t1990 = t1914*t1962;
  t1998 = t1745 + t1990;
  t2881 = 0.07996*t2727;
  t2900 = -0.135*t745;
  t2924 = 0. + t2881 + t2900;
  t2946 = 0.135*t2727;
  t2957 = 0.07996*t745;
  t3039 = 0. + t2946 + t2957;
  t3149 = 0.135*t3126;
  t3150 = 0.08055*t1962;
  t3151 = 0. + t3149 + t3150;
  t3325 = -0.08055*t3126;
  t3337 = 0.135*t1962;
  t3347 = 0. + t3325 + t3337;
  t2073 = t1315*t1713*t455;
  t2263 = t2240*t1962;
  t2310 = t2073 + t2263;
  t2313 = -1.*t1713*t418;
  t2513 = t2464*t1962;
  t2532 = t2313 + t2513;
  p_output1[0]=-1.*t541*t71 + t653*t745;
  p_output1[1]=t1148*t745 - 1.*t71*t919;
  p_output1[2]=-1.*t1315*t343*t71 + t1315*t473*t745;
  p_output1[3]=0.;
  p_output1[4]=t1998;
  p_output1[5]=t2310;
  p_output1[6]=t2532;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1713*t1914 + t1315*t1962*t243;
  p_output1[9]=-1.*t1713*t2240 + t1315*t1962*t455;
  p_output1[10]=-1.*t1713*t2464 - 1.*t1962*t418;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1998 + 0.135*(t1713*t1914 - 1.*t1315*t1962*t243) + t1914*t3151 + t1315*t243*t3347 + t2924*t541 + t3039*t653 + 0.04566*(t541*t71 - 1.*t653*t745) + var1[0];
  p_output1[13]=0. - 0.08055*t2310 + t1148*t3039 + t2240*t3151 + t1315*t3347*t455 + 0.135*(t1713*t2240 - 1.*t1315*t1962*t455) + t2924*t919 + 0.04566*(-1.*t1148*t745 + t71*t919) + var1[1];
  p_output1[14]=0. - 0.08055*t2532 + t2464*t3151 + t1315*t2924*t343 - 1.*t3347*t418 + 0.135*(t1713*t2464 + t1962*t418) + t1315*t3039*t473 + 0.04566*(t1315*t343*t71 - 1.*t1315*t473*t745) + var1[2];
  p_output1[15]=1.;
}



void T_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
