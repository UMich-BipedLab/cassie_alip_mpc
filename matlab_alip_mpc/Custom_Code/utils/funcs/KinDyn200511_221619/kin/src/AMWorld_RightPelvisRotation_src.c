/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightPelvisRotation_src.h"

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
  double t1782;
  double t2544;
  double t152;
  double t2504;
  double t3928;
  double t5783;
  double t49;
  double t6546;
  double t6414;
  double t6430;
  double t6517;
  double t6188;
  double t6292;
  double t6294;
  double t6304;
  double t6542;
  double t6585;
  double t6588;
  double t6589;
  double t6594;
  double t6607;
  double t6615;
  double t6640;
  double t6714;
  double t6719;
  double t6738;
  double t6754;
  double t6841;
  double t6863;
  double t6892;
  double t6906;
  double t2507;
  double t4281;
  double t4776;
  double t5976;
  double t6069;
  double t6122;
  double t6321;
  double t6643;
  double t6931;
  double t7021;
  double t7038;
  double t7057;
  double t7058;
  double t7063;
  double t7181;
  double t7182;
  double t7228;
  double t7265;
  double t7267;
  double t7329;
  double t7152;
  double t7154;
  double t7159;
  double t7165;
  t1782 = Cos(var1[5]);
  t2544 = Sin(var1[3]);
  t152 = Cos(var1[3]);
  t2504 = Sin(var1[4]);
  t3928 = Sin(var1[5]);
  t5783 = Cos(var1[13]);
  t49 = Sin(var1[13]);
  t6546 = Cos(var1[4]);
  t6414 = t5783*t1782;
  t6430 = -1.*t49*t3928;
  t6517 = 0. + t6414 + t6430;
  t6188 = -1.*t2504;
  t6292 = 0. + t6188;
  t6294 = var2[3]*t6292;
  t6304 = 0. + var2[13] + var2[5] + t6294;
  t6542 = var2[4]*t6517;
  t6585 = t1782*t49;
  t6588 = t5783*t3928;
  t6589 = 0. + t6585 + t6588;
  t6594 = t6546*t6589;
  t6607 = 0. + t6594;
  t6615 = var2[3]*t6607;
  t6640 = 0. + t6542 + t6615;
  t6714 = -1.*t1782*t49;
  t6719 = -1.*t5783*t3928;
  t6738 = 0. + t6714 + t6719;
  t6754 = var2[4]*t6738;
  t6841 = t6546*t6517;
  t6863 = 0. + t6841;
  t6892 = var2[3]*t6863;
  t6906 = 0. + t6754 + t6892;
  t2507 = t152*t1782*t2504;
  t4281 = t2544*t3928;
  t4776 = t2507 + t4281;
  t5976 = -1.*t1782*t2544;
  t6069 = t152*t2504*t3928;
  t6122 = t5976 + t6069;
  t6321 = -1.e-6*t6304;
  t6643 = 0.00559*t6640;
  t6931 = -3.e-6*t6906;
  t7021 = t6321 + t6643 + t6931;
  t7038 = 0.00272*t6304;
  t7057 = -1.e-6*t6640;
  t7058 = 2.e-6*t6906;
  t7063 = t7038 + t7057 + t7058;
  t7181 = t1782*t2544*t2504;
  t7182 = -1.*t152*t3928;
  t7228 = t7181 + t7182;
  t7265 = t152*t1782;
  t7267 = t2544*t2504*t3928;
  t7329 = t7265 + t7267;
  t7152 = 2.e-6*t6304;
  t7154 = -3.e-6*t6640;
  t7159 = 0.00464*t6906;
  t7165 = t7152 + t7154 + t7159;
  p_output1[0]=(t4776*t49 + t5783*t6122)*t7021 + t152*t6546*t7063 + (t4776*t5783 - 1.*t49*t6122)*t7165;
  p_output1[1]=t2544*t6546*t7063 + t7165*(t5783*t7228 - 1.*t49*t7329) + t7021*(t49*t7228 + t5783*t7329);
  p_output1[2]=(t1782*t49*t6546 + t3928*t5783*t6546)*t7021 - 1.*t2504*t7063 + (-1.*t3928*t49*t6546 + t1782*t5783*t6546)*t7165;
}



void AMWorld_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
