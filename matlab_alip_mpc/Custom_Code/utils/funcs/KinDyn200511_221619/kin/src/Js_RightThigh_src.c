/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightThigh_src.h"

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
  double t118;
  double t187;
  double t365;
  double t372;
  double t367;
  double t373;
  double t728;
  double t755;
  double t394;
  double t480;
  double t565;
  double t571;
  double t630;
  double t644;
  double t656;
  double t732;
  double t787;
  double t790;
  double t831;
  double t839;
  double t854;
  double t1189;
  double t1165;
  double t883;
  double t884;
  double t898;
  double t1291;
  double t1297;
  double t988;
  double t1007;
  double t1010;
  double t1313;
  double t1318;
  double t1341;
  double t1355;
  double t1377;
  double t1413;
  double t1254;
  double t1273;
  double t1288;
  double t65;
  double t1716;
  double t1740;
  double t1746;
  double t1528;
  double t1536;
  double t1578;
  double t1180;
  double t1208;
  double t1234;
  double t1482;
  double t1484;
  double t2258;
  double t2286;
  double t1488;
  double t2349;
  double t2354;
  double t1969;
  double t2009;
  double t2037;
  double t1783;
  double t1804;
  double t1907;
  double t2356;
  double t2377;
  double t2386;
  double t1351;
  double t1414;
  double t2416;
  double t2431;
  double t2432;
  double t1697;
  double t1699;
  double t2518;
  double t2523;
  double t2542;
  double t1621;
  double t1659;
  double t2104;
  double t2115;
  double t2491;
  double t2493;
  double t2503;
  double t2692;
  double t2693;
  double t2728;
  double t2043;
  double t2073;
  double t2078;
  t118 = Cos(var1[3]);
  t187 = Sin(var1[3]);
  t365 = Cos(var1[4]);
  t372 = Sin(var1[4]);
  t367 = -1.*var1[2]*t365*t187;
  t373 = -1.*var1[1]*t372;
  t728 = Cos(var1[5]);
  t755 = Sin(var1[5]);
  t394 = var1[2]*t118*t365;
  t480 = var1[0]*t372;
  t565 = -1.*var1[1]*t118*t365;
  t571 = var1[0]*t365*t187;
  t630 = t118*t365;
  t644 = t365*t187;
  t656 = -1.*t372;
  t732 = t118*t728*t372;
  t787 = t187*t755;
  t790 = t732 + t787;
  t831 = -1.*t728*t187;
  t839 = t118*t372*t755;
  t854 = t831 + t839;
  t1189 = Cos(var1[13]);
  t1165 = Sin(var1[13]);
  t883 = t728*t187*t372;
  t884 = -1.*t118*t755;
  t898 = t883 + t884;
  t1291 = -1.*t1189;
  t1297 = 1. + t1291;
  t988 = t118*t728;
  t1007 = t187*t372*t755;
  t1010 = t988 + t1007;
  t1313 = 0.07996*t1297;
  t1318 = 0.135*t1165;
  t1341 = 0. + t1313 + t1318;
  t1355 = -0.135*t1297;
  t1377 = 0.07996*t1165;
  t1413 = 0. + t1355 + t1377;
  t1254 = t1189*t365*t728;
  t1273 = -1.*t365*t1165*t755;
  t1288 = t1254 + t1273;
  t65 = -1.*var1[0];
  t1716 = t1189*t790;
  t1740 = -1.*t1165*t854;
  t1746 = t1716 + t1740;
  t1528 = t1189*t898;
  t1536 = -1.*t1165*t1010;
  t1578 = t1528 + t1536;
  t1180 = t1165*t790;
  t1208 = t1189*t854;
  t1234 = t1180 + t1208;
  t1482 = -1.*var1[2];
  t1484 = -1.*t365*t728*t1341;
  t2258 = Cos(var1[14]);
  t2286 = Sin(var1[14]);
  t1488 = -1.*t365*t1413*t755;
  t2349 = -1.*t2258;
  t2354 = 1. + t2349;
  t1969 = t365*t728*t1165;
  t2009 = t1189*t365*t755;
  t2037 = t1969 + t2009;
  t1783 = t1165*t898;
  t1804 = t1189*t1010;
  t1907 = t1783 + t1804;
  t2356 = -0.08055*t2354;
  t2377 = -0.135*t2286;
  t2386 = 0. + t2356 + t2377;
  t1351 = t1341*t898;
  t1414 = t1413*t1010;
  t2416 = -0.135*t2354;
  t2431 = 0.08055*t2286;
  t2432 = 0. + t2416 + t2431;
  t1697 = t365*t728*t1341;
  t1699 = t365*t1413*t755;
  t2518 = t2286*t372;
  t2523 = t2258*t2037;
  t2542 = t2518 + t2523;
  t1621 = -1.*t1341*t790;
  t1659 = -1.*t1413*t854;
  t2104 = t1341*t790;
  t2115 = t1413*t854;
  t2491 = -1.*t365*t2286*t187;
  t2493 = t2258*t1907;
  t2503 = t2491 + t2493;
  t2692 = -1.*t118*t365*t2286;
  t2693 = t2258*t1234;
  t2728 = t2692 + t2693;
  t2043 = -1.*var1[1];
  t2073 = -1.*t1341*t898;
  t2078 = -1.*t1413*t1010;
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
  p_output1[19]=t65;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t118*var1[2];
  p_output1[25]=-1.*t187*var1[2];
  p_output1[26]=t118*var1[0] + t187*var1[1];
  p_output1[27]=-1.*t187;
  p_output1[28]=t118;
  p_output1[29]=0;
  p_output1[30]=t367 + t373;
  p_output1[31]=t394 + t480;
  p_output1[32]=t565 + t571;
  p_output1[33]=t630;
  p_output1[34]=t644;
  p_output1[35]=t656;
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
  p_output1[78]=t367 + t373 + 0.135*t790 + 0.07996*t854;
  p_output1[79]=0.07996*t1010 + t394 + t480 + 0.135*t898;
  p_output1[80]=t565 + t571 + 0.135*t365*t728 + 0.07996*t365*t755;
  p_output1[81]=0. + t630;
  p_output1[82]=0. + t644;
  p_output1[83]=0. + t656;
  p_output1[84]=0.08055*t1234 + (0. + t1482 + t1484 + t1488)*t1578 - 0.135*t118*t365 + t1288*(0. + t1351 + t1414 + var1[1]);
  p_output1[85]=0.08055*t1907 - 0.135*t187*t365 + t1288*(0. + t1621 + t1659 + t65) + t1746*(0. + t1697 + t1699 + var1[2]);
  p_output1[86]=0.08055*t2037 + t1746*(0. + t2043 + t2073 + t2078) + 0.135*t372 + t1578*(0. + t2104 + t2115 + var1[0]);
  p_output1[87]=0. + t1716 + t1740;
  p_output1[88]=0. + t1528 + t1536;
  p_output1[89]=0. + t1254 + t1273;
  p_output1[90]=0.08055*t1746 - 0.01004*(t1234*t2286 + t118*t2258*t365) - 1.*t2503*(0. + t1482 + t1484 + t1488 - 1.*t2037*t2432 + t2386*t372) - 1.*t2542*(0. + t1351 + t1414 + t1907*t2432 + t187*t2386*t365 + var1[1]);
  p_output1[91]=0.08055*t1578 - 0.01004*(t1907*t2286 + t187*t2258*t365) - 1.*t2542*(0. + t1621 + t1659 - 1.*t1234*t2432 - 1.*t118*t2386*t365 + t65) - 1.*t2728*(0. + t1697 + t1699 + t2037*t2432 - 1.*t2386*t372 + var1[2]);
  p_output1[92]=0.08055*t1288 - 1.*t2728*(0. + t2043 + t2073 + t2078 - 1.*t1907*t2432 - 1.*t187*t2386*t365) - 0.01004*(t2037*t2286 - 1.*t2258*t372) - 1.*t2503*(0. + t2104 + t2115 + t1234*t2432 + t118*t2386*t365 + var1[0]);
  p_output1[93]=0. - 1.*t1234*t2258 + t118*t2286*t365;
  p_output1[94]=0. - 1.*t1907*t2258 + t187*t2286*t365;
  p_output1[95]=0. - 1.*t2037*t2258 - 1.*t2286*t372;
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



void Js_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
