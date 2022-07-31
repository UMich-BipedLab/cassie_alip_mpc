/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftThighJoint_src.h"

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
  double t212;
  double t395;
  double t40;
  double t318;
  double t513;
  double t976;
  double t996;
  double t1093;
  double t1190;
  double t1461;
  double t1618;
  double t1660;
  double t332;
  double t838;
  double t950;
  double t2343;
  double t2463;
  double t2476;
  double t2697;
  double t2230;
  double t2238;
  double t2319;
  double t2955;
  double t4022;
  double t4445;
  double t4607;
  double t4711;
  double t3773;
  double t3997;
  double t4001;
  double t4911;
  double t4930;
  double t5371;
  double t1186;
  double t1296;
  double t1316;
  double t1821;
  double t1925;
  double t2100;
  double t5941;
  double t5942;
  double t5955;
  double t5908;
  double t5929;
  double t5930;
  double t2561;
  double t2718;
  double t2787;
  double t3239;
  double t3265;
  double t3340;
  double t5971;
  double t5975;
  double t5982;
  double t4667;
  double t4783;
  double t4818;
  double t5483;
  double t5543;
  double t5706;
  double t5999;
  double t6013;
  double t6014;
  double t6021;
  double t6022;
  double t6026;
  double t6062;
  double t6063;
  double t6064;
  double t6074;
  double t6075;
  double t6076;
  double t6081;
  double t6091;
  double t6093;
  t212 = Cos(var1[5]);
  t395 = Sin(var1[3]);
  t40 = Cos(var1[3]);
  t318 = Sin(var1[4]);
  t513 = Sin(var1[5]);
  t976 = Cos(var1[6]);
  t996 = -1.*t976;
  t1093 = 1. + t996;
  t1190 = Sin(var1[6]);
  t1461 = -1.*t212*t395;
  t1618 = t40*t318*t513;
  t1660 = t1461 + t1618;
  t332 = t40*t212*t318;
  t838 = t395*t513;
  t950 = t332 + t838;
  t2343 = Cos(var1[7]);
  t2463 = -1.*t2343;
  t2476 = 1. + t2463;
  t2697 = Sin(var1[7]);
  t2230 = t976*t1660;
  t2238 = t950*t1190;
  t2319 = t2230 + t2238;
  t2955 = Cos(var1[4]);
  t4022 = Cos(var1[8]);
  t4445 = -1.*t4022;
  t4607 = 1. + t4445;
  t4711 = Sin(var1[8]);
  t3773 = t40*t2955*t2343;
  t3997 = t2319*t2697;
  t4001 = t3773 + t3997;
  t4911 = t976*t950;
  t4930 = -1.*t1660*t1190;
  t5371 = t4911 + t4930;
  t1186 = 0.07996*t1093;
  t1296 = -0.135*t1190;
  t1316 = 0. + t1186 + t1296;
  t1821 = 0.135*t1093;
  t1925 = 0.07996*t1190;
  t2100 = 0. + t1821 + t1925;
  t5941 = t40*t212;
  t5942 = t395*t318*t513;
  t5955 = t5941 + t5942;
  t5908 = t212*t395*t318;
  t5929 = -1.*t40*t513;
  t5930 = t5908 + t5929;
  t2561 = 0.135*t2476;
  t2718 = 0.08055*t2697;
  t2787 = 0. + t2561 + t2718;
  t3239 = -0.08055*t2476;
  t3265 = 0.135*t2697;
  t3340 = 0. + t3239 + t3265;
  t5971 = t976*t5955;
  t5975 = t5930*t1190;
  t5982 = t5971 + t5975;
  t4667 = -0.08055*t4607;
  t4783 = -0.01004*t4711;
  t4818 = 0. + t4667 + t4783;
  t5483 = -0.01004*t4607;
  t5543 = 0.08055*t4711;
  t5706 = 0. + t5483 + t5543;
  t5999 = t2955*t2343*t395;
  t6013 = t5982*t2697;
  t6014 = t5999 + t6013;
  t6021 = t976*t5930;
  t6022 = -1.*t5955*t1190;
  t6026 = t6021 + t6022;
  t6062 = t2955*t976*t513;
  t6063 = t2955*t212*t1190;
  t6064 = t6062 + t6063;
  t6074 = -1.*t2343*t318;
  t6075 = t6064*t2697;
  t6076 = t6074 + t6075;
  t6081 = t2955*t212*t976;
  t6091 = -1.*t2955*t513*t1190;
  t6093 = t6081 + t6091;
  p_output1[0]=0. + t1660*t2100 + t2319*t2787 + t2955*t3340*t40 + 0.135*(t2319*t2343 - 1.*t2697*t2955*t40) + t4001*t4818 - 0.01004*(-1.*t4001*t4711 + t4022*t5371) - 0.08055*(t4001*t4022 + t4711*t5371) + t5371*t5706 + t1316*t950 + var1[0];
  p_output1[1]=0. + t2955*t3340*t395 + t1316*t5930 + t2100*t5955 + t2787*t5982 + 0.135*(-1.*t2697*t2955*t395 + t2343*t5982) + t4818*t6014 + t5706*t6026 - 0.01004*(-1.*t4711*t6014 + t4022*t6026) - 0.08055*(t4022*t6014 + t4711*t6026) + var1[1];
  p_output1[2]=0. + t1316*t212*t2955 - 1.*t318*t3340 + t2100*t2955*t513 + t2787*t6064 + 0.135*(t2697*t318 + t2343*t6064) + t4818*t6076 + t5706*t6093 - 0.01004*(-1.*t4711*t6076 + t4022*t6093) - 0.08055*(t4022*t6076 + t4711*t6093) + var1[2];
}



void p_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
