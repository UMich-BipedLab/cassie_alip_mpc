/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftAbductionJoint_src.h"

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
  double t1021;
  double t2074;
  double t2433;
  double t2456;
  double t2447;
  double t2457;
  double t2576;
  double t2586;
  double t2470;
  double t2488;
  double t2534;
  double t2544;
  double t2568;
  double t2570;
  double t2573;
  t1021 = Cos(var1[3]);
  t2074 = Sin(var1[3]);
  t2433 = Cos(var1[4]);
  t2456 = Sin(var1[4]);
  t2447 = -1.*var1[2]*t2433*t2074;
  t2457 = -1.*var1[1]*t2456;
  t2576 = Cos(var1[5]);
  t2586 = Sin(var1[5]);
  t2470 = var1[2]*t1021*t2433;
  t2488 = var1[0]*t2456;
  t2534 = -1.*var1[1]*t1021*t2433;
  t2544 = var1[0]*t2433*t2074;
  t2568 = t1021*t2433;
  t2570 = t2433*t2074;
  t2573 = -1.*t2456;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=-1.*var1[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t1021*var1[2];
  p_output1[25]=-1.*t2074*var1[2];
  p_output1[26]=t1021*var1[0] + t2074*var1[1];
  p_output1[27]=-1.*t2074;
  p_output1[28]=t1021;
  p_output1[29]=0;
  p_output1[30]=t2447 + t2457;
  p_output1[31]=t2470 + t2488;
  p_output1[32]=t2534 + t2544;
  p_output1[33]=t2568;
  p_output1[34]=t2570;
  p_output1[35]=t2573;
  p_output1[36]=t2447 + t2457 - 0.135*(t1021*t2456*t2576 + t2074*t2586) + 0.07996*(-1.*t2074*t2576 + t1021*t2456*t2586);
  p_output1[37]=t2470 + t2488 - 0.135*(t2074*t2456*t2576 - 1.*t1021*t2586) + 0.07996*(t1021*t2576 + t2074*t2456*t2586);
  p_output1[38]=t2534 + t2544 - 0.135*t2433*t2576 + 0.07996*t2433*t2586;
  p_output1[39]=0. + t2568;
  p_output1[40]=0. + t2570;
  p_output1[41]=0. + t2573;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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



void Js_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
