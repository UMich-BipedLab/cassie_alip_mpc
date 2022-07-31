/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightPelvisRotation_src.h"

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
  double t1154;
  double t228;
  double t628;
  double t1235;
  double t1842;
  double t1503;
  double t1960;
  double t1506;
  double t2843;
  double t3457;
  double t3644;
  double t3649;
  double t4821;
  double t4857;
  double t5099;
  double t5549;
  double t5584;
  double t5591;
  double t6016;
  double t6023;
  double t6044;
  double t6048;
  double t6189;
  double t6269;
  double t6285;
  double t3839;
  double t3892;
  double t4139;
  double t6499;
  double t5410;
  double t5496;
  double t5503;
  double t5310;
  double t5381;
  double t5630;
  double t6852;
  double t6097;
  double t6114;
  double t6115;
  double t6974;
  double t6976;
  double t6982;
  t1154 = Cos(var1[3]);
  t228 = Cos(var1[4]);
  t628 = Sin(var1[3]);
  t1235 = Sin(var1[4]);
  t1842 = Cos(var1[13]);
  t1503 = Cos(var1[5]);
  t1960 = Sin(var1[5]);
  t1506 = Sin(var1[13]);
  t2843 = t1154*t1503*t1235;
  t3457 = t628*t1960;
  t3644 = t2843 + t3457;
  t3649 = t1842*t3644;
  t4821 = -1.*t1503*t628;
  t4857 = t1154*t1235*t1960;
  t5099 = t4821 + t4857;
  t5549 = -1.*t1154*t1503;
  t5584 = -1.*t628*t1235*t1960;
  t5591 = t5549 + t5584;
  t6016 = t1503*t628*t1235;
  t6023 = -1.*t1154*t1960;
  t6044 = t6016 + t6023;
  t6048 = t1842*t6044;
  t6189 = t1842*t228*t1503;
  t6269 = -1.*t228*t1506*t1960;
  t6285 = t6189 + t6269;
  t3839 = t1503*t628;
  t3892 = -1.*t1154*t1235*t1960;
  t4139 = t3839 + t3892;
  t6499 = -1.*t1506*t3644;
  t5410 = -1.*t1503*t628*t1235;
  t5496 = t1154*t1960;
  t5503 = t5410 + t5496;
  t5310 = -1.*t1506*t5099;
  t5381 = t3649 + t5310;
  t5630 = t1842*t5591;
  t6852 = -1.*t1506*t6044;
  t6097 = t1154*t1503;
  t6114 = t628*t1235*t1960;
  t6115 = t6097 + t6114;
  t6974 = -1.*t228*t1503*t1506;
  t6976 = -1.*t1842*t228*t1960;
  t6982 = t6974 + t6976;
  p_output1[0]=-1.*t228*t628*var2[3] - 1.*t1154*t1235*var2[4];
  p_output1[1]=t1154*t228*var2[3] - 1.*t1235*t628*var2[4];
  p_output1[2]=-1.*t228*var2[4];
  p_output1[3]=(t1506*t5503 + t5630)*var2[3] + (t1154*t1503*t1506*t228 + t1154*t1842*t1960*t228)*var2[4] + (t3649 + t1506*t4139)*var2[5] + t5381*var2[13];
  p_output1[4]=(t1506*t3644 + t1842*t5099)*var2[3] + (t1503*t1506*t228*t628 + t1842*t1960*t228*t628)*var2[4] + (t1506*t5591 + t6048)*var2[5] + (t6048 - 1.*t1506*t6115)*var2[13];
  p_output1[5]=(-1.*t1235*t1503*t1506 - 1.*t1235*t1842*t1960)*var2[4] + t6285*var2[5] + t6285*var2[13];
  p_output1[6]=(t1842*t5503 - 1.*t1506*t5591)*var2[3] + (t1154*t1503*t1842*t228 - 1.*t1154*t1506*t1960*t228)*var2[4] + (t1842*t4139 + t6499)*var2[5] + (-1.*t1842*t5099 + t6499)*var2[13];
  p_output1[7]=t5381*var2[3] + (t1503*t1842*t228*t628 - 1.*t1506*t1960*t228*t628)*var2[4] + (t5630 + t6852)*var2[5] + (-1.*t1842*t6115 + t6852)*var2[13];
  p_output1[8]=(-1.*t1235*t1503*t1842 + t1235*t1506*t1960)*var2[4] + t6982*var2[5] + t6982*var2[13];
}



void dR_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
