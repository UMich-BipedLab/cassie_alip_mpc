/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:04 GMT-04:00
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
  double t111;
  double t148;
  double t192;
  double t147;
  double t164;
  double t168;
  double t109;
  double t195;
  double t213;
  double t219;
  double t246;
  double t172;
  double t226;
  double t229;
  double t98;
  double t248;
  double t257;
  double t260;
  double t276;
  double t233;
  double t262;
  double t263;
  double t95;
  double t278;
  double t284;
  double t290;
  double t299;
  double t268;
  double t295;
  double t297;
  double t85;
  double t301;
  double t319;
  double t322;
  double t335;
  double t32;
  double t298;
  double t326;
  double t329;
  double t331;
  double t332;
  double t31;
  double t345;
  double t364;
  double t367;
  double t12;
  double t391;
  double t394;
  double t410;
  double t333;
  double t368;
  double t370;
  double t424;
  double t6;
  double t455;
  double t520;
  double t442;
  double t449;
  double t469;
  double t539;
  double t541;
  double t525;
  double t526;
  double t619;
  double t620;
  double t625;
  double t618;
  double t632;
  double t640;
  double t645;
  double t653;
  double t644;
  double t655;
  double t656;
  double t663;
  double t664;
  double t665;
  double t662;
  double t667;
  double t668;
  double t672;
  double t673;
  double t679;
  double t670;
  double t681;
  double t702;
  double t705;
  double t708;
  double t716;
  double t721;
  double t722;
  double t739;
  double t742;
  double t747;
  double t715;
  double t726;
  double t732;
  double t378;
  double t434;
  double t435;
  double t456;
  double t457;
  double t462;
  double t470;
  double t473;
  double t481;
  double t484;
  double t487;
  double t536;
  double t547;
  double t550;
  double t556;
  double t557;
  double t567;
  double t572;
  double t581;
  double t582;
  double t595;
  double t605;
  double t737;
  double t751;
  double t753;
  double t759;
  double t764;
  double t768;
  double t777;
  double t781;
  double t786;
  double t789;
  double t801;
  double t868;
  double t873;
  double t875;
  double t954;
  double t955;
  double t925;
  double t935;
  double t966;
  double t967;
  double t972;
  double t974;
  double t985;
  double t1003;
  double t1007;
  double t1011;
  double t911;
  double t918;
  double t938;
  double t946;
  double t982;
  double t1020;
  double t1028;
  double t1039;
  double t1044;
  double t1045;
  double t1046;
  double t1054;
  double t907;
  double t908;
  double t920;
  double t923;
  double t1038;
  double t1059;
  double t1060;
  double t1062;
  double t1072;
  double t1074;
  double t1077;
  double t1079;
  double t898;
  double t900;
  double t909;
  double t910;
  double t1061;
  double t1081;
  double t1084;
  double t1099;
  double t1107;
  double t1113;
  double t1115;
  double t1116;
  double t882;
  double t885;
  double t890;
  double t891;
  double t892;
  double t895;
  double t897;
  double t901;
  double t903;
  double t1092;
  double t1117;
  double t1119;
  double t1120;
  double t1121;
  double t1124;
  double t1125;
  double t1128;
  double t1130;
  double t1133;
  double t865;
  double t866;
  double t867;
  double t1140;
  double t1142;
  double t1145;
  double t1149;
  double t1154;
  double t886;
  double t888;
  double t1122;
  double t1135;
  double t1136;
  double t1169;
  double t1172;
  double t1173;
  double t1174;
  double t1184;
  double t1185;
  double t1191;
  double t1138;
  double t1157;
  double t1159;
  double t1183;
  double t1195;
  double t1196;
  double t1205;
  double t1210;
  double t1218;
  double t852;
  double t853;
  double t862;
  double t1168;
  double t1235;
  double t1285;
  double t1305;
  double t1321;
  double t1341;
  double t1374;
  double t1368;
  double t1422;
  double t1393;
  double t1444;
  double t1433;
  double t1668;
  double t1627;
  t111 = Cos(var1[19]);
  t148 = Sin(var1[19]);
  t192 = Cos(var1[18]);
  t147 = 0.642788*t111;
  t164 = -0.766044*t148;
  t168 = t147 + t164;
  t109 = Sin(var1[18]);
  t195 = 0.766044*t111;
  t213 = 0.642788*t148;
  t219 = t195 + t213;
  t246 = Cos(var1[17]);
  t172 = t109*t168;
  t226 = t192*t219;
  t229 = 0. + t172 + t226;
  t98 = Sin(var1[17]);
  t248 = t192*t168;
  t257 = -1.*t109*t219;
  t260 = 0. + t248 + t257;
  t276 = Cos(var1[16]);
  t233 = -1.*t98*t229;
  t262 = t246*t260;
  t263 = 0. + t233 + t262;
  t95 = Sin(var1[16]);
  t278 = t246*t229;
  t284 = t98*t260;
  t290 = 0. + t278 + t284;
  t299 = Cos(var1[15]);
  t268 = t95*t263;
  t295 = t276*t290;
  t297 = 0. + t268 + t295;
  t85 = Sin(var1[15]);
  t301 = t276*t263;
  t319 = -1.*t95*t290;
  t322 = 0. + t301 + t319;
  t335 = Sin(var1[13]);
  t32 = Sin(var1[14]);
  t298 = -1.*t85*t297;
  t326 = t299*t322;
  t329 = 0. + t298 + t326;
  t331 = t32*t329;
  t332 = 0. + t331;
  t31 = Cos(var1[13]);
  t345 = t299*t297;
  t364 = t85*t322;
  t367 = 0. + t345 + t364;
  t12 = Cos(var1[5]);
  t391 = t335*t332;
  t394 = t31*t367;
  t410 = 0. + t391 + t394;
  t333 = t31*t332;
  t368 = -1.*t335*t367;
  t370 = 0. + t333 + t368;
  t424 = Sin(var1[5]);
  t6 = Sin(var1[3]);
  t455 = Cos(var1[14]);
  t520 = 0. + t455;
  t442 = Cos(var1[3]);
  t449 = Cos(var1[4]);
  t469 = Sin(var1[4]);
  t539 = t520*t335;
  t541 = 0. + t539;
  t525 = t31*t520;
  t526 = 0. + t525;
  t619 = -0.766044*t111;
  t620 = -0.642788*t148;
  t625 = t619 + t620;
  t618 = -1.*t109*t168;
  t632 = t192*t625;
  t640 = 0. + t618 + t632;
  t645 = t109*t625;
  t653 = 0. + t248 + t645;
  t644 = t98*t640;
  t655 = t246*t653;
  t656 = 0. + t644 + t655;
  t663 = t246*t640;
  t664 = -1.*t98*t653;
  t665 = 0. + t663 + t664;
  t662 = -1.*t95*t656;
  t667 = t276*t665;
  t668 = 0. + t662 + t667;
  t672 = t276*t656;
  t673 = t95*t665;
  t679 = 0. + t672 + t673;
  t670 = t299*t668;
  t681 = -1.*t85*t679;
  t702 = 0. + t670 + t681;
  t705 = t32*t702;
  t708 = 0. + t705;
  t716 = t85*t668;
  t721 = t299*t679;
  t722 = 0. + t716 + t721;
  t739 = t335*t708;
  t742 = t31*t722;
  t747 = 0. + t739 + t742;
  t715 = t31*t708;
  t726 = -1.*t335*t722;
  t732 = 0. + t715 + t726;
  t378 = t12*t370;
  t434 = -1.*t410*t424;
  t435 = 0. + t378 + t434;
  t456 = t455*t329;
  t457 = 0. + t456;
  t462 = t449*t457;
  t470 = t12*t410;
  t473 = t370*t424;
  t481 = 0. + t470 + t473;
  t484 = t469*t481;
  t487 = 0. + t462 + t484;
  t536 = t526*t12;
  t547 = -1.*t541*t424;
  t550 = 0. + t536 + t547;
  t556 = -1.*t32;
  t557 = 0. + t556;
  t567 = t449*t557;
  t572 = t12*t541;
  t581 = t526*t424;
  t582 = 0. + t572 + t581;
  t595 = t469*t582;
  t605 = 0. + t567 + t595;
  t737 = t12*t732;
  t751 = -1.*t747*t424;
  t753 = 0. + t737 + t751;
  t759 = t455*t702;
  t764 = 0. + t759;
  t768 = t449*t764;
  t777 = t12*t747;
  t781 = t732*t424;
  t786 = 0. + t777 + t781;
  t789 = t469*t786;
  t801 = 0. + t768 + t789;
  t868 = -1.*t764*t469;
  t873 = t449*t786;
  t875 = 0. + t868 + t873;
  t954 = -1.*t111;
  t955 = 1. + t954;
  t925 = -1.*t192;
  t935 = 1. + t925;
  t966 = -0.05315*t955;
  t967 = -0.00095*t111;
  t972 = 0.01770000000000005*t148;
  t974 = 0. + t966 + t967 + t972;
  t985 = -1.03354*t955;
  t1003 = -1.05124*t111;
  t1007 = 0.0522*t148;
  t1011 = 0. + t985 + t1003 + t1007;
  t911 = -1.*t246;
  t918 = 1. + t911;
  t938 = -0.62554*t935;
  t946 = 0.01315*t109;
  t982 = t109*t974;
  t1020 = t192*t1011;
  t1028 = 0. + t938 + t946 + t982 + t1020;
  t1039 = -0.01315*t935;
  t1044 = -0.62554*t109;
  t1045 = t192*t974;
  t1046 = -1.*t109*t1011;
  t1054 = 0. + t1039 + t1044 + t1045 + t1046;
  t907 = -1.*t276;
  t908 = 1. + t907;
  t920 = -0.03315*t918;
  t923 = -0.19074*t98;
  t1038 = -1.*t98*t1028;
  t1059 = t246*t1054;
  t1060 = 0. + t920 + t923 + t1038 + t1059;
  t1062 = -0.19074*t918;
  t1072 = 0.03315*t98;
  t1074 = t246*t1028;
  t1077 = t98*t1054;
  t1079 = 0. + t1062 + t1072 + t1074 + t1077;
  t898 = -1.*t299;
  t900 = 1. + t898;
  t909 = -0.13004*t908;
  t910 = 0.08055*t95;
  t1061 = t95*t1060;
  t1081 = t276*t1079;
  t1084 = 0. + t909 + t910 + t1061 + t1081;
  t1099 = -0.08055*t908;
  t1107 = -0.13004*t95;
  t1113 = t276*t1060;
  t1115 = -1.*t95*t1079;
  t1116 = 0. + t1099 + t1107 + t1113 + t1115;
  t882 = -1.*t31;
  t885 = 1. + t882;
  t890 = -1.*t455;
  t891 = 1. + t890;
  t892 = -0.135*t891;
  t895 = -0.1305*t455;
  t897 = 0.08055*t32;
  t901 = -0.08055*t900;
  t903 = -0.01004*t85;
  t1092 = -1.*t85*t1084;
  t1117 = t299*t1116;
  t1119 = 0. + t901 + t903 + t1092 + t1117;
  t1120 = t32*t1119;
  t1121 = 0. + t892 + t895 + t897 + t1120;
  t1124 = -0.01004*t900;
  t1125 = 0.08055*t85;
  t1128 = t299*t1084;
  t1130 = t85*t1116;
  t1133 = 0. + t1124 + t1125 + t1128 + t1130;
  t865 = -1.*t557*t469;
  t866 = t449*t582;
  t867 = 0. + t865 + t866;
  t1140 = 0.07996*t885;
  t1142 = 0.135*t335;
  t1145 = t335*t1121;
  t1149 = t31*t1133;
  t1154 = 0. + t1140 + t1142 + t1145 + t1149;
  t886 = -0.135*t885;
  t888 = 0.07996*t335;
  t1122 = t31*t1121;
  t1135 = -1.*t335*t1133;
  t1136 = 0. + t886 + t888 + t1122 + t1135;
  t1169 = -0.08055*t891;
  t1172 = -0.004500000000000004*t32;
  t1173 = t455*t1119;
  t1174 = 0. + t1169 + t1172 + t1173;
  t1184 = t12*t1154;
  t1185 = t1136*t424;
  t1191 = 0. + t1184 + t1185;
  t1138 = t12*t1136;
  t1157 = -1.*t1154*t424;
  t1159 = 0. + t1138 + t1157;
  t1183 = -1.*t1174*t469;
  t1195 = t449*t1191;
  t1196 = 0. + t1183 + t1195;
  t1205 = t449*t1174;
  t1210 = t469*t1191;
  t1218 = 0. + t1205 + t1210;
  t852 = -1.*t457*t469;
  t853 = t449*t481;
  t862 = 0. + t852 + t853;
  t1168 = -1.*t550*t1159;
  t1235 = t753*t1159;
  t1285 = -1.*t753*t1159;
  t1305 = t1159*t435;
  t1321 = t550*t1159;
  t1341 = -1.*t1159*t435;
  t1374 = t764*t1174;
  t1368 = -1.*t557*t1174;
  t1422 = t1174*t457;
  t1393 = -1.*t764*t1174;
  t1444 = -1.*t1174*t457;
  t1433 = t557*t1174;
  t1668 = t1133*t367;
  t1627 = -1.*t722*t1133;
  p_output1[0]=0. + t442*t487 - 1.*t435*t6;
  p_output1[1]=0. - 1.*t550*t6 + t442*t605;
  p_output1[2]=0. - 1.*t6*t753 + t442*t801;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t435*t442 + t487*t6;
  p_output1[7]=0. + t442*t550 + t6*t605;
  p_output1[8]=0. + t442*t753 + t6*t801;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t862;
  p_output1[13]=t867;
  p_output1[14]=t875;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1168 - 1.*t1218*t605 - 1.*t1196*t867)*t875 + t867*(t1235 + t1218*t801 + t1196*t875);
  p_output1[19]=(t1305 + t1218*t487 + t1196*t862)*t875 + t862*(t1285 - 1.*t1218*t801 - 1.*t1196*t875);
  p_output1[20]=(t1341 - 1.*t1218*t487 - 1.*t1196*t862)*t867 + t862*(t1321 + t1218*t605 + t1196*t867);
  p_output1[21]=t862;
  p_output1[22]=t867;
  p_output1[23]=t875;
  p_output1[24]=(t1168 + t1368 - 1.*t1191*t582)*t753 + t550*(t1235 + t1374 + t1191*t786);
  p_output1[25]=(t1305 + t1422 + t1191*t481)*t753 + t435*(t1285 + t1393 - 1.*t1191*t786);
  p_output1[26]=(t1341 + t1444 - 1.*t1191*t481)*t550 + t435*(t1321 + t1433 + t1191*t582);
  p_output1[27]=t435;
  p_output1[28]=t550;
  p_output1[29]=t753;
  p_output1[30]=t557*(t1374 + t1136*t732 + t1154*t747) + (t1368 - 1.*t1136*t526 - 1.*t1154*t541)*t764;
  p_output1[31]=t457*(t1393 - 1.*t1136*t732 - 1.*t1154*t747) + (t1422 + t1136*t370 + t1154*t410)*t764;
  p_output1[32]=t457*(t1433 + t1136*t526 + t1154*t541) + (t1444 - 1.*t1136*t370 - 1.*t1154*t410)*t557;
  p_output1[33]=t457;
  p_output1[34]=t557;
  p_output1[35]=t764;
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
  p_output1[78]=0.07996*t332 + 0.135*t367 + t557*(t1374 + t1121*t708 + t1133*t722) + (0. + t1368 - 1.*t1121*t520)*t764;
  p_output1[79]=0. + 0.07996*t520 + t457*(t1393 + t1627 - 1.*t1121*t708) + (t1422 + t1668 + t1121*t332)*t764;
  p_output1[80]=t457*(0. + t1433 + t1121*t520) + (t1444 - 1.*t1121*t332 - 1.*t1133*t367)*t557 + 0.07996*t708 + 0.135*t722;
  p_output1[81]=t457;
  p_output1[82]=t557;
  p_output1[83]=t764;
  p_output1[84]=0. - 0.135*t329 + 0.1305*t722;
  p_output1[85]=0.08055 + t367*(0. + t1627 - 1.*t1119*t702) + (0. + t1668 + t1119*t329)*t722;
  p_output1[86]=0. - 0.1305*t367 - 0.135*t702;
  p_output1[87]=t367;
  p_output1[88]=0.;
  p_output1[89]=t722;
  p_output1[90]=0. + 0.08055*t297 - 0.01004*t322 - 1.*t1116*t668 - 1.*t1084*t679;
  p_output1[91]=0.;
  p_output1[92]=0. + t1084*t297 + t1116*t322 - 0.01004*t668 + 0.08055*t679;
  p_output1[93]=0.;
  p_output1[94]=-1.;
  p_output1[95]=0.;
  p_output1[96]=0. - 0.13004*t263 + 0.08055*t290 - 1.*t1079*t656 - 1.*t1060*t665;
  p_output1[97]=0.;
  p_output1[98]=0. + t1060*t263 + t1079*t290 + 0.08055*t656 - 0.13004*t665;
  p_output1[99]=0.;
  p_output1[100]=-1.;
  p_output1[101]=0.;
  p_output1[102]=0. + 0.03315*t229 - 0.19074*t260 - 1.*t1054*t640 - 1.*t1028*t653;
  p_output1[103]=0.;
  p_output1[104]=0. + t1028*t229 + t1054*t260 - 0.19074*t640 + 0.03315*t653;
  p_output1[105]=0.;
  p_output1[106]=-1.;
  p_output1[107]=0.;
  p_output1[108]=0. - 0.62554*t168 - 1.*t1011*t168 + 0.01315*t219 - 1.*t625*t974;
  p_output1[109]=0.;
  p_output1[110]=0. + 0.01315*t168 + t1011*t219 - 0.62554*t625 + t168*t974;
  p_output1[111]=0.;
  p_output1[112]=-1.;
  p_output1[113]=0.;
  p_output1[114]=0.0513648444;
  p_output1[115]=0.;
  p_output1[116]=0.019994554799999786;
  p_output1[117]=0.;
  p_output1[118]=-1.;
  p_output1[119]=0.;
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

#include "Jb_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jb_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
