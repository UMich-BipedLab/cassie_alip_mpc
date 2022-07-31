/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftTarsus_src.h"

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
  double t791;
  double t1329;
  double t1426;
  double t1397;
  double t1500;
  double t1187;
  double t2585;
  double t2643;
  double t3270;
  double t1418;
  double t2059;
  double t2169;
  double t3482;
  double t680;
  double t4592;
  double t4749;
  double t5222;
  double t858;
  double t1045;
  double t1119;
  double t2284;
  double t3645;
  double t3706;
  double t4005;
  double t4150;
  double t4283;
  double t5471;
  double t5967;
  double t4570;
  double t5606;
  double t5676;
  double t657;
  double t5989;
  double t6195;
  double t6366;
  double t7072;
  double t5829;
  double t6791;
  double t6794;
  double t438;
  double t7092;
  double t7108;
  double t7247;
  double t7660;
  double t7661;
  double t7724;
  double t7679;
  double t7680;
  double t7703;
  double t7704;
  double t276;
  double t7409;
  double t7790;
  double t7791;
  double t7795;
  double t7804;
  double t7805;
  double t7807;
  double t7824;
  double t7832;
  double t7833;
  double t7802;
  double t7808;
  double t7809;
  double t7838;
  double t7840;
  double t7850;
  double t7859;
  double t7865;
  double t7823;
  double t7835;
  double t7836;
  double t7880;
  double t7890;
  double t7877;
  double t7897;
  double t7909;
  double t7915;
  double t7916;
  double t7921;
  double t7984;
  double t7989;
  double t7992;
  double t8012;
  double t8015;
  double t7983;
  double t8004;
  double t8005;
  double t8030;
  double t8031;
  double t8036;
  double t8040;
  double t8046;
  double t8011;
  double t8018;
  double t8019;
  double t8065;
  double t8073;
  double t8062;
  double t8074;
  double t8092;
  double t8108;
  double t8113;
  double t8117;
  double t7689;
  double t7705;
  double t7708;
  double t7718;
  double t7727;
  double t7733;
  double t7740;
  double t7742;
  double t7754;
  double t7760;
  double t7774;
  double t7778;
  double t7785;
  double t7787;
  double t7837;
  double t7868;
  double t7871;
  double t7912;
  double t7922;
  double t7925;
  double t7927;
  double t7929;
  double t7930;
  double t7933;
  double t7939;
  double t7950;
  double t7958;
  double t7961;
  double t7976;
  double t8026;
  double t8054;
  double t8061;
  double t8101;
  double t8120;
  double t8123;
  double t8131;
  double t8133;
  double t8140;
  double t8147;
  double t8159;
  double t8169;
  double t8170;
  double t8171;
  double t8172;
  double t6985;
  double t7342;
  double t7390;
  double t7424;
  double t7564;
  double t7567;
  double t8287;
  double t8288;
  double t8291;
  double t8256;
  double t8272;
  double t8277;
  double t8310;
  double t8315;
  double t8316;
  double t8252;
  double t8284;
  double t8292;
  double t8295;
  double t8296;
  double t8300;
  double t8306;
  double t8317;
  double t8321;
  double t8323;
  double t8325;
  double t8327;
  double t8322;
  double t8329;
  double t8330;
  double t8337;
  double t8338;
  double t8339;
  double t7788;
  double t7978;
  double t8176;
  double t8181;
  double t8198;
  double t8200;
  double t8201;
  double t8204;
  double t8333;
  double t8340;
  double t8342;
  double t8347;
  double t8348;
  double t8349;
  double t8225;
  double t8227;
  double t8232;
  double t8243;
  double t8392;
  double t8393;
  double t8394;
  double t8378;
  double t8379;
  double t8380;
  double t8381;
  double t8382;
  double t8387;
  double t8388;
  double t8395;
  double t8396;
  double t8398;
  double t8400;
  double t8402;
  double t8397;
  double t8403;
  double t8404;
  double t8406;
  double t8407;
  double t8408;
  double t8405;
  double t8409;
  double t8410;
  double t8414;
  double t8415;
  double t8416;
  t791 = Cos(var1[3]);
  t1329 = Cos(var1[5]);
  t1426 = Sin(var1[4]);
  t1397 = Sin(var1[3]);
  t1500 = Sin(var1[5]);
  t1187 = Cos(var1[6]);
  t2585 = t791*t1329*t1426;
  t2643 = t1397*t1500;
  t3270 = t2585 + t2643;
  t1418 = -1.*t1329*t1397;
  t2059 = t791*t1426*t1500;
  t2169 = t1418 + t2059;
  t3482 = Sin(var1[6]);
  t680 = Cos(var1[8]);
  t4592 = t1187*t3270;
  t4749 = -1.*t2169*t3482;
  t5222 = t4592 + t4749;
  t858 = Cos(var1[4]);
  t1045 = Cos(var1[7]);
  t1119 = t791*t858*t1045;
  t2284 = t1187*t2169;
  t3645 = t3270*t3482;
  t3706 = t2284 + t3645;
  t4005 = Sin(var1[7]);
  t4150 = t3706*t4005;
  t4283 = t1119 + t4150;
  t5471 = Sin(var1[8]);
  t5967 = Cos(var1[9]);
  t4570 = t680*t4283;
  t5606 = t5222*t5471;
  t5676 = t4570 + t5606;
  t657 = Sin(var1[9]);
  t5989 = t680*t5222;
  t6195 = -1.*t4283*t5471;
  t6366 = t5989 + t6195;
  t7072 = Cos(var1[10]);
  t5829 = -1.*t657*t5676;
  t6791 = t5967*t6366;
  t6794 = t5829 + t6791;
  t438 = Sin(var1[10]);
  t7092 = t5967*t5676;
  t7108 = t657*t6366;
  t7247 = t7092 + t7108;
  t7660 = -1.*t1045;
  t7661 = 0. + t7660;
  t7724 = 0. + t4005;
  t7679 = t1187*t7661;
  t7680 = 0. + t7679;
  t7703 = t7661*t3482;
  t7704 = 0. + t7703;
  t276 = Cos(var1[11]);
  t7409 = Sin(var1[11]);
  t7790 = t276*t438;
  t7791 = t7072*t7409;
  t7795 = 0. + t7790 + t7791;
  t7804 = t7072*t276;
  t7805 = -1.*t438*t7409;
  t7807 = 0. + t7804 + t7805;
  t7824 = -1.*t657*t7795;
  t7832 = t5967*t7807;
  t7833 = 0. + t7824 + t7832;
  t7802 = t5967*t7795;
  t7808 = t657*t7807;
  t7809 = 0. + t7802 + t7808;
  t7838 = t680*t7833;
  t7840 = -1.*t7809*t5471;
  t7850 = 0. + t7838 + t7840;
  t7859 = t1045*t7850;
  t7865 = 0. + t7859;
  t7823 = t680*t7809;
  t7835 = t7833*t5471;
  t7836 = 0. + t7823 + t7835;
  t7880 = t4005*t7850;
  t7890 = 0. + t7880;
  t7877 = -1.*t3482*t7836;
  t7897 = t1187*t7890;
  t7909 = 0. + t7877 + t7897;
  t7915 = t1187*t7836;
  t7916 = t3482*t7890;
  t7921 = 0. + t7915 + t7916;
  t7984 = -1.*t7072*t276;
  t7989 = t438*t7409;
  t7992 = 0. + t7984 + t7989;
  t8012 = -1.*t657*t7992;
  t8015 = 0. + t7802 + t8012;
  t7983 = t657*t7795;
  t8004 = t5967*t7992;
  t8005 = 0. + t7983 + t8004;
  t8030 = t680*t8015;
  t8031 = -1.*t8005*t5471;
  t8036 = 0. + t8030 + t8031;
  t8040 = t1045*t8036;
  t8046 = 0. + t8040;
  t8011 = t680*t8005;
  t8018 = t8015*t5471;
  t8019 = 0. + t8011 + t8018;
  t8065 = t4005*t8036;
  t8073 = 0. + t8065;
  t8062 = -1.*t3482*t8019;
  t8074 = t1187*t8073;
  t8092 = 0. + t8062 + t8074;
  t8108 = t1187*t8019;
  t8113 = t3482*t8073;
  t8117 = 0. + t8108 + t8113;
  t7689 = t1329*t7680;
  t7705 = -1.*t1500*t7704;
  t7708 = 0. + t7689 + t7705;
  t7718 = var2[4]*t7708;
  t7727 = var2[5]*t7724;
  t7733 = var2[6]*t7724;
  t7740 = t7680*t1500;
  t7742 = t1329*t7704;
  t7754 = 0. + t7740 + t7742;
  t7760 = t858*t7754;
  t7774 = -1.*t1426*t7724;
  t7778 = 0. + t7760 + t7774;
  t7785 = var2[3]*t7778;
  t7787 = 0. + var2[9] + var2[10] + var2[11] + var2[8] + t7718 + t7727 + t7733 + t7785;
  t7837 = var2[7]*t7836;
  t7868 = var2[5]*t7865;
  t7871 = var2[6]*t7865;
  t7912 = t1329*t7909;
  t7922 = -1.*t1500*t7921;
  t7925 = 0. + t7912 + t7922;
  t7927 = var2[4]*t7925;
  t7929 = -1.*t1426*t7865;
  t7930 = t1500*t7909;
  t7933 = t1329*t7921;
  t7939 = 0. + t7930 + t7933;
  t7950 = t858*t7939;
  t7958 = 0. + t7929 + t7950;
  t7961 = var2[3]*t7958;
  t7976 = 0. + t7837 + t7868 + t7871 + t7927 + t7961;
  t8026 = var2[7]*t8019;
  t8054 = var2[5]*t8046;
  t8061 = var2[6]*t8046;
  t8101 = t1329*t8092;
  t8120 = -1.*t1500*t8117;
  t8123 = 0. + t8101 + t8120;
  t8131 = var2[4]*t8123;
  t8133 = -1.*t1426*t8046;
  t8140 = t1500*t8092;
  t8147 = t1329*t8117;
  t8159 = 0. + t8140 + t8147;
  t8169 = t858*t8159;
  t8170 = 0. + t8133 + t8169;
  t8171 = var2[3]*t8170;
  t8172 = 0. + t8026 + t8054 + t8061 + t8131 + t8171;
  t6985 = t438*t6794;
  t7342 = t7072*t7247;
  t7390 = t6985 + t7342;
  t7424 = t7072*t6794;
  t7564 = -1.*t438*t7247;
  t7567 = t7424 + t7564;
  t8287 = t1329*t1397*t1426;
  t8288 = -1.*t791*t1500;
  t8291 = t8287 + t8288;
  t8256 = t791*t1329;
  t8272 = t1397*t1426*t1500;
  t8277 = t8256 + t8272;
  t8310 = t1187*t8291;
  t8315 = -1.*t8277*t3482;
  t8316 = t8310 + t8315;
  t8252 = t858*t1045*t1397;
  t8284 = t1187*t8277;
  t8292 = t8291*t3482;
  t8295 = t8284 + t8292;
  t8296 = t8295*t4005;
  t8300 = t8252 + t8296;
  t8306 = t680*t8300;
  t8317 = t8316*t5471;
  t8321 = t8306 + t8317;
  t8323 = t680*t8316;
  t8325 = -1.*t8300*t5471;
  t8327 = t8323 + t8325;
  t8322 = -1.*t657*t8321;
  t8329 = t5967*t8327;
  t8330 = t8322 + t8329;
  t8337 = t5967*t8321;
  t8338 = t657*t8327;
  t8339 = t8337 + t8338;
  t7788 = 0.000036*t7787;
  t7978 = 0.0231*t7976;
  t8176 = -0.00288*t8172;
  t8181 = t7788 + t7978 + t8176;
  t8198 = 0.0239*t7787;
  t8200 = 0.000036*t7976;
  t8201 = -0.000063*t8172;
  t8204 = t8198 + t8200 + t8201;
  t8333 = t438*t8330;
  t8340 = t7072*t8339;
  t8342 = t8333 + t8340;
  t8347 = t7072*t8330;
  t8348 = -1.*t438*t8339;
  t8349 = t8347 + t8348;
  t8225 = -0.000063*t7787;
  t8227 = -0.00288*t7976;
  t8232 = 0.00113*t8172;
  t8243 = t8225 + t8227 + t8232;
  t8392 = t858*t1329*t1187;
  t8393 = -1.*t858*t1500*t3482;
  t8394 = t8392 + t8393;
  t8378 = -1.*t1045*t1426;
  t8379 = t858*t1187*t1500;
  t8380 = t858*t1329*t3482;
  t8381 = t8379 + t8380;
  t8382 = t8381*t4005;
  t8387 = t8378 + t8382;
  t8388 = t680*t8387;
  t8395 = t8394*t5471;
  t8396 = t8388 + t8395;
  t8398 = t680*t8394;
  t8400 = -1.*t8387*t5471;
  t8402 = t8398 + t8400;
  t8397 = -1.*t657*t8396;
  t8403 = t5967*t8402;
  t8404 = t8397 + t8403;
  t8406 = t5967*t8396;
  t8407 = t657*t8402;
  t8408 = t8406 + t8407;
  t8405 = t438*t8404;
  t8409 = t7072*t8408;
  t8410 = t8405 + t8409;
  t8414 = t7072*t8404;
  t8415 = -1.*t438*t8408;
  t8416 = t8414 + t8415;
  p_output1[0]=(t276*t7390 + t7409*t7567)*t8181 + (t7390*t7409 - 1.*t276*t7567)*t8243 + t8204*(-1.*t1045*t3706 + t4005*t791*t858);
  p_output1[1]=t8243*(t7409*t8342 - 1.*t276*t8349) + t8181*(t276*t8342 + t7409*t8349) + t8204*(-1.*t1045*t8295 + t1397*t4005*t858);
  p_output1[2]=t8204*(-1.*t1426*t4005 - 1.*t1045*t8381) + t8243*(t7409*t8410 - 1.*t276*t8416) + t8181*(t276*t8410 + t7409*t8416);
}



void AMWorld_LeftTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
