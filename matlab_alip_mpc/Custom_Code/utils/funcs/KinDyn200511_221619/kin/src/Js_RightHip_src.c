/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightHip_src.h"

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
  double t108;
  double t169;
  double t392;
  double t447;
  double t421;
  double t456;
  double t803;
  double t855;
  double t523;
  double t545;
  double t676;
  double t692;
  double t749;
  double t788;
  double t793;
  double t845;
  double t873;
  double t903;
  double t911;
  double t915;
  double t917;
  double t1163;
  double t1147;
  double t941;
  double t946;
  double t954;
  double t1317;
  double t1336;
  double t1043;
  double t1048;
  double t1050;
  double t1340;
  double t1357;
  double t1361;
  double t1371;
  double t1379;
  double t1386;
  double t1227;
  double t1234;
  double t1240;
  double t39;
  double t1562;
  double t1578;
  double t1579;
  double t1505;
  double t1508;
  double t1513;
  t108 = Cos(var1[3]);
  t169 = Sin(var1[3]);
  t392 = Cos(var1[4]);
  t447 = Sin(var1[4]);
  t421 = -1.*var1[2]*t392*t169;
  t456 = -1.*var1[1]*t447;
  t803 = Cos(var1[5]);
  t855 = Sin(var1[5]);
  t523 = var1[2]*t108*t392;
  t545 = var1[0]*t447;
  t676 = -1.*var1[1]*t108*t392;
  t692 = var1[0]*t392*t169;
  t749 = t108*t392;
  t788 = t392*t169;
  t793 = -1.*t447;
  t845 = t108*t803*t447;
  t873 = t169*t855;
  t903 = t845 + t873;
  t911 = -1.*t803*t169;
  t915 = t108*t447*t855;
  t917 = t911 + t915;
  t1163 = Cos(var1[13]);
  t1147 = Sin(var1[13]);
  t941 = t803*t169*t447;
  t946 = -1.*t108*t855;
  t954 = t941 + t946;
  t1317 = -1.*t1163;
  t1336 = 1. + t1317;
  t1043 = t108*t803;
  t1048 = t169*t447*t855;
  t1050 = t1043 + t1048;
  t1340 = 0.07996*t1336;
  t1357 = 0.135*t1147;
  t1361 = 0. + t1340 + t1357;
  t1371 = -0.135*t1336;
  t1379 = 0.07996*t1147;
  t1386 = 0. + t1371 + t1379;
  t1227 = t1163*t392*t803;
  t1234 = -1.*t392*t1147*t855;
  t1240 = t1227 + t1234;
  t39 = -1.*var1[0];
  t1562 = t1163*t903;
  t1578 = -1.*t1147*t917;
  t1579 = t1562 + t1578;
  t1505 = t1163*t954;
  t1508 = -1.*t1147*t1050;
  t1513 = t1505 + t1508;
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
  p_output1[19]=t39;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t108*var1[2];
  p_output1[25]=-1.*t169*var1[2];
  p_output1[26]=t108*var1[0] + t169*var1[1];
  p_output1[27]=-1.*t169;
  p_output1[28]=t108;
  p_output1[29]=0;
  p_output1[30]=t421 + t456;
  p_output1[31]=t523 + t545;
  p_output1[32]=t676 + t692;
  p_output1[33]=t749;
  p_output1[34]=t788;
  p_output1[35]=t793;
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
  p_output1[78]=t421 + t456 + 0.135*t903 + 0.07996*t917;
  p_output1[79]=0.07996*t1050 + t523 + t545 + 0.135*t954;
  p_output1[80]=t676 + t692 + 0.135*t392*t803 + 0.07996*t392*t855;
  p_output1[81]=0. + t749;
  p_output1[82]=0. + t788;
  p_output1[83]=0. + t793;
  p_output1[84]=-0.135*t108*t392 + 0.08055*(t1147*t903 + t1163*t917) + t1240*(0. + t1050*t1386 + t1361*t954 + var1[1]) + t1513*(0. - 1.*t1361*t392*t803 - 1.*t1386*t392*t855 - 1.*var1[2]);
  p_output1[85]=-0.135*t169*t392 + t1240*(0. + t39 - 1.*t1361*t903 - 1.*t1386*t917) + 0.08055*(t1050*t1163 + t1147*t954) + t1579*(0. + t1361*t392*t803 + t1386*t392*t855 + var1[2]);
  p_output1[86]=0.135*t447 + 0.08055*(t1147*t392*t803 + t1163*t392*t855) + t1513*(0. + t1361*t903 + t1386*t917 + var1[0]) + t1579*(0. - 1.*t1050*t1386 - 1.*t1361*t954 - 1.*var1[1]);
  p_output1[87]=0. + t1562 + t1578;
  p_output1[88]=0. + t1505 + t1508;
  p_output1[89]=0. + t1227 + t1234;
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



void Js_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
