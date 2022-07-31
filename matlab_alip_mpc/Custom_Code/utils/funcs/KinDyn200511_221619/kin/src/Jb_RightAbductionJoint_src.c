/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightAbductionJoint_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t41;
  double t970;
  double t1415;
  double t959;
  double t1459;
  double t597;
  double t2262;
  double t1048;
  double t1466;
  double t2190;
  double t325;
  double t341;
  double t2409;
  double t2418;
  double t2534;
  double t2549;
  double t2666;
  double t3169;
  double t3325;
  double t3338;
  double t3550;
  double t3662;
  double t4771;
  double t4784;
  double t4882;
  double t4912;
  double t5396;
  double t5831;
  double t5838;
  double t4980;
  double t4997;
  double t5207;
  double t4451;
  double t4567;
  double t6397;
  double t6398;
  double t6408;
  double t5389;
  double t5840;
  double t5910;
  double t6245;
  double t6834;
  double t6968;
  double t7099;
  double t7112;
  double t7194;
  double t4423;
  double t4428;
  double t7431;
  double t5916;
  t41 = Cos(var1[3]);
  t970 = Cos(var1[5]);
  t1415 = Sin(var1[13]);
  t959 = Cos(var1[13]);
  t1459 = Sin(var1[5]);
  t597 = Sin(var1[3]);
  t2262 = Sin(var1[4]);
  t1048 = t959*t970;
  t1466 = -1.*t1415*t1459;
  t2190 = 0. + t1048 + t1466;
  t325 = Cos(var1[4]);
  t341 = 0. + t325;
  t2409 = t970*t1415;
  t2418 = t959*t1459;
  t2534 = 0. + t2409 + t2418;
  t2549 = t2262*t2534;
  t2666 = 0. + t2549;
  t3169 = -1.*t970*t1415;
  t3325 = -1.*t959*t1459;
  t3338 = 0. + t3169 + t3325;
  t3550 = t2262*t2190;
  t3662 = 0. + t3550;
  t4771 = t325*t2190;
  t4784 = 0. + t4771;
  t4882 = -1.*t959;
  t4912 = 1. + t4882;
  t5396 = 0.07996*t4912;
  t5831 = 0.07996*t959;
  t5838 = 0. + t5396 + t5831;
  t4980 = -0.135*t4912;
  t4997 = -0.135*t959;
  t5207 = 0. + t4980 + t4997;
  t4451 = t325*t2534;
  t4567 = 0. + t4451;
  t6397 = t5838*t970;
  t6398 = t5207*t1459;
  t6408 = 0. + t6397 + t6398;
  t5389 = t5207*t970;
  t5840 = -1.*t5838*t1459;
  t5910 = 0. + t5389 + t5840;
  t6245 = 0.08055*t2262;
  t6834 = t325*t6408;
  t6968 = 0. + t6245 + t6834;
  t7099 = -0.08055*t325;
  t7112 = t2262*t6408;
  t7194 = 0. + t7099 + t7112;
  t4423 = -1.*t2262;
  t4428 = 0. + t4423;
  t7431 = t5910*t3338;
  t5916 = -1.*t5910*t2190;
  p_output1[0]=0. + t341*t41;
  p_output1[1]=0. + t2666*t41 - 1.*t2190*t597;
  p_output1[2]=0. + t3662*t41 - 1.*t3338*t597;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t341*t597;
  p_output1[7]=0. + t2190*t41 + t2666*t597;
  p_output1[8]=0. + t3338*t41 + t3662*t597;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4428;
  p_output1[13]=t4567;
  p_output1[14]=t4784;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t4784*(t5916 - 1.*t4567*t6968 - 1.*t2666*t7194) + t4567*(t4784*t6968 + t3662*t7194 + t7431);
  p_output1[19]=t4784*(0. + t4428*t6968 + t341*t7194) + t4428*(-1.*t3338*t5910 - 1.*t4784*t6968 - 1.*t3662*t7194);
  p_output1[20]=t4428*(t2190*t5910 + t4567*t6968 + t2666*t7194) + t4567*(0. - 1.*t4428*t6968 - 1.*t341*t7194);
  p_output1[21]=t4428;
  p_output1[22]=t4567;
  p_output1[23]=t4784;
  p_output1[24]=0. + t3338*(0. + t5916 - 1.*t2534*t6408) + t2190*(0. + t2190*t6408 + t7431);
  p_output1[25]=0. - 0.08055*t3338;
  p_output1[26]=0. + 0.08055*t2190;
  p_output1[27]=0.;
  p_output1[28]=t2190;
  p_output1[29]=t3338;
  p_output1[30]=0.;
  p_output1[31]=0. + t1415*t5207 - 1.*t5838*t959;
  p_output1[32]=0. + t1415*t5838 + t5207*t959;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=1.;
  p_output1[82]=0.;
  p_output1[83]=0.;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_RightAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
