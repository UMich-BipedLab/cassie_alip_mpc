/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightAbductionJoint_src.h"

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
  double t506;
  double t25;
  double t426;
  double t515;
  double t1695;
  double t1414;
  double t1733;
  double t1455;
  double t2295;
  double t2558;
  double t3422;
  double t3473;
  double t3941;
  double t3957;
  double t4064;
  double t5067;
  double t5088;
  double t5092;
  double t6336;
  double t6375;
  double t6398;
  double t6490;
  double t7337;
  double t7342;
  double t7707;
  double t3587;
  double t3723;
  double t3787;
  double t8298;
  double t4264;
  double t4330;
  double t4423;
  double t4212;
  double t4244;
  double t5176;
  double t8997;
  double t6885;
  double t6945;
  double t6965;
  double t9269;
  double t9275;
  double t9278;
  double t9348;
  double t9357;
  double t1615;
  double t1888;
  double t1948;
  double t8240;
  double t8242;
  double t8243;
  double t9370;
  double t9372;
  double t9374;
  double t9360;
  double t9361;
  double t9366;
  double t8302;
  double t8339;
  double t3791;
  double t3833;
  double t8483;
  double t8638;
  double t4556;
  double t5188;
  double t8690;
  double t8702;
  double t8728;
  double t5457;
  double t5464;
  double t5592;
  double t8797;
  double t8837;
  double t8884;
  double t5881;
  double t5944;
  double t5956;
  double t8999;
  double t6515;
  double t6629;
  double t9398;
  double t9399;
  double t9401;
  double t9402;
  double t9403;
  double t9080;
  double t9088;
  double t7084;
  double t7099;
  double t9490;
  double t9493;
  double t7878;
  double t7913;
  double t7956;
  double t9327;
  double t9330;
  double t9340;
  t506 = Cos(var1[3]);
  t25 = Cos(var1[4]);
  t426 = Sin(var1[3]);
  t515 = Sin(var1[4]);
  t1695 = Cos(var1[13]);
  t1414 = Cos(var1[5]);
  t1733 = Sin(var1[5]);
  t1455 = Sin(var1[13]);
  t2295 = t506*t1414*t515;
  t2558 = t426*t1733;
  t3422 = t2295 + t2558;
  t3473 = t1695*t3422;
  t3941 = -1.*t1414*t426;
  t3957 = t506*t515*t1733;
  t4064 = t3941 + t3957;
  t5067 = -1.*t506*t1414;
  t5088 = -1.*t426*t515*t1733;
  t5092 = t5067 + t5088;
  t6336 = t1414*t426*t515;
  t6375 = -1.*t506*t1733;
  t6398 = t6336 + t6375;
  t6490 = t1695*t6398;
  t7337 = t1695*t25*t1414;
  t7342 = -1.*t25*t1455*t1733;
  t7707 = t7337 + t7342;
  t3587 = t1414*t426;
  t3723 = -1.*t506*t515*t1733;
  t3787 = t3587 + t3723;
  t8298 = -1.*t1455*t3422;
  t4264 = -1.*t1414*t426*t515;
  t4330 = t506*t1733;
  t4423 = t4264 + t4330;
  t4212 = -1.*t1455*t4064;
  t4244 = t3473 + t4212;
  t5176 = t1695*t5092;
  t8997 = -1.*t1455*t6398;
  t6885 = t506*t1414;
  t6945 = t426*t515*t1733;
  t6965 = t6885 + t6945;
  t9269 = -1.*t25*t1414*t1455;
  t9275 = -1.*t1695*t25*t1733;
  t9278 = t9269 + t9275;
  t9348 = -1.*t1695;
  t9357 = 1. + t9348;
  t1615 = t506*t25*t1414*t1455;
  t1888 = t1695*t506*t25*t1733;
  t1948 = t1615 + t1888;
  t8240 = t1695*t506*t25*t1414;
  t8242 = -1.*t506*t25*t1455*t1733;
  t8243 = t8240 + t8242;
  t9370 = -0.135*t9357;
  t9372 = 0.07996*t1455;
  t9374 = 0. + t9370 + t9372;
  t9360 = 0.07996*t9357;
  t9361 = 0.135*t1455;
  t9366 = 0. + t9360 + t9361;
  t8302 = t1695*t3787;
  t8339 = t8298 + t8302;
  t3791 = t1455*t3787;
  t3833 = t3473 + t3791;
  t8483 = -1.*t1695*t4064;
  t8638 = t8298 + t8483;
  t4556 = t1455*t4423;
  t5188 = t4556 + t5176;
  t8690 = t1695*t4423;
  t8702 = -1.*t1455*t5092;
  t8728 = t8690 + t8702;
  t5457 = t25*t1414*t1455*t426;
  t5464 = t1695*t25*t426*t1733;
  t5592 = t5457 + t5464;
  t8797 = t1695*t25*t1414*t426;
  t8837 = -1.*t25*t1455*t426*t1733;
  t8884 = t8797 + t8837;
  t5881 = t1455*t3422;
  t5944 = t1695*t4064;
  t5956 = t5881 + t5944;
  t8999 = t8997 + t5176;
  t6515 = t1455*t5092;
  t6629 = t6490 + t6515;
  t9398 = 0.135*t1695;
  t9399 = t9398 + t9372;
  t9401 = 0.07996*t1695;
  t9402 = -0.135*t1455;
  t9403 = t9401 + t9402;
  t9080 = -1.*t1695*t6965;
  t9088 = t8997 + t9080;
  t7084 = -1.*t1455*t6965;
  t7099 = t6490 + t7084;
  t9490 = 0.07996*t9278;
  t9493 = -0.135*t7707;
  t7878 = -1.*t1414*t1455*t515;
  t7913 = -1.*t1695*t515*t1733;
  t7956 = t7878 + t7913;
  t9327 = -1.*t1695*t1414*t515;
  t9330 = t1455*t515*t1733;
  t9340 = t9327 + t9330;
  p_output1[0]=-1.*t25*t426*var2[3] - 1.*t506*t515*var2[4];
  p_output1[1]=t25*t506*var2[3] - 1.*t426*t515*var2[4];
  p_output1[2]=-1.*t25*var2[4];
  p_output1[3]=0;
  p_output1[4]=t5188*var2[3] + t1948*var2[4] + t3833*var2[5] + t4244*var2[13];
  p_output1[5]=t5956*var2[3] + t5592*var2[4] + t6629*var2[5] + t7099*var2[13];
  p_output1[6]=t7956*var2[4] + t7707*var2[5] + t7707*var2[13];
  p_output1[7]=0;
  p_output1[8]=t8728*var2[3] + t8243*var2[4] + t8339*var2[5] + t8638*var2[13];
  p_output1[9]=t4244*var2[3] + t8884*var2[4] + t8999*var2[5] + t9088*var2[13];
  p_output1[10]=t9340*var2[4] + t9278*var2[5] + t9278*var2[13];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.08055*t25*t426 - 0.135*t5188 + 0.07996*t8728 + t4423*t9366 + t5092*t9374)*var2[3] + (-0.135*t1948 + 0.08055*t506*t515 + 0.07996*t8243 + t1414*t25*t506*t9366 + t1733*t25*t506*t9374)*var2[4] + (-0.135*t3833 + 0.07996*t8339 + t3787*t9366 + t3422*t9374)*var2[5] + (-0.135*t4244 + 0.07996*t8638 + t3422*t9399 + t4064*t9403)*var2[13];
  p_output1[13]=var2[1] + (0.07996*t4244 - 0.08055*t25*t506 - 0.135*t5956 + t3422*t9366 + t4064*t9374)*var2[3] + (0.08055*t426*t515 - 0.135*t5592 + 0.07996*t8884 + t1414*t25*t426*t9366 + t1733*t25*t426*t9374)*var2[4] + (-0.135*t6629 + 0.07996*t8999 + t5092*t9366 + t6398*t9374)*var2[5] + (-0.135*t7099 + 0.07996*t9088 + t6398*t9399 + t6965*t9403)*var2[13];
  p_output1[14]=var2[2] + (0.08055*t25 - 0.135*t7956 + 0.07996*t9340 - 1.*t1414*t515*t9366 - 1.*t1733*t515*t9374)*var2[4] + (-1.*t1733*t25*t9366 + t1414*t25*t9374 + t9490 + t9493)*var2[5] + (t1414*t25*t9399 + t1733*t25*t9403 + t9490 + t9493)*var2[13];
  p_output1[15]=0;
}



void dT_RightAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
