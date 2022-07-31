/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftPelvisRotation_src.h"

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
  double t5138;
  double t2466;
  double t2845;
  double t5165;
  double t337;
  double t353;
  double t768;
  double t5003;
  double t5706;
  double t5708;
  double t6050;
  double t6463;
  double t6933;
  double t6935;
  double t6944;
  double t7035;
  double t7676;
  double t9255;
  double t9282;
  double t9286;
  t2130 = Cos(var1[4]);
  t5138 = Cos(var1[5]);
  t2466 = Cos(var1[6]);
  t2845 = Sin(var1[5]);
  t5165 = Sin(var1[6]);
  t337 = Sin(var1[4]);
  t353 = -1.*t337;
  t768 = 0. + t353;
  t5003 = t2466*t2845;
  t5706 = t5138*t5165;
  t5708 = 0. + t5003 + t5706;
  t6050 = t2130*t5708;
  t6463 = 0. + t6050;
  t6933 = t5138*t2466;
  t6935 = -1.*t2845*t5165;
  t6944 = 0. + t6933 + t6935;
  t7035 = t2130*t6944;
  t7676 = 0. + t7035;
  t9255 = -1.*t2466*t2845;
  t9282 = -1.*t5138*t5165;
  t9286 = 0. + t9255 + t9282;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=1.e-6*t6463 + 2.e-6*t7676 + 0.00272*t768;
  p_output1[10]=0.00559*t6463 + 3.e-6*t7676 + 1.e-6*t768;
  p_output1[11]=3.e-6*t6463 + 0.00464*t7676 + 2.e-6*t768;
  p_output1[12]=1.e-6*t6944 + 2.e-6*t9286;
  p_output1[13]=0.00559*t6944 + 3.e-6*t9286;
  p_output1[14]=3.e-6*t6944 + 0.00464*t9286;
  p_output1[15]=0.00272;
  p_output1[16]=1.e-6;
  p_output1[17]=2.e-6;
  p_output1[18]=0.00272;
  p_output1[19]=1.e-6;
  p_output1[20]=2.e-6;
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



void Jdq_AMBody_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
