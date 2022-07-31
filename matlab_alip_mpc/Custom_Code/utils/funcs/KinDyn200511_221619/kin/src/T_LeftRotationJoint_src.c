/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftRotationJoint_src.h"

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
  double t566;
  double t736;
  double t515;
  double t638;
  double t866;
  double t402;
  double t1400;
  double t2116;
  double t1249;
  double t1343;
  double t1379;
  double t733;
  double t1042;
  double t1044;
  double t2455;
  double t1745;
  double t1818;
  double t1970;
  double t1556;
  double t1623;
  double t1651;
  double t2665;
  double t2583;
  double t2589;
  double t2615;
  double t2926;
  double t3004;
  double t3157;
  double t3513;
  double t3517;
  double t3595;
  double t4473;
  double t4618;
  double t4934;
  double t4996;
  double t2520;
  double t2691;
  double t2700;
  double t4622;
  double t4631;
  double t4640;
  double t4700;
  double t4752;
  double t4778;
  double t5006;
  double t5020;
  double t5022;
  double t5031;
  double t5034;
  double t5035;
  double t2723;
  double t3185;
  double t3349;
  double t3477;
  double t3606;
  double t3629;
  t566 = Cos(var1[5]);
  t736 = Sin(var1[3]);
  t515 = Cos(var1[3]);
  t638 = Sin(var1[4]);
  t866 = Sin(var1[5]);
  t402 = Cos(var1[6]);
  t1400 = Sin(var1[6]);
  t2116 = Cos(var1[4]);
  t1249 = -1.*t566*t736;
  t1343 = t515*t638*t866;
  t1379 = t1249 + t1343;
  t733 = t515*t566*t638;
  t1042 = t736*t866;
  t1044 = t733 + t1042;
  t2455 = Cos(var1[7]);
  t1745 = t515*t566;
  t1818 = t736*t638*t866;
  t1970 = t1745 + t1818;
  t1556 = t566*t736*t638;
  t1623 = -1.*t515*t866;
  t1651 = t1556 + t1623;
  t2665 = Sin(var1[7]);
  t2583 = t402*t1379;
  t2589 = t1044*t1400;
  t2615 = t2583 + t2589;
  t2926 = t402*t1970;
  t3004 = t1651*t1400;
  t3157 = t2926 + t3004;
  t3513 = t2116*t402*t866;
  t3517 = t2116*t566*t1400;
  t3595 = t3513 + t3517;
  t4473 = -1.*t402;
  t4618 = 1. + t4473;
  t4934 = -1.*t2455;
  t4996 = 1. + t4934;
  t2520 = t515*t2116*t2455;
  t2691 = t2615*t2665;
  t2700 = t2520 + t2691;
  t4622 = 0.07996*t4618;
  t4631 = -0.135*t1400;
  t4640 = 0. + t4622 + t4631;
  t4700 = 0.135*t4618;
  t4752 = 0.07996*t1400;
  t4778 = 0. + t4700 + t4752;
  t5006 = 0.135*t4996;
  t5020 = 0.08055*t2665;
  t5022 = 0. + t5006 + t5020;
  t5031 = -0.08055*t4996;
  t5034 = 0.135*t2665;
  t5035 = 0. + t5031 + t5034;
  t2723 = t2116*t2455*t736;
  t3185 = t3157*t2665;
  t3349 = t2723 + t3185;
  t3477 = -1.*t2455*t638;
  t3606 = t3595*t2665;
  t3629 = t3477 + t3606;
  p_output1[0]=t1379*t1400 - 1.*t1044*t402;
  p_output1[1]=t1400*t1970 - 1.*t1651*t402;
  p_output1[2]=-1.*t2116*t402*t566 + t1400*t2116*t866;
  p_output1[3]=0.;
  p_output1[4]=t2700;
  p_output1[5]=t3349;
  p_output1[6]=t3629;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2455*t2615 + t2116*t2665*t515;
  p_output1[9]=-1.*t2455*t3157 + t2116*t2665*t736;
  p_output1[10]=-1.*t2455*t3595 - 1.*t2665*t638;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t2700 - 0.01004*(-1.*t1379*t1400 + t1044*t402) + t1044*t4640 + t1379*t4778 + t2615*t5022 + t2116*t5035*t515 + 0.135*(t2455*t2615 - 1.*t2116*t2665*t515) + var1[0];
  p_output1[13]=0. - 0.08055*t3349 - 0.01004*(-1.*t1400*t1970 + t1651*t402) + t1651*t4640 + t1970*t4778 + t3157*t5022 + t2116*t5035*t736 + 0.135*(t2455*t3157 - 1.*t2116*t2665*t736) + var1[1];
  p_output1[14]=0. - 0.08055*t3629 + t3595*t5022 + t2116*t4640*t566 - 1.*t5035*t638 + 0.135*(t2455*t3595 + t2665*t638) + t2116*t4778*t866 - 0.01004*(t2116*t402*t566 - 1.*t1400*t2116*t866) + var1[2];
  p_output1[15]=1.;
}



void T_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
