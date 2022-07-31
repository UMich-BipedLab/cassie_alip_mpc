/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_RightThigh_src.h"

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
  double t905;
  double t692;
  double t864;
  double t869;
  double t946;
  double t1591;
  double t608;
  double t1167;
  double t1704;
  double t1718;
  double t1752;
  double t1857;
  double t1358;
  double t2247;
  double t2263;
  double t2364;
  double t2370;
  double t3070;
  double t3194;
  double t635;
  double t855;
  double t1050;
  double t1147;
  double t1155;
  double t1211;
  double t1280;
  double t1375;
  double t1395;
  double t1406;
  double t1508;
  double t1610;
  double t1623;
  double t1639;
  double t1749;
  double t1860;
  double t1952;
  double t1970;
  double t1999;
  double t2023;
  double t2026;
  double t2052;
  double t2069;
  double t2113;
  double t2151;
  double t2214;
  double t2228;
  double t2243;
  double t2288;
  double t2393;
  double t2441;
  double t2511;
  double t2570;
  double t2619;
  double t2685;
  double t2710;
  double t2722;
  double t2755;
  double t2847;
  double t3173;
  double t3210;
  double t3218;
  double t3253;
  double t3271;
  double t3326;
  double t3225;
  double t3365;
  double t3382;
  double t3604;
  double t3745;
  double t3756;
  double t3861;
  double t3922;
  double t3954;
  double t1561;
  double t2176;
  double t2881;
  double t3031;
  double t3450;
  double t3496;
  double t3516;
  double t3523;
  double t4652;
  double t4653;
  double t4691;
  double t4830;
  double t4835;
  double t4915;
  double t4776;
  double t4931;
  double t4948;
  double t4348;
  double t4423;
  double t4530;
  double t4556;
  double t5172;
  double t5239;
  double t5338;
  double t5372;
  double t5491;
  double t5564;
  double t6201;
  double t6206;
  double t6209;
  double t5975;
  double t6004;
  double t6122;
  double t6145;
  double t6214;
  double t6237;
  double t3077;
  double t3408;
  double t3432;
  double t6611;
  double t6644;
  double t6649;
  double t6814;
  double t6852;
  double t6921;
  double t7038;
  double t7048;
  double t7082;
  double t3779;
  double t3979;
  double t4281;
  double t4568;
  double t4580;
  double t4594;
  double t6705;
  double t6976;
  double t7142;
  double t7146;
  double t4638;
  double t4991;
  double t5117;
  double t7165;
  double t7182;
  double t7195;
  double t7201;
  double t5358;
  double t5573;
  double t5574;
  double t7234;
  double t7285;
  double t7304;
  double t7326;
  double t5706;
  double t5723;
  double t5824;
  double t6360;
  double t6394;
  double t6432;
  double t6141;
  double t6248;
  double t6284;
  double t6471;
  double t6497;
  double t6509;
  double t7666;
  double t7689;
  double t7691;
  double t7755;
  double t7767;
  double t7846;
  double t7883;
  double t7885;
  double t7903;
  double t7907;
  double t7914;
  double t7917;
  double t7762;
  double t7895;
  double t7931;
  double t7936;
  double t7946;
  double t7960;
  double t7961;
  double t7964;
  double t7969;
  double t7971;
  double t7974;
  double t7984;
  double t7989;
  double t8000;
  double t8013;
  double t8025;
  double t8030;
  double t8034;
  double t8051;
  double t8054;
  double t8058;
  t905 = Cos(var1[14]);
  t692 = Sin(var1[4]);
  t864 = Cos(var1[4]);
  t869 = Cos(var1[5]);
  t946 = Sin(var1[13]);
  t1591 = Cos(var1[15]);
  t608 = Sin(var1[14]);
  t1167 = Cos(var1[13]);
  t1704 = t1591*t608;
  t1718 = 0. + t1704;
  t1752 = Sin(var1[15]);
  t1857 = 0. + t1752;
  t1358 = Sin(var1[5]);
  t2247 = -1.*t1591;
  t2263 = 0. + t2247;
  t2364 = t608*t1752;
  t2370 = 0. + t2364;
  t3070 = Cos(var1[3]);
  t3194 = Sin(var1[3]);
  t635 = 0. + t608;
  t855 = -1.*t635*t692;
  t1050 = -1.*t905*t946;
  t1147 = 0. + t1050;
  t1155 = t869*t1147;
  t1211 = -1.*t1167*t905;
  t1280 = 0. + t1211;
  t1375 = t1280*t1358;
  t1395 = 0. + t1155 + t1375;
  t1406 = t864*t1395;
  t1508 = 0. + t855 + t1406;
  t1610 = t905*t1591;
  t1623 = 0. + t1610;
  t1639 = -1.*t1623*t692;
  t1749 = t946*t1718;
  t1860 = t1167*t1857;
  t1952 = 0. + t1749 + t1860;
  t1970 = t869*t1952;
  t1999 = t1167*t1718;
  t2023 = -1.*t946*t1857;
  t2026 = 0. + t1999 + t2023;
  t2052 = t2026*t1358;
  t2069 = 0. + t1970 + t2052;
  t2113 = t864*t2069;
  t2151 = 0. + t1639 + t2113;
  t2214 = t905*t1752;
  t2228 = 0. + t2214;
  t2243 = -1.*t2228*t692;
  t2288 = t1167*t2263;
  t2393 = t946*t2370;
  t2441 = 0. + t2288 + t2393;
  t2511 = t869*t2441;
  t2570 = -1.*t2263*t946;
  t2619 = t1167*t2370;
  t2685 = 0. + t2570 + t2619;
  t2710 = t2685*t1358;
  t2722 = 0. + t2511 + t2710;
  t2755 = t864*t2722;
  t2847 = 0. + t2243 + t2755;
  t3173 = t3070*t869*t692;
  t3210 = t3194*t1358;
  t3218 = t3173 + t3210;
  t3253 = -1.*t869*t3194;
  t3271 = t3070*t692*t1358;
  t3326 = t3253 + t3271;
  t3225 = t946*t3218;
  t3365 = t1167*t3326;
  t3382 = t3225 + t3365;
  t3604 = t1167*t3218;
  t3745 = -1.*t946*t3326;
  t3756 = t3604 + t3745;
  t3861 = t905*t3070*t864;
  t3922 = t608*t3382;
  t3954 = t3861 + t3922;
  t1561 = 0.0498*t1508;
  t2176 = 0.000019*t2151;
  t2881 = 0.0117*t2847;
  t3031 = t1561 + t2176 + t2881;
  t3450 = 0.000019*t1508;
  t3496 = 0.0563*t2151;
  t3516 = 0.000284*t2847;
  t3523 = t3450 + t3496 + t3516;
  t4652 = t869*t3194*t692;
  t4653 = -1.*t3070*t1358;
  t4691 = t4652 + t4653;
  t4830 = t3070*t869;
  t4835 = t3194*t692*t1358;
  t4915 = t4830 + t4835;
  t4776 = t946*t4691;
  t4931 = t1167*t4915;
  t4948 = t4776 + t4931;
  t4348 = 0.0117*t1508;
  t4423 = 0.000284*t2151;
  t4530 = 0.018*t2847;
  t4556 = t4348 + t4423 + t4530;
  t5172 = t1167*t4691;
  t5239 = -1.*t946*t4915;
  t5338 = t5172 + t5239;
  t5372 = t905*t864*t3194;
  t5491 = t608*t4948;
  t5564 = t5372 + t5491;
  t6201 = t864*t869*t946;
  t6206 = t1167*t864*t1358;
  t6209 = t6201 + t6206;
  t5975 = t1167*t864*t869;
  t6004 = -1.*t864*t946*t1358;
  t6122 = t5975 + t6004;
  t6145 = -1.*t905*t692;
  t6214 = t608*t6209;
  t6237 = t6145 + t6214;
  t3077 = t3070*t864*t608;
  t3408 = -1.*t905*t3382;
  t3432 = t3077 + t3408;
  t6611 = t1280*t869;
  t6644 = -1.*t1147*t1358;
  t6649 = 0. + t6611 + t6644;
  t6814 = t869*t2026;
  t6852 = -1.*t1952*t1358;
  t6921 = 0. + t6814 + t6852;
  t7038 = t869*t2685;
  t7048 = -1.*t2441*t1358;
  t7082 = 0. + t7038 + t7048;
  t3779 = t1752*t3756;
  t3979 = t1591*t3954;
  t4281 = t3779 + t3979;
  t4568 = -1.*t1591*t3756;
  t4580 = t1752*t3954;
  t4594 = t4568 + t4580;
  t6705 = 0.0498*t6649;
  t6976 = 0.000019*t6921;
  t7142 = 0.0117*t7082;
  t7146 = t6705 + t6976 + t7142;
  t4638 = t864*t608*t3194;
  t4991 = -1.*t905*t4948;
  t5117 = t4638 + t4991;
  t7165 = 0.000019*t6649;
  t7182 = 0.0563*t6921;
  t7195 = 0.000284*t7082;
  t7201 = t7165 + t7182 + t7195;
  t5358 = t1752*t5338;
  t5573 = t1591*t5564;
  t5574 = t5358 + t5573;
  t7234 = 0.0117*t6649;
  t7285 = 0.000284*t6921;
  t7304 = 0.018*t7082;
  t7326 = t7234 + t7285 + t7304;
  t5706 = -1.*t1591*t5338;
  t5723 = t1752*t5564;
  t5824 = t5706 + t5723;
  t6360 = -1.*t608*t692;
  t6394 = -1.*t905*t6209;
  t6432 = t6360 + t6394;
  t6141 = t1752*t6122;
  t6248 = t1591*t6237;
  t6284 = t6141 + t6248;
  t6471 = -1.*t1591*t6122;
  t6497 = t1752*t6237;
  t6509 = t6471 + t6497;
  t7666 = 0.000019*t1623;
  t7689 = 0.0498*t635;
  t7691 = 0.0117*t2228;
  t7755 = t7666 + t7689 + t7691;
  t7767 = 0.0563*t1623;
  t7846 = 0.000019*t635;
  t7883 = 0.000284*t2228;
  t7885 = t7767 + t7846 + t7883;
  t7903 = 0.000284*t1623;
  t7907 = 0.0117*t635;
  t7914 = 0.018*t2228;
  t7917 = t7903 + t7907 + t7914;
  t7762 = t7755*t3432;
  t7895 = t7885*t4281;
  t7931 = t7917*t4594;
  t7936 = t7762 + t7895 + t7931;
  t7946 = t7755*t5117;
  t7960 = t7885*t5574;
  t7961 = t7917*t5824;
  t7964 = t7946 + t7960 + t7961;
  t7969 = t7755*t6432;
  t7971 = t7885*t6284;
  t7974 = t7917*t6509;
  t7984 = t7969 + t7971 + t7974;
  t7989 = 0.0117*t2263;
  t8000 = 0.000019*t1857;
  t8013 = t7989 + t8000;
  t8025 = 0.000284*t2263;
  t8030 = 0.0563*t1857;
  t8034 = t8025 + t8030;
  t8051 = 0.018*t2263;
  t8054 = 0.000284*t1857;
  t8058 = t8051 + t8054;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3031*t3432 + t3523*t4281 + t4556*t4594;
  p_output1[10]=t3031*t5117 + t3523*t5574 + t4556*t5824;
  p_output1[11]=t3523*t6284 + t3031*t6432 + t4556*t6509;
  p_output1[12]=t3432*t7146 + t4281*t7201 + t4594*t7326;
  p_output1[13]=t5117*t7146 + t5574*t7201 + t5824*t7326;
  p_output1[14]=t6432*t7146 + t6284*t7201 + t6509*t7326;
  p_output1[15]=t7936;
  p_output1[16]=t7964;
  p_output1[17]=t7984;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t7936;
  p_output1[40]=t7964;
  p_output1[41]=t7984;
  p_output1[42]=t3432*t8013 + t4281*t8034 + t4594*t8058;
  p_output1[43]=t5117*t8013 + t5574*t8034 + t5824*t8058;
  p_output1[44]=t6432*t8013 + t6284*t8034 + t6509*t8058;
  p_output1[45]=0.0498*t3432 + 0.000019*t4281 + 0.0117*t4594;
  p_output1[46]=0.0498*t5117 + 0.000019*t5574 + 0.0117*t5824;
  p_output1[47]=0.000019*t6284 + 0.0498*t6432 + 0.0117*t6509;
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



void Jdq_AMWorld_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
