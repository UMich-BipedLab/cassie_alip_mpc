/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToe_src.h"

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
  double t676;
  double t922;
  double t649;
  double t845;
  double t984;
  double t1274;
  double t1357;
  double t1375;
  double t1496;
  double t1618;
  double t1629;
  double t1699;
  double t880;
  double t1030;
  double t1230;
  double t2145;
  double t2170;
  double t2215;
  double t2248;
  double t2014;
  double t2024;
  double t2083;
  double t2405;
  double t3087;
  double t3161;
  double t3163;
  double t3245;
  double t2779;
  double t2800;
  double t2874;
  double t3272;
  double t3293;
  double t3305;
  double t3585;
  double t3589;
  double t3599;
  double t3779;
  double t3931;
  double t3956;
  double t3957;
  double t4319;
  double t4356;
  double t4401;
  double t4425;
  double t4453;
  double t4544;
  double t4592;
  double t4741;
  double t4871;
  double t4900;
  double t5133;
  double t5142;
  double t5171;
  double t5293;
  double t5343;
  double t5384;
  double t5466;
  double t5617;
  double t5619;
  double t5675;
  double t5852;
  double t5862;
  double t5938;
  double t5976;
  double t6004;
  double t6016;
  double t6165;
  double t6189;
  double t6193;
  double t6284;
  double t6473;
  double t6562;
  double t6614;
  double t1412;
  double t1520;
  double t1549;
  double t1711;
  double t1757;
  double t1916;
  double t6931;
  double t6970;
  double t7035;
  double t6864;
  double t6878;
  double t6929;
  double t2220;
  double t2255;
  double t2383;
  double t2477;
  double t2562;
  double t2572;
  double t7079;
  double t7093;
  double t7136;
  double t3187;
  double t3257;
  double t3268;
  double t3311;
  double t3312;
  double t3392;
  double t3619;
  double t3829;
  double t3925;
  double t7245;
  double t7269;
  double t7273;
  double t7295;
  double t7314;
  double t7316;
  double t4071;
  double t4182;
  double t4299;
  double t4547;
  double t4635;
  double t4725;
  double t7332;
  double t7344;
  double t7365;
  double t7377;
  double t7385;
  double t7392;
  double t4986;
  double t5044;
  double t5100;
  double t5439;
  double t5495;
  double t5593;
  double t7438;
  double t7452;
  double t7453;
  double t7501;
  double t7506;
  double t7523;
  double t5711;
  double t5802;
  double t5845;
  double t6033;
  double t6168;
  double t6169;
  double t7588;
  double t7627;
  double t7637;
  double t7665;
  double t7676;
  double t7685;
  double t6339;
  double t6457;
  double t6464;
  double t7727;
  double t7753;
  double t7762;
  double t7861;
  double t7890;
  double t7924;
  double t8222;
  double t8224;
  double t8226;
  double t8261;
  double t8287;
  double t8291;
  double t8307;
  double t8317;
  double t8329;
  double t8346;
  double t8354;
  double t8360;
  double t8382;
  double t8392;
  double t8398;
  double t8405;
  double t8412;
  double t8418;
  double t8430;
  double t8444;
  double t8447;
  double t8450;
  double t8452;
  double t8455;
  double t8460;
  double t8461;
  double t8462;
  double t8470;
  double t8474;
  double t8478;
  double t8480;
  double t8491;
  double t8496;
  t676 = Cos(var1[5]);
  t922 = Sin(var1[3]);
  t649 = Cos(var1[3]);
  t845 = Sin(var1[4]);
  t984 = Sin(var1[5]);
  t1274 = Cos(var1[6]);
  t1357 = -1.*t1274;
  t1375 = 1. + t1357;
  t1496 = Sin(var1[6]);
  t1618 = -1.*t676*t922;
  t1629 = t649*t845*t984;
  t1699 = t1618 + t1629;
  t880 = t649*t676*t845;
  t1030 = t922*t984;
  t1230 = t880 + t1030;
  t2145 = Cos(var1[7]);
  t2170 = -1.*t2145;
  t2215 = 1. + t2170;
  t2248 = Sin(var1[7]);
  t2014 = t1274*t1699;
  t2024 = t1230*t1496;
  t2083 = t2014 + t2024;
  t2405 = Cos(var1[4]);
  t3087 = Cos(var1[8]);
  t3161 = -1.*t3087;
  t3163 = 1. + t3161;
  t3245 = Sin(var1[8]);
  t2779 = t649*t2405*t2145;
  t2800 = t2083*t2248;
  t2874 = t2779 + t2800;
  t3272 = t1274*t1230;
  t3293 = -1.*t1699*t1496;
  t3305 = t3272 + t3293;
  t3585 = Cos(var1[9]);
  t3589 = -1.*t3585;
  t3599 = 1. + t3589;
  t3779 = Sin(var1[9]);
  t3931 = t3087*t2874;
  t3956 = t3305*t3245;
  t3957 = t3931 + t3956;
  t4319 = t3087*t3305;
  t4356 = -1.*t2874*t3245;
  t4401 = t4319 + t4356;
  t4425 = Cos(var1[10]);
  t4453 = -1.*t4425;
  t4544 = 1. + t4453;
  t4592 = Sin(var1[10]);
  t4741 = -1.*t3779*t3957;
  t4871 = t3585*t4401;
  t4900 = t4741 + t4871;
  t5133 = t3585*t3957;
  t5142 = t3779*t4401;
  t5171 = t5133 + t5142;
  t5293 = Cos(var1[11]);
  t5343 = -1.*t5293;
  t5384 = 1. + t5343;
  t5466 = Sin(var1[11]);
  t5617 = t4592*t4900;
  t5619 = t4425*t5171;
  t5675 = t5617 + t5619;
  t5852 = t4425*t4900;
  t5862 = -1.*t4592*t5171;
  t5938 = t5852 + t5862;
  t5976 = Cos(var1[12]);
  t6004 = -1.*t5976;
  t6016 = 1. + t6004;
  t6165 = Sin(var1[12]);
  t6189 = -1.*t5466*t5675;
  t6193 = t5293*t5938;
  t6284 = t6189 + t6193;
  t6473 = t5293*t5675;
  t6562 = t5466*t5938;
  t6614 = t6473 + t6562;
  t1412 = 0.07996*t1375;
  t1520 = -0.135*t1496;
  t1549 = 0. + t1412 + t1520;
  t1711 = 0.135*t1375;
  t1757 = 0.07996*t1496;
  t1916 = 0. + t1711 + t1757;
  t6931 = t649*t676;
  t6970 = t922*t845*t984;
  t7035 = t6931 + t6970;
  t6864 = t676*t922*t845;
  t6878 = -1.*t649*t984;
  t6929 = t6864 + t6878;
  t2220 = 0.135*t2215;
  t2255 = 0.08055*t2248;
  t2383 = 0. + t2220 + t2255;
  t2477 = -0.08055*t2215;
  t2562 = 0.135*t2248;
  t2572 = 0. + t2477 + t2562;
  t7079 = t1274*t7035;
  t7093 = t6929*t1496;
  t7136 = t7079 + t7093;
  t3187 = -0.08055*t3163;
  t3257 = -0.01004*t3245;
  t3268 = 0. + t3187 + t3257;
  t3311 = -0.01004*t3163;
  t3312 = 0.08055*t3245;
  t3392 = 0. + t3311 + t3312;
  t3619 = -0.08055*t3599;
  t3829 = -0.13004*t3779;
  t3925 = 0. + t3619 + t3829;
  t7245 = t2405*t2145*t922;
  t7269 = t7136*t2248;
  t7273 = t7245 + t7269;
  t7295 = t1274*t6929;
  t7314 = -1.*t7035*t1496;
  t7316 = t7295 + t7314;
  t4071 = -0.13004*t3599;
  t4182 = 0.08055*t3779;
  t4299 = 0. + t4071 + t4182;
  t4547 = -0.19074*t4544;
  t4635 = 0.03315*t4592;
  t4725 = 0. + t4547 + t4635;
  t7332 = t3087*t7273;
  t7344 = t7316*t3245;
  t7365 = t7332 + t7344;
  t7377 = t3087*t7316;
  t7385 = -1.*t7273*t3245;
  t7392 = t7377 + t7385;
  t4986 = -0.03315*t4544;
  t5044 = -0.19074*t4592;
  t5100 = 0. + t4986 + t5044;
  t5439 = -0.01315*t5384;
  t5495 = -0.62554*t5466;
  t5593 = 0. + t5439 + t5495;
  t7438 = -1.*t3779*t7365;
  t7452 = t3585*t7392;
  t7453 = t7438 + t7452;
  t7501 = t3585*t7365;
  t7506 = t3779*t7392;
  t7523 = t7501 + t7506;
  t5711 = -0.62554*t5384;
  t5802 = 0.01315*t5466;
  t5845 = 0. + t5711 + t5802;
  t6033 = -1.03354*t6016;
  t6168 = 0.05315*t6165;
  t6169 = 0. + t6033 + t6168;
  t7588 = t4592*t7453;
  t7627 = t4425*t7523;
  t7637 = t7588 + t7627;
  t7665 = t4425*t7453;
  t7676 = -1.*t4592*t7523;
  t7685 = t7665 + t7676;
  t6339 = -0.05315*t6016;
  t6457 = -1.03354*t6165;
  t6464 = 0. + t6339 + t6457;
  t7727 = -1.*t5466*t7637;
  t7753 = t5293*t7685;
  t7762 = t7727 + t7753;
  t7861 = t5293*t7637;
  t7890 = t5466*t7685;
  t7924 = t7861 + t7890;
  t8222 = t2405*t1274*t984;
  t8224 = t2405*t676*t1496;
  t8226 = t8222 + t8224;
  t8261 = -1.*t2145*t845;
  t8287 = t8226*t2248;
  t8291 = t8261 + t8287;
  t8307 = t2405*t676*t1274;
  t8317 = -1.*t2405*t984*t1496;
  t8329 = t8307 + t8317;
  t8346 = t3087*t8291;
  t8354 = t8329*t3245;
  t8360 = t8346 + t8354;
  t8382 = t3087*t8329;
  t8392 = -1.*t8291*t3245;
  t8398 = t8382 + t8392;
  t8405 = -1.*t3779*t8360;
  t8412 = t3585*t8398;
  t8418 = t8405 + t8412;
  t8430 = t3585*t8360;
  t8444 = t3779*t8398;
  t8447 = t8430 + t8444;
  t8450 = t4592*t8418;
  t8452 = t4425*t8447;
  t8455 = t8450 + t8452;
  t8460 = t4425*t8418;
  t8461 = -1.*t4592*t8447;
  t8462 = t8460 + t8461;
  t8470 = -1.*t5466*t8455;
  t8474 = t5293*t8462;
  t8478 = t8470 + t8474;
  t8480 = t5293*t8455;
  t8491 = t5466*t8462;
  t8496 = t8480 + t8491;
  p_output1[0]=0. + t1230*t1549 + t1699*t1916 + t2083*t2383 + t2874*t3268 + t3305*t3392 + t3925*t3957 + t4299*t4401 + t4725*t4900 + t5100*t5171 + t5593*t5675 + t5845*t5938 + t6169*t6284 + t2405*t2572*t649 + 0.1306*(t2083*t2145 - 1.*t2248*t2405*t649) + t6464*t6614 - 0.02565*(t6165*t6284 + t5976*t6614) - 1.03824*(t5976*t6284 - 1.*t6165*t6614) + var1[0];
  p_output1[1]=0. + t1549*t6929 + t1916*t7035 + t2383*t7136 + t3268*t7273 + t3392*t7316 + t3925*t7365 + t4299*t7392 + t4725*t7453 + t5100*t7523 + t5593*t7637 + t5845*t7685 + t6169*t7762 + t6464*t7924 - 0.02565*(t6165*t7762 + t5976*t7924) - 1.03824*(t5976*t7762 - 1.*t6165*t7924) + t2405*t2572*t922 + 0.1306*(t2145*t7136 - 1.*t2248*t2405*t922) + var1[1];
  p_output1[2]=0. + t1549*t2405*t676 + t2383*t8226 + t3268*t8291 + t3392*t8329 + t3925*t8360 + t4299*t8398 + t4725*t8418 + t5100*t8447 - 1.*t2572*t845 + 0.1306*(t2145*t8226 + t2248*t845) + t5593*t8455 + t5845*t8462 + t6169*t8478 + t6464*t8496 - 0.02565*(t6165*t8478 + t5976*t8496) - 1.03824*(t5976*t8478 - 1.*t6165*t8496) + t1916*t2405*t984 + var1[2];
}



void p_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
