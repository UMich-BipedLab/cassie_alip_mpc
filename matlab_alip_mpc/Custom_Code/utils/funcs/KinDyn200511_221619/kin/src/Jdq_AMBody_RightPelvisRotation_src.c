/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightPelvisRotation_src.h"

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
  double t1948;
  double t3493;
  double t2514;
  double t3370;
  double t3582;
  double t79;
  double t85;
  double t306;
  double t3471;
  double t4097;
  double t4099;
  double t5136;
  double t5137;
  double t5763;
  double t5764;
  double t5859;
  double t5912;
  double t5976;
  double t6306;
  double t6308;
  double t6313;
  t1948 = Cos(var1[4]);
  t3493 = Cos(var1[13]);
  t2514 = Cos(var1[5]);
  t3370 = Sin(var1[13]);
  t3582 = Sin(var1[5]);
  t79 = Sin(var1[4]);
  t85 = -1.*t79;
  t306 = 0. + t85;
  t3471 = t2514*t3370;
  t4097 = t3493*t3582;
  t4099 = 0. + t3471 + t4097;
  t5136 = t1948*t4099;
  t5137 = 0. + t5136;
  t5763 = t3493*t2514;
  t5764 = -1.*t3370*t3582;
  t5859 = 0. + t5763 + t5764;
  t5912 = t1948*t5859;
  t5976 = 0. + t5912;
  t6306 = -1.*t2514*t3370;
  t6308 = -1.*t3493*t3582;
  t6313 = 0. + t6306 + t6308;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.00272*t306 - 1.e-6*t5137 + 2.e-6*t5976;
  p_output1[10]=-1.e-6*t306 + 0.00559*t5137 - 3.e-6*t5976;
  p_output1[11]=2.e-6*t306 - 3.e-6*t5137 + 0.00464*t5976;
  p_output1[12]=-1.e-6*t5859 + 2.e-6*t6313;
  p_output1[13]=0.00559*t5859 - 3.e-6*t6313;
  p_output1[14]=-3.e-6*t5859 + 0.00464*t6313;
  p_output1[15]=0.00272;
  p_output1[16]=-1.e-6;
  p_output1[17]=2.e-6;
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
  p_output1[39]=0.00272;
  p_output1[40]=-1.e-6;
  p_output1[41]=2.e-6;
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



void Jdq_AMBody_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
