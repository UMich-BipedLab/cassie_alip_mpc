/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightShin_src.h"

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
  double t982;
  double t753;
  double t887;
  double t1123;
  double t1625;
  double t896;
  double t1530;
  double t1541;
  double t597;
  double t1726;
  double t2143;
  double t2242;
  double t1587;
  double t2495;
  double t2557;
  double t4548;
  double t3765;
  double t3910;
  double t4231;
  double t3705;
  double t4562;
  double t5057;
  double t5611;
  double t326;
  double t3083;
  double t3370;
  double t3495;
  double t6747;
  double t6814;
  double t6854;
  double t6903;
  double t6945;
  double t7019;
  double t7030;
  double t7033;
  double t7074;
  double t7099;
  double t6423;
  double t2603;
  double t2908;
  double t3290;
  double t4276;
  double t5726;
  double t5831;
  double t6097;
  double t6108;
  double t6391;
  double t6411;
  double t6439;
  double t6602;
  double t6626;
  double t6702;
  double t6953;
  double t6975;
  double t6989;
  double t7034;
  double t7118;
  double t7127;
  double t7128;
  double t7140;
  double t7142;
  double t7154;
  double t7162;
  double t7174;
  double t7222;
  double t7224;
  double t7284;
  double t7290;
  double t7358;
  double t7361;
  double t7362;
  double t7374;
  double t7375;
  double t7376;
  double t7312;
  double t7318;
  double t7292;
  double t7295;
  double t7256;
  double t7404;
  double t7405;
  double t7406;
  double t7407;
  double t7409;
  double t7411;
  double t7415;
  t982 = Cos(var1[16]);
  t753 = Cos(var1[17]);
  t887 = Sin(var1[16]);
  t1123 = Sin(var1[17]);
  t1625 = Cos(var1[15]);
  t896 = t753*t887;
  t1530 = t982*t1123;
  t1541 = 0. + t896 + t1530;
  t597 = Sin(var1[15]);
  t1726 = t982*t753;
  t2143 = -1.*t887*t1123;
  t2242 = 0. + t1726 + t2143;
  t1587 = -1.*t597*t1541;
  t2495 = t1625*t2242;
  t2557 = 0. + t1587 + t2495;
  t4548 = Sin(var1[13]);
  t3765 = t1625*t1541;
  t3910 = t597*t2242;
  t4231 = 0. + t3765 + t3910;
  t3705 = Cos(var1[13]);
  t4562 = Sin(var1[14]);
  t5057 = t4562*t2557;
  t5611 = 0. + t5057;
  t326 = Cos(var1[14]);
  t3083 = Sin(var1[4]);
  t3370 = Cos(var1[4]);
  t3495 = Cos(var1[5]);
  t6747 = -1.*t982*t753;
  t6814 = t887*t1123;
  t6854 = 0. + t6747 + t6814;
  t6903 = -1.*t597*t6854;
  t6945 = 0. + t3765 + t6903;
  t7019 = t597*t1541;
  t7030 = t1625*t6854;
  t7033 = 0. + t7019 + t7030;
  t7074 = t4562*t6945;
  t7099 = 0. + t7074;
  t6423 = Sin(var1[5]);
  t2603 = t326*t2557;
  t2908 = 0. + t2603;
  t3290 = -1.*t2908*t3083;
  t4276 = t3705*t4231;
  t5726 = t4548*t5611;
  t5831 = 0. + t4276 + t5726;
  t6097 = t3495*t5831;
  t6108 = -1.*t4548*t4231;
  t6391 = t3705*t5611;
  t6411 = 0. + t6108 + t6391;
  t6439 = t6411*t6423;
  t6602 = 0. + t6097 + t6439;
  t6626 = t3370*t6602;
  t6702 = 0. + t3290 + t6626;
  t6953 = t326*t6945;
  t6975 = 0. + t6953;
  t6989 = -1.*t6975*t3083;
  t7034 = t3705*t7033;
  t7118 = t4548*t7099;
  t7127 = 0. + t7034 + t7118;
  t7128 = t3495*t7127;
  t7140 = -1.*t4548*t7033;
  t7142 = t3705*t7099;
  t7154 = 0. + t7140 + t7142;
  t7162 = t7154*t6423;
  t7174 = 0. + t7128 + t7162;
  t7222 = t3370*t7174;
  t7224 = 0. + t6989 + t7222;
  t7284 = -1.*t326;
  t7290 = 0. + t7284;
  t7358 = t3495*t6411;
  t7361 = -1.*t5831*t6423;
  t7362 = 0. + t7358 + t7361;
  t7374 = t3495*t7154;
  t7375 = -1.*t7127*t6423;
  t7376 = 0. + t7374 + t7375;
  t7312 = t3705*t7290;
  t7318 = 0. + t7312;
  t7292 = t7290*t4548;
  t7295 = 0. + t7292;
  t7256 = 0. + t4562;
  t7404 = 0.000334*t2908;
  t7405 = 0.00036*t6975;
  t7406 = t7404 + t7405;
  t7407 = 0.0341*t2908;
  t7409 = 0.000334*t6975;
  t7411 = t7407 + t7409;
  t7415 = 0.0341*t7256;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000334*t6702 + 0.00036*t7224;
  p_output1[10]=0.0341*t6702 + 0.000334*t7224;
  p_output1[11]=0.0341*(0. - 1.*t3083*t7256 + t3370*(0. + t3495*t7295 + t6423*t7318));
  p_output1[12]=0.000334*t7362 + 0.00036*t7376;
  p_output1[13]=0.0341*t7362 + 0.000334*t7376;
  p_output1[14]=0.0341*(0. - 1.*t6423*t7295 + t3495*t7318);
  p_output1[15]=t7406;
  p_output1[16]=t7411;
  p_output1[17]=t7415;
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
  p_output1[39]=t7406;
  p_output1[40]=t7411;
  p_output1[41]=t7415;
  p_output1[42]=0.000334*t4231 + 0.00036*t7033;
  p_output1[43]=0.0341*t4231 + 0.000334*t7033;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0.0341;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0.0341;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0.0341;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jdq_AMBody_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
