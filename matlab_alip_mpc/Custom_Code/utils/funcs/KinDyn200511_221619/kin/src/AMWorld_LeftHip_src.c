/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftHip_src.h"

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
  double t1934;
  double t2161;
  double t1916;
  double t1958;
  double t2656;
  double t1526;
  double t3926;
  double t5286;
  double t5375;
  double t5398;
  double t5157;
  double t5289;
  double t5293;
  double t5303;
  double t5320;
  double t3836;
  double t3862;
  double t3907;
  double t2151;
  double t2860;
  double t3509;
  double t4705;
  double t5004;
  double t5031;
  double t5112;
  double t5126;
  double t5174;
  double t5221;
  double t5227;
  double t5252;
  double t5257;
  double t5258;
  double t5262;
  double t5300;
  double t5321;
  double t5363;
  double t5370;
  double t5400;
  double t5421;
  double t5436;
  double t5437;
  double t5441;
  double t5442;
  double t5469;
  double t5475;
  double t5483;
  double t5489;
  double t5510;
  double t5515;
  double t5518;
  double t5579;
  double t5624;
  double t5627;
  double t5629;
  double t5633;
  double t5283;
  double t5499;
  double t5500;
  double t5743;
  double t5750;
  double t5757;
  double t5730;
  double t5732;
  double t5735;
  double t5550;
  double t5551;
  double t5555;
  double t5774;
  double t5779;
  double t5782;
  double t5591;
  double t5612;
  double t5628;
  double t5636;
  double t5652;
  double t5656;
  double t5662;
  double t5681;
  double t5687;
  double t5689;
  double t5698;
  double t5700;
  double t5702;
  double t5704;
  double t5715;
  double t5717;
  double t5836;
  double t5843;
  double t5848;
  t1934 = Cos(var1[5]);
  t2161 = Sin(var1[3]);
  t1916 = Cos(var1[3]);
  t1958 = Sin(var1[4]);
  t2656 = Sin(var1[5]);
  t1526 = Cos(var1[6]);
  t3926 = Sin(var1[6]);
  t5286 = Cos(var1[7]);
  t5375 = Sin(var1[7]);
  t5398 = 0. + t5375;
  t5157 = Cos(var1[4]);
  t5289 = -1.*t1526*t5286;
  t5293 = 0. + t5289;
  t5303 = -1.*t5286*t3926;
  t5320 = 0. + t5303;
  t3836 = -1.*t1934*t2161;
  t3862 = t1916*t1958*t2656;
  t3907 = t3836 + t3862;
  t2151 = t1916*t1934*t1958;
  t2860 = t2161*t2656;
  t3509 = t2151 + t2860;
  t4705 = -1.*var2[7];
  t5004 = t1526*t2656;
  t5031 = t1934*t3926;
  t5112 = 0. + t5004 + t5031;
  t5126 = var2[4]*t5112;
  t5174 = -1.*t1934*t1526;
  t5221 = t2656*t3926;
  t5227 = 0. + t5174 + t5221;
  t5252 = t5157*t5227;
  t5257 = 0. + t5252;
  t5258 = var2[3]*t5257;
  t5262 = 0. + t4705 + t5126 + t5258;
  t5300 = t1934*t5293;
  t5321 = -1.*t2656*t5320;
  t5363 = 0. + t5300 + t5321;
  t5370 = var2[4]*t5363;
  t5400 = var2[5]*t5398;
  t5421 = var2[6]*t5398;
  t5436 = t5293*t2656;
  t5437 = t1934*t5320;
  t5441 = 0. + t5436 + t5437;
  t5442 = t5157*t5441;
  t5469 = -1.*t1958*t5398;
  t5475 = 0. + t5442 + t5469;
  t5483 = var2[3]*t5475;
  t5489 = 0. + t5370 + t5400 + t5421 + t5483;
  t5510 = t1526*t3907;
  t5515 = t3509*t3926;
  t5518 = t5510 + t5515;
  t5579 = 0. + t5286;
  t5624 = t1526*t5375;
  t5627 = 0. + t5624;
  t5629 = t3926*t5375;
  t5633 = 0. + t5629;
  t5283 = 0.000842*t5262;
  t5499 = -1.e-6*t5489;
  t5500 = 0. + t5283 + t5499;
  t5743 = t1916*t1934;
  t5750 = t2161*t1958*t2656;
  t5757 = t5743 + t5750;
  t5730 = t1934*t2161*t1958;
  t5732 = -1.*t1916*t2656;
  t5735 = t5730 + t5732;
  t5550 = -1.e-6*t5262;
  t5551 = 0.00644*t5489;
  t5555 = 0. + t5550 + t5551;
  t5774 = t1526*t5757;
  t5779 = t5735*t3926;
  t5782 = t5774 + t5779;
  t5591 = var2[5]*t5579;
  t5612 = var2[6]*t5579;
  t5628 = t1934*t5627;
  t5636 = -1.*t2656*t5633;
  t5652 = 0. + t5628 + t5636;
  t5656 = var2[4]*t5652;
  t5662 = -1.*t5579*t1958;
  t5681 = t2656*t5627;
  t5687 = t1934*t5633;
  t5689 = 0. + t5681 + t5687;
  t5698 = t5157*t5689;
  t5700 = 0. + t5662 + t5698;
  t5702 = var2[3]*t5700;
  t5704 = 0. + t5591 + t5612 + t5656 + t5702;
  t5715 = 0.00608*t5704;
  t5717 = 0. + t5715;
  t5836 = t5157*t1526*t2656;
  t5843 = t5157*t1934*t3926;
  t5848 = t5836 + t5843;
  p_output1[0]=(-1.*t1526*t3509 + t3907*t3926)*t5500 + (t1916*t5157*t5375 - 1.*t5286*t5518)*t5555 + (t1916*t5157*t5286 + t5375*t5518)*t5717;
  p_output1[1]=t5500*(-1.*t1526*t5735 + t3926*t5757) + t5555*(t2161*t5157*t5375 - 1.*t5286*t5782) + t5717*(t2161*t5157*t5286 + t5375*t5782);
  p_output1[2]=(-1.*t1526*t1934*t5157 + t2656*t3926*t5157)*t5500 + t5555*(-1.*t1958*t5375 - 1.*t5286*t5848) + t5717*(-1.*t1958*t5286 + t5375*t5848);
}



void AMWorld_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
