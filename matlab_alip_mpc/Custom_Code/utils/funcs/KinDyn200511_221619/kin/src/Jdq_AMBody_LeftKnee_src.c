/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftKnee_src.h"

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
  double t423;
  double t437;
  double t453;
  double t1574;
  double t4;
  double t560;
  double t1073;
  double t2253;
  double t1956;
  double t2197;
  double t2408;
  double t289;
  double t1581;
  double t2223;
  double t2612;
  double t2700;
  double t864;
  double t2926;
  double t2960;
  double t3023;
  double t3042;
  double t3118;
  double t4407;
  double t4661;
  double t4687;
  double t5231;
  double t5292;
  double t493;
  double t534;
  double t697;
  double t1118;
  double t1119;
  double t1128;
  double t1424;
  double t1537;
  double t1612;
  double t1628;
  double t1692;
  double t2805;
  double t2865;
  double t2907;
  double t3034;
  double t3154;
  double t3324;
  double t3399;
  double t3450;
  double t3459;
  double t3496;
  double t3637;
  double t3668;
  double t4026;
  double t4085;
  double t4712;
  double t5027;
  double t5069;
  double t5146;
  double t5321;
  double t5373;
  double t5700;
  double t5731;
  double t6101;
  double t6105;
  double t6156;
  double t6163;
  double t6170;
  double t6175;
  double t6633;
  double t6643;
  double t6705;
  double t6769;
  double t6826;
  double t6874;
  double t7054;
  double t7056;
  double t7088;
  double t7402;
  double t7437;
  double t7478;
  double t7494;
  double t7534;
  double t7536;
  double t7537;
  double t7541;
  double t7561;
  double t7563;
  double t7566;
  double t7595;
  t423 = Cos(var1[7]);
  t437 = -1.*t423;
  t453 = 0. + t437;
  t1574 = Sin(var1[4]);
  t4 = Cos(var1[4]);
  t560 = Sin(var1[5]);
  t1073 = Sin(var1[6]);
  t2253 = Cos(var1[9]);
  t1956 = Cos(var1[8]);
  t2197 = Sin(var1[9]);
  t2408 = Sin(var1[8]);
  t289 = Cos(var1[6]);
  t1581 = Sin(var1[7]);
  t2223 = t1956*t2197;
  t2612 = t2253*t2408;
  t2700 = 0. + t2223 + t2612;
  t864 = Cos(var1[5]);
  t2926 = -1.*t2253*t1956;
  t2960 = t2197*t2408;
  t3023 = 0. + t2926 + t2960;
  t3042 = t1581*t2700;
  t3118 = 0. + t3042;
  t4407 = t2253*t1956;
  t4661 = -1.*t2197*t2408;
  t4687 = 0. + t4407 + t4661;
  t5231 = t1581*t4687;
  t5292 = 0. + t5231;
  t493 = t289*t453;
  t534 = 0. + t493;
  t697 = t534*t560;
  t1118 = t453*t1073;
  t1119 = 0. + t1118;
  t1128 = t864*t1119;
  t1424 = 0. + t697 + t1128;
  t1537 = t4*t1424;
  t1612 = 0. + t1581;
  t1628 = -1.*t1574*t1612;
  t1692 = 0. + t1537 + t1628;
  t2805 = t423*t2700;
  t2865 = 0. + t2805;
  t2907 = -1.*t1574*t2865;
  t3034 = -1.*t1073*t3023;
  t3154 = t289*t3118;
  t3324 = 0. + t3034 + t3154;
  t3399 = t560*t3324;
  t3450 = t289*t3023;
  t3459 = t1073*t3118;
  t3496 = 0. + t3450 + t3459;
  t3637 = t864*t3496;
  t3668 = 0. + t3399 + t3637;
  t4026 = t4*t3668;
  t4085 = 0. + t2907 + t4026;
  t4712 = t423*t4687;
  t5027 = 0. + t4712;
  t5069 = -1.*t1574*t5027;
  t5146 = -1.*t1073*t2700;
  t5321 = t289*t5292;
  t5373 = 0. + t5146 + t5321;
  t5700 = t560*t5373;
  t5731 = t289*t2700;
  t6101 = t1073*t5292;
  t6105 = 0. + t5731 + t6101;
  t6156 = t864*t6105;
  t6163 = 0. + t5700 + t6156;
  t6170 = t4*t6163;
  t6175 = 0. + t5069 + t6170;
  t6633 = t864*t534;
  t6643 = -1.*t560*t1119;
  t6705 = 0. + t6633 + t6643;
  t6769 = t864*t3324;
  t6826 = -1.*t560*t3496;
  t6874 = 0. + t6769 + t6826;
  t7054 = t864*t5373;
  t7056 = -1.*t560*t6105;
  t7088 = 0. + t7054 + t7056;
  t7402 = 3.e-6*t1612;
  t7437 = 0.00216*t2865;
  t7478 = 0.000956*t5027;
  t7494 = t7402 + t7437 + t7478;
  t7534 = 1.e-6*t1612;
  t7536 = 0.000956*t2865;
  t7537 = 0.00144*t5027;
  t7541 = t7534 + t7536 + t7537;
  t7561 = 0.00334*t1612;
  t7563 = 3.e-6*t2865;
  t7566 = 1.e-6*t5027;
  t7595 = t7561 + t7563 + t7566;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=3.e-6*t1692 + 0.00216*t4085 + 0.000956*t6175;
  p_output1[10]=1.e-6*t1692 + 0.000956*t4085 + 0.00144*t6175;
  p_output1[11]=0.00334*t1692 + 3.e-6*t4085 + 1.e-6*t6175;
  p_output1[12]=3.e-6*t6705 + 0.00216*t6874 + 0.000956*t7088;
  p_output1[13]=1.e-6*t6705 + 0.000956*t6874 + 0.00144*t7088;
  p_output1[14]=0.00334*t6705 + 3.e-6*t6874 + 1.e-6*t7088;
  p_output1[15]=t7494;
  p_output1[16]=t7541;
  p_output1[17]=t7595;
  p_output1[18]=t7494;
  p_output1[19]=t7541;
  p_output1[20]=t7595;
  p_output1[21]=0.000956*t2700 + 0.00216*t3023;
  p_output1[22]=0.00144*t2700 + 0.000956*t3023;
  p_output1[23]=1.e-6*t2700 + 3.e-6*t3023;
  p_output1[24]=3.e-6;
  p_output1[25]=1.e-6;
  p_output1[26]=0.00334;
  p_output1[27]=3.e-6;
  p_output1[28]=1.e-6;
  p_output1[29]=0.00334;
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



void Jdq_AMBody_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
