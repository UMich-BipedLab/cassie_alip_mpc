/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftShin_src.h"

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
  double t996;
  double t1063;
  double t946;
  double t1280;
  double t594;
  double t1701;
  double t1850;
  double t1851;
  double t1039;
  double t1346;
  double t1438;
  double t1915;
  double t1634;
  double t1931;
  double t1974;
  double t2599;
  double t2463;
  double t2489;
  double t2530;
  double t2252;
  double t2621;
  double t2693;
  double t2701;
  double t407;
  double t453;
  double t2114;
  double t2236;
  double t3556;
  double t3579;
  double t3595;
  double t3641;
  double t3703;
  double t3296;
  double t3757;
  double t3921;
  double t3933;
  double t4295;
  double t4312;
  double t1984;
  double t1993;
  double t2111;
  double t2561;
  double t2862;
  double t2867;
  double t3108;
  double t3325;
  double t3333;
  double t3413;
  double t3425;
  double t3426;
  double t3432;
  double t3477;
  double t3716;
  double t3738;
  double t3739;
  double t4218;
  double t4327;
  double t4478;
  double t4622;
  double t4623;
  double t4672;
  double t4729;
  double t4809;
  double t4871;
  double t4916;
  double t4955;
  double t5192;
  double t5193;
  double t5542;
  double t5569;
  double t5818;
  double t6115;
  double t6136;
  double t6145;
  double t5203;
  double t5240;
  double t5287;
  double t5306;
  double t5397;
  double t6381;
  double t6420;
  double t6454;
  double t6586;
  double t6598;
  double t6600;
  double t6603;
  t996 = Cos(var1[10]);
  t1063 = Sin(var1[9]);
  t946 = Cos(var1[9]);
  t1280 = Sin(var1[10]);
  t594 = Cos(var1[8]);
  t1701 = t996*t1063;
  t1850 = t946*t1280;
  t1851 = 0. + t1701 + t1850;
  t1039 = t946*t996;
  t1346 = -1.*t1063*t1280;
  t1438 = 0. + t1039 + t1346;
  t1915 = Sin(var1[8]);
  t1634 = t594*t1438;
  t1931 = -1.*t1851*t1915;
  t1974 = 0. + t1634 + t1931;
  t2599 = Cos(var1[6]);
  t2463 = t594*t1851;
  t2489 = t1438*t1915;
  t2530 = 0. + t2463 + t2489;
  t2252 = Sin(var1[6]);
  t2621 = Sin(var1[7]);
  t2693 = t2621*t1974;
  t2701 = 0. + t2693;
  t407 = Sin(var1[4]);
  t453 = Cos(var1[7]);
  t2114 = Cos(var1[4]);
  t2236 = Sin(var1[5]);
  t3556 = -1.*t946*t996;
  t3579 = t1063*t1280;
  t3595 = 0. + t3556 + t3579;
  t3641 = -1.*t3595*t1915;
  t3703 = 0. + t2463 + t3641;
  t3296 = Cos(var1[5]);
  t3757 = t594*t3595;
  t3921 = t1851*t1915;
  t3933 = 0. + t3757 + t3921;
  t4295 = t2621*t3703;
  t4312 = 0. + t4295;
  t1984 = t453*t1974;
  t1993 = 0. + t1984;
  t2111 = -1.*t407*t1993;
  t2561 = -1.*t2252*t2530;
  t2862 = t2599*t2701;
  t2867 = 0. + t2561 + t2862;
  t3108 = t2236*t2867;
  t3325 = t2599*t2530;
  t3333 = t2252*t2701;
  t3413 = 0. + t3325 + t3333;
  t3425 = t3296*t3413;
  t3426 = 0. + t3108 + t3425;
  t3432 = t2114*t3426;
  t3477 = 0. + t2111 + t3432;
  t3716 = t453*t3703;
  t3738 = 0. + t3716;
  t3739 = -1.*t407*t3738;
  t4218 = -1.*t2252*t3933;
  t4327 = t2599*t4312;
  t4478 = 0. + t4218 + t4327;
  t4622 = t2236*t4478;
  t4623 = t2599*t3933;
  t4672 = t2252*t4312;
  t4729 = 0. + t4623 + t4672;
  t4809 = t3296*t4729;
  t4871 = 0. + t4622 + t4809;
  t4916 = t2114*t4871;
  t4955 = 0. + t3739 + t4916;
  t5192 = -1.*t453;
  t5193 = 0. + t5192;
  t5542 = t3296*t2867;
  t5569 = -1.*t2236*t3413;
  t5818 = 0. + t5542 + t5569;
  t6115 = t3296*t4478;
  t6136 = -1.*t2236*t4729;
  t6145 = 0. + t6115 + t6136;
  t5203 = t2599*t5193;
  t5240 = 0. + t5203;
  t5287 = t5193*t2252;
  t5306 = 0. + t5287;
  t5397 = 0. + t2621;
  t6381 = 0.000334*t1993;
  t6420 = 0.00036*t3738;
  t6454 = t6381 + t6420;
  t6586 = 0.0341*t1993;
  t6598 = 0.000334*t3738;
  t6600 = t6586 + t6598;
  t6603 = 0.0341*t5397;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000334*t3477 + 0.00036*t4955;
  p_output1[10]=0.0341*t3477 + 0.000334*t4955;
  p_output1[11]=0.0341*(0. + t2114*(0. + t2236*t5240 + t3296*t5306) - 1.*t407*t5397);
  p_output1[12]=0.000334*t5818 + 0.00036*t6145;
  p_output1[13]=0.0341*t5818 + 0.000334*t6145;
  p_output1[14]=0.0341*(0. + t3296*t5240 - 1.*t2236*t5306);
  p_output1[15]=t6454;
  p_output1[16]=t6600;
  p_output1[17]=t6603;
  p_output1[18]=t6454;
  p_output1[19]=t6600;
  p_output1[20]=t6603;
  p_output1[21]=0.000334*t2530 + 0.00036*t3933;
  p_output1[22]=0.0341*t2530 + 0.000334*t3933;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0.0341;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0.0341;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0.0341;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jdq_AMBody_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
