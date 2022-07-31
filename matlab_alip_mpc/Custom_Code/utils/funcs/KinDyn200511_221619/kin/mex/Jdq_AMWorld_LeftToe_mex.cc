/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:16 GMT-04:00
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
  double t235;
  double t491;
  double t532;
  double t512;
  double t569;
  double t477;
  double t595;
  double t633;
  double t639;
  double t517;
  double t573;
  double t587;
  double t656;
  double t183;
  double t752;
  double t781;
  double t786;
  double t283;
  double t395;
  double t433;
  double t590;
  double t674;
  double t684;
  double t714;
  double t716;
  double t719;
  double t798;
  double t874;
  double t738;
  double t805;
  double t831;
  double t142;
  double t894;
  double t900;
  double t908;
  double t939;
  double t853;
  double t921;
  double t928;
  double t129;
  double t943;
  double t947;
  double t951;
  double t976;
  double t929;
  double t958;
  double t971;
  double t73;
  double t997;
  double t1023;
  double t1024;
  double t1074;
  double t46;
  double t1175;
  double t1176;
  double t1206;
  double t1268;
  double t1275;
  double t1297;
  double t1244;
  double t1305;
  double t1307;
  double t1325;
  double t1327;
  double t1330;
  double t1383;
  double t1394;
  double t1395;
  double t1321;
  double t1342;
  double t1349;
  double t1351;
  double t1406;
  double t1410;
  double t1472;
  double t1521;
  double t1528;
  double t1576;
  double t1580;
  double t1781;
  double t1783;
  double t1802;
  double t1770;
  double t1810;
  double t1837;
  double t1848;
  double t1855;
  double t1914;
  double t1918;
  double t1924;
  double t1846;
  double t1864;
  double t1872;
  double t1876;
  double t1985;
  double t2013;
  double t2085;
  double t2089;
  double t2106;
  double t2156;
  double t2176;
  double t2385;
  double t2388;
  double t2061;
  double t2072;
  double t2081;
  double t2122;
  double t2192;
  double t2197;
  double t2199;
  double t2213;
  double t2275;
  double t2278;
  double t2282;
  double t2294;
  double t2306;
  double t2316;
  double t972;
  double t1028;
  double t1061;
  double t1082;
  double t1091;
  double t1094;
  double t2407;
  double t2434;
  double t2437;
  double t2452;
  double t2470;
  double t2471;
  double t2486;
  double t2494;
  double t2508;
  double t2522;
  double t2537;
  double t1412;
  double t1430;
  double t1449;
  double t1567;
  double t1588;
  double t1640;
  double t1648;
  double t1679;
  double t1683;
  double t1689;
  double t1693;
  double t1702;
  double t1708;
  double t1714;
  double t2757;
  double t2791;
  double t2794;
  double t2733;
  double t2734;
  double t2739;
  double t2881;
  double t2920;
  double t2925;
  double t2724;
  double t2740;
  double t2812;
  double t2819;
  double t2840;
  double t2852;
  double t2853;
  double t2931;
  double t2938;
  double t2993;
  double t3016;
  double t3020;
  double t2964;
  double t3021;
  double t3030;
  double t3043;
  double t3052;
  double t3081;
  double t3038;
  double t3089;
  double t3110;
  double t3113;
  double t3134;
  double t3149;
  double t1724;
  double t2317;
  double t2338;
  double t2551;
  double t2565;
  double t2566;
  double t3112;
  double t3155;
  double t3188;
  double t3198;
  double t3208;
  double t3210;
  double t2633;
  double t2657;
  double t2693;
  double t2705;
  double t3535;
  double t3575;
  double t3587;
  double t3416;
  double t3420;
  double t3421;
  double t3426;
  double t3427;
  double t3508;
  double t3533;
  double t3591;
  double t3610;
  double t3615;
  double t3621;
  double t3653;
  double t3613;
  double t3722;
  double t3763;
  double t3811;
  double t3843;
  double t3871;
  double t3785;
  double t3872;
  double t3876;
  double t3914;
  double t3919;
  double t3966;
  double t3903;
  double t3974;
  double t4024;
  double t4062;
  double t4086;
  double t4102;
  double t2373;
  double t2379;
  double t2381;
  double t4398;
  double t4407;
  double t4413;
  double t1065;
  double t1124;
  double t1153;
  double t4351;
  double t4357;
  double t4389;
  double t4461;
  double t4470;
  double t4474;
  double t2578;
  double t2620;
  double t2621;
  double t3262;
  double t3271;
  double t3321;
  double t4391;
  double t4416;
  double t4434;
  double t4476;
  double t4487;
  double t4506;
  double t3193;
  double t3214;
  double t3230;
  double t4561;
  double t4577;
  double t4587;
  double t4645;
  double t3342;
  double t3359;
  double t3360;
  double t4193;
  double t4239;
  double t4240;
  double t4055;
  double t4150;
  double t4170;
  double t4253;
  double t4280;
  double t4284;
  double t4853;
  double t4942;
  double t4944;
  double t4981;
  double t5030;
  double t5046;
  double t5075;
  double t5081;
  double t5103;
  double t5111;
  double t4968;
  double t5069;
  double t5119;
  double t5134;
  double t5167;
  double t5199;
  double t5210;
  double t5234;
  double t5236;
  double t5252;
  double t5278;
  double t5279;
  double t5296;
  double t5306;
  double t5312;
  double t5333;
  double t5345;
  double t5348;
  double t5418;
  double t5419;
  double t5424;
  double t5425;
  double t5445;
  double t5446;
  double t5448;
  double t5449;
  double t5477;
  t235 = Cos(var1[3]);
  t491 = Cos(var1[5]);
  t532 = Sin(var1[4]);
  t512 = Sin(var1[3]);
  t569 = Sin(var1[5]);
  t477 = Cos(var1[6]);
  t595 = t235*t491*t532;
  t633 = t512*t569;
  t639 = t595 + t633;
  t517 = -1.*t491*t512;
  t573 = t235*t532*t569;
  t587 = t517 + t573;
  t656 = Sin(var1[6]);
  t183 = Cos(var1[8]);
  t752 = t477*t639;
  t781 = -1.*t587*t656;
  t786 = t752 + t781;
  t283 = Cos(var1[4]);
  t395 = Cos(var1[7]);
  t433 = t235*t283*t395;
  t590 = t477*t587;
  t674 = t639*t656;
  t684 = t590 + t674;
  t714 = Sin(var1[7]);
  t716 = t684*t714;
  t719 = t433 + t716;
  t798 = Sin(var1[8]);
  t874 = Cos(var1[9]);
  t738 = t183*t719;
  t805 = t786*t798;
  t831 = t738 + t805;
  t142 = Sin(var1[9]);
  t894 = t183*t786;
  t900 = -1.*t719*t798;
  t908 = t894 + t900;
  t939 = Cos(var1[10]);
  t853 = -1.*t142*t831;
  t921 = t874*t908;
  t928 = t853 + t921;
  t129 = Sin(var1[10]);
  t943 = t874*t831;
  t947 = t142*t908;
  t951 = t943 + t947;
  t976 = Cos(var1[11]);
  t929 = t129*t928;
  t958 = t939*t951;
  t971 = t929 + t958;
  t73 = Sin(var1[11]);
  t997 = t939*t928;
  t1023 = -1.*t129*t951;
  t1024 = t997 + t1023;
  t1074 = Cos(var1[12]);
  t46 = Sin(var1[12]);
  t1175 = t1074*t73;
  t1176 = t976*t46;
  t1206 = 0. + t1175 + t1176;
  t1268 = t976*t1074;
  t1275 = -1.*t73*t46;
  t1297 = 0. + t1268 + t1275;
  t1244 = -1.*t129*t1206;
  t1305 = t939*t1297;
  t1307 = 0. + t1244 + t1305;
  t1325 = t939*t1206;
  t1327 = t129*t1297;
  t1330 = 0. + t1325 + t1327;
  t1383 = t142*t1307;
  t1394 = t874*t1330;
  t1395 = 0. + t1383 + t1394;
  t1321 = t874*t1307;
  t1342 = -1.*t142*t1330;
  t1349 = 0. + t1321 + t1342;
  t1351 = t183*t1349;
  t1406 = -1.*t1395*t798;
  t1410 = 0. + t1351 + t1406;
  t1472 = t183*t1395;
  t1521 = t1349*t798;
  t1528 = 0. + t1472 + t1521;
  t1576 = t714*t1410;
  t1580 = 0. + t1576;
  t1781 = -1.*t976*t1074;
  t1783 = t73*t46;
  t1802 = 0. + t1781 + t1783;
  t1770 = t129*t1206;
  t1810 = t939*t1802;
  t1837 = 0. + t1770 + t1810;
  t1848 = -1.*t129*t1802;
  t1855 = 0. + t1325 + t1848;
  t1914 = t874*t1837;
  t1918 = t142*t1855;
  t1924 = 0. + t1914 + t1918;
  t1846 = -1.*t142*t1837;
  t1864 = t874*t1855;
  t1872 = 0. + t1846 + t1864;
  t1876 = t183*t1872;
  t1985 = -1.*t1924*t798;
  t2013 = 0. + t1876 + t1985;
  t2085 = t183*t1924;
  t2089 = t1872*t798;
  t2106 = 0. + t2085 + t2089;
  t2156 = t714*t2013;
  t2176 = 0. + t2156;
  t2385 = -1.*t395;
  t2388 = 0. + t2385;
  t2061 = t395*t2013;
  t2072 = 0. + t2061;
  t2081 = -1.*t532*t2072;
  t2122 = -1.*t656*t2106;
  t2192 = t477*t2176;
  t2197 = 0. + t2122 + t2192;
  t2199 = t569*t2197;
  t2213 = t477*t2106;
  t2275 = t656*t2176;
  t2278 = 0. + t2213 + t2275;
  t2282 = t491*t2278;
  t2294 = 0. + t2199 + t2282;
  t2306 = t283*t2294;
  t2316 = 0. + t2081 + t2306;
  t972 = -1.*t73*t971;
  t1028 = t976*t1024;
  t1061 = t972 + t1028;
  t1082 = t976*t971;
  t1091 = t73*t1024;
  t1094 = t1082 + t1091;
  t2407 = t477*t2388;
  t2434 = 0. + t2407;
  t2437 = t2434*t569;
  t2452 = t2388*t656;
  t2470 = 0. + t2452;
  t2471 = t491*t2470;
  t2486 = 0. + t2437 + t2471;
  t2494 = t283*t2486;
  t2508 = 0. + t714;
  t2522 = -1.*t532*t2508;
  t2537 = 0. + t2494 + t2522;
  t1412 = t395*t1410;
  t1430 = 0. + t1412;
  t1449 = -1.*t532*t1430;
  t1567 = -1.*t656*t1528;
  t1588 = t477*t1580;
  t1640 = 0. + t1567 + t1588;
  t1648 = t569*t1640;
  t1679 = t477*t1528;
  t1683 = t656*t1580;
  t1689 = 0. + t1679 + t1683;
  t1693 = t491*t1689;
  t1702 = 0. + t1648 + t1693;
  t1708 = t283*t1702;
  t1714 = 0. + t1449 + t1708;
  t2757 = t491*t512*t532;
  t2791 = -1.*t235*t569;
  t2794 = t2757 + t2791;
  t2733 = t235*t491;
  t2734 = t512*t532*t569;
  t2739 = t2733 + t2734;
  t2881 = t477*t2794;
  t2920 = -1.*t2739*t656;
  t2925 = t2881 + t2920;
  t2724 = t283*t395*t512;
  t2740 = t477*t2739;
  t2812 = t2794*t656;
  t2819 = t2740 + t2812;
  t2840 = t2819*t714;
  t2852 = t2724 + t2840;
  t2853 = t183*t2852;
  t2931 = t2925*t798;
  t2938 = t2853 + t2931;
  t2993 = t183*t2925;
  t3016 = -1.*t2852*t798;
  t3020 = t2993 + t3016;
  t2964 = -1.*t142*t2938;
  t3021 = t874*t3020;
  t3030 = t2964 + t3021;
  t3043 = t874*t2938;
  t3052 = t142*t3020;
  t3081 = t3043 + t3052;
  t3038 = t129*t3030;
  t3089 = t939*t3081;
  t3110 = t3038 + t3089;
  t3113 = t939*t3030;
  t3134 = -1.*t129*t3081;
  t3149 = t3113 + t3134;
  t1724 = 0.000171*t1714;
  t2317 = -0.000099*t2316;
  t2338 = t1724 + t2317;
  t2551 = 0.000449*t2537;
  t2565 = -1.e-6*t2316;
  t2566 = t2551 + t2565;
  t3112 = -1.*t73*t3110;
  t3155 = t976*t3149;
  t3188 = t3112 + t3155;
  t3198 = t976*t3110;
  t3208 = t73*t3149;
  t3210 = t3198 + t3208;
  t2633 = -1.e-6*t2537;
  t2657 = -0.000099*t1714;
  t2693 = 0.000287*t2316;
  t2705 = t2633 + t2657 + t2693;
  t3535 = t283*t491*t477;
  t3575 = -1.*t283*t569*t656;
  t3587 = t3535 + t3575;
  t3416 = -1.*t395*t532;
  t3420 = t283*t477*t569;
  t3421 = t283*t491*t656;
  t3426 = t3420 + t3421;
  t3427 = t3426*t714;
  t3508 = t3416 + t3427;
  t3533 = t183*t3508;
  t3591 = t3587*t798;
  t3610 = t3533 + t3591;
  t3615 = t183*t3587;
  t3621 = -1.*t3508*t798;
  t3653 = t3615 + t3621;
  t3613 = -1.*t142*t3610;
  t3722 = t874*t3653;
  t3763 = t3613 + t3722;
  t3811 = t874*t3610;
  t3843 = t142*t3653;
  t3871 = t3811 + t3843;
  t3785 = t129*t3763;
  t3872 = t939*t3871;
  t3876 = t3785 + t3872;
  t3914 = t939*t3763;
  t3919 = -1.*t129*t3871;
  t3966 = t3914 + t3919;
  t3903 = -1.*t73*t3876;
  t3974 = t976*t3966;
  t4024 = t3903 + t3974;
  t4062 = t976*t3876;
  t4086 = t73*t3966;
  t4102 = t4062 + t4086;
  t2373 = -1.*t395*t684;
  t2379 = t235*t283*t714;
  t2381 = t2373 + t2379;
  t4398 = t491*t2197;
  t4407 = -1.*t569*t2278;
  t4413 = 0. + t4398 + t4407;
  t1065 = t46*t1061;
  t1124 = t1074*t1094;
  t1153 = t1065 + t1124;
  t4351 = t491*t2434;
  t4357 = -1.*t569*t2470;
  t4389 = 0. + t4351 + t4357;
  t4461 = t491*t1640;
  t4470 = -1.*t569*t1689;
  t4474 = 0. + t4461 + t4470;
  t2578 = -1.*t1074*t1061;
  t2620 = t46*t1094;
  t2621 = t2578 + t2620;
  t3262 = -1.*t395*t2819;
  t3271 = t283*t512*t714;
  t3321 = t3262 + t3271;
  t4391 = 0.000449*t4389;
  t4416 = -1.e-6*t4413;
  t4434 = t4391 + t4416;
  t4476 = 0.000171*t4474;
  t4487 = -0.000099*t4413;
  t4506 = t4476 + t4487;
  t3193 = t46*t3188;
  t3214 = t1074*t3210;
  t3230 = t3193 + t3214;
  t4561 = -1.e-6*t4389;
  t4577 = -0.000099*t4474;
  t4587 = 0.000287*t4413;
  t4645 = t4561 + t4577 + t4587;
  t3342 = -1.*t1074*t3188;
  t3359 = t46*t3210;
  t3360 = t3342 + t3359;
  t4193 = -1.*t395*t3426;
  t4239 = -1.*t532*t714;
  t4240 = t4193 + t4239;
  t4055 = t46*t4024;
  t4150 = t1074*t4102;
  t4170 = t4055 + t4150;
  t4253 = -1.*t1074*t4024;
  t4280 = t46*t4102;
  t4284 = t4253 + t4280;
  t4853 = 0.000449*t2508;
  t4942 = -1.e-6*t2072;
  t4944 = t4853 + t4942;
  t4981 = 0.000171*t1430;
  t5030 = -0.000099*t2072;
  t5046 = t4981 + t5030;
  t5075 = -1.e-6*t2508;
  t5081 = -0.000099*t1430;
  t5103 = 0.000287*t2072;
  t5111 = t5075 + t5081 + t5103;
  t4968 = t2381*t4944;
  t5069 = t5046*t1153;
  t5119 = t5111*t2621;
  t5134 = t4968 + t5069 + t5119;
  t5167 = t3321*t4944;
  t5199 = t5046*t3230;
  t5210 = t5111*t3360;
  t5234 = t5167 + t5199 + t5210;
  t5236 = t4240*t4944;
  t5252 = t5046*t4170;
  t5278 = t5111*t4284;
  t5279 = t5236 + t5252 + t5278;
  t5296 = 0.000171*t1528;
  t5306 = -0.000099*t2106;
  t5312 = t5296 + t5306;
  t5333 = -0.000099*t1528;
  t5345 = 0.000287*t2106;
  t5348 = t5333 + t5345;
  t5418 = 0.000449*t2381;
  t5419 = -1.e-6*t2621;
  t5424 = t5418 + t5419;
  t5425 = 0.000449*t3321;
  t5445 = -1.e-6*t3360;
  t5446 = t5425 + t5445;
  t5448 = 0.000449*t4240;
  t5449 = -1.e-6*t4284;
  t5477 = t5448 + t5449;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1153*t2338 + t2381*t2566 + t2621*t2705;
  p_output1[10]=t2338*t3230 + t2566*t3321 + t2705*t3360;
  p_output1[11]=t2338*t4170 + t2566*t4240 + t2705*t4284;
  p_output1[12]=t2381*t4434 + t1153*t4506 + t2621*t4645;
  p_output1[13]=t3321*t4434 + t3230*t4506 + t3360*t4645;
  p_output1[14]=t4240*t4434 + t4170*t4506 + t4284*t4645;
  p_output1[15]=t5134;
  p_output1[16]=t5234;
  p_output1[17]=t5279;
  p_output1[18]=t5134;
  p_output1[19]=t5234;
  p_output1[20]=t5279;
  p_output1[21]=-1.e-6*t2106*t2381 + t1153*t5312 + t2621*t5348;
  p_output1[22]=-1.e-6*t2106*t3321 + t3230*t5312 + t3360*t5348;
  p_output1[23]=-1.e-6*t2106*t4240 + t4170*t5312 + t4284*t5348;
  p_output1[24]=t5424;
  p_output1[25]=t5446;
  p_output1[26]=t5477;
  p_output1[27]=t5424;
  p_output1[28]=t5446;
  p_output1[29]=t5477;
  p_output1[30]=t5424;
  p_output1[31]=t5446;
  p_output1[32]=t5477;
  p_output1[33]=t5424;
  p_output1[34]=t5446;
  p_output1[35]=t5477;
  p_output1[36]=t5424;
  p_output1[37]=t5446;
  p_output1[38]=t5477;
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

#include "Jdq_AMWorld_LeftToe_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
