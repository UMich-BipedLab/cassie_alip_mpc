/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:26 GMT-04:00
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
  double t92;
  double t151;
  double t352;
  double t366;
  double t354;
  double t370;
  double t519;
  double t539;
  double t388;
  double t391;
  double t397;
  double t435;
  double t466;
  double t513;
  double t517;
  double t521;
  double t553;
  double t562;
  double t574;
  double t579;
  double t583;
  double t741;
  double t737;
  double t605;
  double t611;
  double t618;
  double t780;
  double t781;
  double t639;
  double t644;
  double t648;
  double t811;
  double t820;
  double t825;
  double t840;
  double t846;
  double t853;
  double t762;
  double t763;
  double t767;
  double t48;
  double t1095;
  double t1102;
  double t1105;
  double t950;
  double t957;
  double t964;
  double t740;
  double t750;
  double t755;
  double t893;
  double t898;
  double t1267;
  double t1273;
  double t911;
  double t1299;
  double t1313;
  double t1172;
  double t1173;
  double t1179;
  double t1119;
  double t1131;
  double t1143;
  double t1327;
  double t1328;
  double t1333;
  double t838;
  double t859;
  double t1339;
  double t1347;
  double t1358;
  double t1072;
  double t1076;
  double t1396;
  double t1417;
  double t1422;
  double t988;
  double t998;
  double t1223;
  double t1225;
  double t1376;
  double t1392;
  double t1393;
  double t1483;
  double t1494;
  double t1496;
  double t1191;
  double t1198;
  double t1200;
  double t1336;
  double t1369;
  double t1740;
  double t1741;
  double t1749;
  double t1772;
  double t1576;
  double t1579;
  double t1585;
  double t1268;
  double t1285;
  double t1286;
  double t1429;
  double t1432;
  double t1769;
  double t1773;
  double t1779;
  double t1794;
  double t1795;
  double t1796;
  double t1537;
  double t1541;
  double t1543;
  double t1466;
  double t1471;
  double t1519;
  double t1522;
  double t1592;
  double t1610;
  double t1626;
  double t1627;
  double t1668;
  double t1690;
  double t1692;
  double t1699;
  double t1711;
  double t1716;
  double t1719;
  double t1725;
  double t1734;
  double t1791;
  double t1813;
  double t2028;
  double t2035;
  double t2037;
  double t2125;
  double t2142;
  double t2149;
  double t2170;
  double t2045;
  double t2059;
  double t2077;
  double t1832;
  double t1841;
  double t1845;
  double t1866;
  double t1870;
  double t1878;
  double t1894;
  double t1908;
  double t2166;
  double t2176;
  double t2180;
  double t1961;
  double t1964;
  double t1969;
  double t2203;
  double t2210;
  double t2211;
  double t1992;
  double t2013;
  double t2015;
  double t1924;
  double t1928;
  double t1940;
  double t1946;
  double t2102;
  double t2104;
  double t2112;
  double t2114;
  double t2200;
  double t2219;
  double t2435;
  double t2439;
  double t2448;
  double t2558;
  double t2582;
  double t2583;
  double t2602;
  double t2475;
  double t2476;
  double t2482;
  double t2228;
  double t2230;
  double t2242;
  double t2261;
  double t2283;
  double t2287;
  double t2289;
  double t2290;
  double t2592;
  double t2606;
  double t2610;
  double t2372;
  double t2377;
  double t2379;
  double t2634;
  double t2645;
  double t2657;
  double t2385;
  double t2393;
  double t2396;
  double t2324;
  double t2331;
  double t2348;
  double t2358;
  double t2495;
  double t2502;
  double t2522;
  double t2534;
  t92 = Cos(var1[3]);
  t151 = Sin(var1[3]);
  t352 = Cos(var1[4]);
  t366 = Sin(var1[4]);
  t354 = -1.*var1[2]*t352*t151;
  t370 = -1.*var1[1]*t366;
  t519 = Cos(var1[5]);
  t539 = Sin(var1[5]);
  t388 = var1[2]*t92*t352;
  t391 = var1[0]*t366;
  t397 = -1.*var1[1]*t92*t352;
  t435 = var1[0]*t352*t151;
  t466 = t92*t352;
  t513 = t352*t151;
  t517 = -1.*t366;
  t521 = t92*t519*t366;
  t553 = t151*t539;
  t562 = t521 + t553;
  t574 = -1.*t519*t151;
  t579 = t92*t366*t539;
  t583 = t574 + t579;
  t741 = Cos(var1[13]);
  t737 = Sin(var1[13]);
  t605 = t519*t151*t366;
  t611 = -1.*t92*t539;
  t618 = t605 + t611;
  t780 = -1.*t741;
  t781 = 1. + t780;
  t639 = t92*t519;
  t644 = t151*t366*t539;
  t648 = t639 + t644;
  t811 = 0.07996*t781;
  t820 = 0.135*t737;
  t825 = 0. + t811 + t820;
  t840 = -0.135*t781;
  t846 = 0.07996*t737;
  t853 = 0. + t840 + t846;
  t762 = t741*t352*t519;
  t763 = -1.*t352*t737*t539;
  t767 = t762 + t763;
  t48 = -1.*var1[0];
  t1095 = t741*t562;
  t1102 = -1.*t737*t583;
  t1105 = t1095 + t1102;
  t950 = t741*t618;
  t957 = -1.*t737*t648;
  t964 = t950 + t957;
  t740 = t737*t562;
  t750 = t741*t583;
  t755 = t740 + t750;
  t893 = -1.*var1[2];
  t898 = -1.*t352*t519*t825;
  t1267 = Cos(var1[14]);
  t1273 = Sin(var1[14]);
  t911 = -1.*t352*t853*t539;
  t1299 = -1.*t1267;
  t1313 = 1. + t1299;
  t1172 = t352*t519*t737;
  t1173 = t741*t352*t539;
  t1179 = t1172 + t1173;
  t1119 = t737*t618;
  t1131 = t741*t648;
  t1143 = t1119 + t1131;
  t1327 = -0.08055*t1313;
  t1328 = -0.135*t1273;
  t1333 = 0. + t1327 + t1328;
  t838 = t825*t618;
  t859 = t853*t648;
  t1339 = -0.135*t1313;
  t1347 = 0.08055*t1273;
  t1358 = 0. + t1339 + t1347;
  t1072 = t352*t519*t825;
  t1076 = t352*t853*t539;
  t1396 = t1273*t366;
  t1417 = t1267*t1179;
  t1422 = t1396 + t1417;
  t988 = -1.*t825*t562;
  t998 = -1.*t853*t583;
  t1223 = t825*t562;
  t1225 = t853*t583;
  t1376 = -1.*t352*t1273*t151;
  t1392 = t1267*t1143;
  t1393 = t1376 + t1392;
  t1483 = -1.*t92*t352*t1273;
  t1494 = t1267*t755;
  t1496 = t1483 + t1494;
  t1191 = -1.*var1[1];
  t1198 = -1.*t825*t618;
  t1200 = -1.*t853*t648;
  t1336 = t1333*t366;
  t1369 = -1.*t1358*t1179;
  t1740 = Cos(var1[15]);
  t1741 = -1.*t1740;
  t1749 = 1. + t1741;
  t1772 = Sin(var1[15]);
  t1576 = -1.*t1267*t366;
  t1579 = t1273*t1179;
  t1585 = t1576 + t1579;
  t1268 = t1267*t92*t352;
  t1285 = t1273*t755;
  t1286 = t1268 + t1285;
  t1429 = t352*t1333*t151;
  t1432 = t1358*t1143;
  t1769 = -0.01004*t1749;
  t1773 = 0.08055*t1772;
  t1779 = 0. + t1769 + t1773;
  t1794 = -0.08055*t1749;
  t1795 = -0.01004*t1772;
  t1796 = 0. + t1794 + t1795;
  t1537 = t1267*t352*t151;
  t1541 = t1273*t1143;
  t1543 = t1537 + t1541;
  t1466 = -1.*t1333*t366;
  t1471 = t1358*t1179;
  t1519 = -1.*t92*t352*t1333;
  t1522 = -1.*t1358*t755;
  t1592 = t92*t352*t1333;
  t1610 = t1358*t755;
  t1626 = -1.*t352*t1333*t151;
  t1627 = -1.*t1358*t1143;
  t1668 = t92*t352*t1273;
  t1690 = -1.*t1267*t755;
  t1692 = 0. + t1668 + t1690;
  t1699 = t352*t1273*t151;
  t1711 = -1.*t1267*t1143;
  t1716 = 0. + t1699 + t1711;
  t1719 = -1.*t1273*t366;
  t1725 = -1.*t1267*t1179;
  t1734 = 0. + t1719 + t1725;
  t1791 = -1.*t1779*t767;
  t1813 = -1.*t1796*t1585;
  t2028 = t1772*t767;
  t2035 = t1740*t1585;
  t2037 = t2028 + t2035;
  t2125 = Cos(var1[16]);
  t2142 = -1.*t2125;
  t2149 = 1. + t2142;
  t2170 = Sin(var1[16]);
  t2045 = t1740*t767;
  t2059 = -1.*t1772*t1585;
  t2077 = t2045 + t2059;
  t1832 = t1772*t1105;
  t1841 = t1740*t1286;
  t1845 = t1832 + t1841;
  t1866 = t1740*t1105;
  t1870 = -1.*t1772*t1286;
  t1878 = t1866 + t1870;
  t1894 = t1779*t964;
  t1908 = t1796*t1543;
  t2166 = -0.08055*t2149;
  t2176 = -0.13004*t2170;
  t2180 = 0. + t2166 + t2176;
  t1961 = t1772*t964;
  t1964 = t1740*t1543;
  t1969 = t1961 + t1964;
  t2203 = -0.13004*t2149;
  t2210 = 0.08055*t2170;
  t2211 = 0. + t2203 + t2210;
  t1992 = t1740*t964;
  t2013 = -1.*t1772*t1543;
  t2015 = t1992 + t2013;
  t1924 = t1779*t767;
  t1928 = t1796*t1585;
  t1940 = -1.*t1779*t1105;
  t1946 = -1.*t1796*t1286;
  t2102 = t1779*t1105;
  t2104 = t1796*t1286;
  t2112 = -1.*t1779*t964;
  t2114 = -1.*t1796*t1543;
  t2200 = -1.*t2180*t2037;
  t2219 = -1.*t2211*t2077;
  t2435 = -1.*t2170*t2037;
  t2439 = t2125*t2077;
  t2448 = t2435 + t2439;
  t2558 = Cos(var1[17]);
  t2582 = -1.*t2558;
  t2583 = 1. + t2582;
  t2602 = Sin(var1[17]);
  t2475 = t2125*t2037;
  t2476 = t2170*t2077;
  t2482 = t2475 + t2476;
  t2228 = -1.*t2170*t1845;
  t2230 = t2125*t1878;
  t2242 = t2228 + t2230;
  t2261 = t2125*t1845;
  t2283 = t2170*t1878;
  t2287 = t2261 + t2283;
  t2289 = t2180*t1969;
  t2290 = t2211*t2015;
  t2592 = -0.19074*t2583;
  t2606 = 0.03315*t2602;
  t2610 = 0. + t2592 + t2606;
  t2372 = -1.*t2170*t1969;
  t2377 = t2125*t2015;
  t2379 = t2372 + t2377;
  t2634 = -0.03315*t2583;
  t2645 = -0.19074*t2602;
  t2657 = 0. + t2634 + t2645;
  t2385 = t2125*t1969;
  t2393 = t2170*t2015;
  t2396 = t2385 + t2393;
  t2324 = t2180*t2037;
  t2331 = t2211*t2077;
  t2348 = -1.*t2180*t1845;
  t2358 = -1.*t2211*t1878;
  t2495 = t2180*t1845;
  t2502 = t2211*t1878;
  t2522 = -1.*t2180*t1969;
  t2534 = -1.*t2211*t2015;
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
  p_output1[19]=t48;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t92*var1[2];
  p_output1[25]=-1.*t151*var1[2];
  p_output1[26]=t92*var1[0] + t151*var1[1];
  p_output1[27]=-1.*t151;
  p_output1[28]=t92;
  p_output1[29]=0;
  p_output1[30]=t354 + t370;
  p_output1[31]=t388 + t391;
  p_output1[32]=t397 + t435;
  p_output1[33]=t466;
  p_output1[34]=t513;
  p_output1[35]=t517;
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
  p_output1[78]=t354 + t370 + 0.135*t562 + 0.07996*t583;
  p_output1[79]=t388 + t391 + 0.135*t618 + 0.07996*t648;
  p_output1[80]=t397 + t435 + 0.135*t352*t519 + 0.07996*t352*t539;
  p_output1[81]=0. + t466;
  p_output1[82]=0. + t513;
  p_output1[83]=0. + t517;
  p_output1[84]=0.08055*t755 - 0.135*t352*t92 + (0. + t893 + t898 + t911)*t964 + t767*(0. + t838 + t859 + var1[1]);
  p_output1[85]=0.08055*t1143 - 0.135*t151*t352 + t767*(0. + t48 + t988 + t998) + t1105*(0. + t1072 + t1076 + var1[2]);
  p_output1[86]=0.08055*t1179 + t1105*(0. + t1191 + t1198 + t1200) + 0.135*t366 + t964*(0. + t1223 + t1225 + var1[0]);
  p_output1[87]=0. + t1095 + t1102;
  p_output1[88]=0. + t950 + t957;
  p_output1[89]=0. + t762 + t763;
  p_output1[90]=0.08055*t1105 - 0.01004*t1286 - 1.*t1393*(0. + t1336 + t1369 + t893 + t898 + t911) - 1.*t1422*(0. + t1429 + t1432 + t838 + t859 + var1[1]);
  p_output1[91]=-0.01004*t1543 + 0.08055*t964 - 1.*t1422*(0. + t1519 + t1522 + t48 + t988 + t998) - 1.*t1496*(0. + t1072 + t1076 + t1466 + t1471 + var1[2]);
  p_output1[92]=-0.01004*t1585 - 1.*t1496*(0. + t1191 + t1198 + t1200 + t1626 + t1627) + 0.08055*t767 - 1.*t1393*(0. + t1223 + t1225 + t1592 + t1610 + var1[0]);
  p_output1[93]=t1692;
  p_output1[94]=t1716;
  p_output1[95]=t1734;
  p_output1[96]=-0.13004*t1845 + 0.08055*t1878 - 1.*t1393*(0. + t1336 + t1369 + t1791 + t1813 + t893 + t898 + t911) - 1.*t1422*(0. + t1429 + t1432 + t1894 + t1908 + t838 + t859 + var1[1]);
  p_output1[97]=-0.13004*t1969 + 0.08055*t2015 - 1.*t1422*(0. + t1519 + t1522 + t1940 + t1946 + t48 + t988 + t998) - 1.*t1496*(0. + t1072 + t1076 + t1466 + t1471 + t1924 + t1928 + var1[2]);
  p_output1[98]=-0.13004*t2037 + 0.08055*t2077 - 1.*t1496*(0. + t1191 + t1198 + t1200 + t1626 + t1627 + t2112 + t2114) - 1.*t1393*(0. + t1223 + t1225 + t1592 + t1610 + t2102 + t2104 + var1[0]);
  p_output1[99]=t1692;
  p_output1[100]=t1716;
  p_output1[101]=t1734;
  p_output1[102]=0.03315*t2242 - 0.19074*t2287 - 1.*t1393*(0. + t1336 + t1369 + t1791 + t1813 + t2200 + t2219 + t893 + t898 + t911) - 1.*t1422*(0. + t1429 + t1432 + t1894 + t1908 + t2289 + t2290 + t838 + t859 + var1[1]);
  p_output1[103]=0.03315*t2379 - 0.19074*t2396 - 1.*t1422*(0. + t1519 + t1522 + t1940 + t1946 + t2348 + t2358 + t48 + t988 + t998) - 1.*t1496*(0. + t1072 + t1076 + t1466 + t1471 + t1924 + t1928 + t2324 + t2331 + var1[2]);
  p_output1[104]=0.03315*t2448 - 0.19074*t2482 - 1.*t1496*(0. + t1191 + t1198 + t1200 + t1626 + t1627 + t2112 + t2114 + t2522 + t2534) - 1.*t1393*(0. + t1223 + t1225 + t1592 + t1610 + t2102 + t2104 + t2495 + t2502 + var1[0]);
  p_output1[105]=t1692;
  p_output1[106]=t1716;
  p_output1[107]=t1734;
  p_output1[108]=-0.62554*(t2287*t2558 + t2242*t2602) + 0.01315*(t2242*t2558 - 1.*t2287*t2602) - 1.*t1393*(0. + t1336 + t1369 + t1791 + t1813 + t2200 + t2219 - 1.*t2448*t2610 - 1.*t2482*t2657 + t893 + t898 + t911) - 1.*t1422*(0. + t1429 + t1432 + t1894 + t1908 + t2289 + t2290 + t2379*t2610 + t2396*t2657 + t838 + t859 + var1[1]);
  p_output1[109]=-0.62554*(t2396*t2558 + t2379*t2602) + 0.01315*(t2379*t2558 - 1.*t2396*t2602) - 1.*t1422*(0. + t1519 + t1522 + t1940 + t1946 + t2348 + t2358 - 1.*t2242*t2610 - 1.*t2287*t2657 + t48 + t988 + t998) - 1.*t1496*(0. + t1072 + t1076 + t1466 + t1471 + t1924 + t1928 + t2324 + t2331 + t2448*t2610 + t2482*t2657 + var1[2]);
  p_output1[110]=-0.62554*(t2482*t2558 + t2448*t2602) + 0.01315*(t2448*t2558 - 1.*t2482*t2602) - 1.*t1496*(0. + t1191 + t1198 + t1200 + t1626 + t1627 + t2112 + t2114 + t2522 + t2534 - 1.*t2379*t2610 - 1.*t2396*t2657) - 1.*t1393*(0. + t1223 + t1225 + t1592 + t1610 + t2102 + t2104 + t2495 + t2502 + t2242*t2610 + t2287*t2657 + var1[0]);
  p_output1[111]=t1692;
  p_output1[112]=t1716;
  p_output1[113]=t1734;
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

#include "Js_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void Js_RightAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
