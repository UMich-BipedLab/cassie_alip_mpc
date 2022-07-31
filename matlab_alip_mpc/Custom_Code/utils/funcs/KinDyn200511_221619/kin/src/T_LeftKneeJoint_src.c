/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftKneeJoint_src.h"

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
  double t256;
  double t321;
  double t350;
  double t340;
  double t407;
  double t315;
  double t457;
  double t468;
  double t470;
  double t346;
  double t421;
  double t431;
  double t475;
  double t236;
  double t545;
  double t553;
  double t570;
  double t289;
  double t306;
  double t307;
  double t434;
  double t483;
  double t489;
  double t495;
  double t511;
  double t535;
  double t583;
  double t83;
  double t800;
  double t810;
  double t818;
  double t739;
  double t771;
  double t776;
  double t626;
  double t941;
  double t958;
  double t964;
  double t678;
  double t799;
  double t896;
  double t919;
  double t928;
  double t929;
  double t1156;
  double t1162;
  double t1208;
  double t1049;
  double t1054;
  double t1057;
  double t1061;
  double t1100;
  double t1112;
  double t537;
  double t591;
  double t606;
  double t639;
  double t657;
  double t661;
  double t938;
  double t969;
  double t983;
  double t1006;
  double t1018;
  double t1022;
  double t1151;
  double t1211;
  double t1232;
  double t1262;
  double t1291;
  double t1296;
  double t1569;
  double t1575;
  double t1630;
  double t1642;
  double t1755;
  double t1771;
  double t1912;
  double t1918;
  double t1310;
  double t1321;
  double t1353;
  double t1591;
  double t1601;
  double t1606;
  double t1610;
  double t1612;
  double t1615;
  double t1652;
  double t1654;
  double t1657;
  double t1662;
  double t1690;
  double t1701;
  double t1783;
  double t1784;
  double t1838;
  double t1876;
  double t1877;
  double t1884;
  double t1919;
  double t1925;
  double t1940;
  double t1989;
  double t2031;
  double t2045;
  double t1371;
  double t1378;
  double t1399;
  double t1408;
  double t1422;
  double t1435;
  t256 = Cos(var1[3]);
  t321 = Cos(var1[5]);
  t350 = Sin(var1[4]);
  t340 = Sin(var1[3]);
  t407 = Sin(var1[5]);
  t315 = Cos(var1[6]);
  t457 = t256*t321*t350;
  t468 = t340*t407;
  t470 = t457 + t468;
  t346 = -1.*t321*t340;
  t421 = t256*t350*t407;
  t431 = t346 + t421;
  t475 = Sin(var1[6]);
  t236 = Cos(var1[8]);
  t545 = t315*t470;
  t553 = -1.*t431*t475;
  t570 = t545 + t553;
  t289 = Cos(var1[4]);
  t306 = Cos(var1[7]);
  t307 = t256*t289*t306;
  t434 = t315*t431;
  t483 = t470*t475;
  t489 = t434 + t483;
  t495 = Sin(var1[7]);
  t511 = t489*t495;
  t535 = t307 + t511;
  t583 = Sin(var1[8]);
  t83 = Sin(var1[9]);
  t800 = t321*t340*t350;
  t810 = -1.*t256*t407;
  t818 = t800 + t810;
  t739 = t256*t321;
  t771 = t340*t350*t407;
  t776 = t739 + t771;
  t626 = Cos(var1[9]);
  t941 = t315*t818;
  t958 = -1.*t776*t475;
  t964 = t941 + t958;
  t678 = t289*t306*t340;
  t799 = t315*t776;
  t896 = t818*t475;
  t919 = t799 + t896;
  t928 = t919*t495;
  t929 = t678 + t928;
  t1156 = t289*t321*t315;
  t1162 = -1.*t289*t407*t475;
  t1208 = t1156 + t1162;
  t1049 = -1.*t306*t350;
  t1054 = t289*t315*t407;
  t1057 = t289*t321*t475;
  t1061 = t1054 + t1057;
  t1100 = t1061*t495;
  t1112 = t1049 + t1100;
  t537 = t236*t535;
  t591 = t570*t583;
  t606 = t537 + t591;
  t639 = t236*t570;
  t657 = -1.*t535*t583;
  t661 = t639 + t657;
  t938 = t236*t929;
  t969 = t964*t583;
  t983 = t938 + t969;
  t1006 = t236*t964;
  t1018 = -1.*t929*t583;
  t1022 = t1006 + t1018;
  t1151 = t236*t1112;
  t1211 = t1208*t583;
  t1232 = t1151 + t1211;
  t1262 = t236*t1208;
  t1291 = -1.*t1112*t583;
  t1296 = t1262 + t1291;
  t1569 = -1.*t315;
  t1575 = 1. + t1569;
  t1630 = -1.*t306;
  t1642 = 1. + t1630;
  t1755 = -1.*t236;
  t1771 = 1. + t1755;
  t1912 = -1.*t626;
  t1918 = 1. + t1912;
  t1310 = t626*t606;
  t1321 = t83*t661;
  t1353 = t1310 + t1321;
  t1591 = 0.07996*t1575;
  t1601 = -0.135*t475;
  t1606 = 0. + t1591 + t1601;
  t1610 = 0.135*t1575;
  t1612 = 0.07996*t475;
  t1615 = 0. + t1610 + t1612;
  t1652 = 0.135*t1642;
  t1654 = 0.08055*t495;
  t1657 = 0. + t1652 + t1654;
  t1662 = -0.08055*t1642;
  t1690 = 0.135*t495;
  t1701 = 0. + t1662 + t1690;
  t1783 = -0.08055*t1771;
  t1784 = -0.01004*t583;
  t1838 = 0. + t1783 + t1784;
  t1876 = -0.01004*t1771;
  t1877 = 0.08055*t583;
  t1884 = 0. + t1876 + t1877;
  t1919 = -0.08055*t1918;
  t1925 = -0.13004*t83;
  t1940 = 0. + t1919 + t1925;
  t1989 = -0.13004*t1918;
  t2031 = 0.08055*t83;
  t2045 = 0. + t1989 + t2031;
  t1371 = t626*t983;
  t1378 = t83*t1022;
  t1399 = t1371 + t1378;
  t1408 = t626*t1232;
  t1422 = t83*t1296;
  t1435 = t1408 + t1422;
  p_output1[0]=-1.*t626*t661 + t606*t83;
  p_output1[1]=-1.*t1022*t626 + t83*t983;
  p_output1[2]=-1.*t1296*t626 + t1232*t83;
  p_output1[3]=0.;
  p_output1[4]=t1353;
  p_output1[5]=t1399;
  p_output1[6]=t1435;
  p_output1[7]=0.;
  p_output1[8]=-1.*t306*t489 + t256*t289*t495;
  p_output1[9]=t289*t340*t495 - 1.*t306*t919;
  p_output1[10]=-1.*t1061*t306 - 1.*t350*t495;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1353 + t1701*t256*t289 + t1615*t431 + t1606*t470 + t1657*t489 + 0.1305*(t306*t489 - 1.*t256*t289*t495) + t1838*t535 + t1884*t570 + t1940*t606 + t2045*t661 - 0.13004*(t626*t661 - 1.*t606*t83) + var1[0];
  p_output1[13]=0. - 0.08055*t1399 + t1022*t2045 + t1701*t289*t340 + t1615*t776 + t1606*t818 + t1657*t919 + 0.1305*(-1.*t289*t340*t495 + t306*t919) + t1838*t929 + t1884*t964 + t1940*t983 - 0.13004*(t1022*t626 - 1.*t83*t983) + var1[1];
  p_output1[14]=0. - 0.08055*t1435 + t1061*t1657 + t1112*t1838 + t1208*t1884 + t1232*t1940 + t1296*t2045 + t1606*t289*t321 - 1.*t1701*t350 + t1615*t289*t407 + 0.1305*(t1061*t306 + t350*t495) - 0.13004*(t1296*t626 - 1.*t1232*t83) + var1[2];
  p_output1[15]=1.;
}



void T_LeftKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
