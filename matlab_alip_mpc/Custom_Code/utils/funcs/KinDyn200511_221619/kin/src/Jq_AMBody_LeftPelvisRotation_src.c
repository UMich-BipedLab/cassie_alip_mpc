/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_LeftPelvisRotation_src.h"

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
  double t1236;
  double t3436;
  double t1696;
  double t3345;
  double t4011;
  double t337;
  double t3372;
  double t4014;
  double t4187;
  double t4592;
  double t4755;
  double t5138;
  double t7661;
  double t7672;
  double t7676;
  double t7678;
  double t7771;
  double t7772;
  double t8664;
  double t8887;
  double t8984;
  double t9009;
  double t9131;
  double t9162;
  double t9187;
  double t8687;
  double t9202;
  double t9204;
  double t9212;
  double t9221;
  double t9242;
  double t9255;
  double t9282;
  double t9286;
  t1236 = Sin(var1[4]);
  t3436 = Cos(var1[5]);
  t1696 = Cos(var1[6]);
  t3345 = Sin(var1[5]);
  t4011 = Sin(var1[6]);
  t337 = Cos(var1[4]);
  t3372 = t1696*t3345;
  t4014 = t3436*t4011;
  t4187 = 0. + t3372 + t4014;
  t4592 = t3436*t1696;
  t4755 = -1.*t3345*t4011;
  t5138 = 0. + t4592 + t4755;
  t7661 = -1.*t1696*t3345;
  t7672 = -1.*t3436*t4011;
  t7676 = t7661 + t7672;
  t7678 = var2[4]*t7676;
  t7771 = t4592 + t4755;
  t7772 = var2[3]*t337*t7771;
  t8664 = t7678 + t7772;
  t8887 = var2[3]*t337*t7676;
  t8984 = -1.*t3436*t1696;
  t9009 = t3345*t4011;
  t9131 = t8984 + t9009;
  t9162 = var2[4]*t9131;
  t9187 = t8887 + t9162;
  t8687 = 1.e-6*t8664;
  t9202 = 2.e-6*t9187;
  t9204 = t8687 + t9202;
  t9212 = 0.00559*t8664;
  t9221 = 3.e-6*t9187;
  t9242 = t9212 + t9221;
  t9255 = 3.e-6*t8664;
  t9282 = 0.00464*t9187;
  t9286 = t9255 + t9282;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=-0.00272*t337*var2[3] - 1.e-6*t1236*t4187*var2[3] - 2.e-6*t1236*t5138*var2[3];
  p_output1[13]=-1.e-6*t337*var2[3] - 0.00559*t1236*t4187*var2[3] - 3.e-6*t1236*t5138*var2[3];
  p_output1[14]=-2.e-6*t337*var2[3] - 3.e-6*t1236*t4187*var2[3] - 0.00464*t1236*t5138*var2[3];
  p_output1[15]=t9204;
  p_output1[16]=t9242;
  p_output1[17]=t9286;
  p_output1[18]=t9204;
  p_output1[19]=t9242;
  p_output1[20]=t9286;
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



void Jq_AMBody_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
