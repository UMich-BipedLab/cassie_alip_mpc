/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftHip_src.h"

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
  double t465;
  double t283;
  double t307;
  double t755;
  double t2288;
  double t3957;
  double t3964;
  double t1267;
  double t2306;
  double t2472;
  double t2592;
  double t2682;
  double t4581;
  double t4376;
  double t4594;
  double t4650;
  double t4666;
  double t4674;
  double t46;
  double t391;
  double t894;
  double t975;
  double t1125;
  double t1373;
  double t1408;
  double t1521;
  double t1536;
  double t1690;
  double t1765;
  double t1826;
  double t2509;
  double t3135;
  double t3441;
  double t3637;
  double t3996;
  double t4004;
  double t4090;
  double t4141;
  double t4151;
  double t4312;
  double t4497;
  double t4500;
  double t4505;
  double t4523;
  t465 = Cos(var1[5]);
  t283 = Cos(var1[6]);
  t307 = Sin(var1[5]);
  t755 = Sin(var1[6]);
  t2288 = Cos(var1[7]);
  t3957 = Sin(var1[7]);
  t3964 = 0. + t3957;
  t1267 = Cos(var1[4]);
  t2306 = -1.*t283*t2288;
  t2472 = 0. + t2306;
  t2592 = -1.*t2288*t755;
  t2682 = 0. + t2592;
  t4581 = 0. + t2288;
  t4376 = Sin(var1[4]);
  t4594 = t283*t3957;
  t4650 = 0. + t4594;
  t4666 = t755*t3957;
  t4674 = 0. + t4666;
  t46 = -1.*var2[7];
  t391 = t283*t307;
  t894 = t465*t755;
  t975 = 0. + t391 + t894;
  t1125 = var2[4]*t975;
  t1373 = -1.*t465*t283;
  t1408 = t307*t755;
  t1521 = 0. + t1373 + t1408;
  t1536 = t1267*t1521;
  t1690 = 0. + t1536;
  t1765 = var2[3]*t1690;
  t1826 = 0. + t46 + t1125 + t1765;
  t2509 = t465*t2472;
  t3135 = -1.*t307*t2682;
  t3441 = 0. + t2509 + t3135;
  t3637 = var2[4]*t3441;
  t3996 = var2[5]*t3964;
  t4004 = var2[6]*t3964;
  t4090 = t2472*t307;
  t4141 = t465*t2682;
  t4151 = 0. + t4090 + t4141;
  t4312 = t1267*t4151;
  t4497 = -1.*t4376*t3964;
  t4500 = 0. + t4312 + t4497;
  t4505 = var2[3]*t4500;
  t4523 = 0. + t3637 + t3996 + t4004 + t4505;
  p_output1[0]=0. + 0.000842*t1826 - 1.e-6*t4523;
  p_output1[1]=0. + 0.00608*(0. + (0. - 1.*t4376*t4581 + t1267*(0. + t307*t4650 + t465*t4674))*var2[3] + (0. + t465*t4650 - 1.*t307*t4674)*var2[4] + t4581*var2[5] + t4581*var2[6]);
  p_output1[2]=0. - 1.e-6*t1826 + 0.00644*t4523;
}



void AMBody_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
