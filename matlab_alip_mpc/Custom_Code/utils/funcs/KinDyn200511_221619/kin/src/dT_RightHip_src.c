/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightHip_src.h"

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
  double t415;
  double t594;
  double t796;
  double t649;
  double t919;
  double t189;
  double t1302;
  double t1177;
  double t1226;
  double t1406;
  double t1516;
  double t1538;
  double t1665;
  double t1676;
  double t1700;
  double t1908;
  double t1947;
  double t1999;
  double t2283;
  double t2340;
  double t2355;
  double t2357;
  double t2561;
  double t2570;
  double t2586;
  double t2804;
  double t1545;
  double t1623;
  double t1627;
  double t2896;
  double t2744;
  double t1735;
  double t1739;
  double t1850;
  double t1861;
  double t1874;
  double t2011;
  double t3336;
  double t2387;
  double t2389;
  double t2409;
  double t2446;
  double t2475;
  double t3549;
  double t3568;
  double t3573;
  double t2816;
  double t2818;
  double t2836;
  double t2930;
  double t2951;
  double t2977;
  double t2983;
  double t3440;
  double t3463;
  double t3490;
  double t3507;
  double t3104;
  double t3118;
  double t3123;
  double t3240;
  double t3244;
  double t3284;
  double t3345;
  double t3381;
  double t3385;
  double t3676;
  double t3681;
  double t3687;
  double t4191;
  double t4194;
  double t4280;
  double t4329;
  double t2798;
  double t2842;
  double t2847;
  double t4362;
  double t4387;
  double t4401;
  double t4200;
  double t4202;
  double t4248;
  double t4428;
  double t4435;
  double t4444;
  double t4546;
  double t4343;
  double t2988;
  double t2991;
  double t3007;
  double t4335;
  double t4356;
  double t3074;
  double t3166;
  double t3205;
  double t3229;
  double t3289;
  double t3306;
  double t4655;
  double t4665;
  double t4694;
  double t4701;
  double t4712;
  double t5311;
  double t4785;
  double t4788;
  double t4796;
  double t4810;
  double t4831;
  double t3514;
  double t3524;
  double t5706;
  double t5709;
  double t5726;
  double t5732;
  double t5734;
  double t5742;
  double t5753;
  double t3598;
  double t3599;
  double t3600;
  double t3660;
  double t3697;
  double t3715;
  t415 = Cos(var1[3]);
  t594 = Cos(var1[4]);
  t796 = Sin(var1[13]);
  t649 = Cos(var1[5]);
  t919 = Sin(var1[5]);
  t189 = Cos(var1[13]);
  t1302 = Sin(var1[3]);
  t1177 = Sin(var1[4]);
  t1226 = t415*t649*t1177;
  t1406 = t1302*t919;
  t1516 = t1226 + t1406;
  t1538 = t796*t1516;
  t1665 = -1.*t649*t1302;
  t1676 = t415*t1177*t919;
  t1700 = t1665 + t1676;
  t1908 = -1.*t415*t649;
  t1947 = -1.*t1302*t1177*t919;
  t1999 = t1908 + t1947;
  t2283 = t649*t1302*t1177;
  t2340 = -1.*t415*t919;
  t2355 = t2283 + t2340;
  t2357 = t796*t2355;
  t2561 = t594*t649*t796;
  t2570 = t189*t594*t919;
  t2586 = t2561 + t2570;
  t2804 = Sin(var1[14]);
  t1545 = t649*t1302;
  t1623 = -1.*t415*t1177*t919;
  t1627 = t1545 + t1623;
  t2896 = t189*t1516;
  t2744 = Cos(var1[14]);
  t1735 = t189*t1700;
  t1739 = t1538 + t1735;
  t1850 = -1.*t649*t1302*t1177;
  t1861 = t415*t919;
  t1874 = t1850 + t1861;
  t2011 = t796*t1999;
  t3336 = t189*t2355;
  t2387 = t415*t649;
  t2389 = t1302*t1177*t919;
  t2409 = t2387 + t2389;
  t2446 = t189*t2409;
  t2475 = t2357 + t2446;
  t3549 = t189*t594*t649;
  t3568 = -1.*t594*t796*t919;
  t3573 = t3549 + t3568;
  t2816 = t415*t594*t649*t796;
  t2818 = t189*t415*t594*t919;
  t2836 = t2816 + t2818;
  t2930 = t796*t1627;
  t2951 = t2896 + t2930;
  t2977 = -1.*t796*t1700;
  t2983 = t2896 + t2977;
  t3440 = t2744*t415*t594;
  t3463 = t2804*t1739;
  t3490 = t3440 + t3463;
  t3507 = -1.*t594*t2804*t1302;
  t3104 = t796*t1874;
  t3118 = t189*t1999;
  t3123 = t3104 + t3118;
  t3240 = t594*t649*t796*t1302;
  t3244 = t189*t594*t1302*t919;
  t3284 = t3240 + t3244;
  t3345 = t3336 + t2011;
  t3381 = -1.*t796*t2409;
  t3385 = t3336 + t3381;
  t3676 = -1.*t649*t796*t1177;
  t3681 = -1.*t189*t1177*t919;
  t3687 = t3676 + t3681;
  t4191 = -1.*t189;
  t4194 = 1. + t4191;
  t4280 = -1.*t2744;
  t4329 = 1. + t4280;
  t2798 = -1.*t2744*t415*t1177;
  t2842 = t2804*t2836;
  t2847 = t2798 + t2842;
  t4362 = -0.135*t4194;
  t4387 = 0.07996*t796;
  t4401 = 0. + t4362 + t4387;
  t4200 = 0.07996*t4194;
  t4202 = 0.135*t796;
  t4248 = 0. + t4200 + t4202;
  t4428 = -0.135*t4329;
  t4435 = 0.08055*t2804;
  t4444 = 0. + t4428 + t4435;
  t4546 = -1.*t796*t1516;
  t4343 = -0.135*t2804;
  t2988 = -1.*t415*t594*t2804;
  t2991 = t2744*t1739;
  t3007 = t2988 + t2991;
  t4335 = -0.08055*t4329;
  t4356 = 0. + t4335 + t4343;
  t3074 = -1.*t2744*t594*t1302;
  t3166 = t2804*t3123;
  t3205 = t3074 + t3166;
  t3229 = -1.*t2744*t1302*t1177;
  t3289 = t2804*t3284;
  t3306 = t3229 + t3289;
  t4655 = 0.135*t189;
  t4665 = t4655 + t4387;
  t4694 = 0.07996*t189;
  t4701 = -0.135*t796;
  t4712 = t4694 + t4701;
  t5311 = -1.*t796*t2355;
  t4785 = -0.135*t2744;
  t4788 = -0.08055*t2804;
  t4796 = t4785 + t4788;
  t4810 = 0.08055*t2744;
  t4831 = t4810 + t4343;
  t3514 = t2744*t2475;
  t3524 = t3507 + t3514;
  t5706 = -1.*t594*t649*t796;
  t5709 = -1.*t189*t594*t919;
  t5726 = t5706 + t5709;
  t5732 = 0.04566*t5726;
  t5734 = -0.135*t2744*t3573;
  t5742 = t4444*t3573;
  t5753 = -0.08055*t2804*t3573;
  t3598 = t2804*t1177;
  t3599 = t2744*t2586;
  t3600 = t3598 + t3599;
  t3660 = -1.*t2744*t594;
  t3697 = t2804*t3687;
  t3715 = t3660 + t3697;
  p_output1[0]=(-1.*t1874*t189 + t2011)*var2[3] + (-1.*t189*t415*t594*t649 + t415*t594*t796*t919)*var2[4] + (t1538 - 1.*t1627*t189)*var2[5] + t1739*var2[13];
  p_output1[1]=(-1.*t1516*t189 + t1700*t796)*var2[3] + (-1.*t1302*t189*t594*t649 + t1302*t594*t796*t919)*var2[4] + (-1.*t189*t1999 + t2357)*var2[5] + t2475*var2[13];
  p_output1[2]=(t1177*t189*t649 - 1.*t1177*t796*t919)*var2[4] + t2586*var2[5] + t2586*var2[13];
  p_output1[3]=0;
  p_output1[4]=t3205*var2[3] + t2847*var2[4] + t2804*t2951*var2[5] + t2804*t2983*var2[13] + t3007*var2[14];
  p_output1[5]=t3490*var2[3] + t3306*var2[4] + t2804*t3345*var2[5] + t2804*t3385*var2[13] + t3524*var2[14];
  p_output1[6]=t3715*var2[4] + t2804*t3573*var2[5] + t2804*t3573*var2[13] + t3600*var2[14];
  p_output1[7]=0;
  p_output1[8]=(-1.*t2744*t3123 + t3507)*var2[3] + (-1.*t2744*t2836 - 1.*t1177*t2804*t415)*var2[4] - 1.*t2744*t2951*var2[5] - 1.*t2744*t2983*var2[13] + t3490*var2[14];
  p_output1[9]=(-1.*t1739*t2744 + t2804*t415*t594)*var2[3] + (-1.*t1177*t1302*t2804 - 1.*t2744*t3284)*var2[4] - 1.*t2744*t3345*var2[5] - 1.*t2744*t3385*var2[13] + (t2475*t2804 + t1302*t2744*t594)*var2[14];
  p_output1[10]=(-1.*t2744*t3687 - 1.*t2804*t594)*var2[4] - 1.*t2744*t3573*var2[5] - 1.*t2744*t3573*var2[13] + (-1.*t1177*t2744 + t2586*t2804)*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t3205 + t1874*t4248 + t1999*t4401 + t3123*t4444 - 1.*t1302*t4356*t594 - 0.135*(t2744*t3123 + t1302*t2804*t594) + 0.04566*(t1874*t189 - 1.*t1999*t796))*var2[3] + (-0.08055*t2847 - 0.135*(t2744*t2836 + t1177*t2804*t415) - 1.*t1177*t415*t4356 + t2836*t4444 + t415*t4248*t594*t649 + t415*t4401*t594*t919 + 0.04566*(t189*t415*t594*t649 - 1.*t415*t594*t796*t919))*var2[4] + (-0.135*t2744*t2951 - 0.08055*t2804*t2951 + t1627*t4248 + t1516*t4401 + t2951*t4444 + 0.04566*(t1627*t189 + t4546))*var2[5] + (-0.135*t2744*t2983 - 0.08055*t2804*t2983 + t2983*t4444 + 0.04566*(-1.*t1700*t189 + t4546) + t1516*t4665 + t1700*t4712)*var2[13] + (-0.08055*t3007 + t1739*t4831 + t415*t4796*t594 - 0.135*(-1.*t1739*t2804 - 1.*t2744*t415*t594))*var2[14];
  p_output1[13]=var2[1] + (0.04566*t2983 - 0.135*t3007 - 0.08055*t3490 + t1516*t4248 + t1700*t4401 + t1739*t4444 + t415*t4356*t594)*var2[3] + (-0.135*(t1177*t1302*t2804 + t2744*t3284) - 0.08055*t3306 - 1.*t1177*t1302*t4356 + t3284*t4444 + t1302*t4248*t594*t649 + t1302*t4401*t594*t919 + 0.04566*(t1302*t189*t594*t649 - 1.*t1302*t594*t796*t919))*var2[4] + (-0.135*t2744*t3345 - 0.08055*t2804*t3345 + t1999*t4248 + t2355*t4401 + t3345*t4444 + 0.04566*(t3118 + t5311))*var2[5] + (-0.135*t2744*t3385 - 0.08055*t2804*t3385 + t3385*t4444 + t2355*t4665 + t2409*t4712 + 0.04566*(-1.*t189*t2409 + t5311))*var2[13] + (-0.135*(-1.*t2475*t2804 + t3074) - 0.08055*t3524 + t2475*t4831 + t1302*t4796*t594)*var2[14];
  p_output1[14]=var2[2] + (-0.08055*t3715 + t3687*t4444 - 1.*t4356*t594 - 0.135*(t2744*t3687 + t2804*t594) - 1.*t1177*t4248*t649 - 1.*t1177*t4401*t919 + 0.04566*(-1.*t1177*t189*t649 + t1177*t796*t919))*var2[4] + (t5732 + t5734 + t5742 + t5753 + t4401*t594*t649 - 1.*t4248*t594*t919)*var2[5] + (t5732 + t5734 + t5742 + t5753 + t4665*t594*t649 + t4712*t594*t919)*var2[13] + (-0.135*(t1177*t2744 - 1.*t2586*t2804) - 0.08055*t3600 - 1.*t1177*t4796 + t2586*t4831)*var2[14];
  p_output1[15]=0;
}



void dT_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
