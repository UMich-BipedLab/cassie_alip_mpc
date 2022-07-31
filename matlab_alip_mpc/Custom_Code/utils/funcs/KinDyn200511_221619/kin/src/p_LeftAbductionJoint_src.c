/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftAbductionJoint_src.h"

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
  double t1255;
  double t1303;
  double t1323;
  double t1317;
  double t1325;
  double t1337;
  double t1339;
  double t1340;
  double t1345;
  double t1359;
  double t1366;
  double t1367;
  double t1322;
  double t1331;
  double t1334;
  double t1266;
  double t1341;
  double t1351;
  double t1353;
  double t1370;
  double t1371;
  double t1372;
  double t1422;
  double t1426;
  double t1427;
  double t1414;
  double t1415;
  double t1417;
  t1255 = Cos(var1[3]);
  t1303 = Cos(var1[5]);
  t1323 = Sin(var1[3]);
  t1317 = Sin(var1[4]);
  t1325 = Sin(var1[5]);
  t1337 = Cos(var1[6]);
  t1339 = -1.*t1337;
  t1340 = 1. + t1339;
  t1345 = Sin(var1[6]);
  t1359 = -1.*t1303*t1323;
  t1366 = t1255*t1317*t1325;
  t1367 = t1359 + t1366;
  t1322 = t1255*t1303*t1317;
  t1331 = t1323*t1325;
  t1334 = t1322 + t1331;
  t1266 = Cos(var1[4]);
  t1341 = 0.07996*t1340;
  t1351 = -0.135*t1345;
  t1353 = 0. + t1341 + t1351;
  t1370 = 0.135*t1340;
  t1371 = 0.07996*t1345;
  t1372 = 0. + t1370 + t1371;
  t1422 = t1255*t1303;
  t1426 = t1323*t1317*t1325;
  t1427 = t1422 + t1426;
  t1414 = t1303*t1323*t1317;
  t1415 = -1.*t1255*t1325;
  t1417 = t1414 + t1415;
  p_output1[0]=0. - 0.08055*t1255*t1266 + t1334*t1353 + 0.135*(t1334*t1345 + t1337*t1367) + 0.07996*(t1334*t1337 - 1.*t1345*t1367) + t1367*t1372 + var1[0];
  p_output1[1]=0. - 0.08055*t1266*t1323 + t1353*t1417 + t1372*t1427 + 0.135*(t1345*t1417 + t1337*t1427) + 0.07996*(t1337*t1417 - 1.*t1345*t1427) + var1[1];
  p_output1[2]=0. + 0.08055*t1317 + 0.135*(t1266*t1325*t1337 + t1266*t1303*t1345) + 0.07996*(t1266*t1303*t1337 - 1.*t1266*t1325*t1345) + t1266*t1303*t1353 + t1266*t1325*t1372 + var1[2];
}



void p_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
