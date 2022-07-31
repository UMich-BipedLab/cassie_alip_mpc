/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightKneeJoint_src.h"

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
  double t448;
  double t632;
  double t721;
  double t739;
  double t849;
  double t1048;
  double t868;
  double t938;
  double t1113;
  double t67;
  double t110;
  double t153;
  double t256;
  double t942;
  double t1152;
  double t1167;
  double t1623;
  double t1723;
  double t1791;
  double t15;
  double t2174;
  double t2205;
  double t2302;
  double t2451;
  double t2493;
  double t2547;
  double t2689;
  double t2789;
  double t2800;
  double t2814;
  double t3228;
  double t3230;
  double t3260;
  double t3344;
  double t3348;
  double t3357;
  double t3550;
  double t3730;
  double t3782;
  double t3814;
  double t3965;
  double t3970;
  double t3986;
  double t179;
  double t341;
  double t408;
  double t749;
  double t857;
  double t863;
  double t1443;
  double t1495;
  double t1582;
  double t2062;
  double t2128;
  double t2134;
  double t4433;
  double t4437;
  double t4452;
  double t4623;
  double t4624;
  double t4723;
  double t2559;
  double t2698;
  double t2766;
  double t4786;
  double t4794;
  double t4801;
  double t3137;
  double t3148;
  double t3227;
  double t3493;
  double t3627;
  double t3662;
  double t4840;
  double t4846;
  double t4887;
  double t5012;
  double t5016;
  double t5019;
  double t3948;
  double t3953;
  double t3960;
  double t5152;
  double t5174;
  double t5222;
  double t5261;
  double t5264;
  double t5274;
  double t5710;
  double t5822;
  double t5829;
  double t5840;
  double t5845;
  double t5850;
  double t5916;
  double t5918;
  double t5919;
  double t5929;
  double t5940;
  double t5943;
  double t5955;
  double t5965;
  double t5966;
  double t6072;
  double t6077;
  double t6083;
  double t6090;
  double t6102;
  double t6114;
  double t6136;
  double t6138;
  double t6139;
  double t6143;
  double t6147;
  double t6159;
  double t6162;
  double t6164;
  double t6165;
  double t6201;
  double t6205;
  double t6211;
  double t6219;
  double t6221;
  double t6222;
  double t6239;
  double t6245;
  double t6247;
  double t6260;
  double t6261;
  double t6263;
  double t6267;
  double t6268;
  double t6274;
  double t6295;
  double t6296;
  double t6298;
  double t6315;
  double t6319;
  double t6309;
  double t6312;
  double t6313;
  double t6342;
  double t6345;
  double t6346;
  double t6353;
  double t6354;
  double t6355;
  double t6393;
  double t6395;
  double t6396;
  double t6413;
  double t6419;
  double t6421;
  double t6402;
  double t6403;
  double t6428;
  double t6431;
  double t6434;
  double t6436;
  double t6442;
  double t6446;
  double t6511;
  double t6512;
  double t6513;
  double t6501;
  double t6505;
  double t6509;
  double t6534;
  double t6539;
  double t6541;
  double t6551;
  double t6552;
  double t6553;
  double t6615;
  double t6617;
  double t6628;
  double t6633;
  double t6634;
  double t6637;
  double t6638;
  double t6643;
  double t6600;
  double t6601;
  double t6603;
  double t6607;
  double t6608;
  double t6699;
  double t6704;
  double t6705;
  double t6712;
  double t6716;
  double t6707;
  double t6708;
  double t6731;
  double t6736;
  double t6738;
  double t6751;
  double t6756;
  double t6757;
  double t6510;
  double t6519;
  double t6522;
  double t6531;
  double t6542;
  double t6554;
  double t6560;
  double t6561;
  double t6566;
  double t6567;
  double t6576;
  double t6578;
  double t6586;
  double t6589;
  double t4926;
  double t4970;
  double t4994;
  double t6793;
  double t6802;
  double t6806;
  double t6808;
  double t6811;
  double t6868;
  double t6869;
  double t6872;
  double t6879;
  double t6881;
  double t6882;
  double t6914;
  double t6915;
  double t6920;
  double t6925;
  double t6927;
  double t6929;
  double t6984;
  double t6985;
  double t6993;
  double t5383;
  double t6967;
  double t6968;
  double t6970;
  double t6978;
  double t6979;
  double t7020;
  double t7021;
  double t7022;
  double t7024;
  double t7026;
  double t7029;
  double t7033;
  double t7037;
  double t7042;
  double t7080;
  double t7081;
  double t7085;
  double t7095;
  double t7096;
  double t7098;
  double t7101;
  double t7104;
  double t7107;
  double t5326;
  double t5386;
  double t7014;
  double t7163;
  double t7164;
  double t7165;
  double t7172;
  double t7177;
  double t7191;
  double t7192;
  double t7194;
  double t7047;
  double t7062;
  double t7214;
  double t7215;
  double t7219;
  double t7114;
  double t7134;
  t448 = Sin(var1[3]);
  t632 = Cos(var1[13]);
  t721 = -1.*t632;
  t739 = 1. + t721;
  t849 = Sin(var1[13]);
  t1048 = Cos(var1[3]);
  t868 = Cos(var1[5]);
  t938 = Sin(var1[4]);
  t1113 = Sin(var1[5]);
  t67 = Cos(var1[14]);
  t110 = -1.*t67;
  t153 = 1. + t110;
  t256 = Sin(var1[14]);
  t942 = -1.*t868*t448*t938;
  t1152 = t1048*t1113;
  t1167 = t942 + t1152;
  t1623 = -1.*t1048*t868;
  t1723 = -1.*t448*t938*t1113;
  t1791 = t1623 + t1723;
  t15 = Cos(var1[4]);
  t2174 = t849*t1167;
  t2205 = t632*t1791;
  t2302 = t2174 + t2205;
  t2451 = Cos(var1[15]);
  t2493 = -1.*t2451;
  t2547 = 1. + t2493;
  t2689 = Sin(var1[15]);
  t2789 = t632*t1167;
  t2800 = -1.*t849*t1791;
  t2814 = t2789 + t2800;
  t3228 = -1.*t67*t15*t448;
  t3230 = t256*t2302;
  t3260 = t3228 + t3230;
  t3344 = Cos(var1[16]);
  t3348 = -1.*t3344;
  t3357 = 1. + t3348;
  t3550 = Sin(var1[16]);
  t3730 = t2689*t2814;
  t3782 = t2451*t3260;
  t3814 = t3730 + t3782;
  t3965 = t2451*t2814;
  t3970 = -1.*t2689*t3260;
  t3986 = t3965 + t3970;
  t179 = -0.08055*t153;
  t341 = -0.135*t256;
  t408 = 0. + t179 + t341;
  t749 = 0.07996*t739;
  t857 = 0.135*t849;
  t863 = 0. + t749 + t857;
  t1443 = -0.135*t739;
  t1495 = 0.07996*t849;
  t1582 = 0. + t1443 + t1495;
  t2062 = -0.135*t153;
  t2128 = 0.08055*t256;
  t2134 = 0. + t2062 + t2128;
  t4433 = t1048*t868*t938;
  t4437 = t448*t1113;
  t4452 = t4433 + t4437;
  t4623 = -1.*t868*t448;
  t4624 = t1048*t938*t1113;
  t4723 = t4623 + t4624;
  t2559 = -0.01004*t2547;
  t2698 = 0.08055*t2689;
  t2766 = 0. + t2559 + t2698;
  t4786 = t849*t4452;
  t4794 = t632*t4723;
  t4801 = t4786 + t4794;
  t3137 = -0.08055*t2547;
  t3148 = -0.01004*t2689;
  t3227 = 0. + t3137 + t3148;
  t3493 = -0.08055*t3357;
  t3627 = -0.13004*t3550;
  t3662 = 0. + t3493 + t3627;
  t4840 = t632*t4452;
  t4846 = -1.*t849*t4723;
  t4887 = t4840 + t4846;
  t5012 = t67*t1048*t15;
  t5016 = t256*t4801;
  t5019 = t5012 + t5016;
  t3948 = -0.13004*t3357;
  t3953 = 0.08055*t3550;
  t3960 = 0. + t3948 + t3953;
  t5152 = t2689*t4887;
  t5174 = t2451*t5019;
  t5222 = t5152 + t5174;
  t5261 = t2451*t4887;
  t5264 = -1.*t2689*t5019;
  t5274 = t5261 + t5264;
  t5710 = t1048*t15*t868*t849;
  t5822 = t632*t1048*t15*t1113;
  t5829 = t5710 + t5822;
  t5840 = t632*t1048*t15*t868;
  t5845 = -1.*t1048*t15*t849*t1113;
  t5850 = t5840 + t5845;
  t5916 = -1.*t67*t1048*t938;
  t5918 = t256*t5829;
  t5919 = t5916 + t5918;
  t5929 = t2689*t5850;
  t5940 = t2451*t5919;
  t5943 = t5929 + t5940;
  t5955 = t2451*t5850;
  t5965 = -1.*t2689*t5919;
  t5966 = t5955 + t5965;
  t6072 = t15*t868*t849*t448;
  t6077 = t632*t15*t448*t1113;
  t6083 = t6072 + t6077;
  t6090 = t632*t15*t868*t448;
  t6102 = -1.*t15*t849*t448*t1113;
  t6114 = t6090 + t6102;
  t6136 = -1.*t67*t448*t938;
  t6138 = t256*t6083;
  t6139 = t6136 + t6138;
  t6143 = t2689*t6114;
  t6147 = t2451*t6139;
  t6159 = t6143 + t6147;
  t6162 = t2451*t6114;
  t6164 = -1.*t2689*t6139;
  t6165 = t6162 + t6164;
  t6201 = -1.*t868*t849*t938;
  t6205 = -1.*t632*t938*t1113;
  t6211 = t6201 + t6205;
  t6219 = -1.*t632*t868*t938;
  t6221 = t849*t938*t1113;
  t6222 = t6219 + t6221;
  t6239 = -1.*t67*t15;
  t6245 = t256*t6211;
  t6247 = t6239 + t6245;
  t6260 = t2689*t6222;
  t6261 = t2451*t6247;
  t6263 = t6260 + t6261;
  t6267 = t2451*t6222;
  t6268 = -1.*t2689*t6247;
  t6274 = t6267 + t6268;
  t6295 = t868*t448;
  t6296 = -1.*t1048*t938*t1113;
  t6298 = t6295 + t6296;
  t6315 = t849*t6298;
  t6319 = t4840 + t6315;
  t6309 = -1.*t849*t4452;
  t6312 = t632*t6298;
  t6313 = t6309 + t6312;
  t6342 = t2689*t6313;
  t6345 = t2451*t256*t6319;
  t6346 = t6342 + t6345;
  t6353 = t2451*t6313;
  t6354 = -1.*t256*t2689*t6319;
  t6355 = t6353 + t6354;
  t6393 = t868*t448*t938;
  t6395 = -1.*t1048*t1113;
  t6396 = t6393 + t6395;
  t6413 = t632*t6396;
  t6419 = t849*t1791;
  t6421 = t6413 + t6419;
  t6402 = -1.*t849*t6396;
  t6403 = t6402 + t2205;
  t6428 = t2689*t6403;
  t6431 = t2451*t256*t6421;
  t6434 = t6428 + t6431;
  t6436 = t2451*t6403;
  t6442 = -1.*t256*t2689*t6421;
  t6446 = t6436 + t6442;
  t6511 = t632*t15*t868;
  t6512 = -1.*t15*t849*t1113;
  t6513 = t6511 + t6512;
  t6501 = -1.*t15*t868*t849;
  t6505 = -1.*t632*t15*t1113;
  t6509 = t6501 + t6505;
  t6534 = t2689*t6509;
  t6539 = t2451*t256*t6513;
  t6541 = t6534 + t6539;
  t6551 = t2451*t6509;
  t6552 = -1.*t256*t2689*t6513;
  t6553 = t6551 + t6552;
  t6615 = -1.*t632*t4723;
  t6617 = t6309 + t6615;
  t6628 = t2689*t6617;
  t6633 = t2451*t256*t4887;
  t6634 = t6628 + t6633;
  t6637 = t2451*t6617;
  t6638 = -1.*t256*t2689*t4887;
  t6643 = t6637 + t6638;
  t6600 = 0.135*t632;
  t6601 = t6600 + t1495;
  t6603 = 0.07996*t632;
  t6607 = -0.135*t849;
  t6608 = t6603 + t6607;
  t6699 = t1048*t868;
  t6704 = t448*t938*t1113;
  t6705 = t6699 + t6704;
  t6712 = -1.*t849*t6705;
  t6716 = t6413 + t6712;
  t6707 = -1.*t632*t6705;
  t6708 = t6402 + t6707;
  t6731 = t2689*t6708;
  t6736 = t2451*t256*t6716;
  t6738 = t6731 + t6736;
  t6751 = t2451*t6708;
  t6756 = -1.*t256*t2689*t6716;
  t6757 = t6751 + t6756;
  t6510 = t2766*t6509;
  t6519 = -0.1305*t67*t6513;
  t6522 = t2134*t6513;
  t6531 = t256*t3227*t6513;
  t6542 = t3662*t6541;
  t6554 = t3960*t6553;
  t6560 = -1.*t3550*t6541;
  t6561 = t3344*t6553;
  t6566 = t6560 + t6561;
  t6567 = -0.13004*t6566;
  t6576 = t3344*t6541;
  t6578 = t3550*t6553;
  t6586 = t6576 + t6578;
  t6589 = -0.08055*t6586;
  t4926 = -1.*t1048*t15*t256;
  t4970 = t67*t4801;
  t4994 = t4926 + t4970;
  t6793 = -0.135*t67;
  t6802 = -0.08055*t256;
  t6806 = t6793 + t6802;
  t6808 = 0.08055*t67;
  t6811 = t6808 + t341;
  t6868 = t849*t6396;
  t6869 = t632*t6705;
  t6872 = t6868 + t6869;
  t6879 = -1.*t15*t256*t448;
  t6881 = t67*t6872;
  t6882 = t6879 + t6881;
  t6914 = t15*t868*t849;
  t6915 = t632*t15*t1113;
  t6920 = t6914 + t6915;
  t6925 = t256*t938;
  t6927 = t67*t6920;
  t6929 = t6925 + t6927;
  t6984 = -1.*t2689*t4887;
  t6985 = -1.*t2451*t5019;
  t6993 = t6984 + t6985;
  t5383 = t3344*t5274;
  t6967 = 0.08055*t2451;
  t6968 = t6967 + t3148;
  t6970 = -0.01004*t2451;
  t6978 = -0.08055*t2689;
  t6979 = t6970 + t6978;
  t7020 = t67*t15*t448;
  t7021 = t256*t6872;
  t7022 = t7020 + t7021;
  t7024 = -1.*t2689*t6716;
  t7026 = -1.*t2451*t7022;
  t7029 = t7024 + t7026;
  t7033 = t2451*t6716;
  t7037 = -1.*t2689*t7022;
  t7042 = t7033 + t7037;
  t7080 = -1.*t67*t938;
  t7081 = t256*t6920;
  t7085 = t7080 + t7081;
  t7095 = -1.*t2689*t6513;
  t7096 = -1.*t2451*t7085;
  t7098 = t7095 + t7096;
  t7101 = t2451*t6513;
  t7104 = -1.*t2689*t7085;
  t7107 = t7101 + t7104;
  t5326 = -1.*t3550*t5222;
  t5386 = t5326 + t5383;
  t7014 = -1.*t3550*t5274;
  t7163 = -0.13004*t3344;
  t7164 = -0.08055*t3550;
  t7165 = t7163 + t7164;
  t7172 = 0.08055*t3344;
  t7177 = t7172 + t3627;
  t7191 = t2689*t6716;
  t7192 = t2451*t7022;
  t7194 = t7191 + t7192;
  t7047 = t3344*t7042;
  t7062 = -1.*t3550*t7042;
  t7214 = t2689*t6513;
  t7215 = t2451*t7085;
  t7219 = t7214 + t7215;
  t7114 = t3344*t7107;
  t7134 = -1.*t3550*t7107;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1582*t1791 + t2134*t2302 + t2766*t2814 + t3227*t3260 + t3662*t3814 + t3960*t3986 - 0.13004*(-1.*t3550*t3814 + t3344*t3986) - 0.08055*(t3344*t3814 + t3550*t3986) - 1.*t15*t408*t448 - 0.1305*(t15*t256*t448 + t2302*t67) + t1167*t863;
  p_output1[10]=t1048*t15*t408 + t1582*t4723 + t2134*t4801 + t2766*t4887 - 0.1305*t4994 + t3227*t5019 + t3662*t5222 + t3960*t5274 - 0.08055*(t3344*t5222 + t3550*t5274) - 0.13004*t5386 + t4452*t863;
  p_output1[11]=0;
  p_output1[12]=t1048*t1113*t15*t1582 + t2134*t5829 + t2766*t5850 + t3227*t5919 + t3662*t5943 + t3960*t5966 - 0.13004*(-1.*t3550*t5943 + t3344*t5966) - 0.08055*(t3344*t5943 + t3550*t5966) + t1048*t15*t863*t868 - 1.*t1048*t408*t938 - 0.1305*(t5829*t67 + t1048*t256*t938);
  p_output1[13]=t1113*t15*t1582*t448 + t2134*t6083 + t2766*t6114 + t3227*t6139 + t3662*t6159 + t3960*t6165 - 0.13004*(-1.*t3550*t6159 + t3344*t6165) - 0.08055*(t3344*t6159 + t3550*t6165) + t15*t448*t863*t868 - 1.*t408*t448*t938 - 0.1305*(t6083*t67 + t256*t448*t938);
  p_output1[14]=-1.*t15*t408 + t2134*t6211 + t2766*t6222 + t3227*t6247 + t3662*t6263 + t3960*t6274 - 0.13004*(-1.*t3550*t6263 + t3344*t6274) - 0.08055*(t3344*t6263 + t3550*t6274) - 0.1305*(t15*t256 + t6211*t67) - 1.*t1113*t1582*t938 - 1.*t863*t868*t938;
  p_output1[15]=t1582*t4452 + t2766*t6313 + t2134*t6319 + t256*t3227*t6319 + t3662*t6346 + t3960*t6355 - 0.13004*(-1.*t3550*t6346 + t3344*t6355) - 0.08055*(t3344*t6346 + t3550*t6355) - 0.1305*t6319*t67 + t6298*t863;
  p_output1[16]=t1582*t6396 + t2766*t6403 + t2134*t6421 + t256*t3227*t6421 + t3662*t6434 + t3960*t6446 - 0.13004*(-1.*t3550*t6434 + t3344*t6446) - 0.08055*(t3344*t6434 + t3550*t6446) - 0.1305*t6421*t67 + t1791*t863;
  p_output1[17]=t6510 + t6519 + t6522 + t6531 + t6542 + t6554 + t6567 + t6589 - 1.*t1113*t15*t863 + t15*t1582*t868;
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
  p_output1[39]=t2134*t4887 + t256*t3227*t4887 + t4452*t6601 + t4723*t6608 + t2766*t6617 + t3662*t6634 + t3960*t6643 - 0.13004*(-1.*t3550*t6634 + t3344*t6643) - 0.08055*(t3344*t6634 + t3550*t6643) - 0.1305*t4887*t67;
  p_output1[40]=t6396*t6601 + t6608*t6705 + t2766*t6708 + t2134*t6716 + t256*t3227*t6716 - 0.1305*t67*t6716 + t3662*t6738 + t3960*t6757 - 0.13004*(-1.*t3550*t6738 + t3344*t6757) - 0.08055*(t3344*t6738 + t3550*t6757);
  p_output1[41]=t6510 + t6519 + t6522 + t6531 + t6542 + t6554 + t6567 + t6589 + t1113*t15*t6608 + t15*t6601*t868;
  p_output1[42]=t3227*t4994 + t2451*t3662*t4994 - 1.*t2689*t3960*t4994 - 0.13004*(-1.*t2689*t3344*t4994 - 1.*t2451*t3550*t4994) - 0.08055*(t2451*t3344*t4994 - 1.*t2689*t3550*t4994) - 0.1305*(-1.*t256*t4801 - 1.*t1048*t15*t67) + t1048*t15*t6806 + t4801*t6811;
  p_output1[43]=t15*t448*t6806 + t6811*t6872 - 0.1305*(t3228 - 1.*t256*t6872) + t3227*t6882 + t2451*t3662*t6882 - 1.*t2689*t3960*t6882 - 0.13004*(-1.*t2689*t3344*t6882 - 1.*t2451*t3550*t6882) - 0.08055*(t2451*t3344*t6882 - 1.*t2689*t3550*t6882);
  p_output1[44]=t6811*t6920 + t3227*t6929 + t2451*t3662*t6929 - 1.*t2689*t3960*t6929 - 0.13004*(-1.*t2689*t3344*t6929 - 1.*t2451*t3550*t6929) - 0.08055*(t2451*t3344*t6929 - 1.*t2689*t3550*t6929) - 1.*t6806*t938 - 0.1305*(-1.*t256*t6920 + t67*t938);
  p_output1[45]=t3662*t5274 + t4887*t6968 + t5019*t6979 + t3960*t6993 - 0.08055*(t5383 + t3550*t6993) - 0.13004*(t3344*t6993 + t7014);
  p_output1[46]=t6716*t6968 + t6979*t7022 + t3960*t7029 + t3662*t7042 - 0.08055*(t3550*t7029 + t7047) - 0.13004*(t3344*t7029 + t7062);
  p_output1[47]=t6513*t6968 + t6979*t7085 + t3960*t7098 + t3662*t7107 - 0.08055*(t3550*t7098 + t7114) - 0.13004*(t3344*t7098 + t7134);
  p_output1[48]=-0.08055*t5386 - 0.13004*(-1.*t3344*t5222 + t7014) + t5222*t7165 + t5274*t7177;
  p_output1[49]=t7042*t7177 + t7165*t7194 - 0.13004*(t7062 - 1.*t3344*t7194) - 0.08055*(t7047 - 1.*t3550*t7194);
  p_output1[50]=t7107*t7177 + t7165*t7219 - 0.13004*(t7134 - 1.*t3344*t7219) - 0.08055*(t7114 - 1.*t3550*t7219);
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



void Jp_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}