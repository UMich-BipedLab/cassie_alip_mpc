/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftPelvisRotation_src.h"

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
  double t2361;
  double t2397;
  double t2165;
  double t2567;
  double t3002;
  double t2379;
  double t2603;
  double t2611;
  double t337;
  double t768;
  double t1451;
  double t1472;
  double t1696;
  double t2977;
  double t3345;
  double t3372;
  double t3436;
  double t4187;
  double t4354;
  double t4356;
  double t4592;
  double t4826;
  double t5008;
  double t6017;
  double t6935;
  double t7035;
  double t7053;
  double t7659;
  double t7661;
  t2361 = Cos(var1[6]);
  t2397 = Sin(var1[5]);
  t2165 = Cos(var1[5]);
  t2567 = Sin(var1[6]);
  t3002 = Cos(var1[4]);
  t2379 = t2165*t2361;
  t2603 = -1.*t2397*t2567;
  t2611 = 0. + t2379 + t2603;
  t337 = Sin(var1[4]);
  t768 = -1.*t337;
  t1451 = 0. + t768;
  t1472 = var2[3]*t1451;
  t1696 = 0. + var2[5] + var2[6] + t1472;
  t2977 = var2[4]*t2611;
  t3345 = t2361*t2397;
  t3372 = t2165*t2567;
  t3436 = 0. + t3345 + t3372;
  t4187 = t3002*t3436;
  t4354 = 0. + t4187;
  t4356 = var2[3]*t4354;
  t4592 = 0. + t2977 + t4356;
  t4826 = -1.*t2361*t2397;
  t5008 = -1.*t2165*t2567;
  t6017 = 0. + t4826 + t5008;
  t6935 = var2[4]*t6017;
  t7035 = t3002*t2611;
  t7053 = 0. + t7035;
  t7659 = var2[3]*t7053;
  t7661 = 0. + t6935 + t7659;
  p_output1[0]=0.00272*t1696 + 1.e-6*t4592 + 2.e-6*t7661;
  p_output1[1]=1.e-6*t1696 + 0.00559*t4592 + 3.e-6*t7661;
  p_output1[2]=2.e-6*t1696 + 3.e-6*t4592 + 0.00464*t7661;
}



void AMBody_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
