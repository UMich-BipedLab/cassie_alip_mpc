/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_Pelvis_src.h"

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
  double t1049;
  double t1437;
  double t1714;
  double t2209;
  double t596;
  double t4825;
  double t1497;
  double t2053;
  double t3723;
  double t3888;
  double t4344;
  double t4552;
  double t4655;
  double t4695;
  double t5283;
  double t5398;
  double t5635;
  double t5644;
  double t4803;
  double t4889;
  double t5074;
  double t5668;
  double t5669;
  double t5736;
  double t6975;
  double t6989;
  double t7009;
  double t7138;
  double t7189;
  double t7294;
  double t6084;
  double t6132;
  double t6161;
  double t7418;
  double t7598;
  double t7607;
  double t6318;
  double t6335;
  double t6336;
  t1049 = Cos(var1[4]);
  t1437 = Cos(var1[5]);
  t1714 = Sin(var1[4]);
  t2209 = Sin(var1[5]);
  t596 = Cos(var1[3]);
  t4825 = Sin(var1[3]);
  t1497 = 0.015*t1049*t1437;
  t2053 = -0.0942*t1714;
  t3723 = 0.000169*t1049*t2209;
  t3888 = t1497 + t2053 + t3723;
  t4344 = 0.113*t1049*t1437;
  t4552 = -0.015*t1714;
  t4655 = 0.000516*t1049*t2209;
  t4695 = t4344 + t4552 + t4655;
  t5283 = 0.000516*t1049*t1437;
  t5398 = -0.000169*t1714;
  t5635 = 0.084*t1049*t2209;
  t5644 = t5283 + t5398 + t5635;
  t4803 = t596*t1437*t1714;
  t4889 = t4825*t2209;
  t5074 = t4803 + t4889;
  t5668 = -1.*t1437*t4825;
  t5669 = t596*t1714*t2209;
  t5736 = t5668 + t5669;
  t6975 = 0.000169*t1437;
  t6989 = -0.015*t2209;
  t7009 = t6975 + t6989;
  t7138 = 0.000516*t1437;
  t7189 = -0.113*t2209;
  t7294 = t7138 + t7189;
  t6084 = t1437*t4825*t1714;
  t6132 = -1.*t596*t2209;
  t6161 = t6084 + t6132;
  t7418 = 0.084*t1437;
  t7598 = -0.000516*t2209;
  t7607 = t7418 + t7598;
  t6318 = t596*t1437;
  t6335 = t4825*t1714*t2209;
  t6336 = t6318 + t6335;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t4695*t5074 + t5644*t5736 + t1049*t3888*t596;
  p_output1[10]=t1049*t3888*t4825 + t4695*t6161 + t5644*t6336;
  p_output1[11]=-1.*t1714*t3888 + t1049*t1437*t4695 + t1049*t2209*t5644;
  p_output1[12]=t1049*t596*t7009 + t5074*t7294 + t5736*t7607;
  p_output1[13]=t1049*t4825*t7009 + t6161*t7294 + t6336*t7607;
  p_output1[14]=-1.*t1714*t7009 + t1049*t1437*t7294 + t1049*t2209*t7607;
  p_output1[15]=0.015*t5074 + 0.000169*t5736 + 0.0942*t1049*t596;
  p_output1[16]=0.0942*t1049*t4825 + 0.015*t6161 + 0.000169*t6336;
  p_output1[17]=t3888;
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



void Jdq_AMWorld_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
