/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_Pelvis_src.h"

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
  double t395;
  double t731;
  double t316;
  double t979;
  double t1036;
  double t1076;
  double t1694;
  double t1816;
  double t1899;
  double t1994;
  double t2075;
  double t2083;
  t395 = Cos(var1[4]);
  t731 = Sin(var1[3]);
  t316 = Cos(var1[3]);
  t979 = Sin(var1[4]);
  t1036 = Cos(var1[5]);
  t1076 = Sin(var1[5]);
  t1694 = t316*t1036*t979;
  t1816 = t731*t1076;
  t1899 = t1694 + t1816;
  t1994 = t1036*t731*t979;
  t2075 = -1.*t316*t1076;
  t2083 = t1994 + t2075;
  p_output1[0]=t316*t395;
  p_output1[1]=t395*t731;
  p_output1[2]=-1.*t979;
  p_output1[3]=0;
  p_output1[4]=-1.*t1036*t731 + t1076*t316*t979;
  p_output1[5]=t1036*t316 + t1076*t731*t979;
  p_output1[6]=t1076*t395;
  p_output1[7]=0;
  p_output1[8]=t1899;
  p_output1[9]=t2083;
  p_output1[10]=t1036*t395;
  p_output1[11]=0;
  p_output1[12]=0.10836*t1899 + 0.01915*t316*t395 + var1[0];
  p_output1[13]=0.10836*t2083 + 0.01915*t395*t731 + var1[1];
  p_output1[14]=0.10836*t1036*t395 - 0.01915*t979 + var1[2];
  p_output1[15]=1.;
}



void T_Pelvis_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
