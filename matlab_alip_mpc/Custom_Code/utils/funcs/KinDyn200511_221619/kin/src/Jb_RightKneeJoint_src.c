/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightKneeJoint_src.h"

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
  double t353;
  double t478;
  double t345;
  double t510;
  double t697;
  double t403;
  double t556;
  double t576;
  double t297;
  double t703;
  double t716;
  double t781;
  double t796;
  double t806;
  double t869;
  double t238;
  double t1033;
  double t1068;
  double t1088;
  double t609;
  double t905;
  double t986;
  double t1101;
  double t19;
  double t1615;
  double t1621;
  double t1640;
  double t1644;
  double t1670;
  double t1220;
  double t1225;
  double t1229;
  double t1321;
  double t1726;
  double t1743;
  double t1760;
  double t1563;
  double t1698;
  double t1720;
  double t1967;
  double t1986;
  double t2011;
  double t2042;
  double t1999;
  double t2003;
  double t993;
  double t1161;
  double t1168;
  double t1264;
  double t1270;
  double t1318;
  double t1326;
  double t1382;
  double t1470;
  double t1495;
  double t1515;
  double t1722;
  double t1762;
  double t1765;
  double t1777;
  double t1778;
  double t1782;
  double t1808;
  double t1811;
  double t1822;
  double t1884;
  double t1889;
  double t2004;
  double t2056;
  double t2073;
  double t2118;
  double t2119;
  double t2156;
  double t2164;
  double t2193;
  double t2211;
  double t2216;
  double t2511;
  double t2533;
  double t2537;
  double t2640;
  double t2647;
  double t2626;
  double t2627;
  double t2707;
  double t2712;
  double t2723;
  double t2653;
  double t2661;
  double t2676;
  double t2579;
  double t2582;
  double t2630;
  double t2688;
  double t2706;
  double t2735;
  double t2740;
  double t2752;
  double t2779;
  double t2782;
  double t2787;
  double t2805;
  double t2863;
  double t2864;
  double t2880;
  double t2893;
  double t2896;
  double t2918;
  double t2922;
  double t2542;
  double t2549;
  double t2559;
  double t2971;
  double t2977;
  double t2980;
  double t3001;
  double t3004;
  double t2586;
  double t2614;
  double t2749;
  double t2936;
  double t2939;
  double t3033;
  double t3035;
  double t3036;
  double t3045;
  double t3056;
  double t3070;
  double t3071;
  double t2951;
  double t3008;
  double t3019;
  double t3047;
  double t3074;
  double t3117;
  double t3139;
  double t3154;
  double t3159;
  double t2452;
  double t2499;
  double t2508;
  double t3031;
  double t3192;
  double t3212;
  double t3251;
  double t3347;
  double t3382;
  double t3416;
  double t3451;
  double t3493;
  double t3588;
  double t3620;
  double t3641;
  double t4199;
  double t4174;
  t353 = Cos(var1[16]);
  t478 = Sin(var1[15]);
  t345 = Cos(var1[15]);
  t510 = Sin(var1[16]);
  t697 = Cos(var1[13]);
  t403 = -1.*t345*t353;
  t556 = t478*t510;
  t576 = 0. + t403 + t556;
  t297 = Sin(var1[13]);
  t703 = Sin(var1[14]);
  t716 = t353*t478;
  t781 = t345*t510;
  t796 = 0. + t716 + t781;
  t806 = t703*t796;
  t869 = 0. + t806;
  t238 = Cos(var1[5]);
  t1033 = t697*t576;
  t1068 = t297*t869;
  t1088 = 0. + t1033 + t1068;
  t609 = -1.*t297*t576;
  t905 = t697*t869;
  t986 = 0. + t609 + t905;
  t1101 = Sin(var1[5]);
  t19 = Sin(var1[3]);
  t1615 = t345*t353;
  t1621 = -1.*t478*t510;
  t1640 = 0. + t1615 + t1621;
  t1644 = t703*t1640;
  t1670 = 0. + t1644;
  t1220 = Cos(var1[3]);
  t1225 = Cos(var1[4]);
  t1229 = Cos(var1[14]);
  t1321 = Sin(var1[4]);
  t1726 = t697*t796;
  t1743 = t297*t1670;
  t1760 = 0. + t1726 + t1743;
  t1563 = -1.*t297*t796;
  t1698 = t697*t1670;
  t1720 = 0. + t1563 + t1698;
  t1967 = -1.*t1229;
  t1986 = 0. + t1967;
  t2011 = t1986*t297;
  t2042 = 0. + t2011;
  t1999 = t697*t1986;
  t2003 = 0. + t1999;
  t993 = t238*t986;
  t1161 = -1.*t1088*t1101;
  t1168 = 0. + t993 + t1161;
  t1264 = t1229*t796;
  t1270 = 0. + t1264;
  t1318 = t1225*t1270;
  t1326 = t238*t1088;
  t1382 = t986*t1101;
  t1470 = 0. + t1326 + t1382;
  t1495 = t1321*t1470;
  t1515 = 0. + t1318 + t1495;
  t1722 = t238*t1720;
  t1762 = -1.*t1760*t1101;
  t1765 = 0. + t1722 + t1762;
  t1777 = t1229*t1640;
  t1778 = 0. + t1777;
  t1782 = t1225*t1778;
  t1808 = t238*t1760;
  t1811 = t1720*t1101;
  t1822 = 0. + t1808 + t1811;
  t1884 = t1321*t1822;
  t1889 = 0. + t1782 + t1884;
  t2004 = t2003*t238;
  t2056 = -1.*t2042*t1101;
  t2073 = 0. + t2004 + t2056;
  t2118 = 0. + t703;
  t2119 = t1225*t2118;
  t2156 = t238*t2042;
  t2164 = t2003*t1101;
  t2193 = 0. + t2156 + t2164;
  t2211 = t1321*t2193;
  t2216 = 0. + t2119 + t2211;
  t2511 = -1.*t1778*t1321;
  t2533 = t1225*t1822;
  t2537 = 0. + t2511 + t2533;
  t2640 = -1.*t353;
  t2647 = 1. + t2640;
  t2626 = -1.*t345;
  t2627 = 1. + t2626;
  t2707 = -0.08055*t2647;
  t2712 = -0.08055*t353;
  t2723 = 0. + t2707 + t2712;
  t2653 = -0.13004*t2647;
  t2661 = -0.13004*t353;
  t2676 = 0. + t2653 + t2661;
  t2579 = -1.*t697;
  t2582 = 1. + t2579;
  t2630 = -0.01004*t2627;
  t2688 = t345*t2676;
  t2706 = 0.08055*t478;
  t2735 = t2723*t478;
  t2740 = 0. + t2630 + t2688 + t2706 + t2735;
  t2752 = -1.*t1229;
  t2779 = 1. + t2752;
  t2782 = -0.135*t2779;
  t2787 = -0.1305*t1229;
  t2805 = 0.08055*t703;
  t2863 = -0.08055*t2627;
  t2864 = t345*t2723;
  t2880 = -0.01004*t478;
  t2893 = -1.*t2676*t478;
  t2896 = 0. + t2863 + t2864 + t2880 + t2893;
  t2918 = t703*t2896;
  t2922 = 0. + t2782 + t2787 + t2805 + t2918;
  t2542 = -1.*t2118*t1321;
  t2549 = t1225*t2193;
  t2559 = 0. + t2542 + t2549;
  t2971 = 0.07996*t2582;
  t2977 = 0.135*t297;
  t2980 = t697*t2740;
  t3001 = t297*t2922;
  t3004 = 0. + t2971 + t2977 + t2980 + t3001;
  t2586 = -0.135*t2582;
  t2614 = 0.07996*t297;
  t2749 = -1.*t297*t2740;
  t2936 = t697*t2922;
  t2939 = 0. + t2586 + t2614 + t2749 + t2936;
  t3033 = -0.08055*t2779;
  t3035 = -0.004500000000000004*t703;
  t3036 = t1229*t2896;
  t3045 = 0. + t3033 + t3035 + t3036;
  t3056 = t238*t3004;
  t3070 = t2939*t1101;
  t3071 = 0. + t3056 + t3070;
  t2951 = t238*t2939;
  t3008 = -1.*t3004*t1101;
  t3019 = 0. + t2951 + t3008;
  t3047 = -1.*t3045*t1321;
  t3074 = t1225*t3071;
  t3117 = 0. + t3047 + t3074;
  t3139 = t1225*t3045;
  t3154 = t1321*t3071;
  t3159 = 0. + t3139 + t3154;
  t2452 = -1.*t1270*t1321;
  t2499 = t1225*t1470;
  t2508 = 0. + t2452 + t2499;
  t3031 = t2073*t3019;
  t3192 = -1.*t3019*t1765;
  t3212 = -1.*t2073*t3019;
  t3251 = t3019*t1168;
  t3347 = -1.*t3019*t1168;
  t3382 = t3019*t1765;
  t3416 = t2118*t3045;
  t3451 = -1.*t3045*t1778;
  t3493 = -1.*t2118*t3045;
  t3588 = t3045*t1270;
  t3620 = -1.*t3045*t1270;
  t3641 = t3045*t1778;
  t4199 = t2740*t796;
  t4174 = -1.*t2740*t576;
  p_output1[0]=0. + t1220*t1515 - 1.*t1168*t19;
  p_output1[1]=0. + t1220*t1889 - 1.*t1765*t19;
  p_output1[2]=0. - 1.*t19*t2073 + t1220*t2216;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1168*t1220 + t1515*t19;
  p_output1[7]=0. + t1220*t1765 + t1889*t19;
  p_output1[8]=0. + t1220*t2073 + t19*t2216;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2508;
  p_output1[13]=t2537;
  p_output1[14]=t2559;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2537*(t3031 + t2559*t3117 + t2216*t3159) + t2559*(-1.*t2537*t3117 - 1.*t1889*t3159 + t3192);
  p_output1[19]=t2508*(-1.*t2559*t3117 - 1.*t2216*t3159 + t3212) + t2559*(t2508*t3117 + t1515*t3159 + t3251);
  p_output1[20]=t2537*(-1.*t2508*t3117 - 1.*t1515*t3159 + t3347) + t2508*(t2537*t3117 + t1889*t3159 + t3382);
  p_output1[21]=t2508;
  p_output1[22]=t2537;
  p_output1[23]=t2559;
  p_output1[24]=t1765*(t3031 + t2193*t3071 + t3416) + t2073*(-1.*t1822*t3071 + t3192 + t3451);
  p_output1[25]=t1168*(-1.*t2193*t3071 + t3212 + t3493) + t2073*(t1470*t3071 + t3251 + t3588);
  p_output1[26]=t1765*(-1.*t1470*t3071 + t3347 + t3620) + t1168*(t1822*t3071 + t3382 + t3641);
  p_output1[27]=t1168;
  p_output1[28]=t1765;
  p_output1[29]=t2073;
  p_output1[30]=t1778*(t2003*t2939 + t2042*t3004 + t3416) + t2118*(-1.*t1720*t2939 - 1.*t1760*t3004 + t3451);
  p_output1[31]=t1270*(-1.*t2003*t2939 - 1.*t2042*t3004 + t3493) + t2118*(t1088*t3004 + t3588 + t2939*t986);
  p_output1[32]=t1270*(t1720*t2939 + t1760*t3004 + t3641) + t1778*(-1.*t1088*t3004 + t3620 - 1.*t2939*t986);
  p_output1[33]=t1270;
  p_output1[34]=t1778;
  p_output1[35]=t2118;
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
  p_output1[78]=t1778*(0. + t1986*t2922 + t3416) + 0.135*t576 + t2118*(-1.*t1670*t2922 + t3451 - 1.*t2740*t796) + 0.07996*t869;
  p_output1[79]=0.07996*t1670 + t1270*(0. - 1.*t1986*t2922 + t3493) + 0.135*t796 + t2118*(t3588 + t2740*t576 + t2922*t869);
  p_output1[80]=0. + 0.07996*t1986 + t1270*(t1670*t2922 + t3641 + t4199) + t1778*(t3620 + t4174 - 1.*t2922*t869);
  p_output1[81]=t1270;
  p_output1[82]=t1778;
  p_output1[83]=t2118;
  p_output1[84]=0. - 0.004500000000000004*t796;
  p_output1[85]=0. - 0.135*t1640 - 0.1305*t576;
  p_output1[86]=-0.08055 + (0. + t1640*t2896 + t4199)*t576 + t796*(0. + t4174 - 1.*t2896*t796);
  p_output1[87]=t576;
  p_output1[88]=t796;
  p_output1[89]=0.;
  p_output1[90]=0. + t2712 - 1.*t2723*t353 - 0.01004*t510 - 1.*t2676*t510;
  p_output1[91]=0. - 0.01004*t353 - 1.*t2676*t353 + 0.08055*t510 + t2723*t510;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0.;
  p_output1[97]=0.;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
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



void Jb_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
