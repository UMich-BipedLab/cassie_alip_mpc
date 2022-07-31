/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftShin_src.h"

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
  double t1039;
  double t466;
  double t1270;
  double t517;
  double t1497;
  double t245;
  double t15;
  double t4295;
  double t4327;
  double t3333;
  double t3757;
  double t5192;
  double t3579;
  double t4478;
  double t4622;
  double t4672;
  double t4681;
  double t687;
  double t1817;
  double t2085;
  double t2176;
  double t2843;
  double t2971;
  double t3108;
  double t3425;
  double t3452;
  double t6193;
  double t6586;
  double t6600;
  double t6604;
  double t6274;
  double t6299;
  double t6351;
  double t6644;
  double t6675;
  double t6420;
  double t6661;
  double t6671;
  double t6161;
  double t6708;
  double t6732;
  double t6735;
  double t6787;
  double t6115;
  double t6889;
  double t6909;
  double t6919;
  double t6847;
  double t6852;
  double t6853;
  double t6947;
  double t6953;
  double t6987;
  double t6997;
  double t6999;
  double t6877;
  double t6936;
  double t6941;
  double t7010;
  double t7013;
  double t7006;
  double t7015;
  double t7017;
  double t7022;
  double t7028;
  double t7032;
  double t7108;
  double t7126;
  double t7136;
  double t7151;
  double t7153;
  double t7158;
  double t7167;
  double t7143;
  double t7145;
  double t7146;
  double t7173;
  double t7188;
  double t7172;
  double t7194;
  double t7203;
  double t7208;
  double t7211;
  double t7212;
  double t6673;
  double t6750;
  double t6780;
  double t6794;
  double t6805;
  double t6808;
  double t6946;
  double t7001;
  double t7002;
  double t7019;
  double t7034;
  double t7040;
  double t7041;
  double t7047;
  double t7066;
  double t7070;
  double t7071;
  double t7072;
  double t7077;
  double t7093;
  double t7094;
  double t7148;
  double t7168;
  double t7171;
  double t7204;
  double t7220;
  double t7221;
  double t7226;
  double t7227;
  double t7229;
  double t7230;
  double t7232;
  double t7244;
  double t7248;
  double t7249;
  double t7259;
  double t4623;
  double t4979;
  double t5068;
  double t5165;
  double t5240;
  double t5282;
  double t5287;
  double t5325;
  double t5350;
  double t5384;
  double t5416;
  double t5536;
  double t5542;
  double t5636;
  double t5697;
  double t5818;
  double t7299;
  double t7300;
  double t7301;
  double t7303;
  double t7304;
  double t7305;
  double t7310;
  double t7311;
  double t7312;
  double t7341;
  double t7343;
  double t7346;
  double t7330;
  double t7334;
  double t7335;
  double t7338;
  double t7349;
  double t7351;
  double t7354;
  double t7356;
  double t7357;
  double t7102;
  double t7262;
  double t7272;
  double t7353;
  double t7358;
  double t7360;
  double t7366;
  double t7369;
  double t7370;
  double t7286;
  double t7289;
  double t7290;
  double t7387;
  double t7388;
  double t7389;
  double t7403;
  double t7404;
  double t7405;
  double t7397;
  double t7398;
  double t7399;
  double t7402;
  double t7407;
  double t7408;
  double t7410;
  double t7413;
  double t7414;
  double t7409;
  double t7415;
  double t7416;
  double t7420;
  double t7422;
  double t7423;
  t1039 = Cos(var1[3]);
  t466 = Cos(var1[5]);
  t1270 = Sin(var1[4]);
  t517 = Sin(var1[3]);
  t1497 = Sin(var1[5]);
  t245 = Cos(var1[6]);
  t15 = Cos(var1[7]);
  t4295 = -1.*t15;
  t4327 = 0. + t4295;
  t3333 = Sin(var1[6]);
  t3757 = Sin(var1[7]);
  t5192 = 0. + t3757;
  t3579 = Cos(var1[4]);
  t4478 = t245*t4327;
  t4622 = 0. + t4478;
  t4672 = t4327*t3333;
  t4681 = 0. + t4672;
  t687 = -1.*t466*t517;
  t1817 = t1039*t1270*t1497;
  t2085 = t687 + t1817;
  t2176 = t245*t2085;
  t2843 = t1039*t466*t1270;
  t2971 = t517*t1497;
  t3108 = t2843 + t2971;
  t3425 = t3108*t3333;
  t3452 = t2176 + t3425;
  t6193 = Cos(var1[8]);
  t6586 = t245*t3108;
  t6600 = -1.*t2085*t3333;
  t6604 = t6586 + t6600;
  t6274 = t1039*t3579*t15;
  t6299 = t3452*t3757;
  t6351 = t6274 + t6299;
  t6644 = Sin(var1[8]);
  t6675 = Cos(var1[9]);
  t6420 = t6193*t6351;
  t6661 = t6604*t6644;
  t6671 = t6420 + t6661;
  t6161 = Sin(var1[9]);
  t6708 = t6193*t6604;
  t6732 = -1.*t6351*t6644;
  t6735 = t6708 + t6732;
  t6787 = Cos(var1[10]);
  t6115 = Sin(var1[10]);
  t6889 = t6675*t6787;
  t6909 = -1.*t6161*t6115;
  t6919 = 0. + t6889 + t6909;
  t6847 = t6787*t6161;
  t6852 = t6675*t6115;
  t6853 = 0. + t6847 + t6852;
  t6947 = t6193*t6919;
  t6953 = -1.*t6853*t6644;
  t6987 = 0. + t6947 + t6953;
  t6997 = t15*t6987;
  t6999 = 0. + t6997;
  t6877 = t6193*t6853;
  t6936 = t6919*t6644;
  t6941 = 0. + t6877 + t6936;
  t7010 = t3757*t6987;
  t7013 = 0. + t7010;
  t7006 = -1.*t3333*t6941;
  t7015 = t245*t7013;
  t7017 = 0. + t7006 + t7015;
  t7022 = t245*t6941;
  t7028 = t3333*t7013;
  t7032 = 0. + t7022 + t7028;
  t7108 = -1.*t6675*t6787;
  t7126 = t6161*t6115;
  t7136 = 0. + t7108 + t7126;
  t7151 = -1.*t7136*t6644;
  t7153 = 0. + t6877 + t7151;
  t7158 = t15*t7153;
  t7167 = 0. + t7158;
  t7143 = t6193*t7136;
  t7145 = t6853*t6644;
  t7146 = 0. + t7143 + t7145;
  t7173 = t3757*t7153;
  t7188 = 0. + t7173;
  t7172 = -1.*t3333*t7146;
  t7194 = t245*t7188;
  t7203 = 0. + t7172 + t7194;
  t7208 = t245*t7146;
  t7211 = t3333*t7188;
  t7212 = 0. + t7208 + t7211;
  t6673 = -1.*t6161*t6671;
  t6750 = t6675*t6735;
  t6780 = t6673 + t6750;
  t6794 = t6675*t6671;
  t6805 = t6161*t6735;
  t6808 = t6794 + t6805;
  t6946 = var2[7]*t6941;
  t7001 = var2[5]*t6999;
  t7002 = var2[6]*t6999;
  t7019 = t466*t7017;
  t7034 = -1.*t1497*t7032;
  t7040 = 0. + t7019 + t7034;
  t7041 = var2[4]*t7040;
  t7047 = -1.*t1270*t6999;
  t7066 = t1497*t7017;
  t7070 = t466*t7032;
  t7071 = 0. + t7066 + t7070;
  t7072 = t3579*t7071;
  t7077 = 0. + t7047 + t7072;
  t7093 = var2[3]*t7077;
  t7094 = 0. + t6946 + t7001 + t7002 + t7041 + t7093;
  t7148 = var2[7]*t7146;
  t7168 = var2[5]*t7167;
  t7171 = var2[6]*t7167;
  t7204 = t466*t7203;
  t7220 = -1.*t1497*t7212;
  t7221 = 0. + t7204 + t7220;
  t7226 = var2[4]*t7221;
  t7227 = -1.*t1270*t7167;
  t7229 = t1497*t7203;
  t7230 = t466*t7212;
  t7232 = 0. + t7229 + t7230;
  t7244 = t3579*t7232;
  t7248 = 0. + t7227 + t7244;
  t7249 = var2[3]*t7248;
  t7259 = 0. + t7148 + t7168 + t7171 + t7226 + t7249;
  t4623 = t466*t4622;
  t4979 = -1.*t1497*t4681;
  t5068 = 0. + t4623 + t4979;
  t5165 = var2[4]*t5068;
  t5240 = var2[5]*t5192;
  t5282 = var2[6]*t5192;
  t5287 = t4622*t1497;
  t5325 = t466*t4681;
  t5350 = 0. + t5287 + t5325;
  t5384 = t3579*t5350;
  t5416 = -1.*t1270*t5192;
  t5536 = 0. + t5384 + t5416;
  t5542 = var2[3]*t5536;
  t5636 = 0. + var2[9] + var2[10] + var2[8] + t5165 + t5240 + t5282 + t5542;
  t5697 = 0.0341*t5636;
  t5818 = 0. + t5697;
  t7299 = t1039*t466;
  t7300 = t517*t1270*t1497;
  t7301 = t7299 + t7300;
  t7303 = t245*t7301;
  t7304 = t466*t517*t1270;
  t7305 = -1.*t1039*t1497;
  t7310 = t7304 + t7305;
  t7311 = t7310*t3333;
  t7312 = t7303 + t7311;
  t7341 = t245*t7310;
  t7343 = -1.*t7301*t3333;
  t7346 = t7341 + t7343;
  t7330 = t3579*t15*t517;
  t7334 = t7312*t3757;
  t7335 = t7330 + t7334;
  t7338 = t6193*t7335;
  t7349 = t7346*t6644;
  t7351 = t7338 + t7349;
  t7354 = t6193*t7346;
  t7356 = -1.*t7335*t6644;
  t7357 = t7354 + t7356;
  t7102 = 0.0341*t7094;
  t7262 = 0.000334*t7259;
  t7272 = 0. + t7102 + t7262;
  t7353 = -1.*t6161*t7351;
  t7358 = t6675*t7357;
  t7360 = t7353 + t7358;
  t7366 = t6675*t7351;
  t7369 = t6161*t7357;
  t7370 = t7366 + t7369;
  t7286 = 0.000334*t7094;
  t7289 = 0.00036*t7259;
  t7290 = 0. + t7286 + t7289;
  t7387 = t3579*t245*t1497;
  t7388 = t3579*t466*t3333;
  t7389 = t7387 + t7388;
  t7403 = t3579*t466*t245;
  t7404 = -1.*t3579*t1497*t3333;
  t7405 = t7403 + t7404;
  t7397 = -1.*t15*t1270;
  t7398 = t7389*t3757;
  t7399 = t7397 + t7398;
  t7402 = t6193*t7399;
  t7407 = t7405*t6644;
  t7408 = t7402 + t7407;
  t7410 = t6193*t7405;
  t7413 = -1.*t7399*t6644;
  t7414 = t7410 + t7413;
  t7409 = -1.*t6161*t7408;
  t7415 = t6675*t7414;
  t7416 = t7409 + t7415;
  t7420 = t6675*t7408;
  t7422 = t6161*t7414;
  t7423 = t7420 + t7422;
  p_output1[0]=(-1.*t15*t3452 + t1039*t3579*t3757)*t5818 + (t6115*t6780 + t6787*t6808)*t7272 + (-1.*t6780*t6787 + t6115*t6808)*t7290;
  p_output1[1]=t5818*(t3579*t3757*t517 - 1.*t15*t7312) + t7290*(-1.*t6787*t7360 + t6115*t7370) + t7272*(t6115*t7360 + t6787*t7370);
  p_output1[2]=t5818*(-1.*t1270*t3757 - 1.*t15*t7389) + t7290*(-1.*t6787*t7416 + t6115*t7423) + t7272*(t6115*t7416 + t6787*t7423);
}



void AMWorld_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
