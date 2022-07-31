/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightKnee_src.h"

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
  double t1418;
  double t1606;
  double t1648;
  double t1180;
  double t1351;
  double t1387;
  double t2373;
  double t4856;
  double t4280;
  double t4342;
  double t4872;
  double t1681;
  double t213;
  double t4531;
  double t5054;
  double t5252;
  double t5614;
  double t5665;
  double t5669;
  double t5920;
  double t6170;
  double t2812;
  double t6518;
  double t6520;
  double t6530;
  double t6568;
  double t6569;
  double t685;
  double t1305;
  double t1875;
  double t2014;
  double t2267;
  double t2560;
  double t2588;
  double t2837;
  double t3052;
  double t3223;
  double t3541;
  double t5471;
  double t5481;
  double t5593;
  double t5771;
  double t6197;
  double t6276;
  double t6399;
  double t6424;
  double t6450;
  double t6469;
  double t6489;
  double t6490;
  double t6491;
  double t6501;
  double t6531;
  double t6554;
  double t6560;
  double t6563;
  double t6570;
  double t6576;
  double t6590;
  double t6593;
  double t6598;
  double t6605;
  double t6608;
  double t6611;
  double t6629;
  double t6633;
  double t6716;
  double t6717;
  double t6724;
  double t6730;
  double t6736;
  double t6742;
  double t6760;
  double t6762;
  double t6765;
  double t6815;
  double t6828;
  double t6831;
  double t6835;
  double t6837;
  double t6839;
  double t6844;
  double t6845;
  double t6849;
  double t6852;
  double t6854;
  double t6855;
  t1418 = Cos(var1[14]);
  t1606 = -1.*t1418;
  t1648 = 0. + t1606;
  t1180 = Sin(var1[4]);
  t1351 = Cos(var1[4]);
  t1387 = Cos(var1[5]);
  t2373 = Cos(var1[13]);
  t4856 = Cos(var1[15]);
  t4280 = Cos(var1[16]);
  t4342 = Sin(var1[15]);
  t4872 = Sin(var1[16]);
  t1681 = Sin(var1[13]);
  t213 = Sin(var1[14]);
  t4531 = t4280*t4342;
  t5054 = t4856*t4872;
  t5252 = 0. + t4531 + t5054;
  t5614 = -1.*t4856*t4280;
  t5665 = t4342*t4872;
  t5669 = 0. + t5614 + t5665;
  t5920 = t213*t5252;
  t6170 = 0. + t5920;
  t2812 = Sin(var1[5]);
  t6518 = t4856*t4280;
  t6520 = -1.*t4342*t4872;
  t6530 = 0. + t6518 + t6520;
  t6568 = t213*t6530;
  t6569 = 0. + t6568;
  t685 = 0. + t213;
  t1305 = -1.*t685*t1180;
  t1875 = t1648*t1681;
  t2014 = 0. + t1875;
  t2267 = t1387*t2014;
  t2560 = t2373*t1648;
  t2588 = 0. + t2560;
  t2837 = t2588*t2812;
  t3052 = 0. + t2267 + t2837;
  t3223 = t1351*t3052;
  t3541 = 0. + t1305 + t3223;
  t5471 = t1418*t5252;
  t5481 = 0. + t5471;
  t5593 = -1.*t5481*t1180;
  t5771 = t2373*t5669;
  t6197 = t1681*t6170;
  t6276 = 0. + t5771 + t6197;
  t6399 = t1387*t6276;
  t6424 = -1.*t1681*t5669;
  t6450 = t2373*t6170;
  t6469 = 0. + t6424 + t6450;
  t6489 = t6469*t2812;
  t6490 = 0. + t6399 + t6489;
  t6491 = t1351*t6490;
  t6501 = 0. + t5593 + t6491;
  t6531 = t1418*t6530;
  t6554 = 0. + t6531;
  t6560 = -1.*t6554*t1180;
  t6563 = t2373*t5252;
  t6570 = t1681*t6569;
  t6576 = 0. + t6563 + t6570;
  t6590 = t1387*t6576;
  t6593 = -1.*t1681*t5252;
  t6598 = t2373*t6569;
  t6605 = 0. + t6593 + t6598;
  t6608 = t6605*t2812;
  t6611 = 0. + t6590 + t6608;
  t6629 = t1351*t6611;
  t6633 = 0. + t6560 + t6629;
  t6716 = t2588*t1387;
  t6717 = -1.*t2014*t2812;
  t6724 = 0. + t6716 + t6717;
  t6730 = t1387*t6469;
  t6736 = -1.*t6276*t2812;
  t6742 = 0. + t6730 + t6736;
  t6760 = t1387*t6605;
  t6762 = -1.*t6576*t2812;
  t6765 = 0. + t6760 + t6762;
  t6815 = -3.e-6*t685;
  t6828 = 0.00216*t5481;
  t6831 = 0.000956*t6554;
  t6835 = t6815 + t6828 + t6831;
  t6837 = -1.e-6*t685;
  t6839 = 0.000956*t5481;
  t6844 = 0.00144*t6554;
  t6845 = t6837 + t6839 + t6844;
  t6849 = 0.00334*t685;
  t6852 = -3.e-6*t5481;
  t6854 = -1.e-6*t6554;
  t6855 = t6849 + t6852 + t6854;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-3.e-6*t3541 + 0.00216*t6501 + 0.000956*t6633;
  p_output1[10]=-1.e-6*t3541 + 0.000956*t6501 + 0.00144*t6633;
  p_output1[11]=0.00334*t3541 - 3.e-6*t6501 - 1.e-6*t6633;
  p_output1[12]=-3.e-6*t6724 + 0.00216*t6742 + 0.000956*t6765;
  p_output1[13]=-1.e-6*t6724 + 0.000956*t6742 + 0.00144*t6765;
  p_output1[14]=0.00334*t6724 - 3.e-6*t6742 - 1.e-6*t6765;
  p_output1[15]=t6835;
  p_output1[16]=t6845;
  p_output1[17]=t6855;
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
  p_output1[39]=t6835;
  p_output1[40]=t6845;
  p_output1[41]=t6855;
  p_output1[42]=0.000956*t5252 + 0.00216*t5669;
  p_output1[43]=0.00144*t5252 + 0.000956*t5669;
  p_output1[44]=-1.e-6*t5252 - 3.e-6*t5669;
  p_output1[45]=-3.e-6;
  p_output1[46]=-1.e-6;
  p_output1[47]=0.00334;
  p_output1[48]=-3.e-6;
  p_output1[49]=-1.e-6;
  p_output1[50]=0.00334;
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



void Jdq_AMBody_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
