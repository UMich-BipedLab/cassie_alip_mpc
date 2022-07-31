/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:44 GMT-04:00
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
  double t726;
  double t254;
  double t729;
  double t454;
  double t844;
  double t1335;
  double t142;
  double t252;
  double t704;
  double t882;
  double t973;
  double t1056;
  double t1108;
  double t1155;
  double t1186;
  double t1193;
  double t1289;
  double t1291;
  double t1395;
  double t1451;
  double t1471;
  double t1556;
  double t1777;
  double t1819;
  double t1836;
  double t1884;
  double t1594;
  double t1669;
  double t2256;
  double t2264;
  double t2268;
  double t2191;
  double t2193;
  double t2198;
  double t2556;
  double t2558;
  double t2562;
  double t2584;
  double t2598;
  double t2601;
  double t2602;
  double t2632;
  double t2655;
  double t2387;
  double t2839;
  double t2967;
  double t2882;
  double t2930;
  double t1472;
  double t1532;
  double t1537;
  double t3309;
  double t3314;
  double t3329;
  double t3410;
  double t3411;
  double t3420;
  double t3446;
  double t3448;
  double t3464;
  double t3465;
  double t3484;
  double t3488;
  double t1293;
  double t1409;
  double t1423;
  double t2053;
  double t2060;
  double t2081;
  double t2135;
  double t2149;
  double t2168;
  double t2022;
  double t2026;
  double t2034;
  double t1931;
  double t1937;
  double t1867;
  double t1888;
  double t1969;
  double t1976;
  double t2326;
  double t2395;
  double t2425;
  double t2455;
  double t2471;
  double t2209;
  double t2279;
  double t2283;
  double t2660;
  double t2677;
  double t2727;
  double t3164;
  double t3183;
  double t3185;
  double t3187;
  double t3208;
  double t3215;
  double t3112;
  double t3117;
  double t3133;
  double t3016;
  double t3026;
  double t2996;
  double t3071;
  double t3077;
  double t1540;
  double t1694;
  double t1711;
  double t2771;
  double t2802;
  double t2812;
  double t3330;
  double t3338;
  double t3347;
  double t4192;
  double t4226;
  double t4259;
  double t3601;
  double t3602;
  double t3603;
  double t3612;
  double t3640;
  double t3676;
  double t3548;
  double t3573;
  double t3580;
  double t3368;
  double t3369;
  double t3381;
  double t4994;
  double t4997;
  double t4893;
  double t4897;
  double t4898;
  double t4936;
  double t4937;
  double t3776;
  double t3778;
  double t3781;
  double t5042;
  double t5054;
  double t5059;
  double t5067;
  double t5072;
  double t5074;
  double t5087;
  double t5094;
  double t5096;
  double t3793;
  double t3796;
  double t3797;
  double t4998;
  double t5007;
  double t5033;
  double t5041;
  double t5043;
  double t4822;
  double t3727;
  double t3738;
  double t3748;
  double t5451;
  double t5464;
  double t3830;
  double t3831;
  double t3836;
  double t3867;
  double t3871;
  double t3888;
  double t4772;
  double t4777;
  double t4783;
  double t4812;
  double t4836;
  double t3987;
  double t3997;
  double t4014;
  double t5160;
  double t5210;
  double t5215;
  double t5222;
  double t5226;
  double t4045;
  double t4059;
  double t4071;
  double t3925;
  double t3931;
  double t3984;
  double t5612;
  double t5625;
  double t5634;
  double t5642;
  double t5658;
  double t4126;
  double t4137;
  double t4139;
  double t6407;
  double t6410;
  double t6412;
  double t6413;
  double t6422;
  double t6423;
  double t6425;
  double t6429;
  double t6437;
  double t4294;
  double t4296;
  double t4301;
  double t4270;
  double t4279;
  double t4288;
  t726 = Cos(var1[3]);
  t254 = Cos(var1[5]);
  t729 = Sin(var1[4]);
  t454 = Sin(var1[3]);
  t844 = Sin(var1[5]);
  t1335 = Cos(var1[4]);
  t142 = Cos(var1[7]);
  t252 = Cos(var1[6]);
  t704 = -1.*t254*t454;
  t882 = t726*t729*t844;
  t973 = t704 + t882;
  t1056 = t252*t973;
  t1108 = t726*t254*t729;
  t1155 = t454*t844;
  t1186 = t1108 + t1155;
  t1193 = Sin(var1[6]);
  t1289 = t1186*t1193;
  t1291 = t1056 + t1289;
  t1395 = Sin(var1[7]);
  t1451 = Sin(var1[8]);
  t1471 = Cos(var1[8]);
  t1556 = t252*t1186;
  t1777 = t254*t454;
  t1819 = -1.*t726*t729*t844;
  t1836 = t1777 + t1819;
  t1884 = -1.*t1186*t1193;
  t1594 = -1.*t973*t1193;
  t1669 = t1556 + t1594;
  t2256 = -1.*t726*t254;
  t2264 = -1.*t454*t729*t844;
  t2268 = t2256 + t2264;
  t2191 = -1.*t254*t454*t729;
  t2193 = t726*t844;
  t2198 = t2191 + t2193;
  t2556 = t726*t254;
  t2558 = t454*t729*t844;
  t2562 = t2556 + t2558;
  t2584 = t252*t2562;
  t2598 = t254*t454*t729;
  t2601 = -1.*t726*t844;
  t2602 = t2598 + t2601;
  t2632 = t2602*t1193;
  t2655 = t2584 + t2632;
  t2387 = t252*t2268;
  t2839 = t252*t2602;
  t2967 = -1.*t2602*t1193;
  t2882 = -1.*t2562*t1193;
  t2930 = t2839 + t2882;
  t1472 = t726*t1335*t142;
  t1532 = t1291*t1395;
  t1537 = t1472 + t1532;
  t3309 = t1335*t252*t844;
  t3314 = t1335*t254*t1193;
  t3329 = t3309 + t3314;
  t3410 = t1335*t254*t252;
  t3411 = -1.*t1335*t844*t1193;
  t3420 = t3410 + t3411;
  t3446 = -1.*t1335*t252*t844;
  t3448 = -1.*t1335*t254*t1193;
  t3464 = t3446 + t3448;
  t3465 = -1.*t1471*t3464;
  t3484 = t3420*t1395*t1451;
  t3488 = t3465 + t3484;
  t1293 = t142*t1291;
  t1409 = -1.*t726*t1335*t1395;
  t1423 = t1293 + t1409;
  t2053 = -1.*t726*t142*t729;
  t2060 = t726*t1335*t252*t844;
  t2081 = t726*t1335*t254*t1193;
  t2135 = t2060 + t2081;
  t2149 = t2135*t1395;
  t2168 = t2053 + t2149;
  t2022 = t726*t1335*t254*t252;
  t2026 = -1.*t726*t1335*t844*t1193;
  t2034 = t2022 + t2026;
  t1931 = t1836*t1193;
  t1937 = t1556 + t1931;
  t1867 = t252*t1836;
  t1888 = t1867 + t1884;
  t1969 = -1.*t252*t973;
  t1976 = t1969 + t1884;
  t2326 = -1.*t1335*t142*t454;
  t2395 = t2198*t1193;
  t2425 = t2387 + t2395;
  t2455 = t2425*t1395;
  t2471 = t2326 + t2455;
  t2209 = t252*t2198;
  t2279 = -1.*t2268*t1193;
  t2283 = t2209 + t2279;
  t2660 = t142*t2655;
  t2677 = -1.*t1335*t454*t1395;
  t2727 = t2660 + t2677;
  t3164 = -1.*t142*t454*t729;
  t3183 = t1335*t252*t454*t844;
  t3185 = t1335*t254*t454*t1193;
  t3187 = t3183 + t3185;
  t3208 = t3187*t1395;
  t3215 = t3164 + t3208;
  t3112 = t1335*t254*t252*t454;
  t3117 = -1.*t1335*t454*t844*t1193;
  t3133 = t3112 + t3117;
  t3016 = t2268*t1193;
  t3026 = t2839 + t3016;
  t2996 = t2387 + t2967;
  t3071 = -1.*t252*t2562;
  t3077 = t3071 + t2967;
  t1540 = t1471*t1537;
  t1694 = t1669*t1451;
  t1711 = t1540 + t1694;
  t2771 = t1335*t142*t454;
  t2802 = t2655*t1395;
  t2812 = t2771 + t2802;
  t3330 = t142*t3329;
  t3338 = t729*t1395;
  t3347 = t3330 + t3338;
  t4192 = t1471*t3420*t1395;
  t4226 = t3464*t1451;
  t4259 = t4192 + t4226;
  t3601 = -1.*t1335*t142;
  t3602 = -1.*t252*t729*t844;
  t3603 = -1.*t254*t729*t1193;
  t3612 = t3602 + t3603;
  t3640 = t3612*t1395;
  t3676 = t3601 + t3640;
  t3548 = -1.*t254*t252*t729;
  t3573 = t729*t844*t1193;
  t3580 = t3548 + t3573;
  t3368 = -1.*t142*t729;
  t3369 = t3329*t1395;
  t3381 = t3368 + t3369;
  t4994 = -1.*t252;
  t4997 = 1. + t4994;
  t4893 = -1.*t1471;
  t4897 = 1. + t4893;
  t4898 = -0.08055*t4897;
  t4936 = -0.01004*t1451;
  t4937 = 0. + t4898 + t4936;
  t3776 = t1471*t1937*t1395;
  t3778 = t1888*t1451;
  t3781 = t3776 + t3778;
  t5042 = 0.07996*t1193;
  t5054 = -1.*t142;
  t5059 = 1. + t5054;
  t5067 = 0.135*t5059;
  t5072 = 0.08055*t1395;
  t5074 = 0. + t5067 + t5072;
  t5087 = -0.01004*t4897;
  t5094 = 0.08055*t1451;
  t5096 = 0. + t5087 + t5094;
  t3793 = t1471*t1669*t1395;
  t3796 = t1976*t1451;
  t3797 = t3793 + t3796;
  t4998 = 0.07996*t4997;
  t5007 = -0.135*t1193;
  t5033 = 0. + t4998 + t5007;
  t5041 = 0.135*t4997;
  t5043 = 0. + t5041 + t5042;
  t4822 = 0.135*t1395;
  t3727 = t1471*t2168;
  t3738 = t2034*t1451;
  t3748 = t3727 + t3738;
  t5451 = -0.08055*t5059;
  t5464 = 0. + t5451 + t4822;
  t3830 = t1471*t2471;
  t3831 = t2283*t1451;
  t3836 = t3830 + t3831;
  t3867 = t1471*t1669;
  t3871 = -1.*t1537*t1451;
  t3888 = t3867 + t3871;
  t4772 = 0.135*t142;
  t4777 = -0.08055*t1395;
  t4783 = t4772 + t4777;
  t4812 = 0.08055*t142;
  t4836 = t4812 + t4822;
  t3987 = t1471*t3026*t1395;
  t3997 = t2996*t1451;
  t4014 = t3987 + t3997;
  t5160 = -0.135*t252;
  t5210 = t5160 + t5042;
  t5215 = 0.07996*t252;
  t5222 = 0.135*t1193;
  t5226 = t5215 + t5222;
  t4045 = t1471*t2930*t1395;
  t4059 = t3077*t1451;
  t4071 = t4045 + t4059;
  t3925 = t1471*t3215;
  t3931 = t3133*t1451;
  t3984 = t3925 + t3931;
  t5612 = -0.01004*t1471;
  t5625 = -0.08055*t1451;
  t5634 = t5612 + t5625;
  t5642 = 0.08055*t1471;
  t5658 = t5642 + t4936;
  t4126 = t1471*t2930;
  t4137 = -1.*t2812*t1451;
  t4139 = t4126 + t4137;
  t6407 = 0.1708*t142*t3420;
  t6410 = t3420*t5074;
  t6412 = t3420*t1395*t4937;
  t6413 = t3464*t5096;
  t6422 = -0.08045*t4259;
  t6423 = t1471*t3464;
  t6425 = -1.*t3420*t1395*t1451;
  t6429 = t6423 + t6425;
  t6437 = -0.06984*t6429;
  t4294 = t1471*t3420;
  t4296 = -1.*t3381*t1451;
  t4301 = t4294 + t4296;
  t4270 = t1471*t3676;
  t4279 = t3580*t1451;
  t4288 = t4270 + t4279;
  p_output1[0]=(-1.*t1471*t2283 + t1451*t2471)*var2[3] + (-1.*t1471*t2034 + t1451*t2168)*var2[4] + (-1.*t1471*t1888 + t1395*t1451*t1937)*var2[5] + (t1395*t1451*t1669 - 1.*t1471*t1976)*var2[6] + t1423*t1451*var2[7] + t1711*var2[8];
  p_output1[1]=(t1451*t1537 - 1.*t1471*t1669)*var2[3] + (-1.*t1471*t3133 + t1451*t3215)*var2[4] + (-1.*t1471*t2996 + t1395*t1451*t3026)*var2[5] + (t1395*t1451*t2930 - 1.*t1471*t3077)*var2[6] + t1451*t2727*var2[7] + (t1471*t2812 + t1451*t2930)*var2[8];
  p_output1[2]=(-1.*t1471*t3580 + t1451*t3676)*var2[4] + t3488*var2[5] + t3488*var2[6] + t1451*t3347*var2[7] + (t1471*t3381 + t1451*t3420)*var2[8];
  p_output1[3]=0;
  p_output1[4]=t3836*var2[3] + t3748*var2[4] + t3781*var2[5] + t3797*var2[6] + t1423*t1471*var2[7] + t3888*var2[8];
  p_output1[5]=t1711*var2[3] + t3984*var2[4] + t4014*var2[5] + t4071*var2[6] + t1471*t2727*var2[7] + t4139*var2[8];
  p_output1[6]=t4288*var2[4] + t4259*var2[5] + t4259*var2[6] + t1471*t3347*var2[7] + t4301*var2[8];
  p_output1[7]=0;
  p_output1[8]=(-1.*t142*t2425 + t2677)*var2[3] + (-1.*t142*t2135 - 1.*t1395*t726*t729)*var2[4] - 1.*t142*t1937*var2[5] - 1.*t142*t1669*var2[6] + t1537*var2[7];
  p_output1[9]=(-1.*t1291*t142 + t1335*t1395*t726)*var2[3] + (-1.*t142*t3187 - 1.*t1395*t454*t729)*var2[4] - 1.*t142*t3026*var2[5] - 1.*t142*t2930*var2[6] + t2812*var2[7];
  p_output1[10]=(-1.*t1335*t1395 - 1.*t142*t3612)*var2[4] - 1.*t142*t3420*var2[5] - 1.*t142*t3420*var2[6] + t3381*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.06984*(t1471*t2283 - 1.*t1451*t2471) - 0.08045*t3836 + 0.1708*(t142*t2425 + t1335*t1395*t454) + t2471*t4937 + t2198*t5033 + t2268*t5043 + t2425*t5074 + t2283*t5096 - 1.*t1335*t454*t5464)*var2[3] + (-0.06984*(t1471*t2034 - 1.*t1451*t2168) - 0.08045*t3748 + t2168*t4937 + t2135*t5074 + t2034*t5096 + t1335*t254*t5033*t726 - 1.*t5464*t726*t729 + 0.1708*(t142*t2135 + t1395*t726*t729) + t1335*t5043*t726*t844)*var2[4] + (0.1708*t142*t1937 - 0.06984*(t1471*t1888 - 1.*t1395*t1451*t1937) - 0.08045*t3781 + t1395*t1937*t4937 + t1836*t5033 + t1186*t5043 + t1937*t5074 + t1888*t5096)*var2[5] + (0.1708*t142*t1669 - 0.06984*(-1.*t1395*t1451*t1669 + t1471*t1976) - 0.08045*t3797 + t1395*t1669*t4937 + t1669*t5074 + t1976*t5096 + t1186*t5210 + t5226*t973)*var2[6] + (0.06984*t1423*t1451 - 0.08045*t1423*t1471 + t1291*t4836 + t1423*t4937 + t1335*t4783*t726 + 0.1708*(-1.*t1291*t1395 - 1.*t1335*t142*t726))*var2[7] + (-0.06984*(-1.*t1471*t1537 - 1.*t1451*t1669) - 0.08045*t3888 + t1537*t5634 + t1669*t5658)*var2[8];
  p_output1[13]=var2[1] + (0.1708*t1423 - 0.08045*t1711 - 0.06984*t3888 + t1537*t4937 + t1186*t5033 + t1291*t5074 + t1669*t5096 + t1335*t5464*t726 + t5043*t973)*var2[3] + (-0.06984*(t1471*t3133 - 1.*t1451*t3215) - 0.08045*t3984 + t3215*t4937 + t1335*t254*t454*t5033 + t3187*t5074 + t3133*t5096 - 1.*t454*t5464*t729 + 0.1708*(t142*t3187 + t1395*t454*t729) + t1335*t454*t5043*t844)*var2[4] + (0.1708*t142*t3026 - 0.06984*(t1471*t2996 - 1.*t1395*t1451*t3026) - 0.08045*t4014 + t1395*t3026*t4937 + t2268*t5033 + t2602*t5043 + t3026*t5074 + t2996*t5096)*var2[5] + (0.1708*t142*t2930 - 0.06984*(-1.*t1395*t1451*t2930 + t1471*t3077) - 0.08045*t4071 + t1395*t2930*t4937 + t2930*t5074 + t3077*t5096 + t2602*t5210 + t2562*t5226)*var2[6] + (0.1708*(t2326 - 1.*t1395*t2655) + 0.06984*t1451*t2727 - 0.08045*t1471*t2727 + t1335*t454*t4783 + t2655*t4836 + t2727*t4937)*var2[7] + (-0.06984*(-1.*t1471*t2812 - 1.*t1451*t2930) - 0.08045*t4139 + t2812*t5634 + t2930*t5658)*var2[8];
  p_output1[14]=var2[2] + (0.1708*(t1335*t1395 + t142*t3612) - 0.06984*(t1471*t3580 - 1.*t1451*t3676) - 0.08045*t4288 + t3676*t4937 + t3612*t5074 + t3580*t5096 - 1.*t1335*t5464 - 1.*t254*t5033*t729 - 1.*t5043*t729*t844)*var2[4] + (t1335*t254*t5043 + t6407 + t6410 + t6412 + t6413 + t6422 + t6437 - 1.*t1335*t5033*t844)*var2[5] + (t1335*t254*t5210 + t6407 + t6410 + t6412 + t6413 + t6422 + t6437 + t1335*t5226*t844)*var2[6] + (0.06984*t1451*t3347 - 0.08045*t1471*t3347 + t3329*t4836 + t3347*t4937 - 1.*t4783*t729 + 0.1708*(-1.*t1395*t3329 + t142*t729))*var2[7] + (-0.06984*(-1.*t1471*t3381 - 1.*t1451*t3420) - 0.08045*t4301 + t3381*t5634 + t3420*t5658)*var2[8];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftThigh_mex.hh"

namespace SymExpression
{

void dT_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
