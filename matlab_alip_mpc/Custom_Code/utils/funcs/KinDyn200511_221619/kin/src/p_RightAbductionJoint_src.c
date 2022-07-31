/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightAbductionJoint_src.h"

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
  double t87;
  double t332;
  double t334;
  double t370;
  double t471;
  double t716;
  double t890;
  double t773;
  double t894;
  double t887;
  double t921;
  double t925;
  double t993;
  double t1055;
  double t1076;
  double t245;
  double t386;
  double t576;
  double t625;
  double t930;
  double t982;
  double t987;
  double t1425;
  double t1510;
  double t1819;
  double t2071;
  double t2087;
  double t2095;
  t87 = Cos(var1[3]);
  t332 = Cos(var1[13]);
  t334 = -1.*t332;
  t370 = 1. + t334;
  t471 = Sin(var1[13]);
  t716 = Cos(var1[5]);
  t890 = Sin(var1[3]);
  t773 = Sin(var1[4]);
  t894 = Sin(var1[5]);
  t887 = t87*t716*t773;
  t921 = t890*t894;
  t925 = t887 + t921;
  t993 = -1.*t716*t890;
  t1055 = t87*t773*t894;
  t1076 = t993 + t1055;
  t245 = Cos(var1[4]);
  t386 = 0.07996*t370;
  t576 = 0.135*t471;
  t625 = 0. + t386 + t576;
  t930 = -0.135*t370;
  t982 = 0.07996*t471;
  t987 = 0. + t930 + t982;
  t1425 = t716*t890*t773;
  t1510 = -1.*t87*t894;
  t1819 = t1425 + t1510;
  t2071 = t87*t716;
  t2087 = t890*t773*t894;
  t2095 = t2071 + t2087;
  p_output1[0]=0. - 0.08055*t245*t87 + t625*t925 + 0.07996*(-1.*t1076*t471 + t332*t925) - 0.135*(t1076*t332 + t471*t925) + t1076*t987 + var1[0];
  p_output1[1]=0. - 0.135*(t2095*t332 + t1819*t471) + 0.07996*(t1819*t332 - 1.*t2095*t471) + t1819*t625 - 0.08055*t245*t890 + t2095*t987 + var1[1];
  p_output1[2]=0. + t245*t625*t716 + 0.08055*t773 - 0.135*(t245*t471*t716 + t245*t332*t894) + 0.07996*(t245*t332*t716 - 1.*t245*t471*t894) + t245*t894*t987 + var1[2];
}



void p_RightAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
