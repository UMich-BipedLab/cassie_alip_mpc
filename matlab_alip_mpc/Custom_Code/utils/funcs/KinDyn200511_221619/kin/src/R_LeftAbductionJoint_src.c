/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftAbductionJoint_src.h"

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
  double t3094;
  double t3245;
  double t1396;
  double t3302;
  double t3361;
  double t3375;
  double t3353;
  double t3411;
  double t3394;
  double t3406;
  double t3408;
  double t3372;
  double t3376;
  double t3385;
  double t3468;
  double t3471;
  double t3480;
  double t3424;
  double t3437;
  double t3450;
  t3094 = Cos(var1[4]);
  t3245 = Sin(var1[3]);
  t1396 = Cos(var1[3]);
  t3302 = Sin(var1[4]);
  t3361 = Cos(var1[5]);
  t3375 = Sin(var1[5]);
  t3353 = Cos(var1[6]);
  t3411 = Sin(var1[6]);
  t3394 = t1396*t3361*t3302;
  t3406 = t3245*t3375;
  t3408 = t3394 + t3406;
  t3372 = -1.*t3361*t3245;
  t3376 = t1396*t3302*t3375;
  t3385 = t3372 + t3376;
  t3468 = t3361*t3245*t3302;
  t3471 = -1.*t1396*t3375;
  t3480 = t3468 + t3471;
  t3424 = t1396*t3361;
  t3437 = t3245*t3302*t3375;
  t3450 = t3424 + t3437;
  p_output1[0]=t1396*t3094;
  p_output1[1]=t3094*t3245;
  p_output1[2]=-1.*t3302;
  p_output1[3]=t3353*t3385 + t3408*t3411;
  p_output1[4]=t3353*t3450 + t3411*t3480;
  p_output1[5]=t3094*t3353*t3375 + t3094*t3361*t3411;
  p_output1[6]=t3353*t3408 - 1.*t3385*t3411;
  p_output1[7]=-1.*t3411*t3450 + t3353*t3480;
  p_output1[8]=t3094*t3353*t3361 - 1.*t3094*t3375*t3411;
}



void R_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
