/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftThigh_src.h"

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
  double t276;
  double t375;
  double t257;
  double t293;
  double t423;
  double t154;
  double t583;
  double t586;
  double t626;
  double t306;
  double t424;
  double t442;
  double t673;
  double t32;
  double t774;
  double t818;
  double t1154;
  double t1155;
  double t1160;
  double t1101;
  double t1102;
  double t1109;
  double t880;
  double t977;
  double t825;
  double t830;
  double t844;
  double t873;
  double t882;
  double t969;
  double t545;
  double t685;
  double t690;
  double t1287;
  double t1289;
  double t1291;
  double t1292;
  double t1293;
  double t1317;
  double t1150;
  double t1195;
  double t1232;
  double t1391;
  double t1394;
  double t1395;
  double t1407;
  double t1409;
  double t1421;
  double t1335;
  double t1338;
  double t1369;
  double t1801;
  double t1809;
  double t1898;
  double t1899;
  double t2085;
  double t2128;
  double t1471;
  double t1480;
  double t1507;
  double t1819;
  double t1836;
  double t1862;
  double t1871;
  double t1884;
  double t1888;
  double t1931;
  double t1951;
  double t1952;
  double t1976;
  double t2008;
  double t2015;
  double t2135;
  double t2140;
  double t2148;
  double t2168;
  double t2171;
  double t2182;
  double t1513;
  double t1532;
  double t1537;
  double t1540;
  double t1556;
  double t1589;
  t276 = Cos(var1[5]);
  t375 = Sin(var1[3]);
  t257 = Cos(var1[3]);
  t293 = Sin(var1[4]);
  t423 = Sin(var1[5]);
  t154 = Cos(var1[6]);
  t583 = -1.*t276*t375;
  t586 = t257*t293*t423;
  t626 = t583 + t586;
  t306 = t257*t276*t293;
  t424 = t375*t423;
  t442 = t306 + t424;
  t673 = Sin(var1[6]);
  t32 = Cos(var1[8]);
  t774 = Cos(var1[4]);
  t818 = Cos(var1[7]);
  t1154 = t257*t276;
  t1155 = t375*t293*t423;
  t1160 = t1154 + t1155;
  t1101 = t276*t375*t293;
  t1102 = -1.*t257*t423;
  t1109 = t1101 + t1102;
  t880 = Sin(var1[7]);
  t977 = Sin(var1[8]);
  t825 = t257*t774*t818;
  t830 = t154*t626;
  t844 = t442*t673;
  t873 = t830 + t844;
  t882 = t873*t880;
  t969 = t825 + t882;
  t545 = t154*t442;
  t685 = -1.*t626*t673;
  t690 = t545 + t685;
  t1287 = t774*t818*t375;
  t1289 = t154*t1160;
  t1291 = t1109*t673;
  t1292 = t1289 + t1291;
  t1293 = t1292*t880;
  t1317 = t1287 + t1293;
  t1150 = t154*t1109;
  t1195 = -1.*t1160*t673;
  t1232 = t1150 + t1195;
  t1391 = -1.*t818*t293;
  t1394 = t774*t154*t423;
  t1395 = t774*t276*t673;
  t1407 = t1394 + t1395;
  t1409 = t1407*t880;
  t1421 = t1391 + t1409;
  t1335 = t774*t276*t154;
  t1338 = -1.*t774*t423*t673;
  t1369 = t1335 + t1338;
  t1801 = -1.*t154;
  t1809 = 1. + t1801;
  t1898 = -1.*t818;
  t1899 = 1. + t1898;
  t2085 = -1.*t32;
  t2128 = 1. + t2085;
  t1471 = t32*t969;
  t1480 = t690*t977;
  t1507 = t1471 + t1480;
  t1819 = 0.07996*t1809;
  t1836 = -0.135*t673;
  t1862 = 0. + t1819 + t1836;
  t1871 = 0.135*t1809;
  t1884 = 0.07996*t673;
  t1888 = 0. + t1871 + t1884;
  t1931 = 0.135*t1899;
  t1951 = 0.08055*t880;
  t1952 = 0. + t1931 + t1951;
  t1976 = -0.08055*t1899;
  t2008 = 0.135*t880;
  t2015 = 0. + t1976 + t2008;
  t2135 = -0.08055*t2128;
  t2140 = -0.01004*t977;
  t2148 = 0. + t2135 + t2140;
  t2168 = -0.01004*t2128;
  t2171 = 0.08055*t977;
  t2182 = 0. + t2168 + t2171;
  t1513 = t32*t1317;
  t1532 = t1232*t977;
  t1537 = t1513 + t1532;
  t1540 = t32*t1421;
  t1556 = t1369*t977;
  t1589 = t1540 + t1556;
  p_output1[0]=-1.*t32*t690 + t969*t977;
  p_output1[1]=-1.*t1232*t32 + t1317*t977;
  p_output1[2]=-1.*t1369*t32 + t1421*t977;
  p_output1[3]=0.;
  p_output1[4]=t1507;
  p_output1[5]=t1537;
  p_output1[6]=t1589;
  p_output1[7]=0.;
  p_output1[8]=-1.*t818*t873 + t257*t774*t880;
  p_output1[9]=-1.*t1292*t818 + t375*t774*t880;
  p_output1[10]=-1.*t1407*t818 - 1.*t293*t880;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08045*t1507 + t1862*t442 + t1888*t626 + t2182*t690 + t2015*t257*t774 + t1952*t873 + 0.1708*(t818*t873 - 1.*t257*t774*t880) + t2148*t969 - 0.06984*(t32*t690 - 1.*t969*t977) + var1[0];
  p_output1[13]=0. - 0.08045*t1537 + t1109*t1862 + t1160*t1888 + t1292*t1952 + t1317*t2148 + t1232*t2182 + t2015*t375*t774 + 0.1708*(t1292*t818 - 1.*t375*t774*t880) - 0.06984*(t1232*t32 - 1.*t1317*t977) + var1[1];
  p_output1[14]=0. - 0.08045*t1589 + t1407*t1952 + t1421*t2148 + t1369*t2182 - 1.*t2015*t293 + t1862*t276*t774 + t1888*t423*t774 + 0.1708*(t1407*t818 + t293*t880) - 0.06984*(t1369*t32 - 1.*t1421*t977) + var1[2];
  p_output1[15]=1.;
}



void T_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
