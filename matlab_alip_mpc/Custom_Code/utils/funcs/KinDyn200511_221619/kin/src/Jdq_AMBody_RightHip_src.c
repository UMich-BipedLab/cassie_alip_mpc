/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightHip_src.h"

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
  double t3892;
  double t3655;
  double t4004;
  double t3839;
  double t3930;
  double t4150;
  double t1924;
  double t1002;
  double t1487;
  double t2857;
  double t3939;
  double t3949;
  double t3950;
  double t4080;
  double t4131;
  double t4152;
  double t4161;
  double t4169;
  double t4171;
  double t4220;
  double t4232;
  double t4251;
  double t4274;
  double t4276;
  double t4472;
  double t4482;
  double t4447;
  double t4459;
  double t4562;
  double t4574;
  double t4579;
  double t4613;
  double t4616;
  double t4655;
  double t4366;
  double t4749;
  double t4777;
  double t4781;
  t3892 = Cos(var1[14]);
  t3655 = Cos(var1[4]);
  t4004 = Cos(var1[13]);
  t3839 = Cos(var1[5]);
  t3930 = Sin(var1[13]);
  t4150 = Sin(var1[5]);
  t1924 = Sin(var1[4]);
  t1002 = Sin(var1[14]);
  t1487 = 0. + t1002;
  t2857 = -1.*t1487*t1924;
  t3939 = -1.*t3892*t3930;
  t3949 = 0. + t3939;
  t3950 = t3839*t3949;
  t4080 = -1.*t4004*t3892;
  t4131 = 0. + t4080;
  t4152 = t4131*t4150;
  t4161 = 0. + t3950 + t4152;
  t4169 = t3655*t4161;
  t4171 = 0. + t2857 + t4169;
  t4220 = -1.*t4004*t3839;
  t4232 = t3930*t4150;
  t4251 = 0. + t4220 + t4232;
  t4274 = t3655*t4251;
  t4276 = 0. + t4274;
  t4472 = t4004*t1002;
  t4482 = 0. + t4472;
  t4447 = t3930*t1002;
  t4459 = 0. + t4447;
  t4562 = t3839*t3930;
  t4574 = t4004*t4150;
  t4579 = 0. + t4562 + t4574;
  t4613 = t4131*t3839;
  t4616 = -1.*t3949*t4150;
  t4655 = 0. + t4613 + t4616;
  t4366 = 0. + t3892;
  t4749 = -1.e-6*t1487;
  t4777 = 0.00608*t4366;
  t4781 = 0.00644*t1487;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.e-6*t4171 + 0.000842*t4276;
  p_output1[10]=0.00608*(0. - 1.*t1924*t4366 + t3655*(0. + t3839*t4459 + t4150*t4482));
  p_output1[11]=0.00644*t4171 - 1.e-6*t4276;
  p_output1[12]=0.000842*t4579 - 1.e-6*t4655;
  p_output1[13]=0.00608*(0. - 1.*t4150*t4459 + t3839*t4482);
  p_output1[14]=-1.e-6*t4579 + 0.00644*t4655;
  p_output1[15]=t4749;
  p_output1[16]=t4777;
  p_output1[17]=t4781;
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
  p_output1[39]=t4749;
  p_output1[40]=t4777;
  p_output1[41]=t4781;
  p_output1[42]=-0.000842;
  p_output1[43]=0;
  p_output1[44]=1.e-6;
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



void Jdq_AMBody_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
