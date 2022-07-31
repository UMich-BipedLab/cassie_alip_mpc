/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:30 GMT-04:00
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
  double t76;
  double t106;
  double t127;
  double t101;
  double t108;
  double t117;
  double t62;
  double t148;
  double t159;
  double t166;
  double t193;
  double t122;
  double t176;
  double t182;
  double t52;
  double t196;
  double t206;
  double t220;
  double t243;
  double t186;
  double t222;
  double t225;
  double t45;
  double t244;
  double t246;
  double t248;
  double t34;
  double t282;
  double t292;
  double t302;
  double t226;
  double t250;
  double t263;
  double t305;
  double t331;
  double t273;
  double t313;
  double t317;
  double t14;
  double t341;
  double t342;
  double t348;
  double t360;
  double t365;
  double t369;
  double t390;
  double t325;
  double t372;
  double t374;
  double t13;
  double t391;
  double t395;
  double t402;
  double t8;
  double t416;
  double t463;
  double t410;
  double t434;
  double t465;
  double t466;
  double t477;
  double t480;
  double t412;
  double t565;
  double t567;
  double t577;
  double t559;
  double t582;
  double t584;
  double t588;
  double t589;
  double t585;
  double t590;
  double t601;
  double t611;
  double t616;
  double t632;
  double t687;
  double t697;
  double t703;
  double t609;
  double t633;
  double t639;
  double t651;
  double t705;
  double t707;
  double t716;
  double t717;
  double t718;
  double t723;
  double t741;
  double t712;
  double t748;
  double t751;
  double t763;
  double t773;
  double t774;
  double t378;
  double t403;
  double t404;
  double t420;
  double t431;
  double t433;
  double t441;
  double t445;
  double t450;
  double t452;
  double t453;
  double t474;
  double t481;
  double t485;
  double t491;
  double t492;
  double t495;
  double t506;
  double t507;
  double t512;
  double t522;
  double t523;
  double t758;
  double t775;
  double t776;
  double t786;
  double t790;
  double t799;
  double t802;
  double t810;
  double t811;
  double t814;
  double t815;
  double t873;
  double t879;
  double t884;
  double t968;
  double t971;
  double t959;
  double t961;
  double t974;
  double t980;
  double t990;
  double t996;
  double t1006;
  double t1009;
  double t1015;
  double t1023;
  double t947;
  double t951;
  double t963;
  double t964;
  double t1002;
  double t1030;
  double t1035;
  double t1041;
  double t1044;
  double t1045;
  double t1048;
  double t1049;
  double t933;
  double t936;
  double t956;
  double t958;
  double t1036;
  double t1053;
  double t1054;
  double t1057;
  double t1063;
  double t1069;
  double t1091;
  double t1095;
  double t916;
  double t923;
  double t1125;
  double t1126;
  double t1127;
  double t1129;
  double t1137;
  double t937;
  double t943;
  double t1055;
  double t1096;
  double t1103;
  double t897;
  double t900;
  double t931;
  double t1109;
  double t1115;
  double t1138;
  double t1139;
  double t1143;
  double t1145;
  double t1150;
  double t1156;
  double t1158;
  double t1160;
  double t1166;
  double t1167;
  double t1170;
  double t1171;
  double t1173;
  double t1189;
  double t859;
  double t870;
  double t872;
  double t901;
  double t904;
  double t1140;
  double t1196;
  double t1198;
  double t1209;
  double t1213;
  double t1219;
  double t1224;
  double t1232;
  double t1248;
  double t1249;
  double t1259;
  double t1260;
  double t1270;
  double t1271;
  double t1272;
  double t1200;
  double t1238;
  double t1240;
  double t1266;
  double t1279;
  double t1285;
  double t1298;
  double t1307;
  double t1316;
  double t848;
  double t851;
  double t858;
  double t1244;
  double t1325;
  double t1334;
  double t1345;
  double t1388;
  double t1410;
  double t1442;
  double t1466;
  double t1489;
  double t1513;
  double t1542;
  double t1567;
  double t1775;
  double t1785;
  t76 = Cos(var1[12]);
  t106 = Sin(var1[12]);
  t127 = Cos(var1[11]);
  t101 = 0.642788*t76;
  t108 = -0.766044*t106;
  t117 = t101 + t108;
  t62 = Sin(var1[11]);
  t148 = 0.766044*t76;
  t159 = 0.642788*t106;
  t166 = t148 + t159;
  t193 = Cos(var1[10]);
  t122 = t62*t117;
  t176 = t127*t166;
  t182 = 0. + t122 + t176;
  t52 = Sin(var1[10]);
  t196 = t127*t117;
  t206 = -1.*t62*t166;
  t220 = 0. + t196 + t206;
  t243 = Cos(var1[9]);
  t186 = -1.*t52*t182;
  t222 = t193*t220;
  t225 = 0. + t186 + t222;
  t45 = Sin(var1[9]);
  t244 = t193*t182;
  t246 = t52*t220;
  t248 = 0. + t244 + t246;
  t34 = Cos(var1[8]);
  t282 = t243*t225;
  t292 = -1.*t45*t248;
  t302 = 0. + t282 + t292;
  t226 = t45*t225;
  t250 = t243*t248;
  t263 = 0. + t226 + t250;
  t305 = Sin(var1[8]);
  t331 = Cos(var1[6]);
  t273 = t34*t263;
  t313 = t302*t305;
  t317 = 0. + t273 + t313;
  t14 = Sin(var1[6]);
  t341 = Sin(var1[7]);
  t342 = t34*t302;
  t348 = -1.*t263*t305;
  t360 = 0. + t342 + t348;
  t365 = t341*t360;
  t369 = 0. + t365;
  t390 = Sin(var1[5]);
  t325 = -1.*t14*t317;
  t372 = t331*t369;
  t374 = 0. + t325 + t372;
  t13 = Cos(var1[5]);
  t391 = t331*t317;
  t395 = t14*t369;
  t402 = 0. + t391 + t395;
  t8 = Sin(var1[3]);
  t416 = Cos(var1[7]);
  t463 = 0. + t416;
  t410 = Cos(var1[3]);
  t434 = Sin(var1[4]);
  t465 = t331*t463;
  t466 = 0. + t465;
  t477 = t463*t14;
  t480 = 0. + t477;
  t412 = Cos(var1[4]);
  t565 = -0.766044*t76;
  t567 = -0.642788*t106;
  t577 = t565 + t567;
  t559 = -1.*t62*t117;
  t582 = t127*t577;
  t584 = 0. + t559 + t582;
  t588 = t62*t577;
  t589 = 0. + t196 + t588;
  t585 = t52*t584;
  t590 = t193*t589;
  t601 = 0. + t585 + t590;
  t611 = t193*t584;
  t616 = -1.*t52*t589;
  t632 = 0. + t611 + t616;
  t687 = -1.*t45*t601;
  t697 = t243*t632;
  t703 = 0. + t687 + t697;
  t609 = t243*t601;
  t633 = t45*t632;
  t639 = 0. + t609 + t633;
  t651 = t34*t639;
  t705 = t703*t305;
  t707 = 0. + t651 + t705;
  t716 = t34*t703;
  t717 = -1.*t639*t305;
  t718 = 0. + t716 + t717;
  t723 = t341*t718;
  t741 = 0. + t723;
  t712 = -1.*t14*t707;
  t748 = t331*t741;
  t751 = 0. + t712 + t748;
  t763 = t331*t707;
  t773 = t14*t741;
  t774 = 0. + t763 + t773;
  t378 = t13*t374;
  t403 = -1.*t390*t402;
  t404 = 0. + t378 + t403;
  t420 = t416*t360;
  t431 = 0. + t420;
  t433 = t412*t431;
  t441 = t390*t374;
  t445 = t13*t402;
  t450 = 0. + t441 + t445;
  t452 = t434*t450;
  t453 = 0. + t433 + t452;
  t474 = t13*t466;
  t481 = -1.*t390*t480;
  t485 = 0. + t474 + t481;
  t491 = t466*t390;
  t492 = t13*t480;
  t495 = 0. + t491 + t492;
  t506 = t434*t495;
  t507 = -1.*t341;
  t512 = 0. + t507;
  t522 = t412*t512;
  t523 = 0. + t506 + t522;
  t758 = t13*t751;
  t775 = -1.*t390*t774;
  t776 = 0. + t758 + t775;
  t786 = t416*t718;
  t790 = 0. + t786;
  t799 = t412*t790;
  t802 = t390*t751;
  t810 = t13*t774;
  t811 = 0. + t802 + t810;
  t814 = t434*t811;
  t815 = 0. + t799 + t814;
  t873 = -1.*t434*t790;
  t879 = t412*t811;
  t884 = 0. + t873 + t879;
  t968 = -1.*t76;
  t971 = 1. + t968;
  t959 = -1.*t127;
  t961 = 1. + t959;
  t974 = -0.05315*t971;
  t980 = -0.00095*t76;
  t990 = 0.01770000000000005*t106;
  t996 = 0. + t974 + t980 + t990;
  t1006 = -1.03354*t971;
  t1009 = -1.05124*t76;
  t1015 = 0.0522*t106;
  t1023 = 0. + t1006 + t1009 + t1015;
  t947 = -1.*t193;
  t951 = 1. + t947;
  t963 = -0.62554*t961;
  t964 = 0.01315*t62;
  t1002 = t62*t996;
  t1030 = t127*t1023;
  t1035 = 0. + t963 + t964 + t1002 + t1030;
  t1041 = -0.01315*t961;
  t1044 = -0.62554*t62;
  t1045 = t127*t996;
  t1048 = -1.*t62*t1023;
  t1049 = 0. + t1041 + t1044 + t1045 + t1048;
  t933 = -1.*t243;
  t936 = 1. + t933;
  t956 = -0.03315*t951;
  t958 = -0.19074*t52;
  t1036 = -1.*t52*t1035;
  t1053 = t193*t1049;
  t1054 = 0. + t956 + t958 + t1036 + t1053;
  t1057 = -0.19074*t951;
  t1063 = 0.03315*t52;
  t1069 = t193*t1035;
  t1091 = t52*t1049;
  t1095 = 0. + t1057 + t1063 + t1069 + t1091;
  t916 = -1.*t34;
  t923 = 1. + t916;
  t1125 = -0.08055*t936;
  t1126 = -0.13004*t45;
  t1127 = t243*t1054;
  t1129 = -1.*t45*t1095;
  t1137 = 0. + t1125 + t1126 + t1127 + t1129;
  t937 = -0.13004*t936;
  t943 = 0.08055*t45;
  t1055 = t45*t1054;
  t1096 = t243*t1095;
  t1103 = 0. + t937 + t943 + t1055 + t1096;
  t897 = -1.*t331;
  t900 = 1. + t897;
  t931 = -0.01004*t923;
  t1109 = t34*t1103;
  t1115 = 0.08055*t305;
  t1138 = t1137*t305;
  t1139 = 0. + t931 + t1109 + t1115 + t1138;
  t1143 = -1.*t416;
  t1145 = 1. + t1143;
  t1150 = 0.135*t1145;
  t1156 = 0.1305*t416;
  t1158 = 0.08055*t341;
  t1160 = -0.08055*t923;
  t1166 = t34*t1137;
  t1167 = -0.01004*t305;
  t1170 = -1.*t1103*t305;
  t1171 = 0. + t1160 + t1166 + t1167 + t1170;
  t1173 = t341*t1171;
  t1189 = 0. + t1150 + t1156 + t1158 + t1173;
  t859 = t412*t495;
  t870 = -1.*t434*t512;
  t872 = 0. + t859 + t870;
  t901 = 0.135*t900;
  t904 = 0.07996*t14;
  t1140 = -1.*t14*t1139;
  t1196 = t331*t1189;
  t1198 = 0. + t901 + t904 + t1140 + t1196;
  t1209 = 0.07996*t900;
  t1213 = -0.135*t14;
  t1219 = t331*t1139;
  t1224 = t14*t1189;
  t1232 = 0. + t1209 + t1213 + t1219 + t1224;
  t1248 = -0.08055*t1145;
  t1249 = 0.004500000000000004*t341;
  t1259 = t416*t1171;
  t1260 = 0. + t1248 + t1249 + t1259;
  t1270 = t390*t1198;
  t1271 = t13*t1232;
  t1272 = 0. + t1270 + t1271;
  t1200 = t13*t1198;
  t1238 = -1.*t390*t1232;
  t1240 = 0. + t1200 + t1238;
  t1266 = -1.*t434*t1260;
  t1279 = t412*t1272;
  t1285 = 0. + t1266 + t1279;
  t1298 = t412*t1260;
  t1307 = t434*t1272;
  t1316 = 0. + t1298 + t1307;
  t848 = -1.*t434*t431;
  t851 = t412*t450;
  t858 = 0. + t848 + t851;
  t1244 = -1.*t485*t1240;
  t1325 = t776*t1240;
  t1334 = -1.*t776*t1240;
  t1345 = t1240*t404;
  t1388 = t485*t1240;
  t1410 = -1.*t1240*t404;
  t1442 = -1.*t512*t1260;
  t1466 = t790*t1260;
  t1489 = -1.*t790*t1260;
  t1513 = t1260*t431;
  t1542 = t512*t1260;
  t1567 = -1.*t1260*t431;
  t1775 = -1.*t707*t1139;
  t1785 = t1139*t317;
  p_output1[0]=0. + t410*t453 - 1.*t404*t8;
  p_output1[1]=0. + t410*t523 - 1.*t485*t8;
  p_output1[2]=0. - 1.*t776*t8 + t410*t815;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t404*t410 + t453*t8;
  p_output1[7]=0. + t410*t485 + t523*t8;
  p_output1[8]=0. + t410*t776 + t8*t815;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t858;
  p_output1[13]=t872;
  p_output1[14]=t884;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1244 - 1.*t1316*t523 - 1.*t1285*t872)*t884 + t872*(t1325 + t1316*t815 + t1285*t884);
  p_output1[19]=(t1345 + t1316*t453 + t1285*t858)*t884 + t858*(t1334 - 1.*t1316*t815 - 1.*t1285*t884);
  p_output1[20]=(t1410 - 1.*t1316*t453 - 1.*t1285*t858)*t872 + t858*(t1388 + t1316*t523 + t1285*t872);
  p_output1[21]=t858;
  p_output1[22]=t872;
  p_output1[23]=t884;
  p_output1[24]=(t1244 + t1442 - 1.*t1272*t495)*t776 + t485*(t1325 + t1466 + t1272*t811);
  p_output1[25]=(t1345 + t1513 + t1272*t450)*t776 + t404*(t1334 + t1489 - 1.*t1272*t811);
  p_output1[26]=(t1410 + t1567 - 1.*t1272*t450)*t485 + t404*(t1388 + t1542 + t1272*t495);
  p_output1[27]=t404;
  p_output1[28]=t485;
  p_output1[29]=t776;
  p_output1[30]=t512*(t1466 + t1198*t751 + t1232*t774) + (t1442 - 1.*t1198*t466 - 1.*t1232*t480)*t790;
  p_output1[31]=t431*(t1489 - 1.*t1198*t751 - 1.*t1232*t774) + (t1513 + t1198*t374 + t1232*t402)*t790;
  p_output1[32]=t431*(t1542 + t1198*t466 + t1232*t480) + (t1567 - 1.*t1198*t374 - 1.*t1232*t402)*t512;
  p_output1[33]=t431;
  p_output1[34]=t512;
  p_output1[35]=t790;
  p_output1[36]=-0.135*t317 + 0.07996*t369 + t512*(t1466 + t1139*t707 + t1189*t741) + (0. + t1442 - 1.*t1189*t463)*t790;
  p_output1[37]=0. + 0.07996*t463 + t431*(t1489 + t1775 - 1.*t1189*t741) + (t1513 + t1785 + t1189*t369)*t790;
  p_output1[38]=t431*(0. + t1542 + t1189*t463) + (t1567 - 1.*t1139*t317 - 1.*t1189*t369)*t512 - 0.135*t707 + 0.07996*t741;
  p_output1[39]=t431;
  p_output1[40]=t512;
  p_output1[41]=t790;
  p_output1[42]=0. + 0.135*t360 - 0.1305*t707;
  p_output1[43]=0.08055 + (0. + t1785 + t1171*t360)*t707 + t317*(0. + t1775 - 1.*t1171*t718);
  p_output1[44]=0. + 0.1305*t317 + 0.135*t718;
  p_output1[45]=t317;
  p_output1[46]=0.;
  p_output1[47]=t707;
  p_output1[48]=0. + 0.08055*t263 - 0.01004*t302 - 1.*t1103*t639 - 1.*t1137*t703;
  p_output1[49]=0.;
  p_output1[50]=0. + t1103*t263 + t1137*t302 + 0.08055*t639 - 0.01004*t703;
  p_output1[51]=0.;
  p_output1[52]=-1.;
  p_output1[53]=0.;
  p_output1[54]=0. - 0.13004*t225 + 0.08055*t248 - 1.*t1095*t601 - 1.*t1054*t632;
  p_output1[55]=0.;
  p_output1[56]=0. + t1054*t225 + t1095*t248 + 0.08055*t601 - 0.13004*t632;
  p_output1[57]=0.;
  p_output1[58]=-1.;
  p_output1[59]=0.;
  p_output1[60]=0. + 0.03315*t182 - 0.19074*t220 - 1.*t1049*t584 - 1.*t1035*t589;
  p_output1[61]=0.;
  p_output1[62]=0. + t1035*t182 + t1049*t220 - 0.19074*t584 + 0.03315*t589;
  p_output1[63]=0.;
  p_output1[64]=-1.;
  p_output1[65]=0.;
  p_output1[66]=0. - 0.62554*t117 - 1.*t1023*t117 + 0.01315*t166 - 1.*t577*t996;
  p_output1[67]=0.;
  p_output1[68]=0. + 0.01315*t117 + t1023*t166 - 0.62554*t577 + t117*t996;
  p_output1[69]=0.;
  p_output1[70]=-1.;
  p_output1[71]=0.;
  p_output1[72]=0.0513648444;
  p_output1[73]=0.;
  p_output1[74]=0.019994554799999786;
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

#include "Jb_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jb_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
