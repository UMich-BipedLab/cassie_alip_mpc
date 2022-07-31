/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_LeftThigh_src.h"

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
  double t697;
  double t350;
  double t739;
  double t386;
  double t752;
  double t1474;
  double t244;
  double t78;
  double t1303;
  double t1500;
  double t2350;
  double t2568;
  double t2725;
  double t2961;
  double t2962;
  double t3756;
  double t3772;
  double t3788;
  double t3799;
  double t597;
  double t756;
  double t786;
  double t792;
  double t935;
  double t1247;
  double t1272;
  double t1321;
  double t1380;
  double t1598;
  double t1764;
  double t1804;
  double t1826;
  double t1947;
  double t2080;
  double t2158;
  double t2205;
  double t2218;
  double t2263;
  double t2266;
  double t2386;
  double t2404;
  double t2481;
  double t2726;
  double t2977;
  double t3057;
  double t3069;
  double t3089;
  double t3280;
  double t3373;
  double t3385;
  double t3404;
  double t3452;
  double t3549;
  double t3675;
  double t3715;
  double t3747;
  double t3785;
  double t4103;
  double t4152;
  double t4157;
  double t4185;
  double t4273;
  double t4284;
  double t4332;
  double t4365;
  double t4476;
  double t4491;
  double t4791;
  double t4795;
  double t4815;
  double t4585;
  double t4698;
  double t4762;
  double t2328;
  double t3668;
  double t4504;
  double t4581;
  double t5288;
  double t5289;
  double t5361;
  double t5366;
  double t5381;
  double t5383;
  double t5396;
  double t5425;
  double t5447;
  double t4888;
  double t4912;
  double t4915;
  double t4918;
  double t5729;
  double t5814;
  double t5835;
  double t5618;
  double t5694;
  double t5714;
  double t5106;
  double t5145;
  double t5158;
  double t5161;
  double t6155;
  double t6165;
  double t6250;
  double t6431;
  double t6432;
  double t6443;
  double t6321;
  double t6345;
  double t6368;
  double t1435;
  double t1511;
  double t1590;
  double t4779;
  double t4863;
  double t4880;
  double t6558;
  double t6568;
  double t6605;
  double t6639;
  double t6687;
  double t6702;
  double t6743;
  double t6755;
  double t6799;
  double t4991;
  double t5047;
  double t5070;
  double t5496;
  double t5498;
  double t5554;
  double t6633;
  double t6739;
  double t6806;
  double t6813;
  double t5715;
  double t5855;
  double t5941;
  double t6860;
  double t6909;
  double t6915;
  double t6918;
  double t6001;
  double t6022;
  double t6042;
  double t6976;
  double t6982;
  double t7011;
  double t7027;
  double t6257;
  double t6290;
  double t6291;
  double t6404;
  double t6449;
  double t6451;
  double t6480;
  double t6496;
  double t6516;
  double t7199;
  double t7203;
  double t7204;
  double t7206;
  double t7220;
  double t7231;
  double t7242;
  double t7248;
  double t7252;
  double t7255;
  double t7262;
  double t7273;
  double t7215;
  double t7250;
  double t7277;
  double t7302;
  double t7303;
  double t7304;
  double t7312;
  double t7315;
  double t7328;
  double t7334;
  double t7337;
  double t7347;
  double t7353;
  double t7366;
  double t7376;
  double t7390;
  double t7397;
  double t7415;
  double t7426;
  double t7442;
  double t7444;
  t697 = Cos(var1[3]);
  t350 = Cos(var1[5]);
  t739 = Sin(var1[4]);
  t386 = Sin(var1[3]);
  t752 = Sin(var1[5]);
  t1474 = Cos(var1[4]);
  t244 = Cos(var1[6]);
  t78 = Cos(var1[7]);
  t1303 = Sin(var1[6]);
  t1500 = Sin(var1[7]);
  t2350 = Cos(var1[8]);
  t2568 = t2350*t1500;
  t2725 = 0. + t2568;
  t2961 = Sin(var1[8]);
  t2962 = 0. + t2961;
  t3756 = -1.*t2350;
  t3772 = 0. + t3756;
  t3788 = t1500*t2961;
  t3799 = 0. + t3788;
  t597 = -1.*t350*t386;
  t756 = t697*t739*t752;
  t786 = t597 + t756;
  t792 = t244*t786;
  t935 = t697*t350*t739;
  t1247 = t386*t752;
  t1272 = t935 + t1247;
  t1321 = t1272*t1303;
  t1380 = t792 + t1321;
  t1598 = -1.*t244*t78;
  t1764 = 0. + t1598;
  t1804 = t1764*t752;
  t1826 = -1.*t78*t1303;
  t1947 = 0. + t1826;
  t2080 = t350*t1947;
  t2158 = 0. + t1804 + t2080;
  t2205 = t1474*t2158;
  t2218 = 0. + t1500;
  t2263 = -1.*t739*t2218;
  t2266 = 0. + t2205 + t2263;
  t2386 = t78*t2350;
  t2404 = 0. + t2386;
  t2481 = -1.*t2404*t739;
  t2726 = t1303*t2725;
  t2977 = t244*t2962;
  t3057 = 0. + t2726 + t2977;
  t3069 = t350*t3057;
  t3089 = t244*t2725;
  t3280 = -1.*t1303*t2962;
  t3373 = 0. + t3089 + t3280;
  t3385 = t752*t3373;
  t3404 = 0. + t3069 + t3385;
  t3452 = t1474*t3404;
  t3549 = 0. + t2481 + t3452;
  t3675 = t78*t2961;
  t3715 = 0. + t3675;
  t3747 = -1.*t739*t3715;
  t3785 = -1.*t3772*t1303;
  t4103 = t244*t3799;
  t4152 = 0. + t3785 + t4103;
  t4157 = t752*t4152;
  t4185 = t244*t3772;
  t4273 = t1303*t3799;
  t4284 = 0. + t4185 + t4273;
  t4332 = t350*t4284;
  t4365 = 0. + t4157 + t4332;
  t4476 = t1474*t4365;
  t4491 = 0. + t3747 + t4476;
  t4791 = t244*t1272;
  t4795 = -1.*t786*t1303;
  t4815 = t4791 + t4795;
  t4585 = t697*t1474*t78;
  t4698 = t1380*t1500;
  t4762 = t4585 + t4698;
  t2328 = 0.0498*t2266;
  t3668 = -0.000019*t3549;
  t4504 = -0.0117*t4491;
  t4581 = t2328 + t3668 + t4504;
  t5288 = t697*t350;
  t5289 = t386*t739*t752;
  t5361 = t5288 + t5289;
  t5366 = t244*t5361;
  t5381 = t350*t386*t739;
  t5383 = -1.*t697*t752;
  t5396 = t5381 + t5383;
  t5425 = t5396*t1303;
  t5447 = t5366 + t5425;
  t4888 = -0.000019*t2266;
  t4912 = 0.0563*t3549;
  t4915 = 0.000284*t4491;
  t4918 = t4888 + t4912 + t4915;
  t5729 = t244*t5396;
  t5814 = -1.*t5361*t1303;
  t5835 = t5729 + t5814;
  t5618 = t1474*t78*t386;
  t5694 = t5447*t1500;
  t5714 = t5618 + t5694;
  t5106 = -0.0117*t2266;
  t5145 = 0.000284*t3549;
  t5158 = 0.018*t4491;
  t5161 = t5106 + t5145 + t5158;
  t6155 = t1474*t244*t752;
  t6165 = t1474*t350*t1303;
  t6250 = t6155 + t6165;
  t6431 = t1474*t350*t244;
  t6432 = -1.*t1474*t752*t1303;
  t6443 = t6431 + t6432;
  t6321 = -1.*t78*t739;
  t6345 = t6250*t1500;
  t6368 = t6321 + t6345;
  t1435 = -1.*t78*t1380;
  t1511 = t697*t1474*t1500;
  t1590 = t1435 + t1511;
  t4779 = t2350*t4762;
  t4863 = t4815*t2961;
  t4880 = t4779 + t4863;
  t6558 = t350*t1764;
  t6568 = -1.*t752*t1947;
  t6605 = 0. + t6558 + t6568;
  t6639 = -1.*t752*t3057;
  t6687 = t350*t3373;
  t6702 = 0. + t6639 + t6687;
  t6743 = t350*t4152;
  t6755 = -1.*t752*t4284;
  t6799 = 0. + t6743 + t6755;
  t4991 = -1.*t2350*t4815;
  t5047 = t4762*t2961;
  t5070 = t4991 + t5047;
  t5496 = -1.*t78*t5447;
  t5498 = t1474*t386*t1500;
  t5554 = t5496 + t5498;
  t6633 = 0.0498*t6605;
  t6739 = -0.000019*t6702;
  t6806 = -0.0117*t6799;
  t6813 = t6633 + t6739 + t6806;
  t5715 = t2350*t5714;
  t5855 = t5835*t2961;
  t5941 = t5715 + t5855;
  t6860 = -0.000019*t6605;
  t6909 = 0.0563*t6702;
  t6915 = 0.000284*t6799;
  t6918 = t6860 + t6909 + t6915;
  t6001 = -1.*t2350*t5835;
  t6022 = t5714*t2961;
  t6042 = t6001 + t6022;
  t6976 = -0.0117*t6605;
  t6982 = 0.000284*t6702;
  t7011 = 0.018*t6799;
  t7027 = t6976 + t6982 + t7011;
  t6257 = -1.*t78*t6250;
  t6290 = -1.*t739*t1500;
  t6291 = t6257 + t6290;
  t6404 = t2350*t6368;
  t6449 = t6443*t2961;
  t6451 = t6404 + t6449;
  t6480 = -1.*t2350*t6443;
  t6496 = t6368*t2961;
  t6516 = t6480 + t6496;
  t7199 = -0.000019*t2404;
  t7203 = 0.0498*t2218;
  t7204 = -0.0117*t3715;
  t7206 = t7199 + t7203 + t7204;
  t7220 = 0.0563*t2404;
  t7231 = -0.000019*t2218;
  t7242 = 0.000284*t3715;
  t7248 = t7220 + t7231 + t7242;
  t7252 = 0.000284*t2404;
  t7255 = -0.0117*t2218;
  t7262 = 0.018*t3715;
  t7273 = t7252 + t7255 + t7262;
  t7215 = t1590*t7206;
  t7250 = t4880*t7248;
  t7277 = t5070*t7273;
  t7302 = t7215 + t7250 + t7277;
  t7303 = t5554*t7206;
  t7304 = t5941*t7248;
  t7312 = t6042*t7273;
  t7315 = t7303 + t7304 + t7312;
  t7328 = t6291*t7206;
  t7334 = t6451*t7248;
  t7337 = t6516*t7273;
  t7347 = t7328 + t7334 + t7337;
  t7353 = -0.0117*t3772;
  t7366 = -0.000019*t2962;
  t7376 = t7353 + t7366;
  t7390 = 0.018*t3772;
  t7397 = 0.000284*t2962;
  t7415 = t7390 + t7397;
  t7426 = 0.000284*t3772;
  t7442 = 0.0563*t2962;
  t7444 = t7426 + t7442;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1590*t4581 + t4880*t4918 + t5070*t5161;
  p_output1[10]=t4581*t5554 + t4918*t5941 + t5161*t6042;
  p_output1[11]=t4581*t6291 + t4918*t6451 + t5161*t6516;
  p_output1[12]=t1590*t6813 + t4880*t6918 + t5070*t7027;
  p_output1[13]=t5554*t6813 + t5941*t6918 + t6042*t7027;
  p_output1[14]=t6291*t6813 + t6451*t6918 + t6516*t7027;
  p_output1[15]=t7302;
  p_output1[16]=t7315;
  p_output1[17]=t7347;
  p_output1[18]=t7302;
  p_output1[19]=t7315;
  p_output1[20]=t7347;
  p_output1[21]=t1590*t7376 + t5070*t7415 + t4880*t7444;
  p_output1[22]=t5554*t7376 + t6042*t7415 + t5941*t7444;
  p_output1[23]=t6291*t7376 + t6516*t7415 + t6451*t7444;
  p_output1[24]=0.0498*t1590 - 0.000019*t4880 - 0.0117*t5070;
  p_output1[25]=0.0498*t5554 - 0.000019*t5941 - 0.0117*t6042;
  p_output1[26]=0.0498*t6291 - 0.000019*t6451 - 0.0117*t6516;
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
}



void Jdq_AMWorld_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
