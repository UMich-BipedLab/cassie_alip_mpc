/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightHip_src.h"

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
  double t21;
  double t1755;
  double t3197;
  double t1778;
  double t3199;
  double t1197;
  double t4511;
  double t4207;
  double t1469;
  double t1653;
  double t521;
  double t4681;
  double t4684;
  double t4579;
  double t4610;
  double t2141;
  double t3217;
  double t3218;
  double t4213;
  double t4220;
  double t4359;
  double t4549;
  double t4553;
  double t4677;
  double t4712;
  double t4715;
  double t4719;
  double t4732;
  double t4738;
  double t4749;
  double t4777;
  double t4784;
  double t4788;
  double t4798;
  double t4803;
  double t4863;
  double t4871;
  double t4872;
  double t4875;
  double t4880;
  double t4884;
  double t4886;
  double t4905;
  double t4906;
  double t4944;
  double t4949;
  double t4950;
  double t3436;
  double t4447;
  double t4472;
  double t5053;
  double t5120;
  double t5124;
  double t5090;
  double t5094;
  double t4857;
  double t4952;
  double t4956;
  double t5298;
  double t5307;
  double t5322;
  double t5340;
  double t5343;
  double t5366;
  double t4990;
  double t5002;
  double t5007;
  double t5329;
  double t5374;
  double t5375;
  double t5068;
  double t5089;
  double t5106;
  double t5125;
  double t5130;
  double t5149;
  double t5204;
  double t5208;
  double t5222;
  double t5233;
  double t5237;
  double t5242;
  double t5260;
  double t5270;
  double t5271;
  double t5278;
  double t5463;
  double t5468;
  double t5470;
  t21 = Cos(var1[3]);
  t1755 = Cos(var1[5]);
  t3197 = Sin(var1[3]);
  t1778 = Sin(var1[4]);
  t3199 = Sin(var1[5]);
  t1197 = Sin(var1[14]);
  t4511 = 0. + t1197;
  t4207 = Cos(var1[13]);
  t1469 = Cos(var1[14]);
  t1653 = Sin(var1[13]);
  t521 = Cos(var1[4]);
  t4681 = -1.*t1469*t1653;
  t4684 = 0. + t4681;
  t4579 = -1.*t4207*t1469;
  t4610 = 0. + t4579;
  t2141 = t21*t1755*t1778;
  t3217 = t3197*t3199;
  t3218 = t2141 + t3217;
  t4213 = -1.*t1755*t3197;
  t4220 = t21*t1778*t3199;
  t4359 = t4213 + t4220;
  t4549 = var2[13]*t4511;
  t4553 = var2[5]*t4511;
  t4677 = t4610*t1755;
  t4712 = -1.*t4684*t3199;
  t4715 = 0. + t4677 + t4712;
  t4719 = var2[4]*t4715;
  t4732 = -1.*t4511*t1778;
  t4738 = t1755*t4684;
  t4749 = t4610*t3199;
  t4777 = 0. + t4738 + t4749;
  t4784 = t521*t4777;
  t4788 = 0. + t4732 + t4784;
  t4798 = var2[3]*t4788;
  t4803 = 0. + t4549 + t4553 + t4719 + t4798;
  t4863 = -1.*var2[14];
  t4871 = t1755*t1653;
  t4872 = t4207*t3199;
  t4875 = 0. + t4871 + t4872;
  t4880 = var2[4]*t4875;
  t4884 = -1.*t4207*t1755;
  t4886 = t1653*t3199;
  t4905 = 0. + t4884 + t4886;
  t4906 = t521*t4905;
  t4944 = 0. + t4906;
  t4949 = var2[3]*t4944;
  t4950 = 0. + t4863 + t4880 + t4949;
  t3436 = t1653*t3218;
  t4447 = t4207*t4359;
  t4472 = t3436 + t4447;
  t5053 = 0. + t1469;
  t5120 = t1653*t1197;
  t5124 = 0. + t5120;
  t5090 = t4207*t1197;
  t5094 = 0. + t5090;
  t4857 = 0.00644*t4803;
  t4952 = -1.e-6*t4950;
  t4956 = 0. + t4857 + t4952;
  t5298 = t1755*t3197*t1778;
  t5307 = -1.*t21*t3199;
  t5322 = t5298 + t5307;
  t5340 = t21*t1755;
  t5343 = t3197*t1778*t3199;
  t5366 = t5340 + t5343;
  t4990 = -1.e-6*t4803;
  t5002 = 0.000842*t4950;
  t5007 = 0. + t4990 + t5002;
  t5329 = t1653*t5322;
  t5374 = t4207*t5366;
  t5375 = t5329 + t5374;
  t5068 = var2[13]*t5053;
  t5089 = var2[5]*t5053;
  t5106 = t1755*t5094;
  t5125 = -1.*t5124*t3199;
  t5130 = 0. + t5106 + t5125;
  t5149 = var2[4]*t5130;
  t5204 = -1.*t5053*t1778;
  t5208 = t1755*t5124;
  t5222 = t5094*t3199;
  t5233 = 0. + t5208 + t5222;
  t5237 = t521*t5233;
  t5242 = 0. + t5204 + t5237;
  t5260 = var2[3]*t5242;
  t5270 = 0. + t5068 + t5089 + t5149 + t5260;
  t5271 = 0.00608*t5270;
  t5278 = 0. + t5271;
  t5463 = t521*t1755*t1653;
  t5468 = t4207*t521*t3199;
  t5470 = t5463 + t5468;
  p_output1[0]=(-1.*t3218*t4207 + t1653*t4359)*t5007 + t4956*(-1.*t1469*t4472 + t1197*t21*t521) + (t1197*t4472 + t1469*t21*t521)*t5278;
  p_output1[1]=t5007*(-1.*t4207*t5322 + t1653*t5366) + t5278*(t1469*t3197*t521 + t1197*t5375) + t4956*(t1197*t3197*t521 - 1.*t1469*t5375);
  p_output1[2]=t5007*(t1653*t3199*t521 - 1.*t1755*t4207*t521) + t5278*(-1.*t1469*t1778 + t1197*t5470) + t4956*(-1.*t1197*t1778 - 1.*t1469*t5470);
}



void AMWorld_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
