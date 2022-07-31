/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftPelvisRotation_src.h"

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
  double t2130;
  double t7031;
  double t7035;
  double t6914;
  double t7104;
  double t7032;
  double t8887;
  double t9009;
  double t1236;
  double t2529;
  double t9373;
  double t3772;
  double t5224;
  double t5706;
  double t5942;
  double t9131;
  double t9162;
  double t9187;
  double t9221;
  double t9242;
  double t9286;
  double t9294;
  double t9298;
  double t9329;
  double t9331;
  double t9333;
  double t9335;
  double t9336;
  double t9348;
  double t9359;
  double t9362;
  double t9389;
  double t9393;
  double t9394;
  double t9374;
  double t9382;
  double t9383;
  double t6463;
  double t9327;
  double t9369;
  double t9370;
  double t9397;
  double t9398;
  double t9400;
  double t9401;
  double t9438;
  double t9439;
  double t9440;
  double t9433;
  double t9434;
  double t9436;
  double t9411;
  double t9414;
  double t9416;
  double t9419;
  t2130 = Cos(var1[4]);
  t7031 = Cos(var1[6]);
  t7035 = Sin(var1[5]);
  t6914 = Cos(var1[5]);
  t7104 = Sin(var1[6]);
  t7032 = t6914*t7031;
  t8887 = -1.*t7035*t7104;
  t9009 = 0. + t7032 + t8887;
  t1236 = Cos(var1[3]);
  t2529 = Sin(var1[4]);
  t9373 = Sin(var1[3]);
  t3772 = -1.*t2529;
  t5224 = 0. + t3772;
  t5706 = var2[3]*t5224;
  t5942 = 0. + var2[5] + var2[6] + t5706;
  t9131 = var2[4]*t9009;
  t9162 = t7031*t7035;
  t9187 = t6914*t7104;
  t9221 = 0. + t9162 + t9187;
  t9242 = t2130*t9221;
  t9286 = 0. + t9242;
  t9294 = var2[3]*t9286;
  t9298 = 0. + t9131 + t9294;
  t9329 = -1.*t7031*t7035;
  t9331 = -1.*t6914*t7104;
  t9333 = 0. + t9329 + t9331;
  t9335 = var2[4]*t9333;
  t9336 = t2130*t9009;
  t9348 = 0. + t9336;
  t9359 = var2[3]*t9348;
  t9362 = 0. + t9335 + t9359;
  t9389 = t1236*t6914*t2529;
  t9393 = t9373*t7035;
  t9394 = t9389 + t9393;
  t9374 = -1.*t6914*t9373;
  t9382 = t1236*t2529*t7035;
  t9383 = t9374 + t9382;
  t6463 = 0.00272*t5942;
  t9327 = 1.e-6*t9298;
  t9369 = 2.e-6*t9362;
  t9370 = t6463 + t9327 + t9369;
  t9397 = 1.e-6*t5942;
  t9398 = 0.00559*t9298;
  t9400 = 3.e-6*t9362;
  t9401 = t9397 + t9398 + t9400;
  t9438 = t6914*t9373*t2529;
  t9439 = -1.*t1236*t7035;
  t9440 = t9438 + t9439;
  t9433 = t1236*t6914;
  t9434 = t9373*t2529*t7035;
  t9436 = t9433 + t9434;
  t9411 = 2.e-6*t5942;
  t9414 = 3.e-6*t9298;
  t9416 = 0.00464*t9362;
  t9419 = t9411 + t9414 + t9416;
  p_output1[0]=t1236*t2130*t9370 + (t7031*t9383 + t7104*t9394)*t9401 + (-1.*t7104*t9383 + t7031*t9394)*t9419;
  p_output1[1]=t2130*t9370*t9373 + t9419*(-1.*t7104*t9436 + t7031*t9440) + t9401*(t7031*t9436 + t7104*t9440);
  p_output1[2]=-1.*t2529*t9370 + (t2130*t7031*t7035 + t2130*t6914*t7104)*t9401 + (t2130*t6914*t7031 - 1.*t2130*t7035*t7104)*t9419;
}



void AMWorld_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
