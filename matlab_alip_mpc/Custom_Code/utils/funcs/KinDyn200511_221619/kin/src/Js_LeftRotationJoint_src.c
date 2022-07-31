/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftRotationJoint_src.h"

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
  double t243;
  double t331;
  double t749;
  double t847;
  double t776;
  double t885;
  double t1748;
  double t1785;
  double t1162;
  double t1183;
  double t1340;
  double t1463;
  double t1562;
  double t1718;
  double t1719;
  double t1883;
  double t1887;
  double t1891;
  double t2095;
  double t2120;
  double t2138;
  double t3045;
  double t3067;
  double t3121;
  double t3336;
  double t1846;
  double t1857;
  double t1860;
  double t1749;
  double t1800;
  double t1804;
  double t3155;
  double t3349;
  double t3362;
  double t3425;
  double t3462;
  double t3520;
  double t33;
  double t3700;
  double t3837;
  double t3860;
  double t4596;
  double t4605;
  double t4622;
  double t4179;
  double t4191;
  double t4195;
  t243 = Cos(var1[3]);
  t331 = Sin(var1[3]);
  t749 = Cos(var1[4]);
  t847 = Sin(var1[4]);
  t776 = -1.*var1[2]*t749*t331;
  t885 = -1.*var1[1]*t847;
  t1748 = Cos(var1[5]);
  t1785 = Sin(var1[5]);
  t1162 = var1[2]*t243*t749;
  t1183 = var1[0]*t847;
  t1340 = -1.*var1[1]*t243*t749;
  t1463 = var1[0]*t749*t331;
  t1562 = t243*t749;
  t1718 = t749*t331;
  t1719 = -1.*t847;
  t1883 = t1748*t331*t847;
  t1887 = -1.*t243*t1785;
  t1891 = t1883 + t1887;
  t2095 = t243*t1748;
  t2120 = t331*t847*t1785;
  t2138 = t2095 + t2120;
  t3045 = Cos(var1[6]);
  t3067 = -1.*t3045;
  t3121 = 1. + t3067;
  t3336 = Sin(var1[6]);
  t1846 = -1.*t1748*t331;
  t1857 = t243*t847*t1785;
  t1860 = t1846 + t1857;
  t1749 = t243*t1748*t847;
  t1800 = t331*t1785;
  t1804 = t1749 + t1800;
  t3155 = 0.07996*t3121;
  t3349 = -0.135*t3336;
  t3362 = 0. + t3155 + t3349;
  t3425 = 0.135*t3121;
  t3462 = 0.07996*t3336;
  t3520 = 0. + t3425 + t3462;
  t33 = -1.*var1[0];
  t3700 = t749*t1748*t3045;
  t3837 = -1.*t749*t1785*t3336;
  t3860 = t3700 + t3837;
  t4596 = t3045*t1804;
  t4605 = -1.*t1860*t3336;
  t4622 = t4596 + t4605;
  t4179 = t3045*t1891;
  t4191 = -1.*t2138*t3336;
  t4195 = t4179 + t4191;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t33;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t243*var1[2];
  p_output1[25]=-1.*t331*var1[2];
  p_output1[26]=t243*var1[0] + t331*var1[1];
  p_output1[27]=-1.*t331;
  p_output1[28]=t243;
  p_output1[29]=0;
  p_output1[30]=t776 + t885;
  p_output1[31]=t1162 + t1183;
  p_output1[32]=t1340 + t1463;
  p_output1[33]=t1562;
  p_output1[34]=t1718;
  p_output1[35]=t1719;
  p_output1[36]=-0.135*t1804 + 0.07996*t1860 + t776 + t885;
  p_output1[37]=t1162 + t1183 - 0.135*t1891 + 0.07996*t2138;
  p_output1[38]=t1340 + t1463 - 0.135*t1748*t749 + 0.07996*t1785*t749;
  p_output1[39]=0. + t1562;
  p_output1[40]=0. + t1718;
  p_output1[41]=0. + t1719;
  p_output1[42]=0.08055*(t1860*t3045 + t1804*t3336) + 0.135*t243*t749 + t3860*(0. + t1891*t3362 + t2138*t3520 + var1[1]) + t4195*(0. - 1.*t1748*t3362*t749 - 1.*t1785*t3520*t749 - 1.*var1[2]);
  p_output1[43]=0.08055*(t2138*t3045 + t1891*t3336) + (0. + t33 - 1.*t1804*t3362 - 1.*t1860*t3520)*t3860 + 0.135*t331*t749 + t4622*(0. + t1748*t3362*t749 + t1785*t3520*t749 + var1[2]);
  p_output1[44]=0.08055*(t1785*t3045*t749 + t1748*t3336*t749) - 0.135*t847 + t4195*(0. + t1804*t3362 + t1860*t3520 + var1[0]) + t4622*(0. - 1.*t1891*t3362 - 1.*t2138*t3520 - 1.*var1[1]);
  p_output1[45]=0. + t4596 + t4605;
  p_output1[46]=0. + t4179 + t4191;
  p_output1[47]=0. + t3700 + t3837;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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



void Js_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
