/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:33 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t81;
  double t103;
  double t185;
  double t89;
  double t105;
  double t140;
  double t75;
  double t218;
  double t228;
  double t231;
  double t246;
  double t168;
  double t232;
  double t234;
  double t67;
  double t252;
  double t256;
  double t263;
  double t279;
  double t235;
  double t266;
  double t269;
  double t57;
  double t282;
  double t301;
  double t314;
  double t54;
  double t335;
  double t336;
  double t339;
  double t274;
  double t326;
  double t330;
  double t345;
  double t366;
  double t333;
  double t347;
  double t354;
  double t51;
  double t370;
  double t375;
  double t379;
  double t386;
  double t390;
  double t397;
  double t438;
  double t355;
  double t398;
  double t424;
  double t23;
  double t441;
  double t447;
  double t449;
  double t18;
  double t489;
  double t542;
  double t473;
  double t517;
  double t544;
  double t545;
  double t550;
  double t556;
  double t475;
  double t607;
  double t608;
  double t609;
  double t603;
  double t610;
  double t615;
  double t620;
  double t621;
  double t619;
  double t626;
  double t641;
  double t645;
  double t650;
  double t652;
  double t673;
  double t676;
  double t687;
  double t644;
  double t662;
  double t664;
  double t666;
  double t688;
  double t699;
  double t710;
  double t715;
  double t716;
  double t720;
  double t725;
  double t701;
  double t729;
  double t731;
  double t740;
  double t743;
  double t744;
  double t434;
  double t450;
  double t455;
  double t494;
  double t499;
  double t508;
  double t520;
  double t521;
  double t526;
  double t532;
  double t533;
  double t549;
  double t561;
  double t562;
  double t584;
  double t587;
  double t589;
  double t592;
  double t595;
  double t596;
  double t597;
  double t599;
  double t739;
  double t749;
  double t751;
  double t755;
  double t758;
  double t759;
  double t761;
  double t763;
  double t764;
  double t768;
  double t773;
  double t833;
  double t835;
  double t836;
  double t905;
  double t906;
  double t891;
  double t901;
  double t911;
  double t916;
  double t923;
  double t929;
  double t938;
  double t940;
  double t946;
  double t947;
  double t886;
  double t888;
  double t902;
  double t904;
  double t930;
  double t949;
  double t950;
  double t959;
  double t961;
  double t964;
  double t970;
  double t972;
  double t859;
  double t864;
  double t889;
  double t890;
  double t952;
  double t976;
  double t981;
  double t994;
  double t1001;
  double t1002;
  double t1003;
  double t1006;
  double t847;
  double t851;
  double t1023;
  double t1028;
  double t1029;
  double t1030;
  double t1032;
  double t878;
  double t885;
  double t993;
  double t1010;
  double t1011;
  double t839;
  double t841;
  double t853;
  double t1013;
  double t1021;
  double t1035;
  double t1037;
  double t1053;
  double t1061;
  double t1062;
  double t1067;
  double t1070;
  double t1075;
  double t1076;
  double t1077;
  double t1088;
  double t1092;
  double t1097;
  double t1104;
  double t824;
  double t825;
  double t831;
  double t842;
  double t846;
  double t1052;
  double t1106;
  double t1107;
  double t1112;
  double t1115;
  double t1119;
  double t1123;
  double t1128;
  double t1141;
  double t1152;
  double t1156;
  double t1157;
  double t1170;
  double t1171;
  double t1176;
  double t1111;
  double t1132;
  double t1136;
  double t1168;
  double t1181;
  double t1182;
  double t1185;
  double t1190;
  double t1193;
  double t818;
  double t819;
  double t820;
  double t1139;
  double t1212;
  double t1243;
  double t1262;
  double t1289;
  double t1308;
  double t1331;
  double t1343;
  double t1386;
  double t1404;
  double t1433;
  double t1449;
  double t1620;
  double t1644;
  t81 = Cos(var1[12]);
  t103 = Sin(var1[12]);
  t185 = Cos(var1[11]);
  t89 = 0.642788*t81;
  t105 = -0.766044*t103;
  t140 = t89 + t105;
  t75 = Sin(var1[11]);
  t218 = 0.766044*t81;
  t228 = 0.642788*t103;
  t231 = t218 + t228;
  t246 = Cos(var1[10]);
  t168 = t75*t140;
  t232 = t185*t231;
  t234 = 0. + t168 + t232;
  t67 = Sin(var1[10]);
  t252 = t185*t140;
  t256 = -1.*t75*t231;
  t263 = 0. + t252 + t256;
  t279 = Cos(var1[9]);
  t235 = -1.*t67*t234;
  t266 = t246*t263;
  t269 = 0. + t235 + t266;
  t57 = Sin(var1[9]);
  t282 = t246*t234;
  t301 = t67*t263;
  t314 = 0. + t282 + t301;
  t54 = Cos(var1[8]);
  t335 = t279*t269;
  t336 = -1.*t57*t314;
  t339 = 0. + t335 + t336;
  t274 = t57*t269;
  t326 = t279*t314;
  t330 = 0. + t274 + t326;
  t345 = Sin(var1[8]);
  t366 = Cos(var1[6]);
  t333 = t54*t330;
  t347 = t339*t345;
  t354 = 0. + t333 + t347;
  t51 = Sin(var1[6]);
  t370 = Sin(var1[7]);
  t375 = t54*t339;
  t379 = -1.*t330*t345;
  t386 = 0. + t375 + t379;
  t390 = t370*t386;
  t397 = 0. + t390;
  t438 = Sin(var1[5]);
  t355 = -1.*t51*t354;
  t398 = t366*t397;
  t424 = 0. + t355 + t398;
  t23 = Cos(var1[5]);
  t441 = t366*t354;
  t447 = t51*t397;
  t449 = 0. + t441 + t447;
  t18 = Sin(var1[3]);
  t489 = Cos(var1[7]);
  t542 = 0. + t489;
  t473 = Cos(var1[3]);
  t517 = Sin(var1[4]);
  t544 = t366*t542;
  t545 = 0. + t544;
  t550 = t542*t51;
  t556 = 0. + t550;
  t475 = Cos(var1[4]);
  t607 = -0.766044*t81;
  t608 = -0.642788*t103;
  t609 = t607 + t608;
  t603 = -1.*t75*t140;
  t610 = t185*t609;
  t615 = 0. + t603 + t610;
  t620 = t75*t609;
  t621 = 0. + t252 + t620;
  t619 = t67*t615;
  t626 = t246*t621;
  t641 = 0. + t619 + t626;
  t645 = t246*t615;
  t650 = -1.*t67*t621;
  t652 = 0. + t645 + t650;
  t673 = -1.*t57*t641;
  t676 = t279*t652;
  t687 = 0. + t673 + t676;
  t644 = t279*t641;
  t662 = t57*t652;
  t664 = 0. + t644 + t662;
  t666 = t54*t664;
  t688 = t687*t345;
  t699 = 0. + t666 + t688;
  t710 = t54*t687;
  t715 = -1.*t664*t345;
  t716 = 0. + t710 + t715;
  t720 = t370*t716;
  t725 = 0. + t720;
  t701 = -1.*t51*t699;
  t729 = t366*t725;
  t731 = 0. + t701 + t729;
  t740 = t366*t699;
  t743 = t51*t725;
  t744 = 0. + t740 + t743;
  t434 = t23*t424;
  t450 = -1.*t438*t449;
  t455 = 0. + t434 + t450;
  t494 = t489*t386;
  t499 = 0. + t494;
  t508 = t475*t499;
  t520 = t438*t424;
  t521 = t23*t449;
  t526 = 0. + t520 + t521;
  t532 = t517*t526;
  t533 = 0. + t508 + t532;
  t549 = t23*t545;
  t561 = -1.*t438*t556;
  t562 = 0. + t549 + t561;
  t584 = t545*t438;
  t587 = t23*t556;
  t589 = 0. + t584 + t587;
  t592 = t517*t589;
  t595 = -1.*t370;
  t596 = 0. + t595;
  t597 = t475*t596;
  t599 = 0. + t592 + t597;
  t739 = t23*t731;
  t749 = -1.*t438*t744;
  t751 = 0. + t739 + t749;
  t755 = t489*t716;
  t758 = 0. + t755;
  t759 = t475*t758;
  t761 = t438*t731;
  t763 = t23*t744;
  t764 = 0. + t761 + t763;
  t768 = t517*t764;
  t773 = 0. + t759 + t768;
  t833 = -1.*t517*t758;
  t835 = t475*t764;
  t836 = 0. + t833 + t835;
  t905 = -1.*t81;
  t906 = 1. + t905;
  t891 = -1.*t185;
  t901 = 1. + t891;
  t911 = -0.05315*t906;
  t916 = 0.046027*t81;
  t923 = -0.053841999999999945*t103;
  t929 = 0. + t911 + t916 + t923;
  t938 = -1.03354*t906;
  t940 = -0.979698*t81;
  t946 = 0.099177*t103;
  t947 = 0. + t938 + t940 + t946;
  t886 = -1.*t246;
  t888 = 1. + t886;
  t902 = -0.62554*t901;
  t904 = 0.01315*t75;
  t930 = t75*t929;
  t949 = t185*t947;
  t950 = 0. + t902 + t904 + t930 + t949;
  t959 = -0.01315*t901;
  t961 = -0.62554*t75;
  t964 = t185*t929;
  t970 = -1.*t75*t947;
  t972 = 0. + t959 + t961 + t964 + t970;
  t859 = -1.*t279;
  t864 = 1. + t859;
  t889 = -0.03315*t888;
  t890 = -0.19074*t67;
  t952 = -1.*t67*t950;
  t976 = t246*t972;
  t981 = 0. + t889 + t890 + t952 + t976;
  t994 = -0.19074*t888;
  t1001 = 0.03315*t67;
  t1002 = t246*t950;
  t1003 = t67*t972;
  t1006 = 0. + t994 + t1001 + t1002 + t1003;
  t847 = -1.*t54;
  t851 = 1. + t847;
  t1023 = -0.08055*t864;
  t1028 = -0.13004*t57;
  t1029 = t279*t981;
  t1030 = -1.*t57*t1006;
  t1032 = 0. + t1023 + t1028 + t1029 + t1030;
  t878 = -0.13004*t864;
  t885 = 0.08055*t57;
  t993 = t57*t981;
  t1010 = t279*t1006;
  t1011 = 0. + t878 + t885 + t993 + t1010;
  t839 = -1.*t366;
  t841 = 1. + t839;
  t853 = -0.01004*t851;
  t1013 = t54*t1011;
  t1021 = 0.08055*t345;
  t1035 = t1032*t345;
  t1037 = 0. + t853 + t1013 + t1021 + t1035;
  t1053 = -1.*t489;
  t1061 = 1. + t1053;
  t1062 = 0.135*t1061;
  t1067 = 0.1305*t489;
  t1070 = 0.08055*t370;
  t1075 = -0.08055*t851;
  t1076 = t54*t1032;
  t1077 = -0.01004*t345;
  t1088 = -1.*t1011*t345;
  t1092 = 0. + t1075 + t1076 + t1077 + t1088;
  t1097 = t370*t1092;
  t1104 = 0. + t1062 + t1067 + t1070 + t1097;
  t824 = t475*t589;
  t825 = -1.*t517*t596;
  t831 = 0. + t824 + t825;
  t842 = 0.135*t841;
  t846 = 0.07996*t51;
  t1052 = -1.*t51*t1037;
  t1106 = t366*t1104;
  t1107 = 0. + t842 + t846 + t1052 + t1106;
  t1112 = 0.07996*t841;
  t1115 = -0.135*t51;
  t1119 = t366*t1037;
  t1123 = t51*t1104;
  t1128 = 0. + t1112 + t1115 + t1119 + t1123;
  t1141 = -0.08055*t1061;
  t1152 = 0.004500000000000004*t370;
  t1156 = t489*t1092;
  t1157 = 0. + t1141 + t1152 + t1156;
  t1170 = t438*t1107;
  t1171 = t23*t1128;
  t1176 = 0. + t1170 + t1171;
  t1111 = t23*t1107;
  t1132 = -1.*t438*t1128;
  t1136 = 0. + t1111 + t1132;
  t1168 = -1.*t517*t1157;
  t1181 = t475*t1176;
  t1182 = 0. + t1168 + t1181;
  t1185 = t475*t1157;
  t1190 = t517*t1176;
  t1193 = 0. + t1185 + t1190;
  t818 = -1.*t517*t499;
  t819 = t475*t526;
  t820 = 0. + t818 + t819;
  t1139 = -1.*t562*t1136;
  t1212 = t751*t1136;
  t1243 = -1.*t751*t1136;
  t1262 = t1136*t455;
  t1289 = t562*t1136;
  t1308 = -1.*t1136*t455;
  t1331 = -1.*t596*t1157;
  t1343 = t758*t1157;
  t1386 = -1.*t758*t1157;
  t1404 = t1157*t499;
  t1433 = t596*t1157;
  t1449 = -1.*t1157*t499;
  t1620 = -1.*t699*t1037;
  t1644 = t1037*t354;
  p_output1[0]=0. - 1.*t18*t455 + t473*t533;
  p_output1[1]=0. - 1.*t18*t562 + t473*t599;
  p_output1[2]=0. - 1.*t18*t751 + t473*t773;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t455*t473 + t18*t533;
  p_output1[7]=0. + t473*t562 + t18*t599;
  p_output1[8]=0. + t473*t751 + t18*t773;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t820;
  p_output1[13]=t831;
  p_output1[14]=t836;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1139 - 1.*t1193*t599 - 1.*t1182*t831)*t836 + t831*(t1212 + t1193*t773 + t1182*t836);
  p_output1[19]=(t1262 + t1193*t533 + t1182*t820)*t836 + t820*(t1243 - 1.*t1193*t773 - 1.*t1182*t836);
  p_output1[20]=(t1308 - 1.*t1193*t533 - 1.*t1182*t820)*t831 + t820*(t1289 + t1193*t599 + t1182*t831);
  p_output1[21]=t820;
  p_output1[22]=t831;
  p_output1[23]=t836;
  p_output1[24]=(t1139 + t1331 - 1.*t1176*t589)*t751 + t562*(t1212 + t1343 + t1176*t764);
  p_output1[25]=(t1262 + t1404 + t1176*t526)*t751 + t455*(t1243 + t1386 - 1.*t1176*t764);
  p_output1[26]=(t1308 + t1449 - 1.*t1176*t526)*t562 + t455*(t1289 + t1433 + t1176*t589);
  p_output1[27]=t455;
  p_output1[28]=t562;
  p_output1[29]=t751;
  p_output1[30]=t596*(t1343 + t1107*t731 + t1128*t744) + (t1331 - 1.*t1107*t545 - 1.*t1128*t556)*t758;
  p_output1[31]=t499*(t1386 - 1.*t1107*t731 - 1.*t1128*t744) + (t1404 + t1107*t424 + t1128*t449)*t758;
  p_output1[32]=t499*(t1433 + t1107*t545 + t1128*t556) + (t1449 - 1.*t1107*t424 - 1.*t1128*t449)*t596;
  p_output1[33]=t499;
  p_output1[34]=t596;
  p_output1[35]=t758;
  p_output1[36]=-0.135*t354 + 0.07996*t397 + t596*(t1343 + t1037*t699 + t1104*t725) + (0. + t1331 - 1.*t1104*t542)*t758;
  p_output1[37]=0. + 0.07996*t542 + t499*(t1386 + t1620 - 1.*t1104*t725) + (t1404 + t1644 + t1104*t397)*t758;
  p_output1[38]=t499*(0. + t1433 + t1104*t542) + (t1449 - 1.*t1037*t354 - 1.*t1104*t397)*t596 - 0.135*t699 + 0.07996*t725;
  p_output1[39]=t499;
  p_output1[40]=t596;
  p_output1[41]=t758;
  p_output1[42]=0. + 0.135*t386 - 0.1305*t699;
  p_output1[43]=0.08055 + (0. + t1644 + t1092*t386)*t699 + t354*(0. + t1620 - 1.*t1092*t716);
  p_output1[44]=0. + 0.1305*t354 + 0.135*t716;
  p_output1[45]=t354;
  p_output1[46]=0.;
  p_output1[47]=t699;
  p_output1[48]=0. + 0.08055*t330 - 0.01004*t339 - 1.*t1011*t664 - 1.*t1032*t687;
  p_output1[49]=0.;
  p_output1[50]=0. + t1011*t330 + t1032*t339 + 0.08055*t664 - 0.01004*t687;
  p_output1[51]=0.;
  p_output1[52]=-1.;
  p_output1[53]=0.;
  p_output1[54]=0. - 0.13004*t269 + 0.08055*t314 - 1.*t1006*t641 - 1.*t652*t981;
  p_output1[55]=0.;
  p_output1[56]=0. + t1006*t314 + 0.08055*t641 - 0.13004*t652 + t269*t981;
  p_output1[57]=0.;
  p_output1[58]=-1.;
  p_output1[59]=0.;
  p_output1[60]=0. + 0.03315*t234 - 0.19074*t263 - 1.*t621*t950 - 1.*t615*t972;
  p_output1[61]=0.;
  p_output1[62]=0. - 0.19074*t615 + 0.03315*t621 + t234*t950 + t263*t972;
  p_output1[63]=0.;
  p_output1[64]=-1.;
  p_output1[65]=0.;
  p_output1[66]=0. - 0.62554*t140 + 0.01315*t231 - 1.*t609*t929 - 1.*t140*t947;
  p_output1[67]=0.;
  p_output1[68]=0. + 0.01315*t140 - 0.62554*t609 + t140*t929 + t231*t947;
  p_output1[69]=0.;
  p_output1[70]=-1.;
  p_output1[71]=0.;
  p_output1[72]=0.041364954292000045;
  p_output1[73]=0.;
  p_output1[74]=0.1049951265239999;
  p_output1[75]=0.;
  p_output1[76]=-1.;
  p_output1[77]=0.;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void Jb_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
