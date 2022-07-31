/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:33 GMT-04:00
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
  double t46;
  double t50;
  double t123;
  double t153;
  double t134;
  double t162;
  double t250;
  double t264;
  double t178;
  double t194;
  double t205;
  double t209;
  double t236;
  double t239;
  double t244;
  double t374;
  double t377;
  double t411;
  double t424;
  double t426;
  double t436;
  double t506;
  double t515;
  double t528;
  double t533;
  double t316;
  double t321;
  double t340;
  double t255;
  double t269;
  double t272;
  double t529;
  double t535;
  double t538;
  double t545;
  double t552;
  double t562;
  double t7;
  double t574;
  double t578;
  double t581;
  double t710;
  double t713;
  double t719;
  double t613;
  double t621;
  double t625;
  double t599;
  double t600;
  double t601;
  double t743;
  double t747;
  double t750;
  double t849;
  double t853;
  double t854;
  double t860;
  double t675;
  double t680;
  double t681;
  double t542;
  double t564;
  double t855;
  double t861;
  double t867;
  double t884;
  double t886;
  double t891;
  double t586;
  double t587;
  double t594;
  double t687;
  double t689;
  double t648;
  double t657;
  double t963;
  double t965;
  double t967;
  double t760;
  double t763;
  double t767;
  double t1004;
  double t1014;
  double t1015;
  double t780;
  double t785;
  double t923;
  double t926;
  double t940;
  double t878;
  double t896;
  double t1113;
  double t1117;
  double t1118;
  double t1205;
  double t1234;
  double t1250;
  double t1252;
  double t946;
  double t950;
  double t1047;
  double t1059;
  double t1061;
  double t1251;
  double t1254;
  double t1259;
  double t1264;
  double t1265;
  double t1269;
  double t972;
  double t973;
  double t979;
  double t990;
  double t993;
  double t1022;
  double t1026;
  double t1097;
  double t1102;
  double t1069;
  double t1071;
  double t1130;
  double t1131;
  double t1132;
  double t1140;
  double t1158;
  double t1161;
  double t1171;
  double t1184;
  double t1204;
  double t1262;
  double t1276;
  double t1523;
  double t1525;
  double t1530;
  double t1555;
  double t1559;
  double t1565;
  double t1572;
  double t1534;
  double t1536;
  double t1539;
  double t1314;
  double t1317;
  double t1566;
  double t1576;
  double t1577;
  double t1440;
  double t1442;
  double t1444;
  double t1591;
  double t1613;
  double t1616;
  double t1460;
  double t1462;
  double t1465;
  double t1338;
  double t1343;
  double t1346;
  double t1367;
  double t1369;
  double t1371;
  double t1402;
  double t1403;
  double t1425;
  double t1431;
  double t1509;
  double t1510;
  double t1476;
  double t1480;
  double t1580;
  double t1620;
  double t1828;
  double t1834;
  double t1839;
  double t1985;
  double t2001;
  double t2016;
  double t2021;
  double t1857;
  double t1872;
  double t1884;
  double t1629;
  double t1639;
  double t2017;
  double t2027;
  double t2028;
  double t1736;
  double t1744;
  double t1752;
  double t2032;
  double t2043;
  double t2049;
  double t1761;
  double t1762;
  double t1778;
  double t1662;
  double t1671;
  double t1678;
  double t1696;
  double t1699;
  double t1700;
  double t1704;
  double t1705;
  double t1788;
  double t1790;
  double t1888;
  double t1900;
  double t1945;
  double t1953;
  double t2031;
  double t2060;
  double t2265;
  double t2268;
  double t2282;
  double t2364;
  double t2365;
  double t2373;
  double t2395;
  double t2291;
  double t2295;
  double t2305;
  double t2090;
  double t2101;
  double t2390;
  double t2398;
  double t2402;
  double t2195;
  double t2196;
  double t2198;
  double t2415;
  double t2417;
  double t2424;
  double t2202;
  double t2204;
  double t2209;
  double t2121;
  double t2124;
  double t2144;
  double t2149;
  double t2151;
  double t2160;
  double t2174;
  double t2176;
  double t2221;
  double t2227;
  double t2307;
  double t2327;
  double t2343;
  double t2348;
  t46 = Cos(var1[3]);
  t50 = Sin(var1[3]);
  t123 = Cos(var1[4]);
  t153 = Sin(var1[4]);
  t134 = -1.*var1[2]*t123*t50;
  t162 = -1.*var1[1]*t153;
  t250 = Cos(var1[5]);
  t264 = Sin(var1[5]);
  t178 = var1[2]*t46*t123;
  t194 = var1[0]*t153;
  t205 = -1.*var1[1]*t46*t123;
  t209 = var1[0]*t123*t50;
  t236 = t46*t123;
  t239 = t123*t50;
  t244 = -1.*t153;
  t374 = t250*t50*t153;
  t377 = -1.*t46*t264;
  t411 = t374 + t377;
  t424 = t46*t250;
  t426 = t50*t153*t264;
  t436 = t424 + t426;
  t506 = Cos(var1[6]);
  t515 = -1.*t506;
  t528 = 1. + t515;
  t533 = Sin(var1[6]);
  t316 = -1.*t250*t50;
  t321 = t46*t153*t264;
  t340 = t316 + t321;
  t255 = t46*t250*t153;
  t269 = t50*t264;
  t272 = t255 + t269;
  t529 = 0.07996*t528;
  t535 = -0.135*t533;
  t538 = 0. + t529 + t535;
  t545 = 0.135*t528;
  t552 = 0.07996*t533;
  t562 = 0. + t545 + t552;
  t7 = -1.*var1[0];
  t574 = t123*t250*t506;
  t578 = -1.*t123*t264*t533;
  t581 = t574 + t578;
  t710 = t506*t272;
  t713 = -1.*t340*t533;
  t719 = t710 + t713;
  t613 = t506*t411;
  t621 = -1.*t436*t533;
  t625 = t613 + t621;
  t599 = -1.*var1[2];
  t600 = -1.*t123*t250*t538;
  t601 = -1.*t123*t264*t562;
  t743 = t123*t506*t264;
  t747 = t123*t250*t533;
  t750 = t743 + t747;
  t849 = Cos(var1[7]);
  t853 = -1.*t849;
  t854 = 1. + t853;
  t860 = Sin(var1[7]);
  t675 = t506*t436;
  t680 = t411*t533;
  t681 = t675 + t680;
  t542 = t411*t538;
  t564 = t436*t562;
  t855 = 0.135*t854;
  t861 = 0.08055*t860;
  t867 = 0. + t855 + t861;
  t884 = -0.08055*t854;
  t886 = 0.135*t860;
  t891 = 0. + t884 + t886;
  t586 = t506*t340;
  t587 = t272*t533;
  t594 = t586 + t587;
  t687 = t123*t250*t538;
  t689 = t123*t264*t562;
  t648 = -1.*t272*t538;
  t657 = -1.*t340*t562;
  t963 = t849*t750;
  t965 = t153*t860;
  t967 = t963 + t965;
  t760 = -1.*var1[1];
  t763 = -1.*t411*t538;
  t767 = -1.*t436*t562;
  t1004 = t849*t594;
  t1014 = -1.*t46*t123*t860;
  t1015 = t1004 + t1014;
  t780 = t272*t538;
  t785 = t340*t562;
  t923 = t849*t681;
  t926 = -1.*t123*t50*t860;
  t940 = t923 + t926;
  t878 = -1.*t750*t867;
  t896 = t153*t891;
  t1113 = -1.*t849*t153;
  t1117 = t750*t860;
  t1118 = t1113 + t1117;
  t1205 = Cos(var1[8]);
  t1234 = -1.*t1205;
  t1250 = 1. + t1234;
  t1252 = Sin(var1[8]);
  t946 = t681*t867;
  t950 = t123*t50*t891;
  t1047 = t123*t849*t50;
  t1059 = t681*t860;
  t1061 = t1047 + t1059;
  t1251 = -0.08055*t1250;
  t1254 = -0.01004*t1252;
  t1259 = 0. + t1251 + t1254;
  t1264 = -0.01004*t1250;
  t1265 = 0.08055*t1252;
  t1269 = 0. + t1264 + t1265;
  t972 = t46*t123*t849;
  t973 = t594*t860;
  t979 = t972 + t973;
  t990 = t750*t867;
  t993 = -1.*t153*t891;
  t1022 = -1.*t594*t867;
  t1026 = -1.*t46*t123*t891;
  t1097 = t594*t867;
  t1102 = t46*t123*t891;
  t1069 = -1.*t681*t867;
  t1071 = -1.*t123*t50*t891;
  t1130 = -1.*t849*t594;
  t1131 = t46*t123*t860;
  t1132 = 0. + t1130 + t1131;
  t1140 = -1.*t849*t681;
  t1158 = t123*t50*t860;
  t1161 = 0. + t1140 + t1158;
  t1171 = -1.*t849*t750;
  t1184 = -1.*t153*t860;
  t1204 = 0. + t1171 + t1184;
  t1262 = -1.*t1118*t1259;
  t1276 = -1.*t581*t1269;
  t1523 = t1205*t1118;
  t1525 = t581*t1252;
  t1530 = t1523 + t1525;
  t1555 = Cos(var1[9]);
  t1559 = -1.*t1555;
  t1565 = 1. + t1559;
  t1572 = Sin(var1[9]);
  t1534 = t1205*t581;
  t1536 = -1.*t1118*t1252;
  t1539 = t1534 + t1536;
  t1314 = t1061*t1259;
  t1317 = t625*t1269;
  t1566 = -0.08055*t1565;
  t1576 = -0.13004*t1572;
  t1577 = 0. + t1566 + t1576;
  t1440 = t1205*t1061;
  t1442 = t625*t1252;
  t1444 = t1440 + t1442;
  t1591 = -0.13004*t1565;
  t1613 = 0.08055*t1572;
  t1616 = 0. + t1591 + t1613;
  t1460 = t1205*t625;
  t1462 = -1.*t1061*t1252;
  t1465 = t1460 + t1462;
  t1338 = t1205*t979;
  t1343 = t719*t1252;
  t1346 = t1338 + t1343;
  t1367 = t1205*t719;
  t1369 = -1.*t979*t1252;
  t1371 = t1367 + t1369;
  t1402 = t1118*t1259;
  t1403 = t581*t1269;
  t1425 = -1.*t979*t1259;
  t1431 = -1.*t719*t1269;
  t1509 = -1.*t1061*t1259;
  t1510 = -1.*t625*t1269;
  t1476 = t979*t1259;
  t1480 = t719*t1269;
  t1580 = -1.*t1577*t1530;
  t1620 = -1.*t1616*t1539;
  t1828 = -1.*t1572*t1530;
  t1834 = t1555*t1539;
  t1839 = t1828 + t1834;
  t1985 = Cos(var1[10]);
  t2001 = -1.*t1985;
  t2016 = 1. + t2001;
  t2021 = Sin(var1[10]);
  t1857 = t1555*t1530;
  t1872 = t1572*t1539;
  t1884 = t1857 + t1872;
  t1629 = t1577*t1444;
  t1639 = t1616*t1465;
  t2017 = -0.19074*t2016;
  t2027 = 0.03315*t2021;
  t2028 = 0. + t2017 + t2027;
  t1736 = -1.*t1572*t1444;
  t1744 = t1555*t1465;
  t1752 = t1736 + t1744;
  t2032 = -0.03315*t2016;
  t2043 = -0.19074*t2021;
  t2049 = 0. + t2032 + t2043;
  t1761 = t1555*t1444;
  t1762 = t1572*t1465;
  t1778 = t1761 + t1762;
  t1662 = -1.*t1572*t1346;
  t1671 = t1555*t1371;
  t1678 = t1662 + t1671;
  t1696 = t1555*t1346;
  t1699 = t1572*t1371;
  t1700 = t1696 + t1699;
  t1704 = t1577*t1530;
  t1705 = t1616*t1539;
  t1788 = -1.*t1577*t1346;
  t1790 = -1.*t1616*t1371;
  t1888 = -1.*t1577*t1444;
  t1900 = -1.*t1616*t1465;
  t1945 = t1577*t1346;
  t1953 = t1616*t1371;
  t2031 = -1.*t2028*t1839;
  t2060 = -1.*t2049*t1884;
  t2265 = t2021*t1839;
  t2268 = t1985*t1884;
  t2282 = t2265 + t2268;
  t2364 = Cos(var1[11]);
  t2365 = -1.*t2364;
  t2373 = 1. + t2365;
  t2395 = Sin(var1[11]);
  t2291 = t1985*t1839;
  t2295 = -1.*t2021*t1884;
  t2305 = t2291 + t2295;
  t2090 = t2028*t1752;
  t2101 = t2049*t1778;
  t2390 = -0.01315*t2373;
  t2398 = -0.62554*t2395;
  t2402 = 0. + t2390 + t2398;
  t2195 = t2021*t1752;
  t2196 = t1985*t1778;
  t2198 = t2195 + t2196;
  t2415 = -0.62554*t2373;
  t2417 = 0.01315*t2395;
  t2424 = 0. + t2415 + t2417;
  t2202 = t1985*t1752;
  t2204 = -1.*t2021*t1778;
  t2209 = t2202 + t2204;
  t2121 = t2021*t1678;
  t2124 = t1985*t1700;
  t2144 = t2121 + t2124;
  t2149 = t1985*t1678;
  t2151 = -1.*t2021*t1700;
  t2160 = t2149 + t2151;
  t2174 = t2028*t1839;
  t2176 = t2049*t1884;
  t2221 = -1.*t2028*t1678;
  t2227 = -1.*t2049*t1700;
  t2307 = -1.*t2028*t1752;
  t2327 = -1.*t2049*t1778;
  t2343 = t2028*t1678;
  t2348 = t2049*t1700;
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
  p_output1[19]=t7;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t46*var1[2];
  p_output1[25]=-1.*t50*var1[2];
  p_output1[26]=t46*var1[0] + t50*var1[1];
  p_output1[27]=-1.*t50;
  p_output1[28]=t46;
  p_output1[29]=0;
  p_output1[30]=t134 + t162;
  p_output1[31]=t178 + t194;
  p_output1[32]=t205 + t209;
  p_output1[33]=t236;
  p_output1[34]=t239;
  p_output1[35]=t244;
  p_output1[36]=t134 + t162 - 0.135*t272 + 0.07996*t340;
  p_output1[37]=t178 + t194 - 0.135*t411 + 0.07996*t436;
  p_output1[38]=t205 + t209 - 0.135*t123*t250 + 0.07996*t123*t264;
  p_output1[39]=0. + t236;
  p_output1[40]=0. + t239;
  p_output1[41]=0. + t244;
  p_output1[42]=0.135*t123*t46 + 0.08055*t594 + (0. + t599 + t600 + t601)*t625 + t581*(0. + t542 + t564 + var1[1]);
  p_output1[43]=0.135*t123*t50 + 0.08055*t681 + t581*(0. + t648 + t657 + t7) + t719*(0. + t687 + t689 + var1[2]);
  p_output1[44]=-0.135*t153 + 0.08055*t750 + t719*(0. + t760 + t763 + t767) + t625*(0. + t780 + t785 + var1[0]);
  p_output1[45]=0. + t710 + t713;
  p_output1[46]=0. + t613 + t621;
  p_output1[47]=0. + t574 + t578;
  p_output1[48]=0.08055*t719 - 1.*(0. + t599 + t600 + t601 + t878 + t896)*t940 - 0.01004*t979 - 1.*t967*(0. + t542 + t564 + t946 + t950 + var1[1]);
  p_output1[49]=-0.01004*t1061 + 0.08055*t625 - 1.*(0. + t1022 + t1026 + t648 + t657 + t7)*t967 - 1.*t1015*(0. + t687 + t689 + t990 + t993 + var1[2]);
  p_output1[50]=-0.01004*t1118 + 0.08055*t581 - 1.*t1015*(0. + t1069 + t1071 + t760 + t763 + t767) - 1.*t940*(0. + t1097 + t1102 + t780 + t785 + var1[0]);
  p_output1[51]=t1132;
  p_output1[52]=t1161;
  p_output1[53]=t1204;
  p_output1[54]=-0.13004*t1346 + 0.08055*t1371 - 1.*(0. + t1262 + t1276 + t599 + t600 + t601 + t878 + t896)*t940 - 1.*t967*(0. + t1314 + t1317 + t542 + t564 + t946 + t950 + var1[1]);
  p_output1[55]=-0.13004*t1444 + 0.08055*t1465 - 1.*(0. + t1022 + t1026 + t1425 + t1431 + t648 + t657 + t7)*t967 - 1.*t1015*(0. + t1402 + t1403 + t687 + t689 + t990 + t993 + var1[2]);
  p_output1[56]=-0.13004*t1530 + 0.08055*t1539 - 1.*t1015*(0. + t1069 + t1071 + t1509 + t1510 + t760 + t763 + t767) - 1.*t940*(0. + t1097 + t1102 + t1476 + t1480 + t780 + t785 + var1[0]);
  p_output1[57]=t1132;
  p_output1[58]=t1161;
  p_output1[59]=t1204;
  p_output1[60]=0.03315*t1678 - 0.19074*t1700 - 1.*(0. + t1262 + t1276 + t1580 + t1620 + t599 + t600 + t601 + t878 + t896)*t940 - 1.*t967*(0. + t1314 + t1317 + t1629 + t1639 + t542 + t564 + t946 + t950 + var1[1]);
  p_output1[61]=0.03315*t1752 - 0.19074*t1778 - 1.*(0. + t1022 + t1026 + t1425 + t1431 + t1788 + t1790 + t648 + t657 + t7)*t967 - 1.*t1015*(0. + t1402 + t1403 + t1704 + t1705 + t687 + t689 + t990 + t993 + var1[2]);
  p_output1[62]=0.03315*t1839 - 0.19074*t1884 - 1.*t1015*(0. + t1069 + t1071 + t1509 + t1510 + t1888 + t1900 + t760 + t763 + t767) - 1.*t940*(0. + t1097 + t1102 + t1476 + t1480 + t1945 + t1953 + t780 + t785 + var1[0]);
  p_output1[63]=t1132;
  p_output1[64]=t1161;
  p_output1[65]=t1204;
  p_output1[66]=-0.62554*t2144 + 0.01315*t2160 - 1.*(0. + t1262 + t1276 + t1580 + t1620 + t2031 + t2060 + t599 + t600 + t601 + t878 + t896)*t940 - 1.*t967*(0. + t1314 + t1317 + t1629 + t1639 + t2090 + t2101 + t542 + t564 + t946 + t950 + var1[1]);
  p_output1[67]=-0.62554*t2198 + 0.01315*t2209 - 1.*(0. + t1022 + t1026 + t1425 + t1431 + t1788 + t1790 + t2221 + t2227 + t648 + t657 + t7)*t967 - 1.*t1015*(0. + t1402 + t1403 + t1704 + t1705 + t2174 + t2176 + t687 + t689 + t990 + t993 + var1[2]);
  p_output1[68]=-0.62554*t2282 + 0.01315*t2305 - 1.*t1015*(0. + t1069 + t1071 + t1509 + t1510 + t1888 + t1900 + t2307 + t2327 + t760 + t763 + t767) - 1.*t940*(0. + t1097 + t1102 + t1476 + t1480 + t1945 + t1953 + t2343 + t2348 + t780 + t785 + var1[0]);
  p_output1[69]=t1132;
  p_output1[70]=t1161;
  p_output1[71]=t1204;
  p_output1[72]=0.05315*(t2160*t2364 - 1.*t2144*t2395) - 1.03354*(t2144*t2364 + t2160*t2395) - 1.*(0. + t1262 + t1276 + t1580 + t1620 + t2031 + t2060 - 1.*t2282*t2402 - 1.*t2305*t2424 + t599 + t600 + t601 + t878 + t896)*t940 - 1.*t967*(0. + t1314 + t1317 + t1629 + t1639 + t2090 + t2101 + t2198*t2402 + t2209*t2424 + t542 + t564 + t946 + t950 + var1[1]);
  p_output1[73]=0.05315*(t2209*t2364 - 1.*t2198*t2395) - 1.03354*(t2198*t2364 + t2209*t2395) - 1.*(0. + t1022 + t1026 + t1425 + t1431 + t1788 + t1790 + t2221 + t2227 - 1.*t2144*t2402 - 1.*t2160*t2424 + t648 + t657 + t7)*t967 - 1.*t1015*(0. + t1402 + t1403 + t1704 + t1705 + t2174 + t2176 + t2282*t2402 + t2305*t2424 + t687 + t689 + t990 + t993 + var1[2]);
  p_output1[74]=0.05315*(t2305*t2364 - 1.*t2282*t2395) - 1.03354*(t2282*t2364 + t2305*t2395) - 1.*t1015*(0. + t1069 + t1071 + t1509 + t1510 + t1888 + t1900 + t2307 + t2327 - 1.*t2198*t2402 - 1.*t2209*t2424 + t760 + t763 + t767) - 1.*t940*(0. + t1097 + t1102 + t1476 + t1480 + t1945 + t1953 + t2343 + t2348 + t2144*t2402 + t2160*t2424 + t780 + t785 + var1[0]);
  p_output1[75]=t1132;
  p_output1[76]=t1161;
  p_output1[77]=t1204;
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

#include "Js_LeftToeJoint_mex.hh"

namespace SymExpression
{

void Js_LeftToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
