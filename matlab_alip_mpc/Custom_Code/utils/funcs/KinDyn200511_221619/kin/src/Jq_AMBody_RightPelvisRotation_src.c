/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_RightPelvisRotation_src.h"

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
  double t306;
  double t1518;
  double t539;
  double t1238;
  double t1667;
  double t79;
  double t1496;
  double t1782;
  double t1795;
  double t1948;
  double t2261;
  double t2323;
  double t4480;
  double t4989;
  double t5137;
  double t5389;
  double t5516;
  double t5642;
  double t5763;
  double t5859;
  double t5878;
  double t5912;
  double t5976;
  double t6010;
  double t6012;
  double t5764;
  double t6026;
  double t6069;
  double t6122;
  double t6131;
  double t6154;
  double t6165;
  double t6172;
  double t6188;
  t306 = Sin(var1[4]);
  t1518 = Cos(var1[13]);
  t539 = Cos(var1[5]);
  t1238 = Sin(var1[13]);
  t1667 = Sin(var1[5]);
  t79 = Cos(var1[4]);
  t1496 = t539*t1238;
  t1782 = t1518*t1667;
  t1795 = 0. + t1496 + t1782;
  t1948 = t1518*t539;
  t2261 = -1.*t1238*t1667;
  t2323 = 0. + t1948 + t2261;
  t4480 = -1.*t539*t1238;
  t4989 = -1.*t1518*t1667;
  t5137 = t4480 + t4989;
  t5389 = var2[4]*t5137;
  t5516 = t1948 + t2261;
  t5642 = var2[3]*t79*t5516;
  t5763 = t5389 + t5642;
  t5859 = var2[3]*t79*t5137;
  t5878 = -1.*t1518*t539;
  t5912 = t1238*t1667;
  t5976 = t5878 + t5912;
  t6010 = var2[4]*t5976;
  t6012 = t5859 + t6010;
  t5764 = -1.e-6*t5763;
  t6026 = 2.e-6*t6012;
  t6069 = t5764 + t6026;
  t6122 = 0.00559*t5763;
  t6131 = -3.e-6*t6012;
  t6154 = t6122 + t6131;
  t6165 = -3.e-6*t5763;
  t6172 = 0.00464*t6012;
  t6188 = t6165 + t6172;
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
  p_output1[12]=1.e-6*t1795*t306*var2[3] - 2.e-6*t2323*t306*var2[3] - 0.00272*t79*var2[3];
  p_output1[13]=-0.00559*t1795*t306*var2[3] + 3.e-6*t2323*t306*var2[3] + 1.e-6*t79*var2[3];
  p_output1[14]=3.e-6*t1795*t306*var2[3] - 0.00464*t2323*t306*var2[3] - 2.e-6*t79*var2[3];
  p_output1[15]=t6069;
  p_output1[16]=t6154;
  p_output1[17]=t6188;
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
  p_output1[39]=t6069;
  p_output1[40]=t6154;
  p_output1[41]=t6188;
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



void Jq_AMBody_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
