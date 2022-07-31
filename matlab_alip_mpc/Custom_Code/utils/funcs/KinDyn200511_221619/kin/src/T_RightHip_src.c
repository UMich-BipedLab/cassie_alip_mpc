/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightHip_src.h"

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
  double t162;
  double t379;
  double t155;
  double t164;
  double t382;
  double t119;
  double t708;
  double t1237;
  double t267;
  double t504;
  double t614;
  double t719;
  double t749;
  double t758;
  double t1324;
  double t1391;
  double t919;
  double t944;
  double t973;
  double t1006;
  double t1092;
  double t1112;
  double t1395;
  double t1406;
  double t1446;
  double t1538;
  double t1555;
  double t1579;
  double t1655;
  double t1656;
  double t1670;
  double t2005;
  double t2015;
  double t1952;
  double t1970;
  double t1380;
  double t1463;
  double t1489;
  double t1973;
  double t1976;
  double t1996;
  double t2038;
  double t2042;
  double t2064;
  double t2084;
  double t2091;
  double t2096;
  double t2195;
  double t2201;
  double t2211;
  double t1527;
  double t1609;
  double t1629;
  double t1650;
  double t1674;
  double t1697;
  t162 = Cos(var1[5]);
  t379 = Sin(var1[3]);
  t155 = Cos(var1[3]);
  t164 = Sin(var1[4]);
  t382 = Sin(var1[5]);
  t119 = Cos(var1[13]);
  t708 = Sin(var1[13]);
  t1237 = Cos(var1[4]);
  t267 = t155*t162*t164;
  t504 = t379*t382;
  t614 = t267 + t504;
  t719 = -1.*t162*t379;
  t749 = t155*t164*t382;
  t758 = t719 + t749;
  t1324 = Cos(var1[14]);
  t1391 = Sin(var1[14]);
  t919 = t162*t379*t164;
  t944 = -1.*t155*t382;
  t973 = t919 + t944;
  t1006 = t155*t162;
  t1092 = t379*t164*t382;
  t1112 = t1006 + t1092;
  t1395 = t708*t614;
  t1406 = t119*t758;
  t1446 = t1395 + t1406;
  t1538 = t708*t973;
  t1555 = t119*t1112;
  t1579 = t1538 + t1555;
  t1655 = t1237*t162*t708;
  t1656 = t119*t1237*t382;
  t1670 = t1655 + t1656;
  t2005 = -1.*t119;
  t2015 = 1. + t2005;
  t1952 = -1.*t1324;
  t1970 = 1. + t1952;
  t1380 = t1324*t155*t1237;
  t1463 = t1391*t1446;
  t1489 = t1380 + t1463;
  t1973 = -0.08055*t1970;
  t1976 = -0.135*t1391;
  t1996 = 0. + t1973 + t1976;
  t2038 = 0.07996*t2015;
  t2042 = 0.135*t708;
  t2064 = 0. + t2038 + t2042;
  t2084 = -0.135*t2015;
  t2091 = 0.07996*t708;
  t2096 = 0. + t2084 + t2091;
  t2195 = -0.135*t1970;
  t2201 = 0.08055*t1391;
  t2211 = 0. + t2195 + t2201;
  t1527 = t1324*t1237*t379;
  t1609 = t1391*t1579;
  t1629 = t1527 + t1609;
  t1650 = -1.*t1324*t164;
  t1674 = t1391*t1670;
  t1697 = t1650 + t1674;
  p_output1[0]=-1.*t119*t614 + t708*t758;
  p_output1[1]=t1112*t708 - 1.*t119*t973;
  p_output1[2]=-1.*t119*t1237*t162 + t1237*t382*t708;
  p_output1[3]=0.;
  p_output1[4]=t1489;
  p_output1[5]=t1629;
  p_output1[6]=t1697;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1324*t1446 + t1237*t1391*t155;
  p_output1[9]=-1.*t1324*t1579 + t1237*t1391*t379;
  p_output1[10]=-1.*t1391*t164 - 1.*t1324*t1670;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1489 - 0.135*(t1324*t1446 - 1.*t1237*t1391*t155) + t1237*t155*t1996 + t1446*t2211 + t2064*t614 + t2096*t758 + 0.04566*(t119*t614 - 1.*t708*t758) + var1[0];
  p_output1[13]=0. - 0.08055*t1629 + t1112*t2096 + t1579*t2211 + t1237*t1996*t379 - 0.135*(t1324*t1579 - 1.*t1237*t1391*t379) + t2064*t973 + 0.04566*(-1.*t1112*t708 + t119*t973) + var1[1];
  p_output1[14]=0. - 0.135*(t1391*t164 + t1324*t1670) - 0.08055*t1697 - 1.*t164*t1996 + t1237*t162*t2064 + t1670*t2211 + t1237*t2096*t382 + 0.04566*(t119*t1237*t162 - 1.*t1237*t382*t708) + var1[2];
  p_output1[15]=1.;
}



void T_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
