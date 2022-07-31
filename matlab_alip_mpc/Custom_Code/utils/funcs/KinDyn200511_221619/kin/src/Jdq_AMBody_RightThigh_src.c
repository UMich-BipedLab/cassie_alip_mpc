/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightThigh_src.h"

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
  double t1847;
  double t1034;
  double t1345;
  double t1813;
  double t1997;
  double t3105;
  double t61;
  double t2544;
  double t3515;
  double t3520;
  double t4100;
  double t4403;
  double t2749;
  double t7019;
  double t7021;
  double t7054;
  double t7063;
  double t132;
  double t1060;
  double t2381;
  double t2437;
  double t2533;
  double t2660;
  double t2729;
  double t2761;
  double t2969;
  double t2972;
  double t2994;
  double t3164;
  double t3446;
  double t3453;
  double t3812;
  double t4423;
  double t4542;
  double t4625;
  double t4751;
  double t4804;
  double t4819;
  double t5016;
  double t5024;
  double t5295;
  double t6177;
  double t6464;
  double t6546;
  double t6973;
  double t7031;
  double t7082;
  double t7083;
  double t7089;
  double t7095;
  double t7097;
  double t7098;
  double t7115;
  double t7125;
  double t7128;
  double t7132;
  double t7222;
  double t7227;
  double t7228;
  double t7230;
  double t7231;
  double t7236;
  double t7242;
  double t7265;
  double t7269;
  double t7324;
  double t7325;
  double t7327;
  double t7329;
  double t7334;
  double t7342;
  double t7343;
  double t7357;
  double t7365;
  double t7378;
  double t7382;
  double t7384;
  t1847 = Cos(var1[14]);
  t1034 = Sin(var1[4]);
  t1345 = Cos(var1[4]);
  t1813 = Cos(var1[5]);
  t1997 = Sin(var1[13]);
  t3105 = Cos(var1[15]);
  t61 = Sin(var1[14]);
  t2544 = Cos(var1[13]);
  t3515 = t3105*t61;
  t3520 = 0. + t3515;
  t4100 = Sin(var1[15]);
  t4403 = 0. + t4100;
  t2749 = Sin(var1[5]);
  t7019 = -1.*t3105;
  t7021 = 0. + t7019;
  t7054 = t61*t4100;
  t7063 = 0. + t7054;
  t132 = 0. + t61;
  t1060 = -1.*t132*t1034;
  t2381 = -1.*t1847*t1997;
  t2437 = 0. + t2381;
  t2533 = t1813*t2437;
  t2660 = -1.*t2544*t1847;
  t2729 = 0. + t2660;
  t2761 = t2729*t2749;
  t2969 = 0. + t2533 + t2761;
  t2972 = t1345*t2969;
  t2994 = 0. + t1060 + t2972;
  t3164 = t1847*t3105;
  t3446 = 0. + t3164;
  t3453 = -1.*t3446*t1034;
  t3812 = t1997*t3520;
  t4423 = t2544*t4403;
  t4542 = 0. + t3812 + t4423;
  t4625 = t1813*t4542;
  t4751 = t2544*t3520;
  t4804 = -1.*t1997*t4403;
  t4819 = 0. + t4751 + t4804;
  t5016 = t4819*t2749;
  t5024 = 0. + t4625 + t5016;
  t5295 = t1345*t5024;
  t6177 = 0. + t3453 + t5295;
  t6464 = t1847*t4100;
  t6546 = 0. + t6464;
  t6973 = -1.*t6546*t1034;
  t7031 = t2544*t7021;
  t7082 = t1997*t7063;
  t7083 = 0. + t7031 + t7082;
  t7089 = t1813*t7083;
  t7095 = -1.*t7021*t1997;
  t7097 = t2544*t7063;
  t7098 = 0. + t7095 + t7097;
  t7115 = t7098*t2749;
  t7125 = 0. + t7089 + t7115;
  t7128 = t1345*t7125;
  t7132 = 0. + t6973 + t7128;
  t7222 = t2729*t1813;
  t7227 = -1.*t2437*t2749;
  t7228 = 0. + t7222 + t7227;
  t7230 = t1813*t4819;
  t7231 = -1.*t4542*t2749;
  t7236 = 0. + t7230 + t7231;
  t7242 = t1813*t7098;
  t7265 = -1.*t7083*t2749;
  t7269 = 0. + t7242 + t7265;
  t7324 = 0.000284*t3446;
  t7325 = 0.0117*t132;
  t7327 = 0.018*t6546;
  t7329 = t7324 + t7325 + t7327;
  t7334 = 0.0563*t3446;
  t7342 = 0.000019*t132;
  t7343 = 0.000284*t6546;
  t7357 = t7334 + t7342 + t7343;
  t7365 = 0.000019*t3446;
  t7378 = 0.0498*t132;
  t7382 = 0.0117*t6546;
  t7384 = t7365 + t7378 + t7382;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.0117*t2994 + 0.000284*t6177 + 0.018*t7132;
  p_output1[10]=0.000019*t2994 + 0.0563*t6177 + 0.000284*t7132;
  p_output1[11]=0.0498*t2994 + 0.000019*t6177 + 0.0117*t7132;
  p_output1[12]=0.0117*t7228 + 0.000284*t7236 + 0.018*t7269;
  p_output1[13]=0.000019*t7228 + 0.0563*t7236 + 0.000284*t7269;
  p_output1[14]=0.0498*t7228 + 0.000019*t7236 + 0.0117*t7269;
  p_output1[15]=t7329;
  p_output1[16]=t7357;
  p_output1[17]=t7384;
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
  p_output1[39]=t7329;
  p_output1[40]=t7357;
  p_output1[41]=t7384;
  p_output1[42]=0.000284*t4403 + 0.018*t7021;
  p_output1[43]=0.0563*t4403 + 0.000284*t7021;
  p_output1[44]=0.000019*t4403 + 0.0117*t7021;
  p_output1[45]=0.0117;
  p_output1[46]=0.000019;
  p_output1[47]=0.0498;
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



void Jdq_AMBody_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
