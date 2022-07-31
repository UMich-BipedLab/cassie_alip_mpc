/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:36 GMT-04:00
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
  double t27;
  double t38;
  double t92;
  double t110;
  double t99;
  double t119;
  double t170;
  double t173;
  double t121;
  double t123;
  double t128;
  double t140;
  double t156;
  double t157;
  double t162;
  double t224;
  double t237;
  double t251;
  double t258;
  double t262;
  double t264;
  double t356;
  double t368;
  double t382;
  double t411;
  double t195;
  double t198;
  double t207;
  double t172;
  double t175;
  double t178;
  double t406;
  double t417;
  double t421;
  double t428;
  double t429;
  double t439;
  double t17;
  double t502;
  double t505;
  double t509;
  double t654;
  double t655;
  double t666;
  double t574;
  double t576;
  double t578;
  double t549;
  double t558;
  double t561;
  double t682;
  double t690;
  double t708;
  double t798;
  double t800;
  double t807;
  double t819;
  double t609;
  double t610;
  double t624;
  double t426;
  double t492;
  double t818;
  double t826;
  double t831;
  double t835;
  double t845;
  double t860;
  double t534;
  double t535;
  double t546;
  double t644;
  double t648;
  double t598;
  double t602;
  double t910;
  double t911;
  double t912;
  double t719;
  double t730;
  double t732;
  double t952;
  double t957;
  double t978;
  double t746;
  double t747;
  double t877;
  double t885;
  double t887;
  double t832;
  double t869;
  double t1089;
  double t1093;
  double t1112;
  double t1159;
  double t1167;
  double t1184;
  double t1199;
  double t898;
  double t899;
  double t1019;
  double t1020;
  double t1024;
  double t1192;
  double t1203;
  double t1205;
  double t1222;
  double t1246;
  double t1248;
  double t920;
  double t924;
  double t929;
  double t945;
  double t948;
  double t981;
  double t983;
  double t1058;
  double t1060;
  double t1040;
  double t1043;
  double t1121;
  double t1123;
  double t1124;
  double t1128;
  double t1131;
  double t1135;
  double t1136;
  double t1140;
  double t1142;
  double t1217;
  double t1251;
  double t1499;
  double t1502;
  double t1503;
  double t1556;
  double t1558;
  double t1565;
  double t1583;
  double t1506;
  double t1509;
  double t1518;
  double t1280;
  double t1281;
  double t1568;
  double t1589;
  double t1605;
  double t1399;
  double t1407;
  double t1411;
  double t1611;
  double t1615;
  double t1621;
  double t1427;
  double t1430;
  double t1435;
  double t1309;
  double t1311;
  double t1314;
  double t1333;
  double t1338;
  double t1339;
  double t1348;
  double t1352;
  double t1371;
  double t1373;
  double t1467;
  double t1481;
  double t1454;
  double t1455;
  double t1606;
  double t1622;
  double t1827;
  double t1831;
  double t1832;
  double t1928;
  double t1931;
  double t1933;
  double t1947;
  double t1846;
  double t1849;
  double t1851;
  double t1634;
  double t1636;
  double t1934;
  double t1950;
  double t1951;
  double t1744;
  double t1746;
  double t1749;
  double t1953;
  double t1972;
  double t1986;
  double t1759;
  double t1760;
  double t1766;
  double t1653;
  double t1661;
  double t1664;
  double t1676;
  double t1691;
  double t1702;
  double t1719;
  double t1720;
  double t1771;
  double t1782;
  double t1862;
  double t1864;
  double t1903;
  double t1905;
  double t1952;
  double t1992;
  double t2183;
  double t2189;
  double t2190;
  double t2298;
  double t2301;
  double t2304;
  double t2312;
  double t2197;
  double t2203;
  double t2206;
  double t2002;
  double t2003;
  double t2309;
  double t2314;
  double t2319;
  double t2096;
  double t2097;
  double t2103;
  double t2323;
  double t2325;
  double t2326;
  double t2130;
  double t2131;
  double t2134;
  double t2025;
  double t2026;
  double t2035;
  double t2041;
  double t2046;
  double t2057;
  double t2080;
  double t2081;
  double t2148;
  double t2160;
  double t2216;
  double t2225;
  double t2246;
  double t2267;
  t27 = Cos(var1[3]);
  t38 = Sin(var1[3]);
  t92 = Cos(var1[4]);
  t110 = Sin(var1[4]);
  t99 = -1.*var1[2]*t92*t38;
  t119 = -1.*var1[1]*t110;
  t170 = Cos(var1[5]);
  t173 = Sin(var1[5]);
  t121 = var1[2]*t27*t92;
  t123 = var1[0]*t110;
  t128 = -1.*var1[1]*t27*t92;
  t140 = var1[0]*t92*t38;
  t156 = t27*t92;
  t157 = t92*t38;
  t162 = -1.*t110;
  t224 = t170*t38*t110;
  t237 = -1.*t27*t173;
  t251 = t224 + t237;
  t258 = t27*t170;
  t262 = t38*t110*t173;
  t264 = t258 + t262;
  t356 = Cos(var1[6]);
  t368 = -1.*t356;
  t382 = 1. + t368;
  t411 = Sin(var1[6]);
  t195 = -1.*t170*t38;
  t198 = t27*t110*t173;
  t207 = t195 + t198;
  t172 = t27*t170*t110;
  t175 = t38*t173;
  t178 = t172 + t175;
  t406 = 0.07996*t382;
  t417 = -0.135*t411;
  t421 = 0. + t406 + t417;
  t428 = 0.135*t382;
  t429 = 0.07996*t411;
  t439 = 0. + t428 + t429;
  t17 = -1.*var1[0];
  t502 = t92*t170*t356;
  t505 = -1.*t92*t173*t411;
  t509 = t502 + t505;
  t654 = t356*t178;
  t655 = -1.*t207*t411;
  t666 = t654 + t655;
  t574 = t356*t251;
  t576 = -1.*t264*t411;
  t578 = t574 + t576;
  t549 = -1.*var1[2];
  t558 = -1.*t92*t170*t421;
  t561 = -1.*t92*t173*t439;
  t682 = t92*t356*t173;
  t690 = t92*t170*t411;
  t708 = t682 + t690;
  t798 = Cos(var1[7]);
  t800 = -1.*t798;
  t807 = 1. + t800;
  t819 = Sin(var1[7]);
  t609 = t356*t264;
  t610 = t251*t411;
  t624 = t609 + t610;
  t426 = t251*t421;
  t492 = t264*t439;
  t818 = 0.135*t807;
  t826 = 0.08055*t819;
  t831 = 0. + t818 + t826;
  t835 = -0.08055*t807;
  t845 = 0.135*t819;
  t860 = 0. + t835 + t845;
  t534 = t356*t207;
  t535 = t178*t411;
  t546 = t534 + t535;
  t644 = t92*t170*t421;
  t648 = t92*t173*t439;
  t598 = -1.*t178*t421;
  t602 = -1.*t207*t439;
  t910 = t798*t708;
  t911 = t110*t819;
  t912 = t910 + t911;
  t719 = -1.*var1[1];
  t730 = -1.*t251*t421;
  t732 = -1.*t264*t439;
  t952 = t798*t546;
  t957 = -1.*t27*t92*t819;
  t978 = t952 + t957;
  t746 = t178*t421;
  t747 = t207*t439;
  t877 = t798*t624;
  t885 = -1.*t92*t38*t819;
  t887 = t877 + t885;
  t832 = -1.*t708*t831;
  t869 = t110*t860;
  t1089 = -1.*t798*t110;
  t1093 = t708*t819;
  t1112 = t1089 + t1093;
  t1159 = Cos(var1[8]);
  t1167 = -1.*t1159;
  t1184 = 1. + t1167;
  t1199 = Sin(var1[8]);
  t898 = t624*t831;
  t899 = t92*t38*t860;
  t1019 = t92*t798*t38;
  t1020 = t624*t819;
  t1024 = t1019 + t1020;
  t1192 = -0.08055*t1184;
  t1203 = -0.01004*t1199;
  t1205 = 0. + t1192 + t1203;
  t1222 = -0.01004*t1184;
  t1246 = 0.08055*t1199;
  t1248 = 0. + t1222 + t1246;
  t920 = t27*t92*t798;
  t924 = t546*t819;
  t929 = t920 + t924;
  t945 = t708*t831;
  t948 = -1.*t110*t860;
  t981 = -1.*t546*t831;
  t983 = -1.*t27*t92*t860;
  t1058 = t546*t831;
  t1060 = t27*t92*t860;
  t1040 = -1.*t624*t831;
  t1043 = -1.*t92*t38*t860;
  t1121 = -1.*t798*t546;
  t1123 = t27*t92*t819;
  t1124 = 0. + t1121 + t1123;
  t1128 = -1.*t798*t624;
  t1131 = t92*t38*t819;
  t1135 = 0. + t1128 + t1131;
  t1136 = -1.*t798*t708;
  t1140 = -1.*t110*t819;
  t1142 = 0. + t1136 + t1140;
  t1217 = -1.*t1112*t1205;
  t1251 = -1.*t509*t1248;
  t1499 = t1159*t1112;
  t1502 = t509*t1199;
  t1503 = t1499 + t1502;
  t1556 = Cos(var1[9]);
  t1558 = -1.*t1556;
  t1565 = 1. + t1558;
  t1583 = Sin(var1[9]);
  t1506 = t1159*t509;
  t1509 = -1.*t1112*t1199;
  t1518 = t1506 + t1509;
  t1280 = t1024*t1205;
  t1281 = t578*t1248;
  t1568 = -0.08055*t1565;
  t1589 = -0.13004*t1583;
  t1605 = 0. + t1568 + t1589;
  t1399 = t1159*t1024;
  t1407 = t578*t1199;
  t1411 = t1399 + t1407;
  t1611 = -0.13004*t1565;
  t1615 = 0.08055*t1583;
  t1621 = 0. + t1611 + t1615;
  t1427 = t1159*t578;
  t1430 = -1.*t1024*t1199;
  t1435 = t1427 + t1430;
  t1309 = t1159*t929;
  t1311 = t666*t1199;
  t1314 = t1309 + t1311;
  t1333 = t1159*t666;
  t1338 = -1.*t929*t1199;
  t1339 = t1333 + t1338;
  t1348 = t1112*t1205;
  t1352 = t509*t1248;
  t1371 = -1.*t929*t1205;
  t1373 = -1.*t666*t1248;
  t1467 = -1.*t1024*t1205;
  t1481 = -1.*t578*t1248;
  t1454 = t929*t1205;
  t1455 = t666*t1248;
  t1606 = -1.*t1605*t1503;
  t1622 = -1.*t1621*t1518;
  t1827 = -1.*t1583*t1503;
  t1831 = t1556*t1518;
  t1832 = t1827 + t1831;
  t1928 = Cos(var1[10]);
  t1931 = -1.*t1928;
  t1933 = 1. + t1931;
  t1947 = Sin(var1[10]);
  t1846 = t1556*t1503;
  t1849 = t1583*t1518;
  t1851 = t1846 + t1849;
  t1634 = t1605*t1411;
  t1636 = t1621*t1435;
  t1934 = -0.19074*t1933;
  t1950 = 0.03315*t1947;
  t1951 = 0. + t1934 + t1950;
  t1744 = -1.*t1583*t1411;
  t1746 = t1556*t1435;
  t1749 = t1744 + t1746;
  t1953 = -0.03315*t1933;
  t1972 = -0.19074*t1947;
  t1986 = 0. + t1953 + t1972;
  t1759 = t1556*t1411;
  t1760 = t1583*t1435;
  t1766 = t1759 + t1760;
  t1653 = -1.*t1583*t1314;
  t1661 = t1556*t1339;
  t1664 = t1653 + t1661;
  t1676 = t1556*t1314;
  t1691 = t1583*t1339;
  t1702 = t1676 + t1691;
  t1719 = t1605*t1503;
  t1720 = t1621*t1518;
  t1771 = -1.*t1605*t1314;
  t1782 = -1.*t1621*t1339;
  t1862 = -1.*t1605*t1411;
  t1864 = -1.*t1621*t1435;
  t1903 = t1605*t1314;
  t1905 = t1621*t1339;
  t1952 = -1.*t1951*t1832;
  t1992 = -1.*t1986*t1851;
  t2183 = t1947*t1832;
  t2189 = t1928*t1851;
  t2190 = t2183 + t2189;
  t2298 = Cos(var1[11]);
  t2301 = -1.*t2298;
  t2304 = 1. + t2301;
  t2312 = Sin(var1[11]);
  t2197 = t1928*t1832;
  t2203 = -1.*t1947*t1851;
  t2206 = t2197 + t2203;
  t2002 = t1951*t1749;
  t2003 = t1986*t1766;
  t2309 = -0.01315*t2304;
  t2314 = -0.62554*t2312;
  t2319 = 0. + t2309 + t2314;
  t2096 = t1947*t1749;
  t2097 = t1928*t1766;
  t2103 = t2096 + t2097;
  t2323 = -0.62554*t2304;
  t2325 = 0.01315*t2312;
  t2326 = 0. + t2323 + t2325;
  t2130 = t1928*t1749;
  t2131 = -1.*t1947*t1766;
  t2134 = t2130 + t2131;
  t2025 = t1947*t1664;
  t2026 = t1928*t1702;
  t2035 = t2025 + t2026;
  t2041 = t1928*t1664;
  t2046 = -1.*t1947*t1702;
  t2057 = t2041 + t2046;
  t2080 = t1951*t1832;
  t2081 = t1986*t1851;
  t2148 = -1.*t1951*t1664;
  t2160 = -1.*t1986*t1702;
  t2216 = -1.*t1951*t1749;
  t2225 = -1.*t1986*t1766;
  t2246 = t1951*t1664;
  t2267 = t1986*t1702;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t17;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t27*var1[2];
  p_output1[25]=-1.*t38*var1[2];
  p_output1[26]=t27*var1[0] + t38*var1[1];
  p_output1[27]=-1.*t38;
  p_output1[28]=t27;
  p_output1[29]=0;
  p_output1[30]=t119 + t99;
  p_output1[31]=t121 + t123;
  p_output1[32]=t128 + t140;
  p_output1[33]=t156;
  p_output1[34]=t157;
  p_output1[35]=t162;
  p_output1[36]=t119 - 0.135*t178 + 0.07996*t207 + t99;
  p_output1[37]=t121 + t123 - 0.135*t251 + 0.07996*t264;
  p_output1[38]=t128 + t140 - 0.135*t170*t92 + 0.07996*t173*t92;
  p_output1[39]=0. + t156;
  p_output1[40]=0. + t157;
  p_output1[41]=0. + t162;
  p_output1[42]=0.08055*t546 + (0. + t549 + t558 + t561)*t578 + 0.135*t27*t92 + t509*(0. + t426 + t492 + var1[1]);
  p_output1[43]=t509*(0. + t17 + t598 + t602) + 0.08055*t624 + 0.135*t38*t92 + t666*(0. + t644 + t648 + var1[2]);
  p_output1[44]=-0.135*t110 + 0.08055*t708 + t666*(0. + t719 + t730 + t732) + t578*(0. + t746 + t747 + var1[0]);
  p_output1[45]=0. + t654 + t655;
  p_output1[46]=0. + t574 + t576;
  p_output1[47]=0. + t502 + t505;
  p_output1[48]=0.08055*t666 - 1.*(0. + t549 + t558 + t561 + t832 + t869)*t887 - 0.01004*t929 - 1.*t912*(0. + t426 + t492 + t898 + t899 + var1[1]);
  p_output1[49]=-0.01004*t1024 + 0.08055*t578 - 1.*t912*(0. + t17 + t598 + t602 + t981 + t983) - 1.*t978*(0. + t644 + t648 + t945 + t948 + var1[2]);
  p_output1[50]=-0.01004*t1112 + 0.08055*t509 - 1.*(0. + t1040 + t1043 + t719 + t730 + t732)*t978 - 1.*t887*(0. + t1058 + t1060 + t746 + t747 + var1[0]);
  p_output1[51]=t1124;
  p_output1[52]=t1135;
  p_output1[53]=t1142;
  p_output1[54]=-0.13004*t1314 + 0.08055*t1339 - 1.*(0. + t1217 + t1251 + t549 + t558 + t561 + t832 + t869)*t887 - 1.*t912*(0. + t1280 + t1281 + t426 + t492 + t898 + t899 + var1[1]);
  p_output1[55]=-0.13004*t1411 + 0.08055*t1435 - 1.*t912*(0. + t1371 + t1373 + t17 + t598 + t602 + t981 + t983) - 1.*t978*(0. + t1348 + t1352 + t644 + t648 + t945 + t948 + var1[2]);
  p_output1[56]=-0.13004*t1503 + 0.08055*t1518 - 1.*(0. + t1040 + t1043 + t1467 + t1481 + t719 + t730 + t732)*t978 - 1.*t887*(0. + t1058 + t1060 + t1454 + t1455 + t746 + t747 + var1[0]);
  p_output1[57]=t1124;
  p_output1[58]=t1135;
  p_output1[59]=t1142;
  p_output1[60]=0.03315*t1664 - 0.19074*t1702 - 1.*(0. + t1217 + t1251 + t1606 + t1622 + t549 + t558 + t561 + t832 + t869)*t887 - 1.*t912*(0. + t1280 + t1281 + t1634 + t1636 + t426 + t492 + t898 + t899 + var1[1]);
  p_output1[61]=0.03315*t1749 - 0.19074*t1766 - 1.*t912*(0. + t1371 + t1373 + t17 + t1771 + t1782 + t598 + t602 + t981 + t983) - 1.*t978*(0. + t1348 + t1352 + t1719 + t1720 + t644 + t648 + t945 + t948 + var1[2]);
  p_output1[62]=0.03315*t1832 - 0.19074*t1851 - 1.*(0. + t1040 + t1043 + t1467 + t1481 + t1862 + t1864 + t719 + t730 + t732)*t978 - 1.*t887*(0. + t1058 + t1060 + t1454 + t1455 + t1903 + t1905 + t746 + t747 + var1[0]);
  p_output1[63]=t1124;
  p_output1[64]=t1135;
  p_output1[65]=t1142;
  p_output1[66]=-0.62554*t2035 + 0.01315*t2057 - 1.*(0. + t1217 + t1251 + t1606 + t1622 + t1952 + t1992 + t549 + t558 + t561 + t832 + t869)*t887 - 1.*t912*(0. + t1280 + t1281 + t1634 + t1636 + t2002 + t2003 + t426 + t492 + t898 + t899 + var1[1]);
  p_output1[67]=-0.62554*t2103 + 0.01315*t2134 - 1.*t912*(0. + t1371 + t1373 + t17 + t1771 + t1782 + t2148 + t2160 + t598 + t602 + t981 + t983) - 1.*t978*(0. + t1348 + t1352 + t1719 + t1720 + t2080 + t2081 + t644 + t648 + t945 + t948 + var1[2]);
  p_output1[68]=-0.62554*t2190 + 0.01315*t2206 - 1.*(0. + t1040 + t1043 + t1467 + t1481 + t1862 + t1864 + t2216 + t2225 + t719 + t730 + t732)*t978 - 1.*t887*(0. + t1058 + t1060 + t1454 + t1455 + t1903 + t1905 + t2246 + t2267 + t746 + t747 + var1[0]);
  p_output1[69]=t1124;
  p_output1[70]=t1135;
  p_output1[71]=t1142;
  p_output1[72]=0.05315*(t2057*t2298 - 1.*t2035*t2312) - 1.03354*(t2035*t2298 + t2057*t2312) - 1.*(0. + t1217 + t1251 + t1606 + t1622 + t1952 + t1992 - 1.*t2190*t2319 - 1.*t2206*t2326 + t549 + t558 + t561 + t832 + t869)*t887 - 1.*t912*(0. + t1280 + t1281 + t1634 + t1636 + t2002 + t2003 + t2103*t2319 + t2134*t2326 + t426 + t492 + t898 + t899 + var1[1]);
  p_output1[73]=0.05315*(t2134*t2298 - 1.*t2103*t2312) - 1.03354*(t2103*t2298 + t2134*t2312) - 1.*t912*(0. + t1371 + t1373 + t17 + t1771 + t1782 + t2148 + t2160 - 1.*t2035*t2319 - 1.*t2057*t2326 + t598 + t602 + t981 + t983) - 1.*t978*(0. + t1348 + t1352 + t1719 + t1720 + t2080 + t2081 + t2190*t2319 + t2206*t2326 + t644 + t648 + t945 + t948 + var1[2]);
  p_output1[74]=0.05315*(t2206*t2298 - 1.*t2190*t2312) - 1.03354*(t2190*t2298 + t2206*t2312) - 1.*(0. + t1040 + t1043 + t1467 + t1481 + t1862 + t1864 + t2216 + t2225 - 1.*t2103*t2319 - 1.*t2134*t2326 + t719 + t730 + t732)*t978 - 1.*t887*(0. + t1058 + t1060 + t1454 + t1455 + t1903 + t1905 + t2246 + t2267 + t2035*t2319 + t2057*t2326 + t746 + t747 + var1[0]);
  p_output1[75]=t1124;
  p_output1[76]=t1135;
  p_output1[77]=t1142;
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

#include "Js_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Js_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
