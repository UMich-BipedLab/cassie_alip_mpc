/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_Pelvis_src.h"

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
  double t1162;
  double t562;
  double t1067;
  double t1447;
  double t2242;
  double t2329;
  double t2395;
  double t2426;
  double t2496;
  double t2524;
  double t2531;
  double t2609;
  double t3427;
  double t3629;
  double t3638;
  double t3295;
  double t3335;
  double t3346;
  t1162 = Cos(var1[3]);
  t562 = Cos(var1[4]);
  t1067 = Sin(var1[3]);
  t1447 = Sin(var1[4]);
  t2242 = Sin(var1[5]);
  t2329 = Cos(var1[5]);
  t2395 = t1162*t2329*t1447;
  t2426 = t1067*t2242;
  t2496 = t2395 + t2426;
  t2524 = -1.*t1162*t2329;
  t2531 = -1.*t1067*t1447*t2242;
  t2609 = t2524 + t2531;
  t3427 = t2329*t1067;
  t3629 = -1.*t1162*t1447*t2242;
  t3638 = t3427 + t3629;
  t3295 = -1.*t2329*t1067*t1447;
  t3335 = t1162*t2242;
  t3346 = t3295 + t3335;
  p_output1[0]=-1.*t1067*t562*var2[3] - 1.*t1162*t1447*var2[4];
  p_output1[1]=t1162*t562*var2[3] - 1.*t1067*t1447*var2[4];
  p_output1[2]=-1.*t562*var2[4];
  p_output1[3]=0;
  p_output1[4]=t2609*var2[3] + t1162*t2242*t562*var2[4] + t2496*var2[5];
  p_output1[5]=(t1162*t1447*t2242 - 1.*t1067*t2329)*var2[3] + t1067*t2242*t562*var2[4] + (-1.*t1162*t2242 + t1067*t1447*t2329)*var2[5];
  p_output1[6]=-1.*t1447*t2242*var2[4] + t2329*t562*var2[5];
  p_output1[7]=0;
  p_output1[8]=t3346*var2[3] + t1162*t2329*t562*var2[4] + t3638*var2[5];
  p_output1[9]=t2496*var2[3] + t1067*t2329*t562*var2[4] + t2609*var2[5];
  p_output1[10]=-1.*t1447*t2329*var2[4] - 1.*t2242*t562*var2[5];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.10836*t3346 - 0.01915*t1067*t562)*var2[3] + (-0.01915*t1162*t1447 + 0.10836*t1162*t2329*t562)*var2[4] + 0.10836*t3638*var2[5];
  p_output1[13]=var2[1] + (0.10836*t2496 + 0.01915*t1162*t562)*var2[3] + (-0.01915*t1067*t1447 + 0.10836*t1067*t2329*t562)*var2[4] + 0.10836*t2609*var2[5];
  p_output1[14]=var2[2] + (-0.10836*t1447*t2329 - 0.01915*t562)*var2[4] - 0.10836*t2242*t562*var2[5];
  p_output1[15]=0;
}



void dT_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
