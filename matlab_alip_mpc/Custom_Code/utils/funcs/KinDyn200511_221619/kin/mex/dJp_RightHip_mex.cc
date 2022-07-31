/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:51 GMT-04:00
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
  double t553;
  double t44;
  double t250;
  double t298;
  double t305;
  double t475;
  double t693;
  double t704;
  double t775;
  double t1098;
  double t211;
  double t2274;
  double t1547;
  double t2998;
  double t3002;
  double t3468;
  double t2006;
  double t5543;
  double t5521;
  double t5565;
  double t5580;
  double t5795;
  double t5857;
  double t5879;
  double t2681;
  double t2697;
  double t2902;
  double t6476;
  double t6483;
  double t6486;
  double t1822;
  double t2252;
  double t435;
  double t533;
  double t551;
  double t5967;
  double t6632;
  double t6838;
  double t6924;
  double t7532;
  double t7576;
  double t800;
  double t1184;
  double t1203;
  double t7796;
  double t7893;
  double t8011;
  double t8156;
  double t8165;
  double t8172;
  double t8228;
  double t8247;
  double t8286;
  double t8946;
  double t8956;
  double t8958;
  double t9148;
  double t9201;
  double t9208;
  double t9329;
  double t9330;
  double t9333;
  double t9408;
  double t9424;
  double t9437;
  double t5370;
  double t5455;
  double t5668;
  double t5685;
  double t5794;
  double t9363;
  double t9511;
  double t9525;
  double t9538;
  double t9574;
  double t9584;
  double t8870;
  double t8873;
  double t8885;
  double t8909;
  double t8945;
  double t9675;
  double t9698;
  double t9700;
  double t8715;
  double t8985;
  double t9033;
  double t9037;
  double t9236;
  double t9237;
  double t9239;
  double t9890;
  double t9892;
  double t9900;
  double t9903;
  double t9905;
  double t9913;
  double t9914;
  double t9265;
  double t9269;
  double t9270;
  double t591;
  double t1611;
  double t2408;
  double t3877;
  double t4485;
  double t4573;
  double t4600;
  double t4625;
  double t4691;
  double t4698;
  double t4710;
  double t4724;
  double t4786;
  double t4958;
  double t4980;
  double t5049;
  double t5330;
  double t7756;
  double t8425;
  double t9974;
  double t9977;
  double t9978;
  double t10055;
  double t10058;
  double t10067;
  double t10051;
  double t10069;
  double t10071;
  double t10073;
  double t9140;
  double t9142;
  double t9147;
  double t9220;
  double t9262;
  double t9283;
  double t9291;
  double t9294;
  double t9312;
  double t9315;
  double t9320;
  double t10097;
  double t10101;
  double t10103;
  double t9760;
  double t10147;
  double t10148;
  double t10151;
  double t9833;
  double t10198;
  double t10199;
  double t10201;
  double t10193;
  double t10194;
  double t10196;
  double t10197;
  double t10202;
  double t10207;
  double t10208;
  double t10231;
  double t10232;
  double t10233;
  double t10278;
  double t10279;
  double t10285;
  double t9925;
  double t9927;
  double t9930;
  double t8064;
  double t8224;
  double t8294;
  double t8303;
  double t8319;
  double t8320;
  double t8335;
  double t9372;
  double t6532;
  double t6958;
  double t6959;
  double t7067;
  double t7113;
  double t7577;
  double t7601;
  double t7626;
  double t7643;
  double t10081;
  double t10083;
  double t10085;
  double t9337;
  double t9359;
  double t9395;
  double t9448;
  double t9450;
  double t9452;
  double t9468;
  double t10366;
  double t10367;
  double t10370;
  double t10378;
  double t10379;
  double t9768;
  double t9773;
  double t9805;
  double t9807;
  double t10408;
  double t10412;
  double t10414;
  double t10428;
  double t10429;
  double t10432;
  double t10228;
  double t10230;
  double t10235;
  double t10237;
  double t10240;
  double t10245;
  double t10251;
  double t10440;
  double t10445;
  double t10221;
  double t10222;
  double t10225;
  double t9872;
  double t9885;
  double t9915;
  double t10333;
  double t10334;
  double t10340;
  double t10341;
  double t10343;
  double t10344;
  double t10345;
  double t10346;
  double t10347;
  double t9542;
  double t9551;
  double t5633;
  double t5923;
  double t6099;
  double t6238;
  double t6464;
  double t6498;
  double t6504;
  double t6506;
  double t6520;
  double t10036;
  double t10043;
  double t10075;
  double t9496;
  double t9540;
  double t9560;
  double t9595;
  double t9597;
  double t9603;
  double t9634;
  double t10371;
  double t10375;
  double t10380;
  double t10381;
  double t10382;
  double t10384;
  double t10389;
  double t10390;
  double t10393;
  double t10515;
  double t10517;
  double t10475;
  double t10478;
  double t10481;
  double t10528;
  double t10529;
  double t10433;
  double t10434;
  double t10436;
  double t10437;
  double t10439;
  double t10451;
  double t10453;
  double t10457;
  double t10190;
  double t10191;
  double t10215;
  double t9934;
  double t9935;
  double t9938;
  double t9946;
  double t9948;
  double t9952;
  double t9954;
  double t9955;
  double t10350;
  double t10352;
  double t10354;
  double t10357;
  double t10468;
  double t10469;
  double t10471;
  double t10472;
  double t9728;
  double t9737;
  double t8886;
  double t8962;
  double t9043;
  double t9069;
  double t9093;
  double t9094;
  double t9102;
  double t9135;
  double t10089;
  double t10105;
  double t10106;
  double t10113;
  double t10114;
  double t10116;
  double t10118;
  double t10120;
  double t10126;
  double t10132;
  double t10416;
  double t10417;
  double t10421;
  double t10422;
  double t10518;
  double t10520;
  double t10522;
  double t10523;
  double t9646;
  double t9706;
  double t9713;
  double t9721;
  double t9725;
  double t9727;
  double t9741;
  double t9744;
  double t10569;
  double t10570;
  double t10573;
  double t10609;
  double t10611;
  double t10255;
  double t10648;
  double t10649;
  double t10650;
  double t10261;
  double t10273;
  double t10286;
  double t10289;
  double t10294;
  double t10300;
  double t10302;
  double t10303;
  double t10306;
  double t10309;
  double t10314;
  double t10318;
  t553 = Sin(var1[3]);
  t44 = Cos(var1[4]);
  t250 = Cos(var1[13]);
  t298 = -1.*t250;
  t305 = 1. + t298;
  t475 = Sin(var1[13]);
  t693 = Cos(var1[14]);
  t704 = -1.*t693;
  t775 = 1. + t704;
  t1098 = Sin(var1[14]);
  t211 = Cos(var1[5]);
  t2274 = Sin(var1[5]);
  t1547 = Sin(var1[4]);
  t2998 = -1.*t44*t211*t475*t553;
  t3002 = -1.*t250*t44*t553*t2274;
  t3468 = t2998 + t3002;
  t2006 = 0.07996*t475;
  t5543 = Cos(var1[3]);
  t5521 = -1.*t211*t553*t1547;
  t5565 = t5543*t2274;
  t5580 = t5521 + t5565;
  t5795 = -1.*t5543*t211;
  t5857 = -1.*t553*t1547*t2274;
  t5879 = t5795 + t5857;
  t2681 = -0.135*t775;
  t2697 = 0.08055*t1098;
  t2902 = 0. + t2681 + t2697;
  t6476 = t250*t5580;
  t6483 = -1.*t475*t5879;
  t6486 = t6476 + t6483;
  t1822 = -0.135*t305;
  t2252 = 0. + t1822 + t2006;
  t435 = 0.07996*t305;
  t533 = 0.135*t475;
  t551 = 0. + t435 + t533;
  t5967 = -1.*t475*t5580;
  t6632 = t5543*t211;
  t6838 = t553*t1547*t2274;
  t6924 = t6632 + t6838;
  t7532 = t475*t6924;
  t7576 = t6476 + t7532;
  t800 = -0.08055*t775;
  t1184 = -0.135*t1098;
  t1203 = 0. + t800 + t1184;
  t7796 = -1.*t5543*t211*t1547;
  t7893 = -1.*t553*t2274;
  t8011 = t7796 + t7893;
  t8156 = t211*t553;
  t8165 = -1.*t5543*t1547*t2274;
  t8172 = t8156 + t8165;
  t8228 = t475*t8011;
  t8247 = t250*t8172;
  t8286 = t8228 + t8247;
  t8946 = t475*t5580;
  t8956 = t250*t5879;
  t8958 = t8946 + t8956;
  t9148 = t5543*t44*t211*t475;
  t9201 = t250*t5543*t44*t2274;
  t9208 = t9148 + t9201;
  t9329 = t5543*t211*t1547;
  t9330 = t553*t2274;
  t9333 = t9329 + t9330;
  t9408 = t250*t9333;
  t9424 = t475*t8172;
  t9437 = t9408 + t9424;
  t5370 = 0.135*t250;
  t5455 = t5370 + t2006;
  t5668 = 0.07996*t250;
  t5685 = -0.135*t475;
  t5794 = t5668 + t5685;
  t9363 = -1.*t475*t9333;
  t9511 = -1.*t211*t553;
  t9525 = t5543*t1547*t2274;
  t9538 = t9511 + t9525;
  t9574 = -1.*t475*t9538;
  t9584 = t9408 + t9574;
  t8870 = -0.135*t693;
  t8873 = -0.08055*t1098;
  t8885 = t8870 + t8873;
  t8909 = 0.08055*t693;
  t8945 = t8909 + t1184;
  t9675 = t475*t9333;
  t9698 = t250*t9538;
  t9700 = t9675 + t9698;
  t8715 = -1.*t693*t5543*t44;
  t8985 = t44*t1098*t553;
  t9033 = t693*t8958;
  t9037 = t8985 + t9033;
  t9236 = t250*t5543*t44*t211;
  t9237 = -1.*t5543*t44*t475*t2274;
  t9239 = t9236 + t9237;
  t9890 = -1.*t5543*t44*t211*t475;
  t9892 = -1.*t250*t5543*t44*t2274;
  t9900 = t9890 + t9892;
  t9903 = 0.04566*t9900;
  t9905 = -0.135*t693*t9239;
  t9913 = t2902*t9239;
  t9914 = -0.08055*t1098*t9239;
  t9265 = t5543*t1098*t1547;
  t9269 = t693*t9208;
  t9270 = t9265 + t9269;
  t591 = -1.*t44*t211*t551*t553;
  t1611 = t1203*t553*t1547;
  t2408 = -1.*t44*t2252*t553*t2274;
  t3877 = t2902*t3468;
  t4485 = -1.*t250*t44*t211*t553;
  t4573 = t44*t475*t553*t2274;
  t4600 = t4485 + t4573;
  t4625 = 0.04566*t4600;
  t4691 = -1.*t1098*t553*t1547;
  t4698 = t693*t3468;
  t4710 = t4691 + t4698;
  t4724 = -0.135*t4710;
  t4786 = t693*t553*t1547;
  t4958 = t1098*t3468;
  t4980 = t4786 + t4958;
  t5049 = -0.08055*t4980;
  t5330 = t591 + t1611 + t2408 + t3877 + t4625 + t4724 + t5049;
  t7756 = -1.*t5543*t44*t1203;
  t8425 = t5543*t44*t1098;
  t9974 = -1.*t5543*t211*t475*t1547;
  t9977 = -1.*t250*t5543*t1547*t2274;
  t9978 = t9974 + t9977;
  t10055 = t250*t44*t211*t553;
  t10058 = -1.*t44*t475*t553*t2274;
  t10067 = t10055 + t10058;
  t10051 = 0.04566*t3468;
  t10069 = -0.135*t693*t10067;
  t10071 = t2902*t10067;
  t10073 = -0.08055*t1098*t10067;
  t9140 = t5543*t44*t211*t551;
  t9142 = -1.*t5543*t1203*t1547;
  t9147 = t5543*t44*t2252*t2274;
  t9220 = t2902*t9208;
  t9262 = 0.04566*t9239;
  t9283 = -0.135*t9270;
  t9291 = -1.*t693*t5543*t1547;
  t9294 = t1098*t9208;
  t9312 = t9291 + t9294;
  t9315 = -0.08055*t9312;
  t9320 = t9140 + t9142 + t9147 + t9220 + t9262 + t9283 + t9315;
  t10097 = t44*t211*t475*t553;
  t10101 = t250*t44*t553*t2274;
  t10103 = t10097 + t10101;
  t9760 = -1.*t44*t1203*t553;
  t10147 = -1.*t211*t475*t553*t1547;
  t10148 = -1.*t250*t553*t1547*t2274;
  t10151 = t10147 + t10148;
  t9833 = -1.*t693*t44*t553;
  t10198 = -1.*t250*t211*t1547;
  t10199 = t475*t1547*t2274;
  t10201 = t10198 + t10199;
  t10193 = t211*t475*t1547;
  t10194 = t250*t1547*t2274;
  t10196 = t10193 + t10194;
  t10197 = 0.04566*t10196;
  t10202 = -0.135*t693*t10201;
  t10207 = t2902*t10201;
  t10208 = -0.08055*t1098*t10201;
  t10231 = -1.*t44*t211*t475;
  t10232 = -1.*t250*t44*t2274;
  t10233 = t10231 + t10232;
  t10278 = -1.*t211*t475*t1547;
  t10279 = -1.*t250*t1547*t2274;
  t10285 = t10278 + t10279;
  t9925 = t5543*t44*t211*t2252;
  t9927 = -1.*t5543*t44*t551*t2274;
  t9930 = t9925 + t9927 + t9903 + t9905 + t9913 + t9914;
  t8064 = t551*t8011;
  t8224 = t2252*t8172;
  t8294 = t2902*t8286;
  t8303 = t250*t8011;
  t8319 = -1.*t475*t8172;
  t8320 = t8303 + t8319;
  t8335 = 0.04566*t8320;
  t9372 = t9363 + t8247;
  t6532 = t2252*t5580;
  t6958 = t551*t6924;
  t6959 = t250*t6924;
  t7067 = t5967 + t6959;
  t7113 = 0.04566*t7067;
  t7577 = -0.135*t693*t7576;
  t7601 = t2902*t7576;
  t7626 = -0.08055*t1098*t7576;
  t7643 = t6532 + t6958 + t7113 + t7577 + t7601 + t7626;
  t10081 = t44*t211*t2252*t553;
  t10083 = -1.*t44*t551*t553*t2274;
  t10085 = t10081 + t10083 + t10051 + t10069 + t10071 + t10073;
  t9337 = t2252*t9333;
  t9359 = t551*t8172;
  t9395 = 0.04566*t9372;
  t9448 = -0.135*t693*t9437;
  t9450 = t2902*t9437;
  t9452 = -0.08055*t1098*t9437;
  t9468 = t9337 + t9359 + t9395 + t9448 + t9450 + t9452;
  t10366 = t211*t553*t1547;
  t10367 = -1.*t5543*t2274;
  t10370 = t10366 + t10367;
  t10378 = -1.*t475*t10370;
  t10379 = t10378 + t8956;
  t9768 = t551*t5580;
  t9773 = t2252*t5879;
  t9805 = t2902*t8958;
  t9807 = 0.04566*t6486;
  t10408 = t250*t10370;
  t10412 = t475*t5879;
  t10414 = t10408 + t10412;
  t10428 = t250*t44*t211;
  t10429 = -1.*t44*t475*t2274;
  t10432 = t10428 + t10429;
  t10228 = -1.*t44*t211*t551;
  t10230 = -1.*t44*t2252*t2274;
  t10235 = t2902*t10233;
  t10237 = -1.*t250*t44*t211;
  t10240 = t44*t475*t2274;
  t10245 = t10237 + t10240;
  t10251 = 0.04566*t10245;
  t10440 = -0.135*t693*t10233;
  t10445 = -0.08055*t1098*t10233;
  t10221 = -1.*t211*t2252*t1547;
  t10222 = t551*t1547*t2274;
  t10225 = t10221 + t10222 + t10197 + t10202 + t10207 + t10208;
  t9872 = t5543*t44*t211*t5455;
  t9885 = t5543*t44*t5794*t2274;
  t9915 = t9872 + t9885 + t9903 + t9905 + t9913 + t9914;
  t10333 = t5794*t9333;
  t10334 = t5455*t8172;
  t10340 = -0.135*t693*t9372;
  t10341 = t2902*t9372;
  t10343 = -0.08055*t1098*t9372;
  t10344 = -1.*t250*t9333;
  t10345 = t10344 + t8319;
  t10346 = 0.04566*t10345;
  t10347 = t10333 + t10334 + t10340 + t10341 + t10343 + t10346;
  t9542 = -1.*t250*t9538;
  t9551 = t9363 + t9542;
  t5633 = t5455*t5580;
  t5923 = t5794*t5879;
  t6099 = -1.*t250*t5879;
  t6238 = t5967 + t6099;
  t6464 = 0.04566*t6238;
  t6498 = -0.135*t693*t6486;
  t6504 = t2902*t6486;
  t6506 = -0.08055*t1098*t6486;
  t6520 = t5633 + t5923 + t6464 + t6498 + t6504 + t6506;
  t10036 = t44*t211*t5455*t553;
  t10043 = t44*t5794*t553*t2274;
  t10075 = t10036 + t10043 + t10051 + t10069 + t10071 + t10073;
  t9496 = t5455*t9333;
  t9540 = t5794*t9538;
  t9560 = 0.04566*t9551;
  t9595 = -0.135*t693*t9584;
  t9597 = t2902*t9584;
  t9603 = -0.08055*t1098*t9584;
  t9634 = t9496 + t9540 + t9560 + t9595 + t9597 + t9603;
  t10371 = t5794*t10370;
  t10375 = t5455*t5879;
  t10380 = -0.135*t693*t10379;
  t10381 = t2902*t10379;
  t10382 = -0.08055*t1098*t10379;
  t10384 = -1.*t250*t10370;
  t10389 = t10384 + t6483;
  t10390 = 0.04566*t10389;
  t10393 = t10371 + t10375 + t10380 + t10381 + t10382 + t10390;
  t10515 = -1.*t475*t6924;
  t10517 = t10408 + t10515;
  t10475 = -0.135*t250;
  t10478 = -0.07996*t475;
  t10481 = t10475 + t10478;
  t10528 = -1.*t250*t6924;
  t10529 = t10378 + t10528;
  t10433 = -0.08055*t693*t10432;
  t10434 = t8945*t10432;
  t10436 = 0.135*t1098*t10432;
  t10437 = t10433 + t10434 + t10436;
  t10439 = var2[14]*t10437;
  t10451 = t44*t211*t5794;
  t10453 = -1.*t44*t5455*t2274;
  t10457 = t10451 + t10453 + t10440 + t10235 + t10445 + t10251;
  t10190 = -1.*t211*t5455*t1547;
  t10191 = -1.*t5794*t1547*t2274;
  t10215 = t10190 + t10191 + t10197 + t10202 + t10207 + t10208;
  t9934 = -1.*t5543*t8885*t1547;
  t9935 = t8945*t9208;
  t9938 = -0.08055*t9270;
  t9946 = t693*t5543*t1547;
  t9948 = -1.*t1098*t9208;
  t9952 = t9946 + t9948;
  t9954 = -0.135*t9952;
  t9955 = t9934 + t9935 + t9938 + t9954;
  t10350 = -0.08055*t693*t9437;
  t10352 = t8945*t9437;
  t10354 = 0.135*t1098*t9437;
  t10357 = t10350 + t10352 + t10354;
  t10468 = -0.08055*t693*t9584;
  t10469 = t8945*t9584;
  t10471 = 0.135*t1098*t9584;
  t10472 = t10468 + t10469 + t10471;
  t9728 = -1.*t1098*t9700;
  t9737 = t8715 + t9728;
  t8886 = -1.*t44*t8885*t553;
  t8962 = t8945*t8958;
  t9043 = -0.08055*t9037;
  t9069 = t693*t44*t553;
  t9093 = -1.*t1098*t8958;
  t9094 = t9069 + t9093;
  t9102 = -0.135*t9094;
  t9135 = t8886 + t8962 + t9043 + t9102;
  t10089 = -1.*t8885*t553*t1547;
  t10105 = t8945*t10103;
  t10106 = t1098*t553*t1547;
  t10113 = t693*t10103;
  t10114 = t10106 + t10113;
  t10116 = -0.08055*t10114;
  t10118 = -1.*t1098*t10103;
  t10120 = t4786 + t10118;
  t10126 = -0.135*t10120;
  t10132 = t10089 + t10105 + t10116 + t10126;
  t10416 = -0.08055*t693*t10414;
  t10417 = t8945*t10414;
  t10421 = 0.135*t1098*t10414;
  t10422 = t10416 + t10417 + t10421;
  t10518 = -0.08055*t693*t10517;
  t10520 = t8945*t10517;
  t10522 = 0.135*t1098*t10517;
  t10523 = t10518 + t10520 + t10522;
  t9646 = t5543*t44*t8885;
  t9706 = t8945*t9700;
  t9713 = -1.*t5543*t44*t1098;
  t9721 = t693*t9700;
  t9725 = t9713 + t9721;
  t9727 = -0.08055*t9725;
  t9741 = -0.135*t9737;
  t9744 = t9646 + t9706 + t9727 + t9741;
  t10569 = -0.08055*t693;
  t10570 = 0.135*t1098;
  t10573 = t10569 + t10570;
  t10609 = t475*t10370;
  t10611 = t10609 + t6959;
  t10255 = -1.*t1098*t1547;
  t10648 = t44*t211*t475;
  t10649 = t250*t44*t2274;
  t10650 = t10648 + t10649;
  t10261 = t693*t1547;
  t10273 = -1.*t44*t8885;
  t10286 = t8945*t10285;
  t10289 = t44*t1098;
  t10294 = t693*t10285;
  t10300 = t10289 + t10294;
  t10302 = -0.08055*t10300;
  t10303 = t693*t44;
  t10306 = -1.*t1098*t10285;
  t10309 = t10303 + t10306;
  t10314 = -0.135*t10309;
  t10318 = t10273 + t10286 + t10302 + t10314;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t7756 + t8064 + t8224 + t8294 + t8335 - 0.135*(t693*t8286 + t8425) - 0.08055*(t1098*t8286 + t8715))*var2[3] + t5330*var2[4] + t7643*var2[5] + t6520*var2[13] + t9135*var2[14];
  p_output1[10]=(-0.135*t9037 + t9760 + t9768 + t9773 + t9805 + t9807 - 0.08055*(t1098*t8958 + t9833))*var2[3] + t9320*var2[4] + t9468*var2[5] + t9634*var2[13] + t9744*var2[14];
  p_output1[11]=0;
  p_output1[12]=t5330*var2[3] + (-1.*t1547*t2252*t2274*t5543 - 1.*t1547*t211*t551*t5543 + 0.04566*(-1.*t1547*t211*t250*t5543 + t1547*t2274*t475*t5543) + t7756 + t2902*t9978 - 0.08055*(t8715 + t1098*t9978) - 0.135*(t8425 + t693*t9978))*var2[4] + t9930*var2[5] + t9915*var2[13] + t9955*var2[14];
  p_output1[13]=t9320*var2[3] + (t10151*t2902 - 1.*t1547*t2252*t2274*t553 - 1.*t1547*t211*t551*t553 + 0.04566*(-1.*t1547*t211*t250*t553 + t1547*t2274*t475*t553) - 0.135*(t10151*t693 + t8985) + t9760 - 0.08055*(t10151*t1098 + t9833))*var2[4] + t10085*var2[5] + t10075*var2[13] + t10132*var2[14];
  p_output1[14]=(t10228 + t10230 + t10235 + t10251 - 0.08055*(t10261 + t10233*t1098) + t1203*t1547 - 0.135*(t10255 + t10233*t693))*var2[4] + t10225*var2[5] + t10215*var2[13] + t10318*var2[14];
  p_output1[15]=t7643*var2[3] + t9930*var2[4] + (t8064 + t8224 - 0.08055*t1098*t8286 - 0.135*t693*t8286 + t8294 + t8335)*var2[5] + t10347*var2[13] + t10357*var2[14];
  p_output1[16]=t9468*var2[3] + t10085*var2[4] + (-0.08055*t1098*t8958 - 0.135*t693*t8958 + t9768 + t9773 + t9805 + t9807)*var2[5] + t10393*var2[13] + t10422*var2[14];
  p_output1[17]=t10439 + t10225*var2[4] + (t10228 + t10230 + t10235 + t10251 + t10440 + t10445)*var2[5] + t10457*var2[13];
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
  p_output1[39]=t6520*var2[3] + t9915*var2[4] + t10347*var2[5] + (t10333 + t10481*t9538 + 0.04566*(t10344 + t475*t9538) - 0.08055*t1098*t9551 + t2902*t9551 - 0.135*t693*t9551)*var2[13] + t10472*var2[14];
  p_output1[40]=t9634*var2[3] + t10075*var2[4] + t10393*var2[5] + (t10371 - 0.08055*t10529*t1098 + t10529*t2902 + t10481*t6924 - 0.135*t10529*t693 + 0.04566*(t10384 + t7532))*var2[13] + t10523*var2[14];
  p_output1[41]=t10439 + t10215*var2[4] + t10457*var2[5] + (t10235 + t10251 + t10440 + t10445 + t10451 + t10481*t2274*t44)*var2[13];
  p_output1[42]=t9135*var2[3] + t9955*var2[4] + t10357*var2[5] + t10472*var2[13] + (t10573*t44*t5543 + t8885*t9700 - 0.135*(t8425 - 1.*t693*t9700) - 0.08055*t9737)*var2[14];
  p_output1[43]=t9744*var2[3] + t10132*var2[4] + t10422*var2[5] + t10523*var2[13] + (t10573*t44*t553 + t10611*t8885 - 0.135*(-1.*t10611*t693 + t8985) - 0.08055*(-1.*t10611*t1098 + t9833))*var2[14];
  p_output1[44]=t10318*var2[4] + t10437*var2[5] + t10437*var2[13] + (-0.08055*(t10261 - 1.*t10650*t1098) - 1.*t10573*t1547 - 0.135*(t10255 - 1.*t10650*t693) + t10650*t8885)*var2[14];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_RightHip_mex.hh"

namespace SymExpression
{

void dJp_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
