/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_RightKnee_src.h"

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
  double t694;
  double t739;
  double t756;
  double t529;
  double t564;
  double t680;
  double t959;
  double t1747;
  double t1706;
  double t1738;
  double t1766;
  double t764;
  double t433;
  double t1742;
  double t1809;
  double t1814;
  double t1886;
  double t1893;
  double t1959;
  double t2019;
  double t2071;
  double t1199;
  double t2537;
  double t2565;
  double t2566;
  double t2790;
  double t2823;
  double t3070;
  double t3303;
  double t445;
  double t540;
  double t771;
  double t784;
  double t833;
  double t970;
  double t1069;
  double t1350;
  double t1373;
  double t1384;
  double t1459;
  double t1833;
  double t1841;
  double t1878;
  double t1988;
  double t2169;
  double t2220;
  double t2241;
  double t2251;
  double t2275;
  double t2280;
  double t2303;
  double t2315;
  double t2351;
  double t2486;
  double t2600;
  double t2610;
  double t2682;
  double t2782;
  double t2872;
  double t2880;
  double t2881;
  double t2900;
  double t2907;
  double t2974;
  double t2977;
  double t2995;
  double t3012;
  double t3042;
  double t3275;
  double t3360;
  double t3364;
  double t3448;
  double t3449;
  double t3454;
  double t3390;
  double t3497;
  double t3584;
  double t3874;
  double t3888;
  double t3917;
  double t3958;
  double t3965;
  double t3976;
  double t3948;
  double t3997;
  double t4016;
  double t4070;
  double t4170;
  double t4195;
  double t1557;
  double t2530;
  double t3047;
  double t3049;
  double t3659;
  double t3682;
  double t3691;
  double t3798;
  double t4609;
  double t4616;
  double t4687;
  double t4713;
  double t4723;
  double t4828;
  double t4710;
  double t4840;
  double t4844;
  double t4945;
  double t4961;
  double t4985;
  double t5002;
  double t5018;
  double t5040;
  double t4296;
  double t4366;
  double t4379;
  double t4387;
  double t4996;
  double t5051;
  double t5064;
  double t5087;
  double t5126;
  double t5203;
  double t5454;
  double t5457;
  double t5501;
  double t5540;
  double t5592;
  double t5595;
  double t5618;
  double t5619;
  double t5624;
  double t5596;
  double t5630;
  double t5661;
  double t5682;
  double t5717;
  double t5732;
  double t3241;
  double t3588;
  double t3620;
  double t5820;
  double t5823;
  double t5828;
  double t5836;
  double t5841;
  double t5854;
  double t5881;
  double t5882;
  double t5905;
  double t4030;
  double t4223;
  double t4248;
  double t4400;
  double t4401;
  double t4476;
  double t5834;
  double t5857;
  double t5918;
  double t5919;
  double t4605;
  double t4846;
  double t4899;
  double t5958;
  double t5994;
  double t6007;
  double t6008;
  double t5082;
  double t5214;
  double t5270;
  double t6029;
  double t6034;
  double t6042;
  double t6043;
  double t5297;
  double t5332;
  double t5378;
  double t5452;
  double t5506;
  double t5512;
  double t5676;
  double t5734;
  double t5735;
  double t5753;
  double t5769;
  double t5790;
  double t6104;
  double t6108;
  double t6115;
  double t6120;
  double t6143;
  double t6147;
  double t6149;
  double t6154;
  double t6180;
  double t6182;
  double t6187;
  double t6188;
  double t6128;
  double t6171;
  double t6194;
  double t6199;
  double t6205;
  double t6207;
  double t6223;
  double t6230;
  double t6242;
  double t6255;
  double t6258;
  double t6265;
  double t6267;
  double t6269;
  double t6274;
  double t6286;
  double t6287;
  double t6288;
  double t6300;
  double t6301;
  double t6305;
  double t6352;
  double t6353;
  double t6356;
  double t6359;
  double t6370;
  double t6381;
  double t6384;
  double t6390;
  double t6393;
  double t6395;
  double t6400;
  double t6402;
  t694 = Cos(var1[14]);
  t739 = -1.*t694;
  t756 = 0. + t739;
  t529 = Sin(var1[4]);
  t564 = Cos(var1[4]);
  t680 = Cos(var1[5]);
  t959 = Cos(var1[13]);
  t1747 = Cos(var1[15]);
  t1706 = Cos(var1[16]);
  t1738 = Sin(var1[15]);
  t1766 = Sin(var1[16]);
  t764 = Sin(var1[13]);
  t433 = Sin(var1[14]);
  t1742 = t1706*t1738;
  t1809 = t1747*t1766;
  t1814 = 0. + t1742 + t1809;
  t1886 = -1.*t1747*t1706;
  t1893 = t1738*t1766;
  t1959 = 0. + t1886 + t1893;
  t2019 = t433*t1814;
  t2071 = 0. + t2019;
  t1199 = Sin(var1[5]);
  t2537 = t1747*t1706;
  t2565 = -1.*t1738*t1766;
  t2566 = 0. + t2537 + t2565;
  t2790 = t433*t2566;
  t2823 = 0. + t2790;
  t3070 = Cos(var1[3]);
  t3303 = Sin(var1[3]);
  t445 = 0. + t433;
  t540 = -1.*t445*t529;
  t771 = t756*t764;
  t784 = 0. + t771;
  t833 = t680*t784;
  t970 = t959*t756;
  t1069 = 0. + t970;
  t1350 = t1069*t1199;
  t1373 = 0. + t833 + t1350;
  t1384 = t564*t1373;
  t1459 = 0. + t540 + t1384;
  t1833 = t694*t1814;
  t1841 = 0. + t1833;
  t1878 = -1.*t1841*t529;
  t1988 = t959*t1959;
  t2169 = t764*t2071;
  t2220 = 0. + t1988 + t2169;
  t2241 = t680*t2220;
  t2251 = -1.*t764*t1959;
  t2275 = t959*t2071;
  t2280 = 0. + t2251 + t2275;
  t2303 = t2280*t1199;
  t2315 = 0. + t2241 + t2303;
  t2351 = t564*t2315;
  t2486 = 0. + t1878 + t2351;
  t2600 = t694*t2566;
  t2610 = 0. + t2600;
  t2682 = -1.*t2610*t529;
  t2782 = t959*t1814;
  t2872 = t764*t2823;
  t2880 = 0. + t2782 + t2872;
  t2881 = t680*t2880;
  t2900 = -1.*t764*t1814;
  t2907 = t959*t2823;
  t2974 = 0. + t2900 + t2907;
  t2977 = t2974*t1199;
  t2995 = 0. + t2881 + t2977;
  t3012 = t564*t2995;
  t3042 = 0. + t2682 + t3012;
  t3275 = t3070*t680*t529;
  t3360 = t3303*t1199;
  t3364 = t3275 + t3360;
  t3448 = -1.*t680*t3303;
  t3449 = t3070*t529*t1199;
  t3454 = t3448 + t3449;
  t3390 = t764*t3364;
  t3497 = t959*t3454;
  t3584 = t3390 + t3497;
  t3874 = t959*t3364;
  t3888 = -1.*t764*t3454;
  t3917 = t3874 + t3888;
  t3958 = t694*t3070*t564;
  t3965 = t433*t3584;
  t3976 = t3958 + t3965;
  t3948 = t1738*t3917;
  t3997 = t1747*t3976;
  t4016 = t3948 + t3997;
  t4070 = t1747*t3917;
  t4170 = -1.*t1738*t3976;
  t4195 = t4070 + t4170;
  t1557 = 0.00334*t1459;
  t2530 = -3.e-6*t2486;
  t3047 = -1.e-6*t3042;
  t3049 = t1557 + t2530 + t3047;
  t3659 = -3.e-6*t1459;
  t3682 = 0.00216*t2486;
  t3691 = 0.000956*t3042;
  t3798 = t3659 + t3682 + t3691;
  t4609 = t680*t3303*t529;
  t4616 = -1.*t3070*t1199;
  t4687 = t4609 + t4616;
  t4713 = t3070*t680;
  t4723 = t3303*t529*t1199;
  t4828 = t4713 + t4723;
  t4710 = t764*t4687;
  t4840 = t959*t4828;
  t4844 = t4710 + t4840;
  t4945 = t959*t4687;
  t4961 = -1.*t764*t4828;
  t4985 = t4945 + t4961;
  t5002 = t694*t564*t3303;
  t5018 = t433*t4844;
  t5040 = t5002 + t5018;
  t4296 = -1.e-6*t1459;
  t4366 = 0.000956*t2486;
  t4379 = 0.00144*t3042;
  t4387 = t4296 + t4366 + t4379;
  t4996 = t1738*t4985;
  t5051 = t1747*t5040;
  t5064 = t4996 + t5051;
  t5087 = t1747*t4985;
  t5126 = -1.*t1738*t5040;
  t5203 = t5087 + t5126;
  t5454 = t564*t680*t764;
  t5457 = t959*t564*t1199;
  t5501 = t5454 + t5457;
  t5540 = t959*t564*t680;
  t5592 = -1.*t564*t764*t1199;
  t5595 = t5540 + t5592;
  t5618 = -1.*t694*t529;
  t5619 = t433*t5501;
  t5624 = t5618 + t5619;
  t5596 = t1738*t5595;
  t5630 = t1747*t5624;
  t5661 = t5596 + t5630;
  t5682 = t1747*t5595;
  t5717 = -1.*t1738*t5624;
  t5732 = t5682 + t5717;
  t3241 = t3070*t564*t433;
  t3588 = -1.*t694*t3584;
  t3620 = t3241 + t3588;
  t5820 = t1069*t680;
  t5823 = -1.*t784*t1199;
  t5828 = 0. + t5820 + t5823;
  t5836 = t680*t2280;
  t5841 = -1.*t2220*t1199;
  t5854 = 0. + t5836 + t5841;
  t5881 = t680*t2974;
  t5882 = -1.*t2880*t1199;
  t5905 = 0. + t5881 + t5882;
  t4030 = t1766*t4016;
  t4223 = -1.*t1706*t4195;
  t4248 = t4030 + t4223;
  t4400 = t1706*t4016;
  t4401 = t1766*t4195;
  t4476 = t4400 + t4401;
  t5834 = 0.00334*t5828;
  t5857 = -3.e-6*t5854;
  t5918 = -1.e-6*t5905;
  t5919 = t5834 + t5857 + t5918;
  t4605 = t564*t433*t3303;
  t4846 = -1.*t694*t4844;
  t4899 = t4605 + t4846;
  t5958 = -3.e-6*t5828;
  t5994 = 0.00216*t5854;
  t6007 = 0.000956*t5905;
  t6008 = t5958 + t5994 + t6007;
  t5082 = t1766*t5064;
  t5214 = -1.*t1706*t5203;
  t5270 = t5082 + t5214;
  t6029 = -1.e-6*t5828;
  t6034 = 0.000956*t5854;
  t6042 = 0.00144*t5905;
  t6043 = t6029 + t6034 + t6042;
  t5297 = t1706*t5064;
  t5332 = t1766*t5203;
  t5378 = t5297 + t5332;
  t5452 = -1.*t433*t529;
  t5506 = -1.*t694*t5501;
  t5512 = t5452 + t5506;
  t5676 = t1766*t5661;
  t5734 = -1.*t1706*t5732;
  t5735 = t5676 + t5734;
  t5753 = t1706*t5661;
  t5769 = t1766*t5732;
  t5790 = t5753 + t5769;
  t6104 = 0.00334*t445;
  t6108 = -3.e-6*t1841;
  t6115 = -1.e-6*t2610;
  t6120 = t6104 + t6108 + t6115;
  t6143 = -3.e-6*t445;
  t6147 = 0.00216*t1841;
  t6149 = 0.000956*t2610;
  t6154 = t6143 + t6147 + t6149;
  t6180 = -1.e-6*t445;
  t6182 = 0.000956*t1841;
  t6187 = 0.00144*t2610;
  t6188 = t6180 + t6182 + t6187;
  t6128 = t6120*t3620;
  t6171 = t6154*t4248;
  t6194 = t6188*t4476;
  t6199 = t6128 + t6171 + t6194;
  t6205 = t6120*t4899;
  t6207 = t6154*t5270;
  t6223 = t6188*t5378;
  t6230 = t6205 + t6207 + t6223;
  t6242 = t6120*t5512;
  t6255 = t6154*t5735;
  t6258 = t6188*t5790;
  t6265 = t6242 + t6255 + t6258;
  t6267 = -1.e-6*t1814;
  t6269 = -3.e-6*t1959;
  t6274 = t6267 + t6269;
  t6286 = 0.000956*t1814;
  t6287 = 0.00216*t1959;
  t6288 = t6286 + t6287;
  t6300 = 0.00144*t1814;
  t6301 = 0.000956*t1959;
  t6305 = t6300 + t6301;
  t6352 = 0.00334*t3620;
  t6353 = -3.e-6*t4248;
  t6356 = -1.e-6*t4476;
  t6359 = t6352 + t6353 + t6356;
  t6370 = 0.00334*t4899;
  t6381 = -3.e-6*t5270;
  t6384 = -1.e-6*t5378;
  t6390 = t6370 + t6381 + t6384;
  t6393 = 0.00334*t5512;
  t6395 = -3.e-6*t5735;
  t6400 = -1.e-6*t5790;
  t6402 = t6393 + t6395 + t6400;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3049*t3620 + t3798*t4248 + t4387*t4476;
  p_output1[10]=t3049*t4899 + t3798*t5270 + t4387*t5378;
  p_output1[11]=t3049*t5512 + t3798*t5735 + t4387*t5790;
  p_output1[12]=t3620*t5919 + t4248*t6008 + t4476*t6043;
  p_output1[13]=t4899*t5919 + t5270*t6008 + t5378*t6043;
  p_output1[14]=t5512*t5919 + t5735*t6008 + t5790*t6043;
  p_output1[15]=t6199;
  p_output1[16]=t6230;
  p_output1[17]=t6265;
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
  p_output1[39]=t6199;
  p_output1[40]=t6230;
  p_output1[41]=t6265;
  p_output1[42]=t3620*t6274 + t4248*t6288 + t4476*t6305;
  p_output1[43]=t4899*t6274 + t5270*t6288 + t5378*t6305;
  p_output1[44]=t5512*t6274 + t5735*t6288 + t5790*t6305;
  p_output1[45]=t6359;
  p_output1[46]=t6390;
  p_output1[47]=t6402;
  p_output1[48]=t6359;
  p_output1[49]=t6390;
  p_output1[50]=t6402;
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



void Jdq_AMWorld_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
