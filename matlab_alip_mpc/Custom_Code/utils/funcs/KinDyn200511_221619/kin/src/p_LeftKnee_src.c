/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftKnee_src.h"

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
  double t1321;
  double t2328;
  double t424;
  double t1590;
  double t2386;
  double t2436;
  double t2568;
  double t2848;
  double t3089;
  double t3549;
  double t3668;
  double t3675;
  double t1764;
  double t2422;
  double t2430;
  double t4585;
  double t4762;
  double t4779;
  double t4863;
  double t4317;
  double t4332;
  double t4365;
  double t5010;
  double t5381;
  double t5396;
  double t5425;
  double t5571;
  double t5292;
  double t5331;
  double t5366;
  double t5729;
  double t5745;
  double t5855;
  double t6114;
  double t6122;
  double t6155;
  double t6354;
  double t6404;
  double t6420;
  double t6421;
  double t6480;
  double t6496;
  double t6527;
  double t2961;
  double t3128;
  double t3171;
  double t3708;
  double t3714;
  double t4185;
  double t7043;
  double t7067;
  double t7117;
  double t6926;
  double t6976;
  double t6982;
  double t4791;
  double t4880;
  double t4912;
  double t5064;
  double t5088;
  double t5089;
  double t7162;
  double t7199;
  double t7203;
  double t5481;
  double t5619;
  double t5694;
  double t5941;
  double t6018;
  double t6022;
  double t6340;
  double t6368;
  double t6389;
  double t7273;
  double t7277;
  double t7302;
  double t7304;
  double t7312;
  double t7315;
  double t6449;
  double t6451;
  double t6478;
  double t7334;
  double t7335;
  double t7337;
  double t7353;
  double t7366;
  double t7376;
  double t7486;
  double t7514;
  double t7517;
  double t7567;
  double t7568;
  double t7599;
  double t7620;
  double t7626;
  double t7633;
  double t7652;
  double t7655;
  double t7662;
  double t7681;
  double t7682;
  double t7687;
  t1321 = Cos(var1[5]);
  t2328 = Sin(var1[3]);
  t424 = Cos(var1[3]);
  t1590 = Sin(var1[4]);
  t2386 = Sin(var1[5]);
  t2436 = Cos(var1[6]);
  t2568 = -1.*t2436;
  t2848 = 1. + t2568;
  t3089 = Sin(var1[6]);
  t3549 = -1.*t1321*t2328;
  t3668 = t424*t1590*t2386;
  t3675 = t3549 + t3668;
  t1764 = t424*t1321*t1590;
  t2422 = t2328*t2386;
  t2430 = t1764 + t2422;
  t4585 = Cos(var1[7]);
  t4762 = -1.*t4585;
  t4779 = 1. + t4762;
  t4863 = Sin(var1[7]);
  t4317 = t2436*t3675;
  t4332 = t2430*t3089;
  t4365 = t4317 + t4332;
  t5010 = Cos(var1[4]);
  t5381 = Cos(var1[8]);
  t5396 = -1.*t5381;
  t5425 = 1. + t5396;
  t5571 = Sin(var1[8]);
  t5292 = t424*t5010*t4585;
  t5331 = t4365*t4863;
  t5366 = t5292 + t5331;
  t5729 = t2436*t2430;
  t5745 = -1.*t3675*t3089;
  t5855 = t5729 + t5745;
  t6114 = Cos(var1[9]);
  t6122 = -1.*t6114;
  t6155 = 1. + t6122;
  t6354 = Sin(var1[9]);
  t6404 = t5381*t5366;
  t6420 = t5855*t5571;
  t6421 = t6404 + t6420;
  t6480 = t5381*t5855;
  t6496 = -1.*t5366*t5571;
  t6527 = t6480 + t6496;
  t2961 = 0.07996*t2848;
  t3128 = -0.135*t3089;
  t3171 = 0. + t2961 + t3128;
  t3708 = 0.135*t2848;
  t3714 = 0.07996*t3089;
  t4185 = 0. + t3708 + t3714;
  t7043 = t424*t1321;
  t7067 = t2328*t1590*t2386;
  t7117 = t7043 + t7067;
  t6926 = t1321*t2328*t1590;
  t6976 = -1.*t424*t2386;
  t6982 = t6926 + t6976;
  t4791 = 0.135*t4779;
  t4880 = 0.08055*t4863;
  t4912 = 0. + t4791 + t4880;
  t5064 = -0.08055*t4779;
  t5088 = 0.135*t4863;
  t5089 = 0. + t5064 + t5088;
  t7162 = t2436*t7117;
  t7199 = t6982*t3089;
  t7203 = t7162 + t7199;
  t5481 = -0.08055*t5425;
  t5619 = -0.01004*t5571;
  t5694 = 0. + t5481 + t5619;
  t5941 = -0.01004*t5425;
  t6018 = 0.08055*t5571;
  t6022 = 0. + t5941 + t6018;
  t6340 = -0.08055*t6155;
  t6368 = -0.13004*t6354;
  t6389 = 0. + t6340 + t6368;
  t7273 = t5010*t4585*t2328;
  t7277 = t7203*t4863;
  t7302 = t7273 + t7277;
  t7304 = t2436*t6982;
  t7312 = -1.*t7117*t3089;
  t7315 = t7304 + t7312;
  t6449 = -0.13004*t6155;
  t6451 = 0.08055*t6354;
  t6478 = 0. + t6449 + t6451;
  t7334 = t5381*t7302;
  t7335 = t7315*t5571;
  t7337 = t7334 + t7335;
  t7353 = t5381*t7315;
  t7366 = -1.*t7302*t5571;
  t7376 = t7353 + t7366;
  t7486 = t5010*t2436*t2386;
  t7514 = t5010*t1321*t3089;
  t7517 = t7486 + t7514;
  t7567 = -1.*t4585*t1590;
  t7568 = t7517*t4863;
  t7599 = t7567 + t7568;
  t7620 = t5010*t1321*t2436;
  t7626 = -1.*t5010*t2386*t3089;
  t7633 = t7620 + t7626;
  t7652 = t5381*t7599;
  t7655 = t7633*t5571;
  t7662 = t7652 + t7655;
  t7681 = t5381*t7633;
  t7682 = -1.*t7599*t5571;
  t7687 = t7681 + t7682;
  p_output1[0]=0. + t2430*t3171 + t3675*t4185 + t4365*t4912 + 0.1327*(t4365*t4585 - 1.*t424*t4863*t5010) + t424*t5010*t5089 + t5366*t5694 + t5855*t6022 + t6389*t6421 + t6478*t6527 - 0.15304*(-1.*t6354*t6421 + t6114*t6527) - 0.04845*(t6114*t6421 + t6354*t6527) + var1[0];
  p_output1[1]=0. + t2328*t5010*t5089 + t3171*t6982 + t4185*t7117 + t4912*t7203 + 0.1327*(-1.*t2328*t4863*t5010 + t4585*t7203) + t5694*t7302 + t6022*t7315 + t6389*t7337 + t6478*t7376 - 0.15304*(-1.*t6354*t7337 + t6114*t7376) - 0.04845*(t6114*t7337 + t6354*t7376) + var1[1];
  p_output1[2]=0. + t1321*t3171*t5010 + t2386*t4185*t5010 - 1.*t1590*t5089 + t4912*t7517 + 0.1327*(t1590*t4863 + t4585*t7517) + t5694*t7599 + t6022*t7633 + t6389*t7662 + t6478*t7687 - 0.15304*(-1.*t6354*t7662 + t6114*t7687) - 0.04845*(t6114*t7662 + t6354*t7687) + var1[2];
}



void p_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
