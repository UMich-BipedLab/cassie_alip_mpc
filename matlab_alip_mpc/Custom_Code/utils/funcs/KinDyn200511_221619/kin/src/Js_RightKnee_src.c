/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightKnee_src.h"

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
  double t175;
  double t230;
  double t388;
  double t422;
  double t417;
  double t435;
  double t693;
  double t746;
  double t544;
  double t573;
  double t626;
  double t639;
  double t650;
  double t670;
  double t675;
  double t732;
  double t750;
  double t759;
  double t782;
  double t790;
  double t793;
  double t1087;
  double t1044;
  double t812;
  double t831;
  double t857;
  double t1153;
  double t1156;
  double t935;
  double t940;
  double t950;
  double t1169;
  double t1175;
  double t1176;
  double t1185;
  double t1208;
  double t1264;
  double t1116;
  double t1131;
  double t1151;
  double t161;
  double t1518;
  double t1525;
  double t1529;
  double t1329;
  double t1336;
  double t1354;
  double t1061;
  double t1090;
  double t1093;
  double t1297;
  double t1303;
  double t1827;
  double t1865;
  double t1314;
  double t1941;
  double t1953;
  double t1599;
  double t1641;
  double t1654;
  double t1553;
  double t1567;
  double t1572;
  double t1964;
  double t1987;
  double t1995;
  double t1182;
  double t1276;
  double t2038;
  double t2046;
  double t2054;
  double t1467;
  double t1490;
  double t2131;
  double t2132;
  double t2147;
  double t1409;
  double t1427;
  double t1745;
  double t1759;
  double t2096;
  double t2099;
  double t2100;
  double t2241;
  double t2244;
  double t2277;
  double t1664;
  double t1691;
  double t1719;
  double t2013;
  double t2064;
  double t2660;
  double t2669;
  double t2671;
  double t2673;
  double t2428;
  double t2430;
  double t2435;
  double t1856;
  double t1879;
  double t1892;
  double t2154;
  double t2155;
  double t2672;
  double t2677;
  double t2679;
  double t2697;
  double t2701;
  double t2702;
  double t2353;
  double t2360;
  double t2361;
  double t2209;
  double t2230;
  double t2307;
  double t2337;
  double t2448;
  double t2449;
  double t2517;
  double t2536;
  double t2601;
  double t2602;
  double t2606;
  double t2610;
  double t2620;
  double t2621;
  double t2628;
  double t2641;
  double t2655;
  t175 = Cos(var1[3]);
  t230 = Sin(var1[3]);
  t388 = Cos(var1[4]);
  t422 = Sin(var1[4]);
  t417 = -1.*var1[2]*t388*t230;
  t435 = -1.*var1[1]*t422;
  t693 = Cos(var1[5]);
  t746 = Sin(var1[5]);
  t544 = var1[2]*t175*t388;
  t573 = var1[0]*t422;
  t626 = -1.*var1[1]*t175*t388;
  t639 = var1[0]*t388*t230;
  t650 = t175*t388;
  t670 = t388*t230;
  t675 = -1.*t422;
  t732 = t175*t693*t422;
  t750 = t230*t746;
  t759 = t732 + t750;
  t782 = -1.*t693*t230;
  t790 = t175*t422*t746;
  t793 = t782 + t790;
  t1087 = Cos(var1[13]);
  t1044 = Sin(var1[13]);
  t812 = t693*t230*t422;
  t831 = -1.*t175*t746;
  t857 = t812 + t831;
  t1153 = -1.*t1087;
  t1156 = 1. + t1153;
  t935 = t175*t693;
  t940 = t230*t422*t746;
  t950 = t935 + t940;
  t1169 = 0.07996*t1156;
  t1175 = 0.135*t1044;
  t1176 = 0. + t1169 + t1175;
  t1185 = -0.135*t1156;
  t1208 = 0.07996*t1044;
  t1264 = 0. + t1185 + t1208;
  t1116 = t1087*t388*t693;
  t1131 = -1.*t388*t1044*t746;
  t1151 = t1116 + t1131;
  t161 = -1.*var1[0];
  t1518 = t1087*t759;
  t1525 = -1.*t1044*t793;
  t1529 = t1518 + t1525;
  t1329 = t1087*t857;
  t1336 = -1.*t1044*t950;
  t1354 = t1329 + t1336;
  t1061 = t1044*t759;
  t1090 = t1087*t793;
  t1093 = t1061 + t1090;
  t1297 = -1.*var1[2];
  t1303 = -1.*t388*t693*t1176;
  t1827 = Cos(var1[14]);
  t1865 = Sin(var1[14]);
  t1314 = -1.*t388*t1264*t746;
  t1941 = -1.*t1827;
  t1953 = 1. + t1941;
  t1599 = t388*t693*t1044;
  t1641 = t1087*t388*t746;
  t1654 = t1599 + t1641;
  t1553 = t1044*t857;
  t1567 = t1087*t950;
  t1572 = t1553 + t1567;
  t1964 = -0.08055*t1953;
  t1987 = -0.135*t1865;
  t1995 = 0. + t1964 + t1987;
  t1182 = t1176*t857;
  t1276 = t1264*t950;
  t2038 = -0.135*t1953;
  t2046 = 0.08055*t1865;
  t2054 = 0. + t2038 + t2046;
  t1467 = t388*t693*t1176;
  t1490 = t388*t1264*t746;
  t2131 = t1865*t422;
  t2132 = t1827*t1654;
  t2147 = t2131 + t2132;
  t1409 = -1.*t1176*t759;
  t1427 = -1.*t1264*t793;
  t1745 = t1176*t759;
  t1759 = t1264*t793;
  t2096 = -1.*t388*t1865*t230;
  t2099 = t1827*t1572;
  t2100 = t2096 + t2099;
  t2241 = -1.*t175*t388*t1865;
  t2244 = t1827*t1093;
  t2277 = t2241 + t2244;
  t1664 = -1.*var1[1];
  t1691 = -1.*t1176*t857;
  t1719 = -1.*t1264*t950;
  t2013 = t1995*t422;
  t2064 = -1.*t2054*t1654;
  t2660 = Cos(var1[15]);
  t2669 = -1.*t2660;
  t2671 = 1. + t2669;
  t2673 = Sin(var1[15]);
  t2428 = -1.*t1827*t422;
  t2430 = t1865*t1654;
  t2435 = t2428 + t2430;
  t1856 = t1827*t175*t388;
  t1879 = t1865*t1093;
  t1892 = t1856 + t1879;
  t2154 = t388*t1995*t230;
  t2155 = t2054*t1572;
  t2672 = -0.01004*t2671;
  t2677 = 0.08055*t2673;
  t2679 = 0. + t2672 + t2677;
  t2697 = -0.08055*t2671;
  t2701 = -0.01004*t2673;
  t2702 = 0. + t2697 + t2701;
  t2353 = t1827*t388*t230;
  t2360 = t1865*t1572;
  t2361 = t2353 + t2360;
  t2209 = -1.*t1995*t422;
  t2230 = t2054*t1654;
  t2307 = -1.*t175*t388*t1995;
  t2337 = -1.*t2054*t1093;
  t2448 = t175*t388*t1995;
  t2449 = t2054*t1093;
  t2517 = -1.*t388*t1995*t230;
  t2536 = -1.*t2054*t1572;
  t2601 = t175*t388*t1865;
  t2602 = -1.*t1827*t1093;
  t2606 = 0. + t2601 + t2602;
  t2610 = t388*t1865*t230;
  t2620 = -1.*t1827*t1572;
  t2621 = 0. + t2610 + t2620;
  t2628 = -1.*t1865*t422;
  t2641 = -1.*t1827*t1654;
  t2655 = 0. + t2628 + t2641;
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
  p_output1[19]=t161;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t175*var1[2];
  p_output1[25]=-1.*t230*var1[2];
  p_output1[26]=t175*var1[0] + t230*var1[1];
  p_output1[27]=-1.*t230;
  p_output1[28]=t175;
  p_output1[29]=0;
  p_output1[30]=t417 + t435;
  p_output1[31]=t544 + t573;
  p_output1[32]=t626 + t639;
  p_output1[33]=t650;
  p_output1[34]=t670;
  p_output1[35]=t675;
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
  p_output1[78]=t417 + t435 + 0.135*t759 + 0.07996*t793;
  p_output1[79]=t544 + t573 + 0.135*t857 + 0.07996*t950;
  p_output1[80]=t626 + t639 + 0.135*t388*t693 + 0.07996*t388*t746;
  p_output1[81]=0. + t650;
  p_output1[82]=0. + t670;
  p_output1[83]=0. + t675;
  p_output1[84]=0.08055*t1093 + (0. + t1297 + t1303 + t1314)*t1354 - 0.135*t175*t388 + t1151*(0. + t1182 + t1276 + var1[1]);
  p_output1[85]=0.08055*t1572 + t1151*(0. + t1409 + t1427 + t161) - 0.135*t230*t388 + t1529*(0. + t1467 + t1490 + var1[2]);
  p_output1[86]=0.08055*t1654 + t1529*(0. + t1664 + t1691 + t1719) + 0.135*t422 + t1354*(0. + t1745 + t1759 + var1[0]);
  p_output1[87]=0. + t1518 + t1525;
  p_output1[88]=0. + t1329 + t1336;
  p_output1[89]=0. + t1116 + t1131;
  p_output1[90]=0.08055*t1529 - 0.01004*t1892 - 1.*(0. + t1297 + t1303 + t1314 + t2013 + t2064)*t2100 - 1.*t2147*(0. + t1182 + t1276 + t2154 + t2155 + var1[1]);
  p_output1[91]=0.08055*t1354 - 1.*t2147*(0. + t1409 + t1427 + t161 + t2307 + t2337) - 0.01004*t2361 - 1.*t2277*(0. + t1467 + t1490 + t2209 + t2230 + var1[2]);
  p_output1[92]=0.08055*t1151 - 0.01004*t2435 - 1.*t2277*(0. + t1664 + t1691 + t1719 + t2517 + t2536) - 1.*t2100*(0. + t1745 + t1759 + t2448 + t2449 + var1[0]);
  p_output1[93]=t2606;
  p_output1[94]=t2621;
  p_output1[95]=t2655;
  p_output1[96]=-0.13004*(t1892*t2660 + t1529*t2673) + 0.08055*(t1529*t2660 - 1.*t1892*t2673) - 1.*t2100*(0. + t1297 + t1303 + t1314 + t2013 + t2064 - 1.*t1151*t2679 - 1.*t2435*t2702) - 1.*t2147*(0. + t1182 + t1276 + t2154 + t2155 + t1354*t2679 + t2361*t2702 + var1[1]);
  p_output1[97]=-0.13004*(t2361*t2660 + t1354*t2673) + 0.08055*(t1354*t2660 - 1.*t2361*t2673) - 1.*t2147*(0. + t1409 + t1427 + t161 + t2307 + t2337 - 1.*t1529*t2679 - 1.*t1892*t2702) - 1.*t2277*(0. + t1467 + t1490 + t2209 + t2230 + t1151*t2679 + t2435*t2702 + var1[2]);
  p_output1[98]=-0.13004*(t2435*t2660 + t1151*t2673) + 0.08055*(t1151*t2660 - 1.*t2435*t2673) - 1.*t2277*(0. + t1664 + t1691 + t1719 + t2517 + t2536 - 1.*t1354*t2679 - 1.*t2361*t2702) - 1.*t2100*(0. + t1745 + t1759 + t2448 + t2449 + t1529*t2679 + t1892*t2702 + var1[0]);
  p_output1[99]=t2606;
  p_output1[100]=t2621;
  p_output1[101]=t2655;
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



void Js_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
