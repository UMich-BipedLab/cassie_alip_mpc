/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_LeftKnee_src.h"

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
  double t492;
  double t465;
  double t549;
  double t476;
  double t563;
  double t840;
  double t323;
  double t5;
  double t937;
  double t986;
  double t784;
  double t851;
  double t1370;
  double t1259;
  double t1270;
  double t1469;
  double t1360;
  double t1491;
  double t1503;
  double t1671;
  double t1725;
  double t1757;
  double t1839;
  double t1843;
  double t2065;
  double t2085;
  double t2128;
  double t2205;
  double t2206;
  double t477;
  double t589;
  double t719;
  double t746;
  double t751;
  double t763;
  double t770;
  double t790;
  double t798;
  double t2502;
  double t2545;
  double t2559;
  double t2419;
  double t2431;
  double t2449;
  double t993;
  double t1034;
  double t1071;
  double t1099;
  double t1137;
  double t1169;
  double t1176;
  double t1189;
  double t1201;
  double t1206;
  double t1250;
  double t1507;
  double t1528;
  double t1544;
  double t1796;
  double t1845;
  double t1887;
  double t1918;
  double t1957;
  double t1980;
  double t1990;
  double t2027;
  double t2029;
  double t2042;
  double t2043;
  double t2155;
  double t2180;
  double t2183;
  double t2190;
  double t2309;
  double t2317;
  double t2319;
  double t2333;
  double t2340;
  double t2343;
  double t2359;
  double t2369;
  double t2378;
  double t2385;
  double t2457;
  double t2575;
  double t2601;
  double t2722;
  double t2726;
  double t2753;
  double t1254;
  double t2047;
  double t2393;
  double t2394;
  double t3179;
  double t3204;
  double t3221;
  double t3254;
  double t3286;
  double t3328;
  double t3351;
  double t3365;
  double t3375;
  double t3528;
  double t3552;
  double t3565;
  double t3483;
  double t3502;
  double t3518;
  double t2863;
  double t2884;
  double t2925;
  double t2959;
  double t3522;
  double t3567;
  double t3581;
  double t3605;
  double t3635;
  double t3663;
  double t3129;
  double t3136;
  double t3143;
  double t3148;
  double t3800;
  double t3817;
  double t3825;
  double t4012;
  double t4017;
  double t4020;
  double t3959;
  double t3971;
  double t3986;
  double t3994;
  double t4039;
  double t4081;
  double t4118;
  double t4124;
  double t4135;
  double t834;
  double t897;
  double t912;
  double t2661;
  double t2754;
  double t2755;
  double t4303;
  double t4318;
  double t4329;
  double t4340;
  double t4357;
  double t4370;
  double t4386;
  double t4389;
  double t4401;
  double t2996;
  double t3020;
  double t3120;
  double t3389;
  double t3403;
  double t3417;
  double t4338;
  double t4379;
  double t4408;
  double t4427;
  double t3596;
  double t3666;
  double t3670;
  double t4479;
  double t4487;
  double t4489;
  double t4492;
  double t3703;
  double t3736;
  double t3739;
  double t4517;
  double t4523;
  double t4539;
  double t4554;
  double t3828;
  double t3861;
  double t3877;
  double t4088;
  double t4142;
  double t4151;
  double t4178;
  double t4240;
  double t4274;
  double t4704;
  double t4707;
  double t4729;
  double t4750;
  double t4772;
  double t4777;
  double t4802;
  double t4821;
  double t4852;
  double t4872;
  double t4881;
  double t4887;
  double t4765;
  double t4842;
  double t4945;
  double t4971;
  double t4978;
  double t4980;
  double t5033;
  double t5039;
  double t5040;
  double t5043;
  double t5053;
  double t5061;
  double t5063;
  double t5096;
  double t5115;
  double t5131;
  double t5183;
  double t5206;
  double t5230;
  double t5238;
  double t5251;
  double t5485;
  double t5527;
  double t5536;
  double t5551;
  double t5565;
  double t5566;
  double t5572;
  double t5576;
  double t5580;
  double t5582;
  double t5589;
  double t5590;
  t492 = Cos(var1[3]);
  t465 = Cos(var1[5]);
  t549 = Sin(var1[4]);
  t476 = Sin(var1[3]);
  t563 = Sin(var1[5]);
  t840 = Cos(var1[4]);
  t323 = Cos(var1[6]);
  t5 = Cos(var1[7]);
  t937 = -1.*t5;
  t986 = 0. + t937;
  t784 = Sin(var1[6]);
  t851 = Sin(var1[7]);
  t1370 = Cos(var1[9]);
  t1259 = Cos(var1[8]);
  t1270 = Sin(var1[9]);
  t1469 = Sin(var1[8]);
  t1360 = t1259*t1270;
  t1491 = t1370*t1469;
  t1503 = 0. + t1360 + t1491;
  t1671 = -1.*t1370*t1259;
  t1725 = t1270*t1469;
  t1757 = 0. + t1671 + t1725;
  t1839 = t851*t1503;
  t1843 = 0. + t1839;
  t2065 = t1370*t1259;
  t2085 = -1.*t1270*t1469;
  t2128 = 0. + t2065 + t2085;
  t2205 = t851*t2128;
  t2206 = 0. + t2205;
  t477 = -1.*t465*t476;
  t589 = t492*t549*t563;
  t719 = t477 + t589;
  t746 = t323*t719;
  t751 = t492*t465*t549;
  t763 = t476*t563;
  t770 = t751 + t763;
  t790 = t770*t784;
  t798 = t746 + t790;
  t2502 = t323*t770;
  t2545 = -1.*t719*t784;
  t2559 = t2502 + t2545;
  t2419 = t492*t840*t5;
  t2431 = t798*t851;
  t2449 = t2419 + t2431;
  t993 = t323*t986;
  t1034 = 0. + t993;
  t1071 = t1034*t563;
  t1099 = t986*t784;
  t1137 = 0. + t1099;
  t1169 = t465*t1137;
  t1176 = 0. + t1071 + t1169;
  t1189 = t840*t1176;
  t1201 = 0. + t851;
  t1206 = -1.*t549*t1201;
  t1250 = 0. + t1189 + t1206;
  t1507 = t5*t1503;
  t1528 = 0. + t1507;
  t1544 = -1.*t549*t1528;
  t1796 = -1.*t784*t1757;
  t1845 = t323*t1843;
  t1887 = 0. + t1796 + t1845;
  t1918 = t563*t1887;
  t1957 = t323*t1757;
  t1980 = t784*t1843;
  t1990 = 0. + t1957 + t1980;
  t2027 = t465*t1990;
  t2029 = 0. + t1918 + t2027;
  t2042 = t840*t2029;
  t2043 = 0. + t1544 + t2042;
  t2155 = t5*t2128;
  t2180 = 0. + t2155;
  t2183 = -1.*t549*t2180;
  t2190 = -1.*t784*t1503;
  t2309 = t323*t2206;
  t2317 = 0. + t2190 + t2309;
  t2319 = t563*t2317;
  t2333 = t323*t1503;
  t2340 = t784*t2206;
  t2343 = 0. + t2333 + t2340;
  t2359 = t465*t2343;
  t2369 = 0. + t2319 + t2359;
  t2378 = t840*t2369;
  t2385 = 0. + t2183 + t2378;
  t2457 = t1259*t2449;
  t2575 = t2559*t1469;
  t2601 = t2457 + t2575;
  t2722 = t1259*t2559;
  t2726 = -1.*t2449*t1469;
  t2753 = t2722 + t2726;
  t1254 = 0.00334*t1250;
  t2047 = 3.e-6*t2043;
  t2393 = 1.e-6*t2385;
  t2394 = t1254 + t2047 + t2393;
  t3179 = t492*t465;
  t3204 = t476*t549*t563;
  t3221 = t3179 + t3204;
  t3254 = t323*t3221;
  t3286 = t465*t476*t549;
  t3328 = -1.*t492*t563;
  t3351 = t3286 + t3328;
  t3365 = t3351*t784;
  t3375 = t3254 + t3365;
  t3528 = t323*t3351;
  t3552 = -1.*t3221*t784;
  t3565 = t3528 + t3552;
  t3483 = t840*t5*t476;
  t3502 = t3375*t851;
  t3518 = t3483 + t3502;
  t2863 = 3.e-6*t1250;
  t2884 = 0.00216*t2043;
  t2925 = 0.000956*t2385;
  t2959 = t2863 + t2884 + t2925;
  t3522 = t1259*t3518;
  t3567 = t3565*t1469;
  t3581 = t3522 + t3567;
  t3605 = t1259*t3565;
  t3635 = -1.*t3518*t1469;
  t3663 = t3605 + t3635;
  t3129 = 1.e-6*t1250;
  t3136 = 0.000956*t2043;
  t3143 = 0.00144*t2385;
  t3148 = t3129 + t3136 + t3143;
  t3800 = t840*t323*t563;
  t3817 = t840*t465*t784;
  t3825 = t3800 + t3817;
  t4012 = t840*t465*t323;
  t4017 = -1.*t840*t563*t784;
  t4020 = t4012 + t4017;
  t3959 = -1.*t5*t549;
  t3971 = t3825*t851;
  t3986 = t3959 + t3971;
  t3994 = t1259*t3986;
  t4039 = t4020*t1469;
  t4081 = t3994 + t4039;
  t4118 = t1259*t4020;
  t4124 = -1.*t3986*t1469;
  t4135 = t4118 + t4124;
  t834 = -1.*t5*t798;
  t897 = t492*t840*t851;
  t912 = t834 + t897;
  t2661 = t1270*t2601;
  t2754 = -1.*t1370*t2753;
  t2755 = t2661 + t2754;
  t4303 = t465*t1034;
  t4318 = -1.*t563*t1137;
  t4329 = 0. + t4303 + t4318;
  t4340 = t465*t1887;
  t4357 = -1.*t563*t1990;
  t4370 = 0. + t4340 + t4357;
  t4386 = t465*t2317;
  t4389 = -1.*t563*t2343;
  t4401 = 0. + t4386 + t4389;
  t2996 = t1370*t2601;
  t3020 = t1270*t2753;
  t3120 = t2996 + t3020;
  t3389 = -1.*t5*t3375;
  t3403 = t840*t476*t851;
  t3417 = t3389 + t3403;
  t4338 = 0.00334*t4329;
  t4379 = 3.e-6*t4370;
  t4408 = 1.e-6*t4401;
  t4427 = t4338 + t4379 + t4408;
  t3596 = t1270*t3581;
  t3666 = -1.*t1370*t3663;
  t3670 = t3596 + t3666;
  t4479 = 3.e-6*t4329;
  t4487 = 0.00216*t4370;
  t4489 = 0.000956*t4401;
  t4492 = t4479 + t4487 + t4489;
  t3703 = t1370*t3581;
  t3736 = t1270*t3663;
  t3739 = t3703 + t3736;
  t4517 = 1.e-6*t4329;
  t4523 = 0.000956*t4370;
  t4539 = 0.00144*t4401;
  t4554 = t4517 + t4523 + t4539;
  t3828 = -1.*t5*t3825;
  t3861 = -1.*t549*t851;
  t3877 = t3828 + t3861;
  t4088 = t1270*t4081;
  t4142 = -1.*t1370*t4135;
  t4151 = t4088 + t4142;
  t4178 = t1370*t4081;
  t4240 = t1270*t4135;
  t4274 = t4178 + t4240;
  t4704 = 0.00334*t1201;
  t4707 = 3.e-6*t1528;
  t4729 = 1.e-6*t2180;
  t4750 = t4704 + t4707 + t4729;
  t4772 = 3.e-6*t1201;
  t4777 = 0.00216*t1528;
  t4802 = 0.000956*t2180;
  t4821 = t4772 + t4777 + t4802;
  t4852 = 1.e-6*t1201;
  t4872 = 0.000956*t1528;
  t4881 = 0.00144*t2180;
  t4887 = t4852 + t4872 + t4881;
  t4765 = t912*t4750;
  t4842 = t2755*t4821;
  t4945 = t3120*t4887;
  t4971 = t4765 + t4842 + t4945;
  t4978 = t3417*t4750;
  t4980 = t3670*t4821;
  t5033 = t3739*t4887;
  t5039 = t4978 + t4980 + t5033;
  t5040 = t3877*t4750;
  t5043 = t4151*t4821;
  t5053 = t4274*t4887;
  t5061 = t5040 + t5043 + t5053;
  t5063 = 1.e-6*t1503;
  t5096 = 3.e-6*t1757;
  t5115 = t5063 + t5096;
  t5131 = 0.000956*t1503;
  t5183 = 0.00216*t1757;
  t5206 = t5131 + t5183;
  t5230 = 0.00144*t1503;
  t5238 = 0.000956*t1757;
  t5251 = t5230 + t5238;
  t5485 = 0.00334*t912;
  t5527 = 3.e-6*t2755;
  t5536 = 1.e-6*t3120;
  t5551 = t5485 + t5527 + t5536;
  t5565 = 0.00334*t3417;
  t5566 = 3.e-6*t3670;
  t5572 = 1.e-6*t3739;
  t5576 = t5565 + t5566 + t5572;
  t5580 = 0.00334*t3877;
  t5582 = 3.e-6*t4151;
  t5589 = 1.e-6*t4274;
  t5590 = t5580 + t5582 + t5589;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2755*t2959 + t3120*t3148 + t2394*t912;
  p_output1[10]=t2394*t3417 + t2959*t3670 + t3148*t3739;
  p_output1[11]=t2394*t3877 + t2959*t4151 + t3148*t4274;
  p_output1[12]=t2755*t4492 + t3120*t4554 + t4427*t912;
  p_output1[13]=t3417*t4427 + t3670*t4492 + t3739*t4554;
  p_output1[14]=t3877*t4427 + t4151*t4492 + t4274*t4554;
  p_output1[15]=t4971;
  p_output1[16]=t5039;
  p_output1[17]=t5061;
  p_output1[18]=t4971;
  p_output1[19]=t5039;
  p_output1[20]=t5061;
  p_output1[21]=t2755*t5206 + t3120*t5251 + t5115*t912;
  p_output1[22]=t3417*t5115 + t3670*t5206 + t3739*t5251;
  p_output1[23]=t3877*t5115 + t4151*t5206 + t4274*t5251;
  p_output1[24]=t5551;
  p_output1[25]=t5576;
  p_output1[26]=t5590;
  p_output1[27]=t5551;
  p_output1[28]=t5576;
  p_output1[29]=t5590;
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



void Jdq_AMWorld_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
