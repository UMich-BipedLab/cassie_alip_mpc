/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftThigh_src.h"

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
  double t1762;
  double t1973;
  double t1509;
  double t1779;
  double t1992;
  double t1486;
  double t2217;
  double t2224;
  double t2225;
  double t1869;
  double t2108;
  double t2111;
  double t2226;
  double t869;
  double t2267;
  double t2289;
  double t2420;
  double t2453;
  double t2465;
  double t2385;
  double t2388;
  double t2396;
  double t2322;
  double t2364;
  double t2291;
  double t2303;
  double t2304;
  double t2313;
  double t2344;
  double t2358;
  double t2131;
  double t2227;
  double t2254;
  double t2501;
  double t2524;
  double t2525;
  double t2550;
  double t2584;
  double t2594;
  double t2409;
  double t2480;
  double t2485;
  double t2668;
  double t2669;
  double t2673;
  double t2674;
  double t2676;
  double t2680;
  double t2636;
  double t2637;
  double t2658;
  t1762 = Cos(var1[5]);
  t1973 = Sin(var1[3]);
  t1509 = Cos(var1[3]);
  t1779 = Sin(var1[4]);
  t1992 = Sin(var1[5]);
  t1486 = Cos(var1[6]);
  t2217 = -1.*t1762*t1973;
  t2224 = t1509*t1779*t1992;
  t2225 = t2217 + t2224;
  t1869 = t1509*t1762*t1779;
  t2108 = t1973*t1992;
  t2111 = t1869 + t2108;
  t2226 = Sin(var1[6]);
  t869 = Cos(var1[8]);
  t2267 = Cos(var1[4]);
  t2289 = Cos(var1[7]);
  t2420 = t1509*t1762;
  t2453 = t1973*t1779*t1992;
  t2465 = t2420 + t2453;
  t2385 = t1762*t1973*t1779;
  t2388 = -1.*t1509*t1992;
  t2396 = t2385 + t2388;
  t2322 = Sin(var1[7]);
  t2364 = Sin(var1[8]);
  t2291 = t1509*t2267*t2289;
  t2303 = t1486*t2225;
  t2304 = t2111*t2226;
  t2313 = t2303 + t2304;
  t2344 = t2313*t2322;
  t2358 = t2291 + t2344;
  t2131 = t1486*t2111;
  t2227 = -1.*t2225*t2226;
  t2254 = t2131 + t2227;
  t2501 = t2267*t2289*t1973;
  t2524 = t1486*t2465;
  t2525 = t2396*t2226;
  t2550 = t2524 + t2525;
  t2584 = t2550*t2322;
  t2594 = t2501 + t2584;
  t2409 = t1486*t2396;
  t2480 = -1.*t2465*t2226;
  t2485 = t2409 + t2480;
  t2668 = -1.*t2289*t1779;
  t2669 = t2267*t1486*t1992;
  t2673 = t2267*t1762*t2226;
  t2674 = t2669 + t2673;
  t2676 = t2674*t2322;
  t2680 = t2668 + t2676;
  t2636 = t2267*t1762*t1486;
  t2637 = -1.*t2267*t1992*t2226;
  t2658 = t2636 + t2637;
  p_output1[0]=t2358*t2364 - 1.*t2254*t869;
  p_output1[1]=t2364*t2594 - 1.*t2485*t869;
  p_output1[2]=t2364*t2680 - 1.*t2658*t869;
  p_output1[3]=t2254*t2364 + t2358*t869;
  p_output1[4]=t2364*t2485 + t2594*t869;
  p_output1[5]=t2364*t2658 + t2680*t869;
  p_output1[6]=-1.*t2289*t2313 + t1509*t2267*t2322;
  p_output1[7]=t1973*t2267*t2322 - 1.*t2289*t2550;
  p_output1[8]=-1.*t1779*t2322 - 1.*t2289*t2674;
}



void R_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
