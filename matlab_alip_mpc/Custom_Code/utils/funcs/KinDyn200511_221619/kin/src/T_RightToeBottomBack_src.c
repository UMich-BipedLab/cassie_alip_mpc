/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToeBottomBack_src.h"

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
  double t207;
  double t228;
  double t164;
  double t212;
  double t247;
  double t318;
  double t221;
  double t274;
  double t303;
  double t161;
  double t327;
  double t328;
  double t340;
  double t389;
  double t313;
  double t342;
  double t347;
  double t150;
  double t406;
  double t409;
  double t418;
  double t426;
  double t439;
  double t445;
  double t449;
  double t459;
  double t473;
  double t505;
  double t381;
  double t489;
  double t500;
  double t123;
  double t519;
  double t529;
  double t533;
  double t571;
  double t504;
  double t534;
  double t536;
  double t122;
  double t575;
  double t583;
  double t592;
  double t650;
  double t561;
  double t605;
  double t621;
  double t117;
  double t672;
  double t685;
  double t687;
  double t704;
  double t628;
  double t691;
  double t692;
  double t75;
  double t720;
  double t743;
  double t746;
  double t816;
  double t838;
  double t841;
  double t845;
  double t858;
  double t859;
  double t842;
  double t862;
  double t869;
  double t885;
  double t887;
  double t895;
  double t910;
  double t920;
  double t925;
  double t878;
  double t926;
  double t928;
  double t946;
  double t955;
  double t964;
  double t940;
  double t977;
  double t993;
  double t1020;
  double t1021;
  double t1033;
  double t1018;
  double t1035;
  double t1039;
  double t1069;
  double t1082;
  double t1090;
  double t1061;
  double t1091;
  double t1095;
  double t1103;
  double t1108;
  double t1113;
  double t1170;
  double t1176;
  double t1195;
  double t1208;
  double t1243;
  double t1248;
  double t1269;
  double t1279;
  double t1282;
  double t1205;
  double t1286;
  double t1289;
  double t1294;
  double t1307;
  double t1311;
  double t1290;
  double t1322;
  double t1324;
  double t1329;
  double t1351;
  double t1359;
  double t1326;
  double t1368;
  double t1379;
  double t1389;
  double t1418;
  double t1422;
  double t1387;
  double t1426;
  double t1457;
  double t1466;
  double t1468;
  double t1469;
  double t696;
  double t759;
  double t763;
  double t770;
  double t782;
  double t794;
  double t1098;
  double t1117;
  double t1123;
  double t1133;
  double t1138;
  double t1144;
  double t1460;
  double t1471;
  double t1473;
  double t1518;
  double t1520;
  double t1533;
  double t1670;
  double t1671;
  double t1653;
  double t1656;
  double t1540;
  double t1550;
  double t1556;
  double t1750;
  double t1772;
  double t1842;
  double t1845;
  double t1897;
  double t1898;
  double t1954;
  double t1956;
  double t2060;
  double t2078;
  double t1659;
  double t1664;
  double t1667;
  double t1674;
  double t1675;
  double t1682;
  double t1696;
  double t1712;
  double t1718;
  double t1732;
  double t1735;
  double t1745;
  double t1783;
  double t1785;
  double t1808;
  double t1573;
  double t1578;
  double t1584;
  double t1821;
  double t1827;
  double t1830;
  double t1850;
  double t1858;
  double t1865;
  double t1881;
  double t1882;
  double t1886;
  double t1899;
  double t1903;
  double t1908;
  double t1932;
  double t1939;
  double t1943;
  double t1961;
  double t1962;
  double t1964;
  double t2017;
  double t2019;
  double t2022;
  double t2079;
  double t2086;
  double t2090;
  double t2101;
  double t2103;
  double t2109;
  double t1588;
  double t1596;
  double t1599;
  t207 = Cos(var1[5]);
  t228 = Sin(var1[3]);
  t164 = Cos(var1[3]);
  t212 = Sin(var1[4]);
  t247 = Sin(var1[5]);
  t318 = Sin(var1[13]);
  t221 = t164*t207*t212;
  t274 = t228*t247;
  t303 = t221 + t274;
  t161 = Cos(var1[13]);
  t327 = -1.*t207*t228;
  t328 = t164*t212*t247;
  t340 = t327 + t328;
  t389 = Cos(var1[15]);
  t313 = t161*t303;
  t342 = -1.*t318*t340;
  t347 = t313 + t342;
  t150 = Sin(var1[15]);
  t406 = Cos(var1[14]);
  t409 = Cos(var1[4]);
  t418 = t406*t164*t409;
  t426 = Sin(var1[14]);
  t439 = t318*t303;
  t445 = t161*t340;
  t449 = t439 + t445;
  t459 = t426*t449;
  t473 = t418 + t459;
  t505 = Cos(var1[16]);
  t381 = t150*t347;
  t489 = t389*t473;
  t500 = t381 + t489;
  t123 = Sin(var1[16]);
  t519 = t389*t347;
  t529 = -1.*t150*t473;
  t533 = t519 + t529;
  t571 = Cos(var1[17]);
  t504 = -1.*t123*t500;
  t534 = t505*t533;
  t536 = t504 + t534;
  t122 = Sin(var1[17]);
  t575 = t505*t500;
  t583 = t123*t533;
  t592 = t575 + t583;
  t650 = Cos(var1[18]);
  t561 = t122*t536;
  t605 = t571*t592;
  t621 = t561 + t605;
  t117 = Sin(var1[18]);
  t672 = t571*t536;
  t685 = -1.*t122*t592;
  t687 = t672 + t685;
  t704 = Cos(var1[19]);
  t628 = -1.*t117*t621;
  t691 = t650*t687;
  t692 = t628 + t691;
  t75 = Sin(var1[19]);
  t720 = t650*t621;
  t743 = t117*t687;
  t746 = t720 + t743;
  t816 = t207*t228*t212;
  t838 = -1.*t164*t247;
  t841 = t816 + t838;
  t845 = t164*t207;
  t858 = t228*t212*t247;
  t859 = t845 + t858;
  t842 = t161*t841;
  t862 = -1.*t318*t859;
  t869 = t842 + t862;
  t885 = t406*t409*t228;
  t887 = t318*t841;
  t895 = t161*t859;
  t910 = t887 + t895;
  t920 = t426*t910;
  t925 = t885 + t920;
  t878 = t150*t869;
  t926 = t389*t925;
  t928 = t878 + t926;
  t946 = t389*t869;
  t955 = -1.*t150*t925;
  t964 = t946 + t955;
  t940 = -1.*t123*t928;
  t977 = t505*t964;
  t993 = t940 + t977;
  t1020 = t505*t928;
  t1021 = t123*t964;
  t1033 = t1020 + t1021;
  t1018 = t122*t993;
  t1035 = t571*t1033;
  t1039 = t1018 + t1035;
  t1069 = t571*t993;
  t1082 = -1.*t122*t1033;
  t1090 = t1069 + t1082;
  t1061 = -1.*t117*t1039;
  t1091 = t650*t1090;
  t1095 = t1061 + t1091;
  t1103 = t650*t1039;
  t1108 = t117*t1090;
  t1113 = t1103 + t1108;
  t1170 = t161*t409*t207;
  t1176 = -1.*t409*t318*t247;
  t1195 = t1170 + t1176;
  t1208 = -1.*t406*t212;
  t1243 = t409*t207*t318;
  t1248 = t161*t409*t247;
  t1269 = t1243 + t1248;
  t1279 = t426*t1269;
  t1282 = t1208 + t1279;
  t1205 = t150*t1195;
  t1286 = t389*t1282;
  t1289 = t1205 + t1286;
  t1294 = t389*t1195;
  t1307 = -1.*t150*t1282;
  t1311 = t1294 + t1307;
  t1290 = -1.*t123*t1289;
  t1322 = t505*t1311;
  t1324 = t1290 + t1322;
  t1329 = t505*t1289;
  t1351 = t123*t1311;
  t1359 = t1329 + t1351;
  t1326 = t122*t1324;
  t1368 = t571*t1359;
  t1379 = t1326 + t1368;
  t1389 = t571*t1324;
  t1418 = -1.*t122*t1359;
  t1422 = t1389 + t1418;
  t1387 = -1.*t117*t1379;
  t1426 = t650*t1422;
  t1457 = t1387 + t1426;
  t1466 = t650*t1379;
  t1468 = t117*t1422;
  t1469 = t1466 + t1468;
  t696 = t75*t692;
  t759 = t704*t746;
  t763 = t696 + t759;
  t770 = t704*t692;
  t782 = -1.*t75*t746;
  t794 = t770 + t782;
  t1098 = t75*t1095;
  t1117 = t704*t1113;
  t1123 = t1098 + t1117;
  t1133 = t704*t1095;
  t1138 = -1.*t75*t1113;
  t1144 = t1133 + t1138;
  t1460 = t75*t1457;
  t1471 = t704*t1469;
  t1473 = t1460 + t1471;
  t1518 = t704*t1457;
  t1520 = -1.*t75*t1469;
  t1533 = t1518 + t1520;
  t1670 = -1.*t161;
  t1671 = 1. + t1670;
  t1653 = -1.*t406;
  t1656 = 1. + t1653;
  t1540 = -1.*t164*t409*t426;
  t1550 = t406*t449;
  t1556 = t1540 + t1550;
  t1750 = -1.*t389;
  t1772 = 1. + t1750;
  t1842 = -1.*t505;
  t1845 = 1. + t1842;
  t1897 = -1.*t571;
  t1898 = 1. + t1897;
  t1954 = -1.*t650;
  t1956 = 1. + t1954;
  t2060 = -1.*t704;
  t2078 = 1. + t2060;
  t1659 = -0.08055*t1656;
  t1664 = -0.135*t426;
  t1667 = 0. + t1659 + t1664;
  t1674 = 0.07996*t1671;
  t1675 = 0.135*t318;
  t1682 = 0. + t1674 + t1675;
  t1696 = -0.135*t1671;
  t1712 = 0.07996*t318;
  t1718 = 0. + t1696 + t1712;
  t1732 = -0.135*t1656;
  t1735 = 0.08055*t426;
  t1745 = 0. + t1732 + t1735;
  t1783 = -0.01004*t1772;
  t1785 = 0.08055*t150;
  t1808 = 0. + t1783 + t1785;
  t1573 = -1.*t409*t426*t228;
  t1578 = t406*t910;
  t1584 = t1573 + t1578;
  t1821 = -0.08055*t1772;
  t1827 = -0.01004*t150;
  t1830 = 0. + t1821 + t1827;
  t1850 = -0.08055*t1845;
  t1858 = -0.13004*t123;
  t1865 = 0. + t1850 + t1858;
  t1881 = -0.13004*t1845;
  t1882 = 0.08055*t123;
  t1886 = 0. + t1881 + t1882;
  t1899 = -0.19074*t1898;
  t1903 = 0.03315*t122;
  t1908 = 0. + t1899 + t1903;
  t1932 = -0.03315*t1898;
  t1939 = -0.19074*t122;
  t1943 = 0. + t1932 + t1939;
  t1961 = -0.01315*t1956;
  t1962 = -0.62554*t117;
  t1964 = 0. + t1961 + t1962;
  t2017 = -0.62554*t1956;
  t2019 = 0.01315*t117;
  t2022 = 0. + t2017 + t2019;
  t2079 = -1.03354*t2078;
  t2086 = 0.05315*t75;
  t2090 = 0. + t2079 + t2086;
  t2101 = -0.05315*t2078;
  t2103 = -1.03354*t75;
  t2109 = 0. + t2101 + t2103;
  t1588 = t426*t212;
  t1596 = t406*t1269;
  t1599 = t1588 + t1596;
  p_output1[0]=0.642788*t763 + 0.766044*t794;
  p_output1[1]=0.642788*t1123 + 0.766044*t1144;
  p_output1[2]=0.642788*t1473 + 0.766044*t1533;
  p_output1[3]=0.;
  p_output1[4]=t1556;
  p_output1[5]=t1584;
  p_output1[6]=t1599;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t763 + 0.642788*t794;
  p_output1[9]=-0.766044*t1123 + 0.642788*t1144;
  p_output1[10]=-0.766044*t1473 + 0.642788*t1533;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*t1556 + t1682*t303 + t1718*t340 + t1808*t347 + t164*t1667*t409 + t1745*t449 + t1830*t473 + t1865*t500 + t1886*t533 + t1908*t536 + t1943*t592 + t1964*t621 + t2022*t687 + t2090*t692 + t2109*t746 - 0.063247*t763 - 1.109926*t794 + var1[0];
  p_output1[13]=0. - 0.063247*t1123 - 1.109926*t1144 - 0.1305*t1584 + t1033*t1943 + t1039*t1964 + t1090*t2022 + t1095*t2090 + t1113*t2109 + t1667*t228*t409 + t1682*t841 + t1718*t859 + t1808*t869 + t1745*t910 + t1830*t925 + t1865*t928 + t1886*t964 + t1908*t993 + var1[1];
  p_output1[14]=0. - 0.063247*t1473 - 1.109926*t1533 - 0.1305*t1599 + t1269*t1745 + t1195*t1808 + t1282*t1830 + t1289*t1865 + t1311*t1886 + t1324*t1908 + t1359*t1943 + t1379*t1964 + t1422*t2022 + t1457*t2090 + t1469*t2109 - 1.*t1667*t212 + t1682*t207*t409 + t1718*t247*t409 + var1[2];
  p_output1[15]=1.;
}



void T_RightToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
