/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_Pelvis_src.h"

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
  double t1402;
  double t734;
  double t1469;
  double t1663;
  double t148;
  double t1737;
  double t2044;
  double t1459;
  double t1470;
  double t1482;
  double t2392;
  double t2393;
  double t2475;
  double t2624;
  double t2085;
  double t2115;
  double t2133;
  double t1728;
  double t1938;
  double t1981;
  double t2656;
  double t2659;
  double t2749;
  double t2510;
  double t2547;
  double t2564;
  t1402 = Sin(var1[3]);
  t734 = Cos(var1[5]);
  t1469 = Sin(var1[4]);
  t1663 = Cos(var1[3]);
  t148 = Cos(var1[4]);
  t1737 = Sin(var1[5]);
  t2044 = -0.01915*t1663*t148;
  t1459 = -0.10836*t148*t734*t1402;
  t1470 = 0.01915*t1402*t1469;
  t1482 = t1459 + t1470;
  t2392 = 0.10836*t1663*t148*t734;
  t2393 = -0.01915*t1663*t1469;
  t2475 = t2392 + t2393;
  t2624 = -0.01915*t148*t1402;
  t2085 = -1.*t1663*t734*t1469;
  t2115 = -1.*t1402*t1737;
  t2133 = t2085 + t2115;
  t1728 = t1663*t734;
  t1938 = t1402*t1469*t1737;
  t1981 = t1728 + t1938;
  t2656 = -1.*t734*t1402*t1469;
  t2659 = t1663*t1737;
  t2749 = t2656 + t2659;
  t2510 = t734*t1402;
  t2547 = -1.*t1663*t1469*t1737;
  t2564 = t2510 + t2547;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2044 + 0.10836*t2133)*var2[3] + t1482*var2[4] + 0.10836*t1981*var2[5];
  p_output1[10]=(t2624 + 0.10836*t2749)*var2[3] + t2475*var2[4] + 0.10836*t2564*var2[5];
  p_output1[11]=0;
  p_output1[12]=t1482*var2[3] + (t2044 - 0.10836*t1469*t1663*t734)*var2[4] - 0.10836*t148*t1663*t1737*var2[5];
  p_output1[13]=t2475*var2[3] + (t2624 - 0.10836*t1402*t1469*t734)*var2[4] - 0.10836*t1402*t148*t1737*var2[5];
  p_output1[14]=(0.01915*t1469 - 0.10836*t148*t734)*var2[4] + 0.10836*t1469*t1737*var2[5];
  p_output1[15]=0.10836*t1981*var2[3] - 0.10836*t148*t1663*t1737*var2[4] + 0.10836*t2133*var2[5];
  p_output1[16]=0.10836*t2564*var2[3] - 0.10836*t1402*t148*t1737*var2[4] + 0.10836*t2749*var2[5];
  p_output1[17]=0.10836*t1469*t1737*var2[4] - 0.10836*t148*t734*var2[5];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void dJp_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
