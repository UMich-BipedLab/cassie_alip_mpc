/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:35 GMT-04:00
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
  double t61;
  double t86;
  double t109;
  double t72;
  double t93;
  double t94;
  double t59;
  double t110;
  double t128;
  double t129;
  double t175;
  double t103;
  double t132;
  double t135;
  double t56;
  double t188;
  double t192;
  double t194;
  double t226;
  double t174;
  double t202;
  double t214;
  double t55;
  double t237;
  double t240;
  double t242;
  double t268;
  double t220;
  double t247;
  double t263;
  double t51;
  double t270;
  double t280;
  double t284;
  double t310;
  double t44;
  double t267;
  double t288;
  double t289;
  double t293;
  double t295;
  double t43;
  double t311;
  double t320;
  double t326;
  double t33;
  double t341;
  double t347;
  double t356;
  double t309;
  double t331;
  double t333;
  double t362;
  double t3;
  double t374;
  double t434;
  double t366;
  double t372;
  double t390;
  double t448;
  double t450;
  double t435;
  double t440;
  double t510;
  double t514;
  double t520;
  double t504;
  double t527;
  double t534;
  double t542;
  double t546;
  double t536;
  double t547;
  double t550;
  double t561;
  double t565;
  double t582;
  double t554;
  double t585;
  double t597;
  double t608;
  double t610;
  double t617;
  double t606;
  double t619;
  double t620;
  double t625;
  double t630;
  double t637;
  double t647;
  double t649;
  double t673;
  double t677;
  double t689;
  double t634;
  double t657;
  double t667;
  double t339;
  double t363;
  double t364;
  double t379;
  double t385;
  double t386;
  double t392;
  double t395;
  double t405;
  double t408;
  double t410;
  double t446;
  double t455;
  double t456;
  double t461;
  double t463;
  double t466;
  double t469;
  double t483;
  double t493;
  double t497;
  double t501;
  double t668;
  double t694;
  double t695;
  double t699;
  double t701;
  double t710;
  double t713;
  double t716;
  double t722;
  double t724;
  double t727;
  double t773;
  double t774;
  double t778;
  double t917;
  double t923;
  double t895;
  double t902;
  double t930;
  double t934;
  double t936;
  double t938;
  double t943;
  double t945;
  double t951;
  double t952;
  double t879;
  double t881;
  double t904;
  double t906;
  double t942;
  double t964;
  double t967;
  double t971;
  double t973;
  double t976;
  double t982;
  double t984;
  double t864;
  double t871;
  double t891;
  double t893;
  double t969;
  double t985;
  double t988;
  double t991;
  double t992;
  double t1001;
  double t1006;
  double t1008;
  double t837;
  double t840;
  double t873;
  double t878;
  double t990;
  double t1010;
  double t1013;
  double t1017;
  double t1018;
  double t1023;
  double t1029;
  double t1037;
  double t792;
  double t798;
  double t813;
  double t815;
  double t818;
  double t828;
  double t834;
  double t841;
  double t856;
  double t1015;
  double t1039;
  double t1044;
  double t1046;
  double t1048;
  double t1055;
  double t1060;
  double t1063;
  double t1064;
  double t1067;
  double t766;
  double t767;
  double t771;
  double t1077;
  double t1083;
  double t1087;
  double t1093;
  double t1102;
  double t799;
  double t805;
  double t1049;
  double t1068;
  double t1073;
  double t1124;
  double t1125;
  double t1128;
  double t1129;
  double t1135;
  double t1139;
  double t1140;
  double t1076;
  double t1109;
  double t1114;
  double t1130;
  double t1141;
  double t1142;
  double t1147;
  double t1151;
  double t1153;
  double t761;
  double t762;
  double t764;
  double t1115;
  double t1168;
  double t1187;
  double t1220;
  double t1235;
  double t1255;
  double t1281;
  double t1270;
  double t1303;
  double t1292;
  double t1341;
  double t1331;
  double t1493;
  double t1485;
  t61 = Cos(var1[19]);
  t86 = Sin(var1[19]);
  t109 = Cos(var1[18]);
  t72 = 0.642788*t61;
  t93 = -0.766044*t86;
  t94 = t72 + t93;
  t59 = Sin(var1[18]);
  t110 = 0.766044*t61;
  t128 = 0.642788*t86;
  t129 = t110 + t128;
  t175 = Cos(var1[17]);
  t103 = t59*t94;
  t132 = t109*t129;
  t135 = 0. + t103 + t132;
  t56 = Sin(var1[17]);
  t188 = t109*t94;
  t192 = -1.*t59*t129;
  t194 = 0. + t188 + t192;
  t226 = Cos(var1[16]);
  t174 = -1.*t56*t135;
  t202 = t175*t194;
  t214 = 0. + t174 + t202;
  t55 = Sin(var1[16]);
  t237 = t175*t135;
  t240 = t56*t194;
  t242 = 0. + t237 + t240;
  t268 = Cos(var1[15]);
  t220 = t55*t214;
  t247 = t226*t242;
  t263 = 0. + t220 + t247;
  t51 = Sin(var1[15]);
  t270 = t226*t214;
  t280 = -1.*t55*t242;
  t284 = 0. + t270 + t280;
  t310 = Sin(var1[13]);
  t44 = Sin(var1[14]);
  t267 = -1.*t51*t263;
  t288 = t268*t284;
  t289 = 0. + t267 + t288;
  t293 = t44*t289;
  t295 = 0. + t293;
  t43 = Cos(var1[13]);
  t311 = t268*t263;
  t320 = t51*t284;
  t326 = 0. + t311 + t320;
  t33 = Cos(var1[5]);
  t341 = t310*t295;
  t347 = t43*t326;
  t356 = 0. + t341 + t347;
  t309 = t43*t295;
  t331 = -1.*t310*t326;
  t333 = 0. + t309 + t331;
  t362 = Sin(var1[5]);
  t3 = Sin(var1[3]);
  t374 = Cos(var1[14]);
  t434 = 0. + t374;
  t366 = Cos(var1[3]);
  t372 = Cos(var1[4]);
  t390 = Sin(var1[4]);
  t448 = t434*t310;
  t450 = 0. + t448;
  t435 = t43*t434;
  t440 = 0. + t435;
  t510 = -0.766044*t61;
  t514 = -0.642788*t86;
  t520 = t510 + t514;
  t504 = -1.*t59*t94;
  t527 = t109*t520;
  t534 = 0. + t504 + t527;
  t542 = t59*t520;
  t546 = 0. + t188 + t542;
  t536 = t56*t534;
  t547 = t175*t546;
  t550 = 0. + t536 + t547;
  t561 = t175*t534;
  t565 = -1.*t56*t546;
  t582 = 0. + t561 + t565;
  t554 = -1.*t55*t550;
  t585 = t226*t582;
  t597 = 0. + t554 + t585;
  t608 = t226*t550;
  t610 = t55*t582;
  t617 = 0. + t608 + t610;
  t606 = t268*t597;
  t619 = -1.*t51*t617;
  t620 = 0. + t606 + t619;
  t625 = t44*t620;
  t630 = 0. + t625;
  t637 = t51*t597;
  t647 = t268*t617;
  t649 = 0. + t637 + t647;
  t673 = t310*t630;
  t677 = t43*t649;
  t689 = 0. + t673 + t677;
  t634 = t43*t630;
  t657 = -1.*t310*t649;
  t667 = 0. + t634 + t657;
  t339 = t33*t333;
  t363 = -1.*t356*t362;
  t364 = 0. + t339 + t363;
  t379 = t374*t289;
  t385 = 0. + t379;
  t386 = t372*t385;
  t392 = t33*t356;
  t395 = t333*t362;
  t405 = 0. + t392 + t395;
  t408 = t390*t405;
  t410 = 0. + t386 + t408;
  t446 = t440*t33;
  t455 = -1.*t450*t362;
  t456 = 0. + t446 + t455;
  t461 = -1.*t44;
  t463 = 0. + t461;
  t466 = t372*t463;
  t469 = t33*t450;
  t483 = t440*t362;
  t493 = 0. + t469 + t483;
  t497 = t390*t493;
  t501 = 0. + t466 + t497;
  t668 = t33*t667;
  t694 = -1.*t689*t362;
  t695 = 0. + t668 + t694;
  t699 = t374*t620;
  t701 = 0. + t699;
  t710 = t372*t701;
  t713 = t33*t689;
  t716 = t667*t362;
  t722 = 0. + t713 + t716;
  t724 = t390*t722;
  t727 = 0. + t710 + t724;
  t773 = -1.*t701*t390;
  t774 = t372*t722;
  t778 = 0. + t773 + t774;
  t917 = -1.*t61;
  t923 = 1. + t917;
  t895 = -1.*t109;
  t902 = 1. + t895;
  t930 = -1.03354*t923;
  t934 = -1.109926*t61;
  t936 = -0.010096999999999995*t86;
  t938 = 0. + t930 + t934 + t936;
  t943 = -0.05315*t923;
  t945 = -0.063247*t61;
  t951 = 0.07638600000000006*t86;
  t952 = 0. + t943 + t945 + t951;
  t879 = -1.*t175;
  t881 = 1. + t879;
  t904 = -0.01315*t902;
  t906 = -0.62554*t59;
  t942 = -1.*t59*t938;
  t964 = t109*t952;
  t967 = 0. + t904 + t906 + t942 + t964;
  t971 = -0.62554*t902;
  t973 = 0.01315*t59;
  t976 = t109*t938;
  t982 = t59*t952;
  t984 = 0. + t971 + t973 + t976 + t982;
  t864 = -1.*t226;
  t871 = 1. + t864;
  t891 = -0.19074*t881;
  t893 = 0.03315*t56;
  t969 = t56*t967;
  t985 = t175*t984;
  t988 = 0. + t891 + t893 + t969 + t985;
  t991 = -0.03315*t881;
  t992 = -0.19074*t56;
  t1001 = t175*t967;
  t1006 = -1.*t56*t984;
  t1008 = 0. + t991 + t992 + t1001 + t1006;
  t837 = -1.*t268;
  t840 = 1. + t837;
  t873 = -0.08055*t871;
  t878 = -0.13004*t55;
  t990 = -1.*t55*t988;
  t1010 = t226*t1008;
  t1013 = 0. + t873 + t878 + t990 + t1010;
  t1017 = -0.13004*t871;
  t1018 = 0.08055*t55;
  t1023 = t226*t988;
  t1029 = t55*t1008;
  t1037 = 0. + t1017 + t1018 + t1023 + t1029;
  t792 = -1.*t43;
  t798 = 1. + t792;
  t813 = -1.*t374;
  t815 = 1. + t813;
  t818 = -0.135*t815;
  t828 = -0.1305*t374;
  t834 = 0.08055*t44;
  t841 = -0.08055*t840;
  t856 = -0.01004*t51;
  t1015 = t268*t1013;
  t1039 = -1.*t51*t1037;
  t1044 = 0. + t841 + t856 + t1015 + t1039;
  t1046 = t44*t1044;
  t1048 = 0. + t818 + t828 + t834 + t1046;
  t1055 = -0.01004*t840;
  t1060 = 0.08055*t51;
  t1063 = t51*t1013;
  t1064 = t268*t1037;
  t1067 = 0. + t1055 + t1060 + t1063 + t1064;
  t766 = -1.*t463*t390;
  t767 = t372*t493;
  t771 = 0. + t766 + t767;
  t1077 = 0.07996*t798;
  t1083 = 0.135*t310;
  t1087 = t310*t1048;
  t1093 = t43*t1067;
  t1102 = 0. + t1077 + t1083 + t1087 + t1093;
  t799 = -0.135*t798;
  t805 = 0.07996*t310;
  t1049 = t43*t1048;
  t1068 = -1.*t310*t1067;
  t1073 = 0. + t799 + t805 + t1049 + t1068;
  t1124 = -0.08055*t815;
  t1125 = -0.004500000000000004*t44;
  t1128 = t374*t1044;
  t1129 = 0. + t1124 + t1125 + t1128;
  t1135 = t33*t1102;
  t1139 = t1073*t362;
  t1140 = 0. + t1135 + t1139;
  t1076 = t33*t1073;
  t1109 = -1.*t1102*t362;
  t1114 = 0. + t1076 + t1109;
  t1130 = -1.*t1129*t390;
  t1141 = t372*t1140;
  t1142 = 0. + t1130 + t1141;
  t1147 = t372*t1129;
  t1151 = t390*t1140;
  t1153 = 0. + t1147 + t1151;
  t761 = -1.*t385*t390;
  t762 = t372*t405;
  t764 = 0. + t761 + t762;
  t1115 = -1.*t456*t1114;
  t1168 = t695*t1114;
  t1187 = -1.*t695*t1114;
  t1220 = t1114*t364;
  t1235 = t456*t1114;
  t1255 = -1.*t1114*t364;
  t1281 = t701*t1129;
  t1270 = -1.*t463*t1129;
  t1303 = t1129*t385;
  t1292 = -1.*t701*t1129;
  t1341 = -1.*t1129*t385;
  t1331 = t463*t1129;
  t1493 = t1067*t326;
  t1485 = -1.*t649*t1067;
  p_output1[0]=0. - 1.*t3*t364 + t366*t410;
  p_output1[1]=0. - 1.*t3*t456 + t366*t501;
  p_output1[2]=0. - 1.*t3*t695 + t366*t727;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t364*t366 + t3*t410;
  p_output1[7]=0. + t366*t456 + t3*t501;
  p_output1[8]=0. + t366*t695 + t3*t727;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t764;
  p_output1[13]=t771;
  p_output1[14]=t778;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1115 - 1.*t1153*t501 - 1.*t1142*t771)*t778 + t771*(t1168 + t1153*t727 + t1142*t778);
  p_output1[19]=(t1220 + t1153*t410 + t1142*t764)*t778 + t764*(t1187 - 1.*t1153*t727 - 1.*t1142*t778);
  p_output1[20]=(t1255 - 1.*t1153*t410 - 1.*t1142*t764)*t771 + t764*(t1235 + t1153*t501 + t1142*t771);
  p_output1[21]=t764;
  p_output1[22]=t771;
  p_output1[23]=t778;
  p_output1[24]=(t1115 + t1270 - 1.*t1140*t493)*t695 + t456*(t1168 + t1281 + t1140*t722);
  p_output1[25]=(t1220 + t1303 + t1140*t405)*t695 + t364*(t1187 + t1292 - 1.*t1140*t722);
  p_output1[26]=(t1255 + t1341 - 1.*t1140*t405)*t456 + t364*(t1235 + t1331 + t1140*t493);
  p_output1[27]=t364;
  p_output1[28]=t456;
  p_output1[29]=t695;
  p_output1[30]=t463*(t1281 + t1073*t667 + t1102*t689) + (t1270 - 1.*t1073*t440 - 1.*t1102*t450)*t701;
  p_output1[31]=t385*(t1292 - 1.*t1073*t667 - 1.*t1102*t689) + (t1303 + t1073*t333 + t1102*t356)*t701;
  p_output1[32]=t385*(t1331 + t1073*t440 + t1102*t450) + (t1341 - 1.*t1073*t333 - 1.*t1102*t356)*t463;
  p_output1[33]=t385;
  p_output1[34]=t463;
  p_output1[35]=t701;
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
  p_output1[78]=0.07996*t295 + 0.135*t326 + t463*(t1281 + t1048*t630 + t1067*t649) + (0. + t1270 - 1.*t1048*t434)*t701;
  p_output1[79]=0. + 0.07996*t434 + t385*(t1292 + t1485 - 1.*t1048*t630) + (t1303 + t1493 + t1048*t295)*t701;
  p_output1[80]=t385*(0. + t1331 + t1048*t434) + (t1341 - 1.*t1048*t295 - 1.*t1067*t326)*t463 + 0.07996*t630 + 0.135*t649;
  p_output1[81]=t385;
  p_output1[82]=t463;
  p_output1[83]=t701;
  p_output1[84]=0. - 0.135*t289 + 0.1305*t649;
  p_output1[85]=0.08055 + t326*(0. + t1485 - 1.*t1044*t620) + (0. + t1493 + t1044*t289)*t649;
  p_output1[86]=0. - 0.1305*t326 - 0.135*t620;
  p_output1[87]=t326;
  p_output1[88]=0.;
  p_output1[89]=t649;
  p_output1[90]=0. + 0.08055*t263 - 0.01004*t284 - 1.*t1013*t597 - 1.*t1037*t617;
  p_output1[91]=0.;
  p_output1[92]=0. + t1037*t263 + t1013*t284 - 0.01004*t597 + 0.08055*t617;
  p_output1[93]=0.;
  p_output1[94]=-1.;
  p_output1[95]=0.;
  p_output1[96]=0. - 0.13004*t214 + 0.08055*t242 - 1.*t1008*t582 - 1.*t550*t988;
  p_output1[97]=0.;
  p_output1[98]=0. + t1008*t214 + 0.08055*t550 - 0.13004*t582 + t242*t988;
  p_output1[99]=0.;
  p_output1[100]=-1.;
  p_output1[101]=0.;
  p_output1[102]=0. + 0.03315*t135 - 0.19074*t194 - 1.*t534*t967 - 1.*t546*t984;
  p_output1[103]=0.;
  p_output1[104]=0. - 0.19074*t534 + 0.03315*t546 + t194*t967 + t135*t984;
  p_output1[105]=0.;
  p_output1[106]=-1.;
  p_output1[107]=0.;
  p_output1[108]=0. + 0.01315*t129 - 0.62554*t94 - 1.*t938*t94 - 1.*t520*t952;
  p_output1[109]=0.;
  p_output1[110]=0. - 0.62554*t520 + t129*t938 + 0.01315*t94 + t94*t952;
  p_output1[111]=0.;
  p_output1[112]=-1.;
  p_output1[113]=0.;
  p_output1[114]=0.04136525790000001;
  p_output1[115]=0.;
  p_output1[116]=-0.06500526742000012;
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

#include "Jb_RightToeBottomBack_mex.hh"

namespace SymExpression
{

void Jb_RightToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
