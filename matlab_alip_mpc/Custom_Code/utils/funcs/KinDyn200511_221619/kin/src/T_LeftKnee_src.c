/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftKnee_src.h"

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
  double t131;
  double t203;
  double t341;
  double t272;
  double t374;
  double t174;
  double t521;
  double t540;
  double t559;
  double t340;
  double t414;
  double t424;
  double t567;
  double t52;
  double t787;
  double t801;
  double t806;
  double t138;
  double t152;
  double t172;
  double t462;
  double t613;
  double t650;
  double t659;
  double t713;
  double t728;
  double t810;
  double t48;
  double t1096;
  double t1097;
  double t1140;
  double t1044;
  double t1051;
  double t1068;
  double t889;
  double t1256;
  double t1262;
  double t1278;
  double t992;
  double t1077;
  double t1141;
  double t1144;
  double t1149;
  double t1178;
  double t1478;
  double t1484;
  double t1502;
  double t1409;
  double t1427;
  double t1445;
  double t1449;
  double t1465;
  double t1466;
  double t736;
  double t816;
  double t817;
  double t909;
  double t931;
  double t942;
  double t1245;
  double t1298;
  double t1316;
  double t1338;
  double t1349;
  double t1362;
  double t1467;
  double t1504;
  double t1521;
  double t1548;
  double t1552;
  double t1553;
  double t1935;
  double t1960;
  double t2102;
  double t2109;
  double t2282;
  double t2289;
  double t2357;
  double t2360;
  double t1618;
  double t1637;
  double t1715;
  double t1961;
  double t1964;
  double t1973;
  double t2006;
  double t2018;
  double t2041;
  double t2117;
  double t2132;
  double t2140;
  double t2159;
  double t2181;
  double t2183;
  double t2293;
  double t2295;
  double t2301;
  double t2313;
  double t2326;
  double t2330;
  double t2365;
  double t2382;
  double t2410;
  double t2439;
  double t2444;
  double t2451;
  double t1721;
  double t1727;
  double t1755;
  double t1762;
  double t1765;
  double t1784;
  t131 = Cos(var1[3]);
  t203 = Cos(var1[5]);
  t341 = Sin(var1[4]);
  t272 = Sin(var1[3]);
  t374 = Sin(var1[5]);
  t174 = Cos(var1[6]);
  t521 = t131*t203*t341;
  t540 = t272*t374;
  t559 = t521 + t540;
  t340 = -1.*t203*t272;
  t414 = t131*t341*t374;
  t424 = t340 + t414;
  t567 = Sin(var1[6]);
  t52 = Cos(var1[8]);
  t787 = t174*t559;
  t801 = -1.*t424*t567;
  t806 = t787 + t801;
  t138 = Cos(var1[4]);
  t152 = Cos(var1[7]);
  t172 = t131*t138*t152;
  t462 = t174*t424;
  t613 = t559*t567;
  t650 = t462 + t613;
  t659 = Sin(var1[7]);
  t713 = t650*t659;
  t728 = t172 + t713;
  t810 = Sin(var1[8]);
  t48 = Sin(var1[9]);
  t1096 = t203*t272*t341;
  t1097 = -1.*t131*t374;
  t1140 = t1096 + t1097;
  t1044 = t131*t203;
  t1051 = t272*t341*t374;
  t1068 = t1044 + t1051;
  t889 = Cos(var1[9]);
  t1256 = t174*t1140;
  t1262 = -1.*t1068*t567;
  t1278 = t1256 + t1262;
  t992 = t138*t152*t272;
  t1077 = t174*t1068;
  t1141 = t1140*t567;
  t1144 = t1077 + t1141;
  t1149 = t1144*t659;
  t1178 = t992 + t1149;
  t1478 = t138*t203*t174;
  t1484 = -1.*t138*t374*t567;
  t1502 = t1478 + t1484;
  t1409 = -1.*t152*t341;
  t1427 = t138*t174*t374;
  t1445 = t138*t203*t567;
  t1449 = t1427 + t1445;
  t1465 = t1449*t659;
  t1466 = t1409 + t1465;
  t736 = t52*t728;
  t816 = t806*t810;
  t817 = t736 + t816;
  t909 = t52*t806;
  t931 = -1.*t728*t810;
  t942 = t909 + t931;
  t1245 = t52*t1178;
  t1298 = t1278*t810;
  t1316 = t1245 + t1298;
  t1338 = t52*t1278;
  t1349 = -1.*t1178*t810;
  t1362 = t1338 + t1349;
  t1467 = t52*t1466;
  t1504 = t1502*t810;
  t1521 = t1467 + t1504;
  t1548 = t52*t1502;
  t1552 = -1.*t1466*t810;
  t1553 = t1548 + t1552;
  t1935 = -1.*t174;
  t1960 = 1. + t1935;
  t2102 = -1.*t152;
  t2109 = 1. + t2102;
  t2282 = -1.*t52;
  t2289 = 1. + t2282;
  t2357 = -1.*t889;
  t2360 = 1. + t2357;
  t1618 = t889*t817;
  t1637 = t48*t942;
  t1715 = t1618 + t1637;
  t1961 = 0.07996*t1960;
  t1964 = -0.135*t567;
  t1973 = 0. + t1961 + t1964;
  t2006 = 0.135*t1960;
  t2018 = 0.07996*t567;
  t2041 = 0. + t2006 + t2018;
  t2117 = 0.135*t2109;
  t2132 = 0.08055*t659;
  t2140 = 0. + t2117 + t2132;
  t2159 = -0.08055*t2109;
  t2181 = 0.135*t659;
  t2183 = 0. + t2159 + t2181;
  t2293 = -0.08055*t2289;
  t2295 = -0.01004*t810;
  t2301 = 0. + t2293 + t2295;
  t2313 = -0.01004*t2289;
  t2326 = 0.08055*t810;
  t2330 = 0. + t2313 + t2326;
  t2365 = -0.08055*t2360;
  t2382 = -0.13004*t48;
  t2410 = 0. + t2365 + t2382;
  t2439 = -0.13004*t2360;
  t2444 = 0.08055*t48;
  t2451 = 0. + t2439 + t2444;
  t1721 = t889*t1316;
  t1727 = t48*t1362;
  t1755 = t1721 + t1727;
  t1762 = t889*t1521;
  t1765 = t48*t1553;
  t1784 = t1762 + t1765;
  p_output1[0]=t48*t817 - 1.*t889*t942;
  p_output1[1]=t1316*t48 - 1.*t1362*t889;
  p_output1[2]=t1521*t48 - 1.*t1553*t889;
  p_output1[3]=0.;
  p_output1[4]=t1715;
  p_output1[5]=t1755;
  p_output1[6]=t1784;
  p_output1[7]=0.;
  p_output1[8]=-1.*t152*t650 + t131*t138*t659;
  p_output1[9]=-1.*t1144*t152 + t138*t272*t659;
  p_output1[10]=-1.*t1449*t152 - 1.*t341*t659;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04845*t1715 + t131*t138*t2183 + t2041*t424 + t1973*t559 + t2140*t650 + 0.1327*(t152*t650 - 1.*t131*t138*t659) + t2301*t728 + t2330*t806 + t2410*t817 + t2451*t942 - 0.15304*(-1.*t48*t817 + t889*t942) + var1[0];
  p_output1[13]=0. - 0.04845*t1755 + t1140*t1973 + t1068*t2041 + t1144*t2140 + t1178*t2301 + t1278*t2330 + t1316*t2410 + t1362*t2451 + t138*t2183*t272 + 0.1327*(t1144*t152 - 1.*t138*t272*t659) - 0.15304*(-1.*t1316*t48 + t1362*t889) + var1[1];
  p_output1[14]=0. - 0.04845*t1784 + t138*t1973*t203 + t1449*t2140 + t1466*t2301 + t1502*t2330 + t1521*t2410 + t1553*t2451 - 1.*t2183*t341 + t138*t2041*t374 + 0.1327*(t1449*t152 + t341*t659) - 0.15304*(-1.*t1521*t48 + t1553*t889) + var1[2];
  p_output1[15]=1.;
}



void T_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
