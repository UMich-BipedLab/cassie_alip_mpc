/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightRotationJoint_src.h"

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
  double t397;
  double t2412;
  double t2543;
  double t2573;
  double t2780;
  double t3032;
  double t3467;
  double t3368;
  double t3604;
  double t841;
  double t950;
  double t1112;
  double t1366;
  double t3453;
  double t3671;
  double t3728;
  double t4340;
  double t4361;
  double t4362;
  double t737;
  double t5136;
  double t5445;
  double t5559;
  double t1161;
  double t1393;
  double t1694;
  double t2662;
  double t2807;
  double t2997;
  double t4203;
  double t4312;
  double t4335;
  double t4537;
  double t4813;
  double t5077;
  double t7409;
  double t7420;
  double t7438;
  double t7500;
  double t7502;
  double t7542;
  double t7776;
  double t7829;
  double t7843;
  double t9417;
  double t9429;
  double t9432;
  t397 = Cos(var1[3]);
  t2412 = Cos(var1[13]);
  t2543 = -1.*t2412;
  t2573 = 1. + t2543;
  t2780 = Sin(var1[13]);
  t3032 = Cos(var1[5]);
  t3467 = Sin(var1[3]);
  t3368 = Sin(var1[4]);
  t3604 = Sin(var1[5]);
  t841 = Cos(var1[14]);
  t950 = -1.*t841;
  t1112 = 1. + t950;
  t1366 = Sin(var1[14]);
  t3453 = t397*t3032*t3368;
  t3671 = t3467*t3604;
  t3728 = t3453 + t3671;
  t4340 = -1.*t3032*t3467;
  t4361 = t397*t3368*t3604;
  t4362 = t4340 + t4361;
  t737 = Cos(var1[4]);
  t5136 = t2780*t3728;
  t5445 = t2412*t4362;
  t5559 = t5136 + t5445;
  t1161 = -0.08055*t1112;
  t1393 = -0.135*t1366;
  t1694 = 0. + t1161 + t1393;
  t2662 = 0.07996*t2573;
  t2807 = 0.135*t2780;
  t2997 = 0. + t2662 + t2807;
  t4203 = -0.135*t2573;
  t4312 = 0.07996*t2780;
  t4335 = 0. + t4203 + t4312;
  t4537 = -0.135*t1112;
  t4813 = 0.08055*t1366;
  t5077 = 0. + t4537 + t4813;
  t7409 = t3032*t3467*t3368;
  t7420 = -1.*t397*t3604;
  t7438 = t7409 + t7420;
  t7500 = t397*t3032;
  t7502 = t3467*t3368*t3604;
  t7542 = t7500 + t7502;
  t7776 = t2780*t7438;
  t7829 = t2412*t7542;
  t7843 = t7776 + t7829;
  t9417 = t737*t3032*t2780;
  t9429 = t2412*t737*t3604;
  t9432 = t9417 + t9429;
  p_output1[0]=0. + t2997*t3728 + t4335*t4362 - 0.01004*(t2412*t3728 - 1.*t2780*t4362) + t5077*t5559 + t1694*t397*t737 - 0.135*(-1.*t1366*t397*t737 + t5559*t841) - 0.08055*(t1366*t5559 + t397*t737*t841) + var1[0];
  p_output1[1]=0. + t1694*t3467*t737 + t2997*t7438 + t4335*t7542 - 0.01004*(t2412*t7438 - 1.*t2780*t7542) + t5077*t7843 - 0.08055*(t1366*t7843 + t3467*t737*t841) - 0.135*(-1.*t1366*t3467*t737 + t7843*t841) + var1[1];
  p_output1[2]=0. - 1.*t1694*t3368 + t2997*t3032*t737 + t3604*t4335*t737 - 0.01004*(t2412*t3032*t737 - 1.*t2780*t3604*t737) + t5077*t9432 - 0.08055*(-1.*t3368*t841 + t1366*t9432) - 0.135*(t1366*t3368 + t841*t9432) + var1[2];
}



void p_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
