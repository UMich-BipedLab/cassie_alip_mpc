/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_RightHip_src.h"

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
  double t611;
  double t980;
  double t1186;
  double t962;
  double t3310;
  double t1187;
  double t2299;
  double t2359;
  double t1002;
  double t1441;
  double t1487;
  double t2405;
  double t2410;
  double t3523;
  double t3524;
  double t3538;
  double t3692;
  double t3789;
  double t3821;
  double t3898;
  double t3899;
  double t3930;
  double t4004;
  double t4063;
  double t4118;
  double t4138;
  double t4220;
  double t4232;
  double t4251;
  double t4274;
  double t4276;
  double t4277;
  double t4283;
  double t4335;
  double t4359;
  double t4387;
  double t4444;
  double t4447;
  double t4450;
  double t4457;
  double t4458;
  double t4459;
  double t4469;
  double t4472;
  double t4366;
  double t4574;
  double t4613;
  double t4616;
  double t4641;
  double t4655;
  double t4665;
  double t4676;
  double t4684;
  double t4694;
  double t4701;
  double t4749;
  double t4767;
  double t4770;
  double t4810;
  double t4831;
  double t4863;
  double t4866;
  double t4871;
  double t4872;
  double t4875;
  double t4880;
  double t4884;
  double t4886;
  double t4903;
  t611 = Sin(var1[4]);
  t980 = Cos(var1[5]);
  t1186 = Sin(var1[13]);
  t962 = Cos(var1[13]);
  t3310 = Cos(var1[14]);
  t1187 = Sin(var1[5]);
  t2299 = Cos(var1[4]);
  t2359 = Sin(var1[14]);
  t1002 = -1.*t962*t980;
  t1441 = t1186*t1187;
  t1487 = 0. + t1002 + t1441;
  t2405 = 0. + t2359;
  t2410 = -1.*t2299*t2405;
  t3523 = -1.*t3310*t1186;
  t3524 = 0. + t3523;
  t3538 = t980*t3524;
  t3692 = -1.*t962*t3310;
  t3789 = 0. + t3692;
  t3821 = t3789*t1187;
  t3898 = 0. + t3538 + t3821;
  t3899 = -1.*t611*t3898;
  t3930 = t2410 + t3899;
  t4004 = t1186*t2359;
  t4063 = 0. + t4004;
  t4118 = t962*t2359;
  t4138 = 0. + t4118;
  t4220 = t980*t1186;
  t4232 = t962*t1187;
  t4251 = t4220 + t4232;
  t4274 = var2[3]*t2299*t4251;
  t4276 = t962*t980;
  t4277 = -1.*t1186*t1187;
  t4283 = t4276 + t4277;
  t4335 = var2[4]*t4283;
  t4359 = t4274 + t4335;
  t4387 = -1.*t980*t3524;
  t4444 = -1.*t3789*t1187;
  t4447 = t4387 + t4444;
  t4450 = var2[4]*t4447;
  t4457 = t3789*t980;
  t4458 = -1.*t3524*t1187;
  t4459 = t4457 + t4458;
  t4469 = var2[3]*t2299*t4459;
  t4472 = t4450 + t4469;
  t4366 = 0.000842*t4359;
  t4574 = -1.e-6*t4359;
  t4613 = t3310*t980*t1186;
  t4616 = t962*t3310*t1187;
  t4641 = t4613 + t4616;
  t4655 = var2[4]*t4641;
  t4665 = -1.*t962*t3310*t980;
  t4676 = t3310*t1186*t1187;
  t4684 = t4665 + t4676;
  t4694 = var2[3]*t2299*t4684;
  t4701 = t4655 + t4694;
  t4749 = t962*t980*t2359;
  t4767 = -1.*t1186*t2359*t1187;
  t4770 = t4749 + t4767;
  t4810 = var2[13]*t3310;
  t4831 = var2[5]*t3310;
  t4863 = var2[4]*t4770;
  t4866 = -1.*t3310*t611;
  t4871 = t980*t1186*t2359;
  t4872 = t962*t2359*t1187;
  t4875 = t4871 + t4872;
  t4880 = t2299*t4875;
  t4884 = t4866 + t4880;
  t4886 = var2[3]*t4884;
  t4903 = t4810 + t4831 + t4863 + t4886;
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
  p_output1[12]=-1.e-6*t3930*var2[3] - 0.000842*t1487*t611*var2[3];
  p_output1[13]=0.00608*(-1.*t2299*(0. + t3310) - 1.*t611*(0. + t1187*t4138 + t4063*t980))*var2[3];
  p_output1[14]=0.00644*t3930*var2[3] + 1.e-6*t1487*t611*var2[3];
  p_output1[15]=t4366 - 1.e-6*t4472;
  p_output1[16]=0.00608*(t2299*(-1.*t1187*t4063 + t4138*t980)*var2[3] + (-1.*t1187*t4138 - 1.*t4063*t980)*var2[4]);
  p_output1[17]=0.00644*t4472 + t4574;
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
  p_output1[39]=t4366 - 1.e-6*t4701;
  p_output1[40]=0.00608*(t2299*t4770*var2[3] + (-1.*t1187*t2359*t962 - 1.*t1186*t2359*t980)*var2[4]);
  p_output1[41]=t4574 + 0.00644*t4701;
  p_output1[42]=-1.e-6*t4903;
  p_output1[43]=0.00608*((t2299*t4641 + t2359*t611)*var2[3] + (-1.*t1186*t1187*t3310 + t3310*t962*t980)*var2[4] - 1.*t2359*var2[5] - 1.*t2359*var2[13]);
  p_output1[44]=0.00644*t4903;
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



void Jq_AMBody_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
