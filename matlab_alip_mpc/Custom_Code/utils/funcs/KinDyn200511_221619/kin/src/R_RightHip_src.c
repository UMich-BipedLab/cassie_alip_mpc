/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightHip_src.h"

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
  double t754;
  double t1610;
  double t554;
  double t1406;
  double t1676;
  double t261;
  double t2035;
  double t2417;
  double t1545;
  double t1704;
  double t1857;
  double t2105;
  double t2211;
  double t2214;
  double t2494;
  double t2570;
  double t2243;
  double t2269;
  double t2370;
  double t2385;
  double t2391;
  double t2393;
  double t2591;
  double t2637;
  double t2667;
  double t2709;
  double t2710;
  double t2726;
  double t2847;
  double t2858;
  double t2896;
  t754 = Cos(var1[5]);
  t1610 = Sin(var1[3]);
  t554 = Cos(var1[3]);
  t1406 = Sin(var1[4]);
  t1676 = Sin(var1[5]);
  t261 = Cos(var1[13]);
  t2035 = Sin(var1[13]);
  t2417 = Cos(var1[4]);
  t1545 = t554*t754*t1406;
  t1704 = t1610*t1676;
  t1857 = t1545 + t1704;
  t2105 = -1.*t754*t1610;
  t2211 = t554*t1406*t1676;
  t2214 = t2105 + t2211;
  t2494 = Cos(var1[14]);
  t2570 = Sin(var1[14]);
  t2243 = t754*t1610*t1406;
  t2269 = -1.*t554*t1676;
  t2370 = t2243 + t2269;
  t2385 = t554*t754;
  t2391 = t1610*t1406*t1676;
  t2393 = t2385 + t2391;
  t2591 = t2035*t1857;
  t2637 = t261*t2214;
  t2667 = t2591 + t2637;
  t2709 = t2035*t2370;
  t2710 = t261*t2393;
  t2726 = t2709 + t2710;
  t2847 = t2417*t754*t2035;
  t2858 = t261*t2417*t1676;
  t2896 = t2847 + t2858;
  p_output1[0]=t2035*t2214 - 1.*t1857*t261;
  p_output1[1]=t2035*t2393 - 1.*t2370*t261;
  p_output1[2]=t1676*t2035*t2417 - 1.*t2417*t261*t754;
  p_output1[3]=t2570*t2667 + t2417*t2494*t554;
  p_output1[4]=t1610*t2417*t2494 + t2570*t2726;
  p_output1[5]=-1.*t1406*t2494 + t2570*t2896;
  p_output1[6]=-1.*t2494*t2667 + t2417*t2570*t554;
  p_output1[7]=t1610*t2417*t2570 - 1.*t2494*t2726;
  p_output1[8]=-1.*t1406*t2570 - 1.*t2494*t2896;
}



void R_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
