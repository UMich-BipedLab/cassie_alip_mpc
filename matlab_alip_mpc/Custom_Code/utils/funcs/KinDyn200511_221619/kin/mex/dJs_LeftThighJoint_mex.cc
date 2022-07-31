/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:06 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t47;
  double t109;
  double t517;
  double t533;
  double t529;
  double t536;
  double t614;
  double t672;
  double t1358;
  double t1395;
  double t704;
  double t740;
  double t741;
  double t742;
  double t1512;
  double t1514;
  double t1516;
  double t1760;
  double t1765;
  double t1773;
  double t800;
  double t816;
  double t855;
  double t897;
  double t1050;
  double t1110;
  double t1125;
  double t1167;
  double t1246;
  double t1252;
  double t1283;
  double t1328;
  double t1331;
  double t1335;
  double t1355;
  double t2242;
  double t2094;
  double t2110;
  double t2140;
  double t2258;
  double t2036;
  double t2041;
  double t2046;
  double t2435;
  double t2437;
  double t2253;
  double t2290;
  double t2299;
  double t1726;
  double t1733;
  double t1737;
  double t2472;
  double t2475;
  double t2478;
  double t2488;
  double t2494;
  double t2500;
  double t2373;
  double t2390;
  double t2405;
  double t2571;
  double t2577;
  double t2597;
  double t2610;
  double t2557;
  double t2621;
  double t1587;
  double t1593;
  double t1605;
  double t2722;
  double t2782;
  double t2801;
  double t2952;
  double t2953;
  double t2963;
  double t2808;
  double t2837;
  double t2844;
  double t2854;
  double t2870;
  double t2623;
  double t2656;
  double t3261;
  double t3268;
  double t3279;
  double t3290;
  double t3321;
  double t3174;
  double t3175;
  double t3177;
  double t3576;
  double t3618;
  double t3623;
  double t3662;
  double t3667;
  double t3676;
  double t3691;
  double t3906;
  double t3938;
  double t3624;
  double t3631;
  double t3633;
  double t2483;
  double t2524;
  double t3143;
  double t3144;
  double t3153;
  double t4358;
  double t2871;
  double t4291;
  double t4301;
  double t4306;
  double t4330;
  double t3934;
  double t3940;
  double t3883;
  double t3894;
  double t3898;
  double t4456;
  double t3372;
  double t3379;
  double t4080;
  double t4095;
  double t5060;
  double t5091;
  double t5063;
  double t5069;
  double t5075;
  double t5288;
  double t5303;
  double t4006;
  double t4008;
  double t5167;
  double t5171;
  double t5178;
  double t5310;
  double t5320;
  double t5330;
  double t5398;
  double t5410;
  double t5430;
  double t2906;
  double t2911;
  double t2930;
  double t2935;
  double t5082;
  double t5099;
  double t5115;
  double t2855;
  double t2856;
  double t5377;
  double t5434;
  double t5453;
  double t5459;
  double t5471;
  double t5499;
  double t5531;
  double t3400;
  double t3412;
  double t5557;
  double t3271;
  double t3352;
  double t5674;
  double t5681;
  double t5683;
  double t4260;
  double t4270;
  double t4280;
  double t3207;
  double t3223;
  double t3075;
  double t3082;
  double t3506;
  double t3508;
  double t3521;
  double t3048;
  double t3052;
  double t3065;
  double t3849;
  double t3865;
  double t3873;
  double t6287;
  double t6293;
  double t6302;
  double t6320;
  double t6332;
  double t6252;
  double t6257;
  double t6259;
  double t6434;
  double t2564;
  double t2566;
  double t3986;
  double t3989;
  double t3915;
  double t3916;
  double t6625;
  double t6628;
  double t6635;
  double t6636;
  double t6638;
  double t6639;
  double t6640;
  double t4120;
  double t4127;
  double t6677;
  double t4032;
  double t4038;
  double t6078;
  double t6087;
  double t6096;
  double t3707;
  double t3708;
  double t3546;
  double t3554;
  double t6393;
  double t6407;
  double t6421;
  double t3387;
  double t3802;
  double t3812;
  double t6934;
  double t6525;
  double t6536;
  double t4469;
  double t4504;
  double t4534;
  double t4535;
  double t6996;
  double t6998;
  double t7007;
  double t7009;
  double t7011;
  double t7015;
  double t4728;
  double t4747;
  double t4807;
  double t4811;
  double t4660;
  double t4670;
  double t6923;
  double t6937;
  double t4377;
  double t4381;
  double t4391;
  double t4415;
  double t6817;
  double t6818;
  double t6823;
  double t6183;
  double t6184;
  double t6201;
  double t6436;
  double t6437;
  double t6896;
  double t6899;
  double t6903;
  double t6961;
  double t6962;
  double t6971;
  double t6594;
  double t6598;
  double t6600;
  t47 = Cos(var1[3]);
  t109 = Sin(var1[3]);
  t517 = Cos(var1[4]);
  t533 = Sin(var1[4]);
  t529 = -1.*var2[2]*t517*t109;
  t536 = -1.*var2[1]*t533;
  t614 = -1.*var1[1]*t517;
  t672 = var1[2]*t109*t533;
  t1358 = Cos(var1[5]);
  t1395 = Sin(var1[5]);
  t704 = var2[2]*t47*t517;
  t740 = var2[0]*t533;
  t741 = var1[0]*t517;
  t742 = -1.*var1[2]*t47*t533;
  t1512 = t47*t1358*t533;
  t1514 = t109*t1395;
  t1516 = t1512 + t1514;
  t1760 = -1.*t47*t1358;
  t1765 = -1.*t109*t533*t1395;
  t1773 = t1760 + t1765;
  t800 = -1.*var2[1]*t47*t517;
  t816 = var2[0]*t517*t109;
  t855 = var1[0]*t47*t517;
  t897 = var1[1]*t517*t109;
  t1050 = t855 + t897;
  t1110 = var2[3]*t1050;
  t1125 = var1[1]*t47*t533;
  t1167 = -1.*var1[0]*t109*t533;
  t1246 = -1.*var2[3]*t517*t109;
  t1252 = -1.*var2[4]*t47*t533;
  t1283 = t1246 + t1252;
  t1328 = var2[3]*t47*t517;
  t1331 = -1.*var2[4]*t109*t533;
  t1335 = t1328 + t1331;
  t1355 = -1.*var2[4]*t517;
  t2242 = Cos(var1[6]);
  t2094 = t1358*t109*t533;
  t2110 = -1.*t47*t1395;
  t2140 = t2094 + t2110;
  t2258 = Sin(var1[6]);
  t2036 = -1.*t1358*t109;
  t2041 = t47*t533*t1395;
  t2046 = t2036 + t2041;
  t2435 = -1.*t2242;
  t2437 = 1. + t2435;
  t2253 = t517*t1358*t2242;
  t2290 = -1.*t517*t1395*t2258;
  t2299 = t2253 + t2290;
  t1726 = -1.*t1358*t109*t533;
  t1733 = t47*t1395;
  t1737 = t1726 + t1733;
  t2472 = 0.07996*t2437;
  t2475 = -0.135*t2258;
  t2478 = 0. + t2472 + t2475;
  t2488 = 0.135*t2437;
  t2494 = 0.07996*t2258;
  t2500 = 0. + t2488 + t2494;
  t2373 = t47*t1358;
  t2390 = t109*t533*t1395;
  t2405 = t2373 + t2390;
  t2571 = -1.*var1[2];
  t2577 = -1.*t517*t1358*t2478;
  t2597 = -1.*t517*t1395*t2500;
  t2610 = 0. + t2571 + t2577 + t2597;
  t2557 = t2242*t1773;
  t2621 = t2242*t1516;
  t1587 = t1358*t109;
  t1593 = -1.*t47*t533*t1395;
  t1605 = t1587 + t1593;
  t2722 = t2140*t2478;
  t2782 = t2405*t2500;
  t2801 = 0. + var1[1] + t2722 + t2782;
  t2952 = t2242*t2140;
  t2953 = -1.*t2405*t2258;
  t2963 = t2952 + t2953;
  t2808 = -1.*t517*t2242*t1395;
  t2837 = -1.*t517*t1358*t2258;
  t2844 = t2808 + t2837;
  t2854 = t2801*t2844;
  t2870 = -1.*t2140*t2258;
  t2623 = -1.*t2046*t2258;
  t2656 = t2621 + t2623;
  t3261 = -0.135*t2242;
  t3268 = t3261 + t2494;
  t3279 = 0.07996*t2242;
  t3290 = 0.135*t2258;
  t3321 = t3279 + t3290;
  t3174 = -1.*t1358*t2242*t533;
  t3175 = t533*t1395*t2258;
  t3177 = t3174 + t3175;
  t3576 = t517*t1358*t2478;
  t3618 = t517*t1395*t2500;
  t3623 = 0. + var1[2] + t3576 + t3618;
  t3662 = -1.*var1[0];
  t3667 = -1.*t1516*t2478;
  t3676 = -1.*t2046*t2500;
  t3691 = 0. + t3662 + t3667 + t3676;
  t3906 = t3691*t2844;
  t3938 = -1.*t1516*t2258;
  t3624 = t47*t517*t1358*t2242;
  t3631 = -1.*t47*t517*t1395*t2258;
  t3633 = t3624 + t3631;
  t2483 = t1516*t2478;
  t2524 = t2046*t2500;
  t3143 = t517*t1358*t2242*t109;
  t3144 = -1.*t517*t109*t1395*t2258;
  t3153 = t3143 + t3144;
  t4358 = 0. + var1[0] + t2483 + t2524;
  t2871 = t2557 + t2870;
  t4291 = -1.*var1[1];
  t4301 = -1.*t2140*t2478;
  t4306 = -1.*t2405*t2500;
  t4330 = 0. + t4291 + t4301 + t4306;
  t3934 = t2242*t1605;
  t3940 = t3934 + t3938;
  t3883 = t2242*t1737;
  t3894 = -1.*t1773*t2258;
  t3898 = t3883 + t3894;
  t4456 = 0.08055*t2299;
  t3372 = -1.*t2242*t2405;
  t3379 = t3372 + t2870;
  t4080 = -1.*t2242*t2046;
  t4095 = t4080 + t3938;
  t5060 = Cos(var1[7]);
  t5091 = Sin(var1[7]);
  t5063 = t2242*t2405;
  t5069 = t2140*t2258;
  t5075 = t5063 + t5069;
  t5288 = -1.*t5060;
  t5303 = 1. + t5288;
  t4006 = t1773*t2258;
  t4008 = t2952 + t4006;
  t5167 = t517*t2242*t1395;
  t5171 = t517*t1358*t2258;
  t5178 = t5167 + t5171;
  t5310 = 0.135*t5303;
  t5320 = 0.08055*t5091;
  t5330 = 0. + t5310 + t5320;
  t5398 = -0.08055*t5303;
  t5410 = 0.135*t5091;
  t5430 = 0. + t5398 + t5410;
  t2906 = t1605*t2258;
  t2911 = t2621 + t2906;
  t2930 = t517*t1395*t2478;
  t2935 = -1.*t517*t1358*t2500;
  t5082 = t5060*t5075;
  t5099 = -1.*t517*t109*t5091;
  t5115 = t5082 + t5099;
  t2855 = t1773*t2478;
  t2856 = t2140*t2500;
  t5377 = t5075*t5330;
  t5434 = t517*t109*t5430;
  t5453 = 0. + var1[1] + t2722 + t2782 + t5377 + t5434;
  t5459 = -1.*t5060*t2299*t5453;
  t5471 = -1.*t5178*t5330;
  t5499 = t533*t5430;
  t5531 = 0. + t2571 + t2577 + t2597 + t5471 + t5499;
  t3400 = -1.*t517*t1358*t3268;
  t3412 = -1.*t517*t1395*t3321;
  t5557 = -1.*t2299*t5330;
  t3271 = t2140*t3268;
  t3352 = t2405*t3321;
  t5674 = t5060*t5178;
  t5681 = t533*t5091;
  t5683 = t5674 + t5681;
  t4260 = -1.*t2242*t533*t1395;
  t4270 = -1.*t1358*t533*t2258;
  t4280 = t4260 + t4270;
  t3207 = t1358*t533*t2478;
  t3223 = t533*t1395*t2500;
  t3075 = t517*t1358*t109*t2478;
  t3082 = t517*t109*t1395*t2500;
  t3506 = t517*t2242*t109*t1395;
  t3508 = t517*t1358*t109*t2258;
  t3521 = t3506 + t3508;
  t3048 = t47*t517*t2242*t1395;
  t3052 = t47*t517*t1358*t2258;
  t3065 = t3048 + t3052;
  t3849 = t2242*t2046;
  t3865 = t1516*t2258;
  t3873 = t3849 + t3865;
  t6287 = 0.135*t5060;
  t6293 = -0.08055*t5091;
  t6302 = t6287 + t6293;
  t6320 = 0.08055*t5060;
  t6332 = t6320 + t5410;
  t6252 = t5060*t3873;
  t6257 = -1.*t47*t517*t5091;
  t6259 = t6252 + t6257;
  t6434 = -1.*t517*t5060*t109;
  t2564 = t1737*t2258;
  t2566 = t2557 + t2564;
  t3986 = -1.*t517*t1395*t2478;
  t3989 = t517*t1358*t2500;
  t3915 = -1.*t1605*t2478;
  t3916 = -1.*t1516*t2500;
  t6625 = -1.*t3873*t5330;
  t6628 = -1.*t47*t517*t5430;
  t6635 = 0. + t3662 + t3667 + t3676 + t6625 + t6628;
  t6636 = -1.*t5060*t2299*t6635;
  t6638 = t5178*t5330;
  t6639 = -1.*t533*t5430;
  t6640 = 0. + var1[2] + t3576 + t3618 + t6638 + t6639;
  t4120 = t517*t1358*t3268;
  t4127 = t517*t1395*t3321;
  t6677 = t2299*t5330;
  t4032 = -1.*t1516*t3268;
  t4038 = -1.*t2046*t3321;
  t6078 = t5060*t4280;
  t6087 = t517*t5091;
  t6096 = t6078 + t6087;
  t3707 = -1.*t1358*t533*t2478;
  t3708 = -1.*t533*t1395*t2500;
  t3546 = -1.*t47*t517*t1358*t2478;
  t3554 = -1.*t47*t517*t1395*t2500;
  t6393 = t5060*t533;
  t6407 = -1.*t5178*t5091;
  t6421 = t6393 + t6407;
  t3387 = 0.08055*t2656;
  t3802 = -1.*t1737*t2478;
  t3812 = -1.*t1773*t2500;
  t6934 = t517*t109*t5091;
  t6525 = t3873*t5330;
  t6536 = t47*t517*t5430;
  t4469 = -1.*t1773*t2478;
  t4504 = -1.*t2140*t2500;
  t4534 = t1605*t2478;
  t4535 = t1516*t2500;
  t6996 = 0.08055*t2844;
  t6998 = 0. + var1[0] + t2483 + t2524 + t6525 + t6536;
  t7007 = -1.*t5075*t5330;
  t7009 = -1.*t517*t109*t5430;
  t7011 = 0. + t4291 + t4301 + t4306 + t7007 + t7009;
  t7015 = -0.01004*t2299*t5091;
  t4728 = -1.*t2140*t3268;
  t4747 = -1.*t2405*t3321;
  t4807 = t1516*t3268;
  t4811 = t2046*t3321;
  t4660 = t1737*t2478;
  t4670 = t1773*t2500;
  t6923 = t5060*t2566;
  t6937 = t6923 + t6934;
  t4377 = -1.*t517*t1358*t109*t2478;
  t4381 = -1.*t517*t109*t1395*t2500;
  t4391 = t47*t517*t1358*t2478;
  t4415 = t47*t517*t1395*t2500;
  t6817 = t5060*t3065;
  t6818 = t47*t533*t5091;
  t6823 = t6817 + t6818;
  t6183 = t5060*t3521;
  t6184 = t109*t533*t5091;
  t6201 = t6183 + t6184;
  t6436 = -1.*t5075*t5091;
  t6437 = t6434 + t6436;
  t6896 = -1.*t47*t517*t5060;
  t6899 = -1.*t3873*t5091;
  t6903 = t6896 + t6899;
  t6961 = t47*t517*t5060;
  t6962 = t3873*t5091;
  t6971 = t6961 + t6962;
  t6594 = -1.*t5060*t3873;
  t6598 = t47*t517*t5091;
  t6600 = t6594 + t6598;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t47*var2[2] + t109*var1[2]*var2[3];
  p_output1[25]=-1.*t109*var2[2] - 1.*t47*var1[2]*var2[3];
  p_output1[26]=t47*var2[0] + t109*var2[1] + (-1.*t109*var1[0] + t47*var1[1])*var2[3];
  p_output1[27]=-1.*t47*var2[3];
  p_output1[28]=-1.*t109*var2[3];
  p_output1[29]=0;
  p_output1[30]=t529 + t536 - 1.*t47*t517*var1[2]*var2[3] + (t614 + t672)*var2[4];
  p_output1[31]=t704 + t740 - 1.*t109*t517*var1[2]*var2[3] + (t741 + t742)*var2[4];
  p_output1[32]=t1110 + t800 + t816 + (t1125 + t1167)*var2[4];
  p_output1[33]=t1283;
  p_output1[34]=t1335;
  p_output1[35]=t1355;
  p_output1[36]=t529 + t536 + (-0.135*t1737 + 0.07996*t1773 - 1.*t47*t517*var1[2])*var2[3] + (-0.135*t1358*t47*t517 + 0.07996*t1395*t47*t517 + t614 + t672)*var2[4] + (0.07996*t1516 - 0.135*t1605)*var2[5];
  p_output1[37]=t704 + t740 + (-0.135*t1516 + 0.07996*t2046 - 1.*t109*t517*var1[2])*var2[3] + (-0.135*t109*t1358*t517 + 0.07996*t109*t1395*t517 + t741 + t742)*var2[4] + (-0.135*t1773 + 0.07996*t2140)*var2[5];
  p_output1[38]=t1110 + t800 + t816 + (t1125 + t1167 + 0.135*t1358*t533 - 0.07996*t1395*t533)*var2[4] + (0.07996*t1358*t517 + 0.135*t1395*t517)*var2[5];
  p_output1[39]=t1283;
  p_output1[40]=t1335;
  p_output1[41]=t1355;
  p_output1[42]=t2299*var2[1] + (-1.*t2140*t2242 + t2258*t2405)*var2[2] + (t2299*(t2483 + t2524) + 0.08055*t2566 + t2610*t2656 - 0.135*t109*t517)*var2[3] + (0.08055*t3065 + t2299*(t3075 + t3082) + t2610*t3153 + t2801*t3177 + t2963*(t3207 + t3223) - 0.135*t47*t533)*var2[4] + (t2854 + t2299*(t2855 + t2856) + t2610*t2871 + 0.08055*t2911 + (t2930 + t2935)*t2963)*var2[5] + (t2854 + t2299*(t3271 + t3352) + t2610*t3379 + t3387 + t2963*(t3400 + t3412))*var2[6];
  p_output1[43]=(-1.*t1358*t2242*t517 + t1395*t2258*t517)*var2[0] + t2656*var2[2] + (t2299*(t3802 + t3812) + 0.08055*t3873 + t3623*t3898 + 0.135*t47*t517)*var2[3] + (0.08055*t3521 + t2299*(t3546 + t3554) + t3623*t3633 + t3177*t3691 + t2656*(t3707 + t3708) - 0.135*t109*t533)*var2[4] + (t3906 + t2299*(t3915 + t3916) + t3623*t3940 + t2656*(t3986 + t3989) + 0.08055*t4008)*var2[5] + (0.08055*t2963 + t3906 + t2299*(t4032 + t4038) + t3623*t4095 + t2656*(t4120 + t4127))*var2[6];
  p_output1[44]=t2963*var2[0] + (-1.*t1516*t2242 + t2046*t2258)*var2[1] + (t2656*(t3667 + t3676) + t3898*t4330 + t2656*t4358 + t2963*(t4660 + t4670))*var2[3] + (0.08055*t4280 + t3633*t4330 + t3153*t4358 + t2656*(t4377 + t4381) + t2963*(t4391 + t4415) - 0.135*t517)*var2[4] + (t3940*t4330 + t2871*t4358 + t4456 + t2656*(t4469 + t4504) + t2963*(t4534 + t4535))*var2[5] + (t4095*t4330 + t3379*t4358 + t4456 + t2656*(t4728 + t4747) + t2963*(t4807 + t4811))*var2[6];
  p_output1[45]=t3898*var2[3] + t3633*var2[4] + t3940*var2[5] + t4095*var2[6];
  p_output1[46]=t2656*var2[3] + t3153*var2[4] + t2871*var2[5] + t3379*var2[6];
  p_output1[47]=t3177*var2[4] + t2844*var2[5] + t2844*var2[6];
  p_output1[48]=(-1.*t5060*t5178 - 1.*t5091*t533)*var2[1] + t5115*var2[2] + (0.08055*t3898 - 1.*t5531*t6259 - 0.01004*(t2566*t5091 + t6434) - 1.*t5683*(t2483 + t2524 + t6525 + t6536))*var2[3] + (0.08055*t3633 - 0.01004*(t3065*t5091 - 1.*t47*t5060*t533) - 1.*t5115*(t3207 + t3223 - 1.*t4280*t5330 + t517*t5430) - 1.*(t3075 + t3082 + t3521*t5330 - 1.*t109*t533*t5430)*t5683 - 1.*t5453*t6096 - 1.*t5531*t6201)*var2[4] + (0.08055*t3940 - 0.01004*t2911*t5091 + t5459 - 1.*t4008*t5060*t5531 - 1.*t5115*(t2930 + t2935 + t5557) - 1.*(t2855 + t2856 + t4008*t5330)*t5683)*var2[5] + (0.08055*t4095 - 0.01004*t2656*t5091 + t5459 - 1.*t2963*t5060*t5531 - 1.*t5115*(t3400 + t3412 + t5557) - 1.*(t3271 + t3352 + t2963*t5330)*t5683)*var2[6] + (-0.01004*t6259 - 1.*t5683*(t109*t517*t6302 + t5075*t6332) - 1.*t5115*(t533*t6302 - 1.*t5178*t6332) - 1.*t5453*t6421 - 1.*t5531*t6437)*var2[7];
  p_output1[49]=t5683*var2[0] + t6600*var2[2] + (t3387 - 1.*(t3802 + t3812 - 1.*t2566*t5330 + t5434)*t5683 - 1.*t6640*t6937 - 0.01004*t6971)*var2[3] + (0.08055*t3153 - 0.01004*(t3521*t5091 - 1.*t109*t5060*t533) - 1.*(t3546 + t3554 - 1.*t3065*t5330 + t47*t533*t5430)*t5683 - 1.*(t3707 + t3708 + t4280*t5330 - 1.*t517*t5430)*t6259 - 1.*t6096*t6635 - 1.*t6640*t6823)*var2[4] + (0.08055*t2871 - 0.01004*t4008*t5091 - 1.*(t3915 + t3916 - 1.*t2911*t5330)*t5683 + t6636 - 1.*t2911*t5060*t6640 - 1.*t6259*(t3986 + t3989 + t6677))*var2[5] + (0.08055*t3379 - 0.01004*t2963*t5091 - 1.*(t4032 + t4038 - 1.*t2656*t5330)*t5683 + t6636 - 1.*t2656*t5060*t6640 - 1.*t6259*(t4120 + t4127 + t6677))*var2[6] + (-0.01004*t5115 - 1.*t5683*(-1.*t47*t517*t6302 - 1.*t3873*t6332) - 1.*t6259*(-1.*t533*t6302 + t5178*t6332) - 1.*t6421*t6635 - 1.*t6640*t6903)*var2[7];
  p_output1[50]=(-1.*t5060*t5075 + t6934)*var2[0] + t6259*var2[1] + (-1.*t6259*(t3667 + t3676 + t6625 + t6628) - 1.*t6259*t6998 - 1.*t5115*(t4660 + t4670 + t2566*t5330 + t7009) - 1.*t6937*t7011)*var2[3] + (0.08055*t3177 - 0.01004*(t4280*t5091 - 1.*t5060*t517) - 1.*t5115*(t4391 + t4415 + t3065*t5330 - 1.*t47*t533*t5430) - 1.*(t4377 + t4381 - 1.*t3521*t5330 + t109*t533*t5430)*t6259 - 1.*t6201*t6998 - 1.*t6823*t7011)*var2[4] + (-1.*t5115*(t4534 + t4535 + t2911*t5330) - 1.*(t4469 + t4504 - 1.*t4008*t5330)*t6259 + t6996 - 1.*t4008*t5060*t6998 - 1.*t2911*t5060*t7011 + t7015)*var2[5] + (-1.*t5115*(t4807 + t4811 + t2656*t5330) - 1.*(t4728 + t4747 - 1.*t2963*t5330)*t6259 + t6996 - 1.*t2963*t5060*t6998 - 1.*t2656*t5060*t7011 + t7015)*var2[6] + (-0.01004*t5683 - 1.*t5115*(t47*t517*t6302 + t3873*t6332) - 1.*t6259*(-1.*t109*t517*t6302 - 1.*t5075*t6332) - 1.*t6437*t6998 - 1.*t6903*t7011)*var2[7];
  p_output1[51]=(-1.*t2566*t5060 + t5099)*var2[3] + (-1.*t3065*t5060 - 1.*t47*t5091*t533)*var2[4] - 1.*t2911*t5060*var2[5] - 1.*t2656*t5060*var2[6] + t6971*var2[7];
  p_output1[52]=t6600*var2[3] + (-1.*t3521*t5060 - 1.*t109*t5091*t533)*var2[4] - 1.*t4008*t5060*var2[5] - 1.*t2963*t5060*var2[6] + (t5075*t5091 + t109*t5060*t517)*var2[7];
  p_output1[53]=(-1.*t4280*t5060 - 1.*t5091*t517)*var2[4] - 1.*t2299*t5060*var2[5] - 1.*t2299*t5060*var2[6] + (t5091*t5178 - 1.*t5060*t533)*var2[7];
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_LeftThighJoint_mex.hh"

namespace SymExpression
{

void dJs_LeftThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
