/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightRotationJoint_src.h"

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
  double t241;
  double t66;
  double t179;
  double t262;
  double t54;
  double t910;
  double t443;
  double t488;
  double t1097;
  double t1104;
  double t999;
  double t1067;
  double t1463;
  double t1519;
  double t1938;
  double t1945;
  double t1907;
  double t1919;
  double t214;
  double t306;
  double t339;
  double t493;
  double t741;
  double t749;
  double t803;
  double t828;
  double t1096;
  double t1279;
  double t1402;
  double t1468;
  double t1593;
  double t1599;
  double t1661;
  double t1687;
  double t1774;
  double t1818;
  double t1928;
  double t1952;
  double t1955;
  double t1966;
  double t1970;
  double t1996;
  double t2025;
  double t2057;
  double t2075;
  double t2083;
  double t2341;
  double t2350;
  double t2371;
  double t2434;
  double t2444;
  double t2467;
  double t2473;
  double t2477;
  double t2485;
  double t2516;
  double t2397;
  double t2400;
  double t2419;
  double t2575;
  double t2600;
  double t2602;
  double t2608;
  double t2609;
  double t2447;
  double t2540;
  double t2541;
  double t2547;
  double t2644;
  double t2647;
  double t2682;
  double t2714;
  double t2722;
  double t2741;
  double t2561;
  double t2632;
  double t2635;
  double t2702;
  double t2751;
  double t2795;
  double t2805;
  double t2809;
  double t2817;
  double t2300;
  double t2319;
  double t2638;
  double t2834;
  double t2962;
  double t2930;
  double t3022;
  double t3153;
  double t3239;
  double t3545;
  t241 = Cos(var1[13]);
  t66 = Cos(var1[5]);
  t179 = Sin(var1[13]);
  t262 = Sin(var1[5]);
  t54 = Sin(var1[3]);
  t910 = Sin(var1[14]);
  t443 = Cos(var1[3]);
  t488 = Sin(var1[4]);
  t1097 = t179*t910;
  t1104 = 0. + t1097;
  t999 = t241*t910;
  t1067 = 0. + t999;
  t1463 = Cos(var1[14]);
  t1519 = Cos(var1[4]);
  t1938 = -1.*t1463*t179;
  t1945 = 0. + t1938;
  t1907 = -1.*t241*t1463;
  t1919 = 0. + t1907;
  t214 = t66*t179;
  t306 = t241*t262;
  t339 = 0. + t214 + t306;
  t493 = -1.*t241*t66;
  t741 = t179*t262;
  t749 = 0. + t493 + t741;
  t803 = t488*t749;
  t828 = 0. + t803;
  t1096 = t66*t1067;
  t1279 = -1.*t1104*t262;
  t1402 = 0. + t1096 + t1279;
  t1468 = 0. + t1463;
  t1593 = t1468*t1519;
  t1599 = t66*t1104;
  t1661 = t1067*t262;
  t1687 = 0. + t1599 + t1661;
  t1774 = t488*t1687;
  t1818 = 0. + t1593 + t1774;
  t1928 = t1919*t66;
  t1952 = -1.*t1945*t262;
  t1955 = 0. + t1928 + t1952;
  t1966 = 0. + t910;
  t1970 = t1519*t1966;
  t1996 = t66*t1945;
  t2025 = t1919*t262;
  t2057 = 0. + t1996 + t2025;
  t2075 = t488*t2057;
  t2083 = 0. + t1970 + t2075;
  t2341 = -1.*t1468*t488;
  t2350 = t1519*t1687;
  t2371 = 0. + t2341 + t2350;
  t2434 = -1.*t241;
  t2444 = 1. + t2434;
  t2467 = -1.*t1463;
  t2473 = 1. + t2467;
  t2477 = -0.135*t2473;
  t2485 = -0.135*t1463;
  t2516 = 0. + t2477 + t2485;
  t2397 = -1.*t1966*t488;
  t2400 = t1519*t2057;
  t2419 = 0. + t2397 + t2400;
  t2575 = 0.07996*t2444;
  t2600 = -0.01004*t241;
  t2602 = 0.135*t179;
  t2608 = t2516*t179;
  t2609 = 0. + t2575 + t2600 + t2602 + t2608;
  t2447 = -0.135*t2444;
  t2540 = t241*t2516;
  t2541 = 0.09*t179;
  t2547 = 0. + t2447 + t2540 + t2541;
  t2644 = -0.08055*t2473;
  t2647 = -0.08055*t1463;
  t2682 = 0. + t2644 + t2647;
  t2714 = t66*t2609;
  t2722 = t2547*t262;
  t2741 = 0. + t2714 + t2722;
  t2561 = t66*t2547;
  t2632 = -1.*t2609*t262;
  t2635 = 0. + t2561 + t2632;
  t2702 = -1.*t2682*t488;
  t2751 = t1519*t2741;
  t2795 = 0. + t2702 + t2751;
  t2805 = t2682*t1519;
  t2809 = t488*t2741;
  t2817 = 0. + t2805 + t2809;
  t2300 = t1519*t749;
  t2319 = 0. + t2300;
  t2638 = t2635*t1955;
  t2834 = -1.*t2635*t1402;
  t2962 = t339*t2635;
  t2930 = -1.*t2635*t1955;
  t3022 = -1.*t339*t2635;
  t3153 = t2635*t1402;
  t3239 = t2682*t1966;
  t3545 = -1.*t2682*t1468;
  p_output1[0]=0. - 1.*t339*t54 + t443*t828;
  p_output1[1]=0. + t1818*t443 - 1.*t1402*t54;
  p_output1[2]=0. + t2083*t443 - 1.*t1955*t54;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t339*t443 + t54*t828;
  p_output1[7]=0. + t1402*t443 + t1818*t54;
  p_output1[8]=0. + t1955*t443 + t2083*t54;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2319;
  p_output1[13]=t2371;
  p_output1[14]=t2419;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2371*(t2638 + t2419*t2795 + t2083*t2817) + t2419*(-1.*t2371*t2795 - 1.*t1818*t2817 + t2834);
  p_output1[19]=t2319*(-1.*t2419*t2795 - 1.*t2083*t2817 + t2930) + t2419*(t2319*t2795 + t2962 + t2817*t828);
  p_output1[20]=t2319*(t2371*t2795 + t1818*t2817 + t3153) + t2371*(-1.*t2319*t2795 + t3022 - 1.*t2817*t828);
  p_output1[21]=t2319;
  p_output1[22]=t2371;
  p_output1[23]=t2419;
  p_output1[24]=0. + t1402*(t2638 + t2057*t2741 + t3239) + t1955*(-1.*t1687*t2741 + t2834 + t3545);
  p_output1[25]=(-1.*t1966*t2682 - 1.*t2057*t2741 + t2930)*t339 + t1955*(0. + t2962 + t2741*t749);
  p_output1[26]=(t1468*t2682 + t1687*t2741 + t3153)*t339 + t1402*(0. + t3022 - 1.*t2741*t749);
  p_output1[27]=t339;
  p_output1[28]=t1402;
  p_output1[29]=t1955;
  p_output1[30]=0. + t1468*(t1919*t2547 + t1945*t2609 + t3239) + t1966*(-1.*t1067*t2547 - 1.*t1104*t2609 + t3545);
  p_output1[31]=0. + t1966*(0. + t179*t2547 - 1.*t241*t2609);
  p_output1[32]=0. + t1468*(0. - 1.*t179*t2547 + t241*t2609);
  p_output1[33]=0.;
  p_output1[34]=t1468;
  p_output1[35]=t1966;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.135 + t910*(0. - 1.*t1463*t2682 - 1.*t2516*t910) + t1463*(0. - 1.*t1463*t2516 + t2682*t910);
  p_output1[79]=0. + 0.09*t910;
  p_output1[80]=0. - 0.09*t1463;
  p_output1[81]=0.;
  p_output1[82]=t1468;
  p_output1[83]=t1966;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=0.;
  p_output1[87]=-1.;
  p_output1[88]=0.;
  p_output1[89]=0.;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
