/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftThighJoint_src.h"

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
  double t973;
  double t1261;
  double t710;
  double t974;
  double t1270;
  double t613;
  double t1495;
  double t1679;
  double t1720;
  double t1256;
  double t1324;
  double t1421;
  double t1722;
  double t608;
  double t1761;
  double t1776;
  double t2202;
  double t2212;
  double t2226;
  double t2119;
  double t2123;
  double t2146;
  double t1893;
  double t1975;
  double t1789;
  double t1829;
  double t1878;
  double t1888;
  double t1897;
  double t1964;
  double t1428;
  double t1729;
  double t1731;
  double t2296;
  double t2298;
  double t2302;
  double t2317;
  double t2318;
  double t2339;
  double t2195;
  double t2236;
  double t2272;
  double t2366;
  double t2372;
  double t2384;
  double t2385;
  double t2395;
  double t2412;
  double t2353;
  double t2356;
  double t2361;
  t973 = Cos(var1[5]);
  t1261 = Sin(var1[3]);
  t710 = Cos(var1[3]);
  t974 = Sin(var1[4]);
  t1270 = Sin(var1[5]);
  t613 = Cos(var1[6]);
  t1495 = -1.*t973*t1261;
  t1679 = t710*t974*t1270;
  t1720 = t1495 + t1679;
  t1256 = t710*t973*t974;
  t1324 = t1261*t1270;
  t1421 = t1256 + t1324;
  t1722 = Sin(var1[6]);
  t608 = Cos(var1[8]);
  t1761 = Cos(var1[4]);
  t1776 = Cos(var1[7]);
  t2202 = t710*t973;
  t2212 = t1261*t974*t1270;
  t2226 = t2202 + t2212;
  t2119 = t973*t1261*t974;
  t2123 = -1.*t710*t1270;
  t2146 = t2119 + t2123;
  t1893 = Sin(var1[7]);
  t1975 = Sin(var1[8]);
  t1789 = t710*t1761*t1776;
  t1829 = t613*t1720;
  t1878 = t1421*t1722;
  t1888 = t1829 + t1878;
  t1897 = t1888*t1893;
  t1964 = t1789 + t1897;
  t1428 = t613*t1421;
  t1729 = -1.*t1720*t1722;
  t1731 = t1428 + t1729;
  t2296 = t1761*t1776*t1261;
  t2298 = t613*t2226;
  t2302 = t2146*t1722;
  t2317 = t2298 + t2302;
  t2318 = t2317*t1893;
  t2339 = t2296 + t2318;
  t2195 = t613*t2146;
  t2236 = -1.*t2226*t1722;
  t2272 = t2195 + t2236;
  t2366 = -1.*t1776*t974;
  t2372 = t1761*t613*t1270;
  t2384 = t1761*t973*t1722;
  t2385 = t2372 + t2384;
  t2395 = t2385*t1893;
  t2412 = t2366 + t2395;
  t2353 = t1761*t973*t613;
  t2356 = -1.*t1761*t1270*t1722;
  t2361 = t2353 + t2356;
  p_output1[0]=t1964*t1975 - 1.*t1731*t608;
  p_output1[1]=t1975*t2339 - 1.*t2272*t608;
  p_output1[2]=t1975*t2412 - 1.*t2361*t608;
  p_output1[3]=t1731*t1975 + t1964*t608;
  p_output1[4]=t1975*t2272 + t2339*t608;
  p_output1[5]=t1975*t2361 + t2412*t608;
  p_output1[6]=-1.*t1776*t1888 + t1761*t1893*t710;
  p_output1[7]=t1261*t1761*t1893 - 1.*t1776*t2317;
  p_output1[8]=-1.*t1776*t2385 - 1.*t1893*t974;
}



void R_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
