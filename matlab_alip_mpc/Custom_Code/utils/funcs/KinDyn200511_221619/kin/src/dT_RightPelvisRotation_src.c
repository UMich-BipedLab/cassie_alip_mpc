/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightPelvisRotation_src.h"

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
  double t1526;
  double t499;
  double t641;
  double t1654;
  double t2612;
  double t2378;
  double t2644;
  double t2547;
  double t3125;
  double t3156;
  double t3257;
  double t3484;
  double t4075;
  double t4092;
  double t4234;
  double t4427;
  double t4487;
  double t4501;
  double t4857;
  double t4873;
  double t4888;
  double t4889;
  double t5310;
  double t5326;
  double t5331;
  double t3578;
  double t3668;
  double t3771;
  double t5460;
  double t4349;
  double t4371;
  double t4414;
  double t4238;
  double t4246;
  double t4522;
  double t5751;
  double t5097;
  double t5099;
  double t5104;
  double t5839;
  double t5843;
  double t5844;
  double t5929;
  double t5930;
  double t2603;
  double t2708;
  double t2992;
  double t5381;
  double t5391;
  double t5410;
  double t5950;
  double t5980;
  double t5986;
  double t5931;
  double t5932;
  double t5946;
  double t5496;
  double t5516;
  double t3799;
  double t3917;
  double t5546;
  double t5549;
  double t4422;
  double t4545;
  double t5591;
  double t5596;
  double t5622;
  double t4586;
  double t4646;
  double t4725;
  double t5670;
  double t5675;
  double t5694;
  double t4760;
  double t4795;
  double t4808;
  double t5763;
  double t4963;
  double t4981;
  double t6097;
  double t6102;
  double t6114;
  double t6115;
  double t6122;
  double t5776;
  double t5785;
  double t5170;
  double t5192;
  double t7097;
  double t7174;
  double t5350;
  double t5353;
  double t5357;
  double t5864;
  double t5878;
  double t5898;
  t1526 = Cos(var1[3]);
  t499 = Cos(var1[4]);
  t641 = Sin(var1[3]);
  t1654 = Sin(var1[4]);
  t2612 = Cos(var1[13]);
  t2378 = Cos(var1[5]);
  t2644 = Sin(var1[5]);
  t2547 = Sin(var1[13]);
  t3125 = t1526*t2378*t1654;
  t3156 = t641*t2644;
  t3257 = t3125 + t3156;
  t3484 = t2612*t3257;
  t4075 = -1.*t2378*t641;
  t4092 = t1526*t1654*t2644;
  t4234 = t4075 + t4092;
  t4427 = -1.*t1526*t2378;
  t4487 = -1.*t641*t1654*t2644;
  t4501 = t4427 + t4487;
  t4857 = t2378*t641*t1654;
  t4873 = -1.*t1526*t2644;
  t4888 = t4857 + t4873;
  t4889 = t2612*t4888;
  t5310 = t2612*t499*t2378;
  t5326 = -1.*t499*t2547*t2644;
  t5331 = t5310 + t5326;
  t3578 = t2378*t641;
  t3668 = -1.*t1526*t1654*t2644;
  t3771 = t3578 + t3668;
  t5460 = -1.*t2547*t3257;
  t4349 = -1.*t2378*t641*t1654;
  t4371 = t1526*t2644;
  t4414 = t4349 + t4371;
  t4238 = -1.*t2547*t4234;
  t4246 = t3484 + t4238;
  t4522 = t2612*t4501;
  t5751 = -1.*t2547*t4888;
  t5097 = t1526*t2378;
  t5099 = t641*t1654*t2644;
  t5104 = t5097 + t5099;
  t5839 = -1.*t499*t2378*t2547;
  t5843 = -1.*t2612*t499*t2644;
  t5844 = t5839 + t5843;
  t5929 = -1.*t2612;
  t5930 = 1. + t5929;
  t2603 = t1526*t499*t2378*t2547;
  t2708 = t2612*t1526*t499*t2644;
  t2992 = t2603 + t2708;
  t5381 = t2612*t1526*t499*t2378;
  t5391 = -1.*t1526*t499*t2547*t2644;
  t5410 = t5381 + t5391;
  t5950 = -0.135*t5930;
  t5980 = 0.07996*t2547;
  t5986 = 0. + t5950 + t5980;
  t5931 = 0.07996*t5930;
  t5932 = 0.135*t2547;
  t5946 = 0. + t5931 + t5932;
  t5496 = t2612*t3771;
  t5516 = t5460 + t5496;
  t3799 = t2547*t3771;
  t3917 = t3484 + t3799;
  t5546 = -1.*t2612*t4234;
  t5549 = t5460 + t5546;
  t4422 = t2547*t4414;
  t4545 = t4422 + t4522;
  t5591 = t2612*t4414;
  t5596 = -1.*t2547*t4501;
  t5622 = t5591 + t5596;
  t4586 = t499*t2378*t2547*t641;
  t4646 = t2612*t499*t641*t2644;
  t4725 = t4586 + t4646;
  t5670 = t2612*t499*t2378*t641;
  t5675 = -1.*t499*t2547*t641*t2644;
  t5694 = t5670 + t5675;
  t4760 = t2547*t3257;
  t4795 = t2612*t4234;
  t4808 = t4760 + t4795;
  t5763 = t5751 + t4522;
  t4963 = t2547*t4501;
  t4981 = t4889 + t4963;
  t6097 = 0.135*t2612;
  t6102 = t6097 + t5980;
  t6114 = 0.07996*t2612;
  t6115 = -0.135*t2547;
  t6122 = t6114 + t6115;
  t5776 = -1.*t2612*t5104;
  t5785 = t5751 + t5776;
  t5170 = -1.*t2547*t5104;
  t5192 = t4889 + t5170;
  t7097 = 0.09786*t5844;
  t7174 = -0.1351*t5331;
  t5350 = -1.*t2378*t2547*t1654;
  t5353 = -1.*t2612*t1654*t2644;
  t5357 = t5350 + t5353;
  t5864 = -1.*t2612*t2378*t1654;
  t5878 = t2547*t1654*t2644;
  t5898 = t5864 + t5878;
  p_output1[0]=-1.*t499*t641*var2[3] - 1.*t1526*t1654*var2[4];
  p_output1[1]=t1526*t499*var2[3] - 1.*t1654*t641*var2[4];
  p_output1[2]=-1.*t499*var2[4];
  p_output1[3]=0;
  p_output1[4]=t4545*var2[3] + t2992*var2[4] + t3917*var2[5] + t4246*var2[13];
  p_output1[5]=t4808*var2[3] + t4725*var2[4] + t4981*var2[5] + t5192*var2[13];
  p_output1[6]=t5357*var2[4] + t5331*var2[5] + t5331*var2[13];
  p_output1[7]=0;
  p_output1[8]=t5622*var2[3] + t5410*var2[4] + t5516*var2[5] + t5549*var2[13];
  p_output1[9]=t4246*var2[3] + t5694*var2[4] + t5763*var2[5] + t5785*var2[13];
  p_output1[10]=t5898*var2[4] + t5844*var2[5] + t5844*var2[13];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.1351*t4545 + 0.09786*t5622 + t4414*t5946 + t4501*t5986 + 0.05485*t499*t641)*var2[3] + (0.05485*t1526*t1654 - 0.1351*t2992 + 0.09786*t5410 + t1526*t2378*t499*t5946 + t1526*t2644*t499*t5986)*var2[4] + (-0.1351*t3917 + 0.09786*t5516 + t3771*t5946 + t3257*t5986)*var2[5] + (-0.1351*t4246 + 0.09786*t5549 + t3257*t6102 + t4234*t6122)*var2[13];
  p_output1[13]=var2[1] + (0.09786*t4246 - 0.1351*t4808 - 0.05485*t1526*t499 + t3257*t5946 + t4234*t5986)*var2[3] + (-0.1351*t4725 + 0.09786*t5694 + 0.05485*t1654*t641 + t2378*t499*t5946*t641 + t2644*t499*t5986*t641)*var2[4] + (-0.1351*t4981 + 0.09786*t5763 + t4501*t5946 + t4888*t5986)*var2[5] + (-0.1351*t5192 + 0.09786*t5785 + t4888*t6102 + t5104*t6122)*var2[13];
  p_output1[14]=var2[2] + (0.05485*t499 - 0.1351*t5357 + 0.09786*t5898 - 1.*t1654*t2378*t5946 - 1.*t1654*t2644*t5986)*var2[4] + (-1.*t2644*t499*t5946 + t2378*t499*t5986 + t7097 + t7174)*var2[5] + (t2378*t499*t6102 + t2644*t499*t6122 + t7097 + t7174)*var2[13];
  p_output1[15]=0;
}



void dT_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
