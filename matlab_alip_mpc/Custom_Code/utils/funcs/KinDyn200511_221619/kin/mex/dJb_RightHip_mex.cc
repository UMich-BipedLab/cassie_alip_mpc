/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:55 GMT-04:00
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
  double t106;
  double t652;
  double t1114;
  double t353;
  double t1118;
  double t1584;
  double t1707;
  double t1763;
  double t1788;
  double t1942;
  double t2047;
  double t2059;
  double t2192;
  double t2351;
  double t2456;
  double t2662;
  double t795;
  double t1344;
  double t1384;
  double t3912;
  double t258;
  double t4659;
  double t4696;
  double t4700;
  double t4724;
  double t4399;
  double t5510;
  double t5545;
  double t4446;
  double t4699;
  double t4761;
  double t4764;
  double t5849;
  double t5923;
  double t5961;
  double t6549;
  double t6620;
  double t6729;
  double t6794;
  double t7297;
  double t7341;
  double t6532;
  double t6687;
  double t6801;
  double t6838;
  double t4173;
  double t4185;
  double t4217;
  double t7927;
  double t7929;
  double t7943;
  double t2841;
  double t2949;
  double t3110;
  double t3986;
  double t3993;
  double t3995;
  double t4611;
  double t4788;
  double t4895;
  double t5177;
  double t5303;
  double t5355;
  double t5565;
  double t5685;
  double t5686;
  double t5752;
  double t5811;
  double t6052;
  double t6151;
  double t6296;
  double t6323;
  double t6364;
  double t6450;
  double t6548;
  double t6851;
  double t6880;
  double t6905;
  double t6959;
  double t6997;
  double t7130;
  double t7169;
  double t7213;
  double t7390;
  double t7601;
  double t7622;
  double t7643;
  double t7663;
  double t7694;
  double t7701;
  double t7703;
  double t7757;
  double t7772;
  double t7776;
  double t9448;
  double t9450;
  double t9467;
  double t9468;
  double t9490;
  double t9499;
  double t9508;
  double t9540;
  double t9556;
  double t9744;
  double t9751;
  double t9717;
  double t9727;
  double t9733;
  double t9737;
  double t9773;
  double t9782;
  double t9805;
  double t9595;
  double t9597;
  double t9634;
  double t9646;
  double t9670;
  double t9452;
  double t9560;
  double t9842;
  double t9846;
  double t9859;
  double t9869;
  double t9872;
  double t9877;
  double t9584;
  double t9675;
  double t9698;
  double t9807;
  double t9862;
  double t9888;
  double t9905;
  double t9913;
  double t9914;
  double t9915;
  double t9738;
  double t9761;
  double t9768;
  double t9437;
  double t10120;
  double t9938;
  double t9952;
  double t9963;
  double t9965;
  double t10097;
  double t10101;
  double t10105;
  double t10067;
  double t10069;
  double t10073;
  double t10074;
  double t9329;
  double t9330;
  double t9335;
  double t9300;
  double t9308;
  double t9312;
  double t10199;
  double t10201;
  double t10204;
  double t10189;
  double t9269;
  double t9270;
  double t9283;
  double t9359;
  double t9372;
  double t9395;
  double t10323;
  double t10324;
  double t10345;
  double t10346;
  double t10347;
  double t10349;
  double t10350;
  double t10354;
  double t10357;
  double t10358;
  double t10371;
  double t10379;
  double t10380;
  double t10381;
  double t10512;
  double t10513;
  double t10514;
  double t10518;
  double t10526;
  double t10529;
  double t10532;
  double t10561;
  double t10562;
  double t10564;
  double t10568;
  double t10569;
  double t9148;
  double t9188;
  double t9222;
  double t9240;
  double t9262;
  double t9265;
  double t9294;
  double t9315;
  double t9316;
  double t9320;
  double t9322;
  double t9337;
  double t9406;
  double t9409;
  double t9711;
  double t9771;
  double t9982;
  double t9991;
  double t10088;
  double t10119;
  double t10664;
  double t10665;
  double t10667;
  double t10155;
  double t10156;
  double t10685;
  double t10688;
  double t10689;
  double t10262;
  double t10294;
  double t10416;
  double t10393;
  double t10395;
  double t10766;
  double t10768;
  double t10773;
  double t10352;
  double t10325;
  double t10327;
  double t10802;
  double t10803;
  double t10805;
  double t10806;
  double t10474;
  double t10500;
  double t10865;
  double t10868;
  double t10581;
  double t10598;
  double t10600;
  double t10890;
  double t10524;
  double t10545;
  double t10548;
  double t10905;
  double t10907;
  double t10909;
  double t10912;
  double t10738;
  double t10748;
  double t10849;
  double t11113;
  double t11114;
  t106 = Cos(var1[3]);
  t652 = Cos(var1[5]);
  t1114 = Sin(var1[13]);
  t353 = Cos(var1[13]);
  t1118 = Sin(var1[5]);
  t1584 = Sin(var1[4]);
  t1707 = t652*t1114;
  t1763 = t353*t1118;
  t1788 = t1707 + t1763;
  t1942 = t106*t1584*t1788;
  t2047 = Sin(var1[3]);
  t2059 = t353*t652;
  t2192 = -1.*t1114*t1118;
  t2351 = t2059 + t2192;
  t2456 = -1.*t2047*t2351;
  t2662 = t1942 + t2456;
  t795 = -1.*t353*t652;
  t1344 = t1114*t1118;
  t1384 = 0. + t795 + t1344;
  t3912 = Sin(var1[14]);
  t258 = Cos(var1[4]);
  t4659 = t1114*t3912;
  t4696 = 0. + t4659;
  t4700 = t353*t3912;
  t4724 = 0. + t4700;
  t4399 = Cos(var1[14]);
  t5510 = t652*t4724;
  t5545 = -1.*t4696*t1118;
  t4446 = 0. + t4399;
  t4699 = t652*t4696;
  t4761 = t4724*t1118;
  t4764 = 0. + t4699 + t4761;
  t5849 = t4399*t652*t1114;
  t5923 = t353*t4399*t1118;
  t5961 = t5849 + t5923;
  t6549 = -1.*t4399*t1114;
  t6620 = 0. + t6549;
  t6729 = -1.*t353*t4399;
  t6794 = 0. + t6729;
  t7297 = t6794*t652;
  t7341 = -1.*t6620*t1118;
  t6532 = 0. + t3912;
  t6687 = t652*t6620;
  t6801 = t6794*t1118;
  t6838 = 0. + t6687 + t6801;
  t4173 = t353*t652*t3912;
  t4185 = -1.*t1114*t3912*t1118;
  t4217 = t4173 + t4185;
  t7927 = t2047*t1584*t1788;
  t7929 = t106*t2351;
  t7943 = t7927 + t7929;
  t2841 = 0. + t1707 + t1763;
  t2949 = t1584*t1384;
  t3110 = 0. + t2949;
  t3986 = -1.*t652*t1114*t3912;
  t3993 = -1.*t353*t3912*t1118;
  t3995 = t3986 + t3993;
  t4611 = -1.*t4446*t1584;
  t4788 = t258*t4764;
  t4895 = t4611 + t4788;
  t5177 = -1.*t652*t4696;
  t5303 = -1.*t4724*t1118;
  t5355 = t5177 + t5303;
  t5565 = t5510 + t5545;
  t5685 = t353*t4399*t652;
  t5686 = -1.*t4399*t1114*t1118;
  t5752 = t5685 + t5686;
  t5811 = -1.*t258*t3912;
  t6052 = t1584*t5961;
  t6151 = t5811 + t6052;
  t6296 = 0. + t5510 + t5545;
  t6323 = t4446*t258;
  t6364 = t1584*t4764;
  t6450 = 0. + t6323 + t6364;
  t6548 = -1.*t6532*t1584;
  t6851 = t258*t6838;
  t6880 = t6548 + t6851;
  t6905 = -1.*t353*t4399*t652;
  t6959 = t4399*t1114*t1118;
  t6997 = t6905 + t6959;
  t7130 = -1.*t652*t6620;
  t7169 = -1.*t6794*t1118;
  t7213 = t7130 + t7169;
  t7390 = t7297 + t7341;
  t7601 = 0. + t7297 + t7341;
  t7622 = t258*t6532;
  t7643 = t1584*t6838;
  t7663 = 0. + t7622 + t7643;
  t7694 = t4399*t258;
  t7701 = t652*t1114*t3912;
  t7703 = t353*t3912*t1118;
  t7757 = t7701 + t7703;
  t7772 = t1584*t7757;
  t7776 = t7694 + t7772;
  t9448 = -1.*t353;
  t9450 = 1. + t9448;
  t9467 = -1.*t4399;
  t9468 = 1. + t9467;
  t9490 = -0.135*t9468;
  t9499 = -0.135*t4399;
  t9508 = 0. + t9490 + t9499;
  t9540 = t353*t9508;
  t9556 = 0.034300000000000004*t1114;
  t9744 = 0.135*t353;
  t9751 = t9744 + t9540 + t9556;
  t9717 = 0.034300000000000004*t353;
  t9727 = -0.135*t1114;
  t9733 = -1.*t9508*t1114;
  t9737 = t9717 + t9727 + t9733;
  t9773 = t652*t9751;
  t9782 = t9737*t1118;
  t9805 = t9773 + t9782;
  t9595 = 0.07996*t9450;
  t9597 = 0.04566*t353;
  t9634 = 0.135*t1114;
  t9646 = t9508*t1114;
  t9670 = 0. + t9595 + t9597 + t9634 + t9646;
  t9452 = -0.135*t9450;
  t9560 = 0. + t9452 + t9540 + t9556;
  t9842 = -0.08055*t9468;
  t9846 = -0.08055*t4399;
  t9859 = 0. + t9842 + t9846;
  t9869 = t652*t9670;
  t9872 = t9560*t1118;
  t9877 = 0. + t9869 + t9872;
  t9584 = t652*t9560;
  t9675 = -1.*t9670*t1118;
  t9698 = 0. + t9584 + t9675;
  t9807 = 0. + t6548 + t6851;
  t9862 = -1.*t9859*t1584;
  t9888 = t258*t9877;
  t9905 = 0. + t9862 + t9888;
  t9913 = t9859*t258;
  t9914 = t1584*t9877;
  t9915 = 0. + t9913 + t9914;
  t9738 = t652*t9737;
  t9761 = -1.*t9751*t1118;
  t9768 = t9738 + t9761;
  t9437 = 0. + t4611 + t4788;
  t10120 = t9584 + t9675;
  t9938 = t9698*t7601;
  t9952 = t9807*t9905;
  t9963 = t7663*t9915;
  t9965 = t9938 + t9952 + t9963;
  t10097 = -1.*t652*t9670;
  t10101 = -1.*t9560*t1118;
  t10105 = t10097 + t10101;
  t10067 = -1.*t9698*t6296;
  t10069 = -1.*t9905*t9437;
  t10073 = -1.*t9915*t6450;
  t10074 = t10067 + t10069 + t10073;
  t9329 = -1.*t258*t6532;
  t9330 = -1.*t1584*t6838;
  t9335 = t9329 + t9330;
  t9300 = -1.*t4446*t258;
  t9308 = -1.*t1584*t4764;
  t9312 = t9300 + t9308;
  t10199 = -1.*t9859*t258;
  t10201 = -1.*t1584*t9877;
  t10204 = t10199 + t10201;
  t10189 = t9862 + t9888;
  t9269 = t3912*t1584;
  t9270 = t258*t5961;
  t9283 = t9269 + t9270;
  t9359 = -1.*t4399*t1584;
  t9372 = t258*t7757;
  t9395 = t9359 + t9372;
  t10323 = t258*t1384;
  t10324 = 0. + t10323;
  t10345 = -1.*t9698*t7601;
  t10346 = -1.*t9807*t9905;
  t10347 = -1.*t7663*t9915;
  t10349 = t10345 + t10346 + t10347;
  t10350 = t258*t1788*t10349;
  t10354 = t2351*t9698;
  t10357 = t258*t1788*t9905;
  t10358 = t1584*t1788*t9915;
  t10371 = t2841*t9698;
  t10379 = t9905*t10324;
  t10380 = t9915*t3110;
  t10381 = t10371 + t10379 + t10380;
  t10512 = -1.*t2841*t9698;
  t10513 = -1.*t9905*t10324;
  t10514 = -1.*t9915*t3110;
  t10518 = t10512 + t10513 + t10514;
  t10526 = -1.*t2351*t9698;
  t10529 = -1.*t258*t1788*t9905;
  t10532 = -1.*t1584*t1788*t9915;
  t10561 = t9698*t6296;
  t10562 = t9905*t9437;
  t10564 = t9915*t6450;
  t10568 = t10561 + t10562 + t10564;
  t10569 = t258*t1788*t10568;
  t9148 = var2[13]*t258*t1788;
  t9188 = var2[5]*t258*t1788;
  t9222 = -1.*var2[4]*t1584*t1384;
  t9240 = t9148 + t9188 + t9222;
  t9262 = var2[13]*t258*t4217;
  t9265 = var2[5]*t258*t5565;
  t9294 = var2[14]*t9283;
  t9315 = var2[4]*t9312;
  t9316 = t9262 + t9265 + t9294 + t9315;
  t9320 = var2[13]*t258*t6997;
  t9322 = var2[5]*t258*t7390;
  t9337 = var2[4]*t9335;
  t9406 = var2[14]*t9395;
  t9409 = t9320 + t9322 + t9337 + t9406;
  t9711 = t5961*t9698;
  t9771 = t9768*t7601;
  t9982 = -1.*t9698*t3995;
  t9991 = -1.*t9768*t6296;
  t10088 = t7213*t9698;
  t10119 = t10105*t7601;
  t10664 = t9859*t6532;
  t10665 = t6838*t9877;
  t10667 = t10664 + t10665 + t9938;
  t10155 = -1.*t9698*t5355;
  t10156 = -1.*t10105*t6296;
  t10685 = -1.*t9859*t4446;
  t10688 = -1.*t9877*t4764;
  t10689 = t10685 + t10688 + t10067;
  t10262 = -1.*t5752*t9698;
  t10294 = t9698*t4217;
  t10416 = t2841*t10105;
  t10393 = -1.*t7213*t9698;
  t10395 = -1.*t10105*t7601;
  t10766 = t9877*t1384;
  t10768 = 0. + t10766 + t10371;
  t10773 = t1788*t9877;
  t10352 = t2841*t9768;
  t10325 = -1.*t5961*t9698;
  t10327 = -1.*t9768*t7601;
  t10802 = -1.*t9859*t6532;
  t10803 = -1.*t6838*t9877;
  t10805 = t10802 + t10803 + t10345;
  t10806 = t2351*t10805;
  t10474 = -1.*t9698*t4217;
  t10500 = t5752*t9698;
  t10865 = -1.*t9877*t1384;
  t10868 = 0. + t10865 + t10512;
  t10581 = -1.*t2841*t10105;
  t10598 = t9698*t5355;
  t10600 = t10105*t6296;
  t10890 = -1.*t1788*t9877;
  t10524 = -1.*t2841*t9768;
  t10545 = t9698*t3995;
  t10548 = t9768*t6296;
  t10905 = t9859*t4446;
  t10907 = t9877*t4764;
  t10909 = t10905 + t10907 + t10561;
  t10912 = t2351*t10909;
  t10738 = t9859*t3912;
  t10748 = t9859*t4399;
  t10849 = -1.*t9859*t4399;
  t11113 = -1.*var2[14]*t3912;
  t11114 = var2[14]*t4399;
  p_output1[0]=(-1.*t106*t2841 - 1.*t2047*t3110)*var2[3] + t106*t1384*t258*var2[4] + t2662*var2[5] + t2662*var2[13];
  p_output1[1]=(-1.*t106*t6296 - 1.*t2047*t6450)*var2[3] + t106*t4895*var2[4] + (-1.*t2047*t5355 + t106*t1584*t5565)*var2[5] + (-1.*t2047*t3995 + t106*t1584*t4217)*var2[13] + (-1.*t2047*t5752 + t106*t6151)*var2[14];
  p_output1[2]=(-1.*t106*t7601 - 1.*t2047*t7663)*var2[3] + t106*t6880*var2[4] + (-1.*t2047*t7213 + t106*t1584*t7390)*var2[5] + (-1.*t2047*t5961 + t106*t1584*t6997)*var2[13] + (-1.*t2047*t4217 + t106*t7776)*var2[14];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2047*t2841 + t106*t3110)*var2[3] + t1384*t2047*t258*var2[4] + t7943*var2[5] + t7943*var2[13];
  p_output1[7]=(-1.*t2047*t6296 + t106*t6450)*var2[3] + t2047*t4895*var2[4] + (t106*t5355 + t1584*t2047*t5565)*var2[5] + (t106*t3995 + t1584*t2047*t4217)*var2[13] + (t106*t5752 + t2047*t6151)*var2[14];
  p_output1[8]=(-1.*t2047*t7601 + t106*t7663)*var2[3] + t2047*t6880*var2[4] + (t106*t7213 + t1584*t2047*t7390)*var2[5] + (t106*t5961 + t1584*t2047*t6997)*var2[13] + (t106*t4217 + t2047*t7776)*var2[14];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t9240;
  p_output1[13]=t9316;
  p_output1[14]=t9409;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t10074*t9335 + t9807*(-1.*t10189*t6450 - 1.*t10204*t9437 - 1.*t9312*t9905 - 1.*t4895*t9915) + t9437*(t10189*t7663 + t10204*t9807 + t9335*t9905 + t6880*t9915) + t9312*t9965)*var2[4] + (t10074*t258*t7390 + t9807*(t10155 + t10156 - 1.*t10120*t1584*t6450 - 1.*t10120*t258*t9437 - 1.*t258*t5565*t9905 - 1.*t1584*t5565*t9915) + t9437*(t10088 + t10119 + t10120*t1584*t7663 + t10120*t258*t9807 + t258*t7390*t9905 + t1584*t7390*t9915) + t258*t5565*t9965)*var2[5] + (t10074*t258*t6997 + t9437*(t9711 + t9771 + t1584*t7663*t9805 + t258*t9805*t9807 + t258*t6997*t9905 + t1584*t6997*t9915) + t258*t4217*t9965 + t9807*(-1.*t1584*t6450*t9805 - 1.*t258*t9437*t9805 - 1.*t258*t4217*t9905 - 1.*t1584*t4217*t9915 + t9982 + t9991))*var2[13] + (t10074*t9395 + t9807*(0. + t10262 - 1.*t9283*t9905 - 1.*t6151*t9915) + t9437*(0. + t10294 + t9395*t9905 + t7776*t9915) + t9283*t9965)*var2[14];
  p_output1[19]=(-1.*t10349*t1384*t1584 + t10381*t9335 + t9807*(t10204*t10324 + t10189*t3110 - 1.*t1384*t1584*t9905 + t1384*t258*t9915) + t10324*(-1.*t10189*t7663 - 1.*t10204*t9807 - 1.*t9335*t9905 - 1.*t6880*t9915))*var2[4] + (t10350 + t10381*t258*t7390 + (t10354 + t10357 + t10358 + t10416 + t10120*t10324*t258 + t10120*t1584*t3110)*t9807 + t10324*(t10393 + t10395 - 1.*t10120*t1584*t7663 - 1.*t10120*t258*t9807 - 1.*t258*t7390*t9905 - 1.*t1584*t7390*t9915))*var2[5] + (t10350 + t10381*t258*t6997 + (t10352 + t10354 + t10357 + t10358 + t10324*t258*t9805 + t1584*t3110*t9805)*t9807 + t10324*(t10325 + t10327 - 1.*t1584*t7663*t9805 - 1.*t258*t9805*t9807 - 1.*t258*t6997*t9905 - 1.*t1584*t6997*t9915))*var2[13] + (0. + t10381*t9395 + t10324*(0. + t10474 - 1.*t9395*t9905 - 1.*t7776*t9915))*var2[14];
  p_output1[20]=(-1.*t10568*t1384*t1584 + t10518*t9312 + t9437*(-1.*t10204*t10324 - 1.*t10189*t3110 + t1384*t1584*t9905 - 1.*t1384*t258*t9915) + t10324*(t10189*t6450 + t10204*t9437 + t9312*t9905 + t4895*t9915))*var2[4] + (t10569 + t10518*t258*t5565 + (t10526 + t10529 + t10532 + t10581 - 1.*t10120*t10324*t258 - 1.*t10120*t1584*t3110)*t9437 + t10324*(t10598 + t10600 + t10120*t1584*t6450 + t10120*t258*t9437 + t258*t5565*t9905 + t1584*t5565*t9915))*var2[5] + (t10569 + t10518*t258*t4217 + t9437*(t10524 + t10526 + t10529 + t10532 - 1.*t10324*t258*t9805 - 1.*t1584*t3110*t9805) + t10324*(t10545 + t10548 + t1584*t6450*t9805 + t258*t9437*t9805 + t258*t4217*t9905 + t1584*t4217*t9915))*var2[13] + (0. + t10518*t9283 + t10324*(0. + t10500 + t9283*t9905 + t6151*t9915))*var2[14];
  p_output1[21]=t9240;
  p_output1[22]=t9316;
  p_output1[23]=t9409;
  p_output1[24]=(t10667*t5355 + t10689*t7213 + t7601*(t10155 + t10156 - 1.*t10120*t4764 - 1.*t5565*t9877) + t6296*(t10088 + t10119 + t10120*t6838 + t7390*t9877))*var2[5] + (t10667*t3995 + t10689*t5961 + t6296*(t9711 + t9771 + t6838*t9805 + t6997*t9877) + t7601*(-1.*t4764*t9805 - 1.*t4217*t9877 + t9982 + t9991))*var2[13] + (t10689*t4217 + t10667*t5752 + t7601*(0. + t10262 + t10738 - 1.*t5961*t9877) + t6296*(0. + t10294 + t10748 + t7757*t9877))*var2[14];
  p_output1[25]=(t10806 + t10768*t7213 + (t10354 + t10416 + t10773 + t10120*t1384)*t7601 + t2841*(t10393 + t10395 - 1.*t10120*t6838 - 1.*t7390*t9877))*var2[5] + (t10806 + t10768*t5961 + t7601*(t10352 + t10354 + t10773 + t1384*t9805) + t2841*(t10325 + t10327 - 1.*t6838*t9805 - 1.*t6997*t9877))*var2[13] + (0. + t10768*t4217 + t2841*(0. + t10474 + t10849 - 1.*t7757*t9877))*var2[14];
  p_output1[26]=(t10912 + t10868*t5355 + (t10526 + t10581 + t10890 - 1.*t10120*t1384)*t6296 + t2841*(t10598 + t10600 + t10120*t4764 + t5565*t9877))*var2[5] + (t10912 + t10868*t3995 + t6296*(t10524 + t10526 + t10890 - 1.*t1384*t9805) + t2841*(t10545 + t10548 + t4764*t9805 + t4217*t9877))*var2[13] + (0. + t10868*t5752 + t2841*(0. + t10500 - 1.*t3912*t9859 + t5961*t9877))*var2[14];
  p_output1[27]=t2351*var2[5] + t2351*var2[13];
  p_output1[28]=t5355*var2[5] + t3995*var2[13] + t5752*var2[14];
  p_output1[29]=t7213*var2[5] + t5961*var2[13] + t4217*var2[14];
  p_output1[30]=(t6532*(t1114*t3912*t9560 - 1.*t353*t3912*t9670 - 1.*t4724*t9737 - 1.*t4696*t9751) + t4446*(t1114*t4399*t9560 - 1.*t353*t4399*t9670 + t6794*t9737 + t6620*t9751))*var2[13] + (t4446*(0. + t10748 + t353*t3912*t9560 + t1114*t3912*t9670) + t6532*(0. + t10738 - 1.*t353*t4399*t9560 - 1.*t1114*t4399*t9670) + t4399*(t10685 - 1.*t4724*t9560 - 1.*t4696*t9670) - 1.*t3912*(t10664 + t6794*t9560 + t6620*t9670))*var2[14];
  p_output1[31]=t6532*(t353*t9560 + t1114*t9670 + t1114*t9737 - 1.*t353*t9751)*var2[13] + (0. + t4399*(0. + t1114*t9560 - 1.*t353*t9670))*var2[14];
  p_output1[32]=t4446*(-1.*t353*t9560 - 1.*t1114*t9670 - 1.*t1114*t9737 + t353*t9751)*var2[13] + (0. - 1.*t3912*(0. - 1.*t1114*t9560 + t353*t9670))*var2[14];
  p_output1[33]=0;
  p_output1[34]=t11113;
  p_output1[35]=t11114;
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
  p_output1[78]=(t4399*(0. + t10849 - 1.*t3912*t9508) + t4399*(0. + t10748 + t3912*t9508))*var2[14];
  p_output1[79]=0.034300000000000004*t4399*var2[14];
  p_output1[80]=0.034300000000000004*t3912*var2[14];
  p_output1[81]=0;
  p_output1[82]=t11113;
  p_output1[83]=t11114;
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

#include "dJb_RightHip_mex.hh"

namespace SymExpression
{

void dJb_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
