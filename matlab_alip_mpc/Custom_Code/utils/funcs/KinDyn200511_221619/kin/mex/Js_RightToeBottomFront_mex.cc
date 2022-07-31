/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:11 GMT-04:00
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
  double t21;
  double t29;
  double t150;
  double t156;
  double t155;
  double t178;
  double t297;
  double t312;
  double t210;
  double t230;
  double t263;
  double t265;
  double t289;
  double t291;
  double t292;
  double t298;
  double t315;
  double t316;
  double t344;
  double t346;
  double t347;
  double t508;
  double t492;
  double t373;
  double t385;
  double t394;
  double t582;
  double t602;
  double t427;
  double t428;
  double t434;
  double t603;
  double t617;
  double t620;
  double t643;
  double t657;
  double t664;
  double t562;
  double t565;
  double t574;
  double t6;
  double t800;
  double t806;
  double t811;
  double t715;
  double t717;
  double t720;
  double t497;
  double t524;
  double t545;
  double t699;
  double t705;
  double t994;
  double t1006;
  double t707;
  double t1017;
  double t1018;
  double t888;
  double t904;
  double t906;
  double t825;
  double t837;
  double t843;
  double t1029;
  double t1030;
  double t1037;
  double t638;
  double t669;
  double t1050;
  double t1058;
  double t1063;
  double t775;
  double t790;
  double t1110;
  double t1118;
  double t1126;
  double t749;
  double t754;
  double t937;
  double t943;
  double t1079;
  double t1081;
  double t1086;
  double t1183;
  double t1199;
  double t1204;
  double t918;
  double t923;
  double t930;
  double t1044;
  double t1073;
  double t1395;
  double t1399;
  double t1404;
  double t1412;
  double t1280;
  double t1283;
  double t1285;
  double t1004;
  double t1011;
  double t1014;
  double t1130;
  double t1136;
  double t1408;
  double t1414;
  double t1417;
  double t1426;
  double t1428;
  double t1429;
  double t1240;
  double t1245;
  double t1265;
  double t1171;
  double t1174;
  double t1218;
  double t1219;
  double t1302;
  double t1307;
  double t1326;
  double t1331;
  double t1358;
  double t1361;
  double t1375;
  double t1377;
  double t1381;
  double t1386;
  double t1389;
  double t1390;
  double t1391;
  double t1421;
  double t1432;
  double t1612;
  double t1620;
  double t1621;
  double t1678;
  double t1680;
  double t1682;
  double t1690;
  double t1624;
  double t1626;
  double t1627;
  double t1439;
  double t1447;
  double t1453;
  double t1464;
  double t1465;
  double t1466;
  double t1473;
  double t1483;
  double t1686;
  double t1703;
  double t1705;
  double t1572;
  double t1573;
  double t1579;
  double t1717;
  double t1721;
  double t1722;
  double t1590;
  double t1596;
  double t1604;
  double t1497;
  double t1516;
  double t1535;
  double t1553;
  double t1634;
  double t1637;
  double t1648;
  double t1652;
  double t1714;
  double t1732;
  double t1891;
  double t1892;
  double t1895;
  double t1959;
  double t1964;
  double t1972;
  double t1986;
  double t1909;
  double t1913;
  double t1918;
  double t1743;
  double t1749;
  double t1757;
  double t1767;
  double t1771;
  double t1773;
  double t1780;
  double t1798;
  double t1974;
  double t1992;
  double t2005;
  double t1850;
  double t1852;
  double t1857;
  double t2007;
  double t2013;
  double t2014;
  double t1866;
  double t1874;
  double t1881;
  double t1817;
  double t1818;
  double t1835;
  double t1836;
  double t1924;
  double t1930;
  double t1933;
  double t1934;
  double t2006;
  double t2021;
  double t2169;
  double t2171;
  double t2173;
  double t2227;
  double t2229;
  double t2230;
  double t2251;
  double t2178;
  double t2180;
  double t2181;
  double t2029;
  double t2033;
  double t2042;
  double t2063;
  double t2064;
  double t2073;
  double t2079;
  double t2087;
  double t2235;
  double t2254;
  double t2257;
  double t2137;
  double t2141;
  double t2142;
  double t2261;
  double t2275;
  double t2276;
  double t2152;
  double t2154;
  double t2157;
  double t2109;
  double t2117;
  double t2126;
  double t2129;
  double t2185;
  double t2189;
  double t2205;
  double t2212;
  t21 = Cos(var1[3]);
  t29 = Sin(var1[3]);
  t150 = Cos(var1[4]);
  t156 = Sin(var1[4]);
  t155 = -1.*var1[2]*t150*t29;
  t178 = -1.*var1[1]*t156;
  t297 = Cos(var1[5]);
  t312 = Sin(var1[5]);
  t210 = var1[2]*t21*t150;
  t230 = var1[0]*t156;
  t263 = -1.*var1[1]*t21*t150;
  t265 = var1[0]*t150*t29;
  t289 = t21*t150;
  t291 = t150*t29;
  t292 = -1.*t156;
  t298 = t21*t297*t156;
  t315 = t29*t312;
  t316 = t298 + t315;
  t344 = -1.*t297*t29;
  t346 = t21*t156*t312;
  t347 = t344 + t346;
  t508 = Cos(var1[13]);
  t492 = Sin(var1[13]);
  t373 = t297*t29*t156;
  t385 = -1.*t21*t312;
  t394 = t373 + t385;
  t582 = -1.*t508;
  t602 = 1. + t582;
  t427 = t21*t297;
  t428 = t29*t156*t312;
  t434 = t427 + t428;
  t603 = 0.07996*t602;
  t617 = 0.135*t492;
  t620 = 0. + t603 + t617;
  t643 = -0.135*t602;
  t657 = 0.07996*t492;
  t664 = 0. + t643 + t657;
  t562 = t508*t150*t297;
  t565 = -1.*t150*t492*t312;
  t574 = t562 + t565;
  t6 = -1.*var1[0];
  t800 = t508*t316;
  t806 = -1.*t492*t347;
  t811 = t800 + t806;
  t715 = t508*t394;
  t717 = -1.*t492*t434;
  t720 = t715 + t717;
  t497 = t492*t316;
  t524 = t508*t347;
  t545 = t497 + t524;
  t699 = -1.*var1[2];
  t705 = -1.*t150*t297*t620;
  t994 = Cos(var1[14]);
  t1006 = Sin(var1[14]);
  t707 = -1.*t150*t664*t312;
  t1017 = -1.*t994;
  t1018 = 1. + t1017;
  t888 = t150*t297*t492;
  t904 = t508*t150*t312;
  t906 = t888 + t904;
  t825 = t492*t394;
  t837 = t508*t434;
  t843 = t825 + t837;
  t1029 = -0.08055*t1018;
  t1030 = -0.135*t1006;
  t1037 = 0. + t1029 + t1030;
  t638 = t620*t394;
  t669 = t664*t434;
  t1050 = -0.135*t1018;
  t1058 = 0.08055*t1006;
  t1063 = 0. + t1050 + t1058;
  t775 = t150*t297*t620;
  t790 = t150*t664*t312;
  t1110 = t1006*t156;
  t1118 = t994*t906;
  t1126 = t1110 + t1118;
  t749 = -1.*t620*t316;
  t754 = -1.*t664*t347;
  t937 = t620*t316;
  t943 = t664*t347;
  t1079 = -1.*t150*t1006*t29;
  t1081 = t994*t843;
  t1086 = t1079 + t1081;
  t1183 = -1.*t21*t150*t1006;
  t1199 = t994*t545;
  t1204 = t1183 + t1199;
  t918 = -1.*var1[1];
  t923 = -1.*t620*t394;
  t930 = -1.*t664*t434;
  t1044 = t1037*t156;
  t1073 = -1.*t1063*t906;
  t1395 = Cos(var1[15]);
  t1399 = -1.*t1395;
  t1404 = 1. + t1399;
  t1412 = Sin(var1[15]);
  t1280 = -1.*t994*t156;
  t1283 = t1006*t906;
  t1285 = t1280 + t1283;
  t1004 = t994*t21*t150;
  t1011 = t1006*t545;
  t1014 = t1004 + t1011;
  t1130 = t150*t1037*t29;
  t1136 = t1063*t843;
  t1408 = -0.01004*t1404;
  t1414 = 0.08055*t1412;
  t1417 = 0. + t1408 + t1414;
  t1426 = -0.08055*t1404;
  t1428 = -0.01004*t1412;
  t1429 = 0. + t1426 + t1428;
  t1240 = t994*t150*t29;
  t1245 = t1006*t843;
  t1265 = t1240 + t1245;
  t1171 = -1.*t1037*t156;
  t1174 = t1063*t906;
  t1218 = -1.*t21*t150*t1037;
  t1219 = -1.*t1063*t545;
  t1302 = t21*t150*t1037;
  t1307 = t1063*t545;
  t1326 = -1.*t150*t1037*t29;
  t1331 = -1.*t1063*t843;
  t1358 = t21*t150*t1006;
  t1361 = -1.*t994*t545;
  t1375 = 0. + t1358 + t1361;
  t1377 = t150*t1006*t29;
  t1381 = -1.*t994*t843;
  t1386 = 0. + t1377 + t1381;
  t1389 = -1.*t1006*t156;
  t1390 = -1.*t994*t906;
  t1391 = 0. + t1389 + t1390;
  t1421 = -1.*t1417*t574;
  t1432 = -1.*t1429*t1285;
  t1612 = t1412*t574;
  t1620 = t1395*t1285;
  t1621 = t1612 + t1620;
  t1678 = Cos(var1[16]);
  t1680 = -1.*t1678;
  t1682 = 1. + t1680;
  t1690 = Sin(var1[16]);
  t1624 = t1395*t574;
  t1626 = -1.*t1412*t1285;
  t1627 = t1624 + t1626;
  t1439 = t1412*t811;
  t1447 = t1395*t1014;
  t1453 = t1439 + t1447;
  t1464 = t1395*t811;
  t1465 = -1.*t1412*t1014;
  t1466 = t1464 + t1465;
  t1473 = t1417*t720;
  t1483 = t1429*t1265;
  t1686 = -0.08055*t1682;
  t1703 = -0.13004*t1690;
  t1705 = 0. + t1686 + t1703;
  t1572 = t1412*t720;
  t1573 = t1395*t1265;
  t1579 = t1572 + t1573;
  t1717 = -0.13004*t1682;
  t1721 = 0.08055*t1690;
  t1722 = 0. + t1717 + t1721;
  t1590 = t1395*t720;
  t1596 = -1.*t1412*t1265;
  t1604 = t1590 + t1596;
  t1497 = t1417*t574;
  t1516 = t1429*t1285;
  t1535 = -1.*t1417*t811;
  t1553 = -1.*t1429*t1014;
  t1634 = t1417*t811;
  t1637 = t1429*t1014;
  t1648 = -1.*t1417*t720;
  t1652 = -1.*t1429*t1265;
  t1714 = -1.*t1705*t1621;
  t1732 = -1.*t1722*t1627;
  t1891 = -1.*t1690*t1621;
  t1892 = t1678*t1627;
  t1895 = t1891 + t1892;
  t1959 = Cos(var1[17]);
  t1964 = -1.*t1959;
  t1972 = 1. + t1964;
  t1986 = Sin(var1[17]);
  t1909 = t1678*t1621;
  t1913 = t1690*t1627;
  t1918 = t1909 + t1913;
  t1743 = -1.*t1690*t1453;
  t1749 = t1678*t1466;
  t1757 = t1743 + t1749;
  t1767 = t1678*t1453;
  t1771 = t1690*t1466;
  t1773 = t1767 + t1771;
  t1780 = t1705*t1579;
  t1798 = t1722*t1604;
  t1974 = -0.19074*t1972;
  t1992 = 0.03315*t1986;
  t2005 = 0. + t1974 + t1992;
  t1850 = -1.*t1690*t1579;
  t1852 = t1678*t1604;
  t1857 = t1850 + t1852;
  t2007 = -0.03315*t1972;
  t2013 = -0.19074*t1986;
  t2014 = 0. + t2007 + t2013;
  t1866 = t1678*t1579;
  t1874 = t1690*t1604;
  t1881 = t1866 + t1874;
  t1817 = t1705*t1621;
  t1818 = t1722*t1627;
  t1835 = -1.*t1705*t1453;
  t1836 = -1.*t1722*t1466;
  t1924 = t1705*t1453;
  t1930 = t1722*t1466;
  t1933 = -1.*t1705*t1579;
  t1934 = -1.*t1722*t1604;
  t2006 = -1.*t2005*t1895;
  t2021 = -1.*t2014*t1918;
  t2169 = t1986*t1895;
  t2171 = t1959*t1918;
  t2173 = t2169 + t2171;
  t2227 = Cos(var1[18]);
  t2229 = -1.*t2227;
  t2230 = 1. + t2229;
  t2251 = Sin(var1[18]);
  t2178 = t1959*t1895;
  t2180 = -1.*t1986*t1918;
  t2181 = t2178 + t2180;
  t2029 = t1986*t1757;
  t2033 = t1959*t1773;
  t2042 = t2029 + t2033;
  t2063 = t1959*t1757;
  t2064 = -1.*t1986*t1773;
  t2073 = t2063 + t2064;
  t2079 = t2005*t1857;
  t2087 = t2014*t1881;
  t2235 = -0.01315*t2230;
  t2254 = -0.62554*t2251;
  t2257 = 0. + t2235 + t2254;
  t2137 = t1986*t1857;
  t2141 = t1959*t1881;
  t2142 = t2137 + t2141;
  t2261 = -0.62554*t2230;
  t2275 = 0.01315*t2251;
  t2276 = 0. + t2261 + t2275;
  t2152 = t1959*t1857;
  t2154 = -1.*t1986*t1881;
  t2157 = t2152 + t2154;
  t2109 = t2005*t1895;
  t2117 = t2014*t1918;
  t2126 = -1.*t2005*t1757;
  t2129 = -1.*t2014*t1773;
  t2185 = t2005*t1757;
  t2189 = t2014*t1773;
  t2205 = -1.*t2005*t1857;
  t2212 = -1.*t2014*t1881;
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
  p_output1[19]=t6;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t21*var1[2];
  p_output1[25]=-1.*t29*var1[2];
  p_output1[26]=t21*var1[0] + t29*var1[1];
  p_output1[27]=-1.*t29;
  p_output1[28]=t21;
  p_output1[29]=0;
  p_output1[30]=t155 + t178;
  p_output1[31]=t210 + t230;
  p_output1[32]=t263 + t265;
  p_output1[33]=t289;
  p_output1[34]=t291;
  p_output1[35]=t292;
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
  p_output1[78]=t155 + t178 + 0.135*t316 + 0.07996*t347;
  p_output1[79]=t210 + t230 + 0.135*t394 + 0.07996*t434;
  p_output1[80]=t263 + t265 + 0.135*t150*t297 + 0.07996*t150*t312;
  p_output1[81]=0. + t289;
  p_output1[82]=0. + t291;
  p_output1[83]=0. + t292;
  p_output1[84]=-0.135*t150*t21 + 0.08055*t545 + (0. + t699 + t705 + t707)*t720 + t574*(0. + t638 + t669 + var1[1]);
  p_output1[85]=-0.135*t150*t29 + t574*(0. + t6 + t749 + t754) + 0.08055*t843 + t811*(0. + t775 + t790 + var1[2]);
  p_output1[86]=0.135*t156 + 0.08055*t906 + t811*(0. + t918 + t923 + t930) + t720*(0. + t937 + t943 + var1[0]);
  p_output1[87]=0. + t800 + t806;
  p_output1[88]=0. + t715 + t717;
  p_output1[89]=0. + t562 + t565;
  p_output1[90]=-0.01004*t1014 - 1.*t1086*(0. + t1044 + t1073 + t699 + t705 + t707) + 0.08055*t811 - 1.*t1126*(0. + t1130 + t1136 + t638 + t669 + var1[1]);
  p_output1[91]=-0.01004*t1265 + 0.08055*t720 - 1.*t1126*(0. + t1218 + t1219 + t6 + t749 + t754) - 1.*t1204*(0. + t1171 + t1174 + t775 + t790 + var1[2]);
  p_output1[92]=-0.01004*t1285 + 0.08055*t574 - 1.*t1204*(0. + t1326 + t1331 + t918 + t923 + t930) - 1.*t1086*(0. + t1302 + t1307 + t937 + t943 + var1[0]);
  p_output1[93]=t1375;
  p_output1[94]=t1386;
  p_output1[95]=t1391;
  p_output1[96]=-0.13004*t1453 + 0.08055*t1466 - 1.*t1086*(0. + t1044 + t1073 + t1421 + t1432 + t699 + t705 + t707) - 1.*t1126*(0. + t1130 + t1136 + t1473 + t1483 + t638 + t669 + var1[1]);
  p_output1[97]=-0.13004*t1579 + 0.08055*t1604 - 1.*t1126*(0. + t1218 + t1219 + t1535 + t1553 + t6 + t749 + t754) - 1.*t1204*(0. + t1171 + t1174 + t1497 + t1516 + t775 + t790 + var1[2]);
  p_output1[98]=-0.13004*t1621 + 0.08055*t1627 - 1.*t1204*(0. + t1326 + t1331 + t1648 + t1652 + t918 + t923 + t930) - 1.*t1086*(0. + t1302 + t1307 + t1634 + t1637 + t937 + t943 + var1[0]);
  p_output1[99]=t1375;
  p_output1[100]=t1386;
  p_output1[101]=t1391;
  p_output1[102]=0.03315*t1757 - 0.19074*t1773 - 1.*t1086*(0. + t1044 + t1073 + t1421 + t1432 + t1714 + t1732 + t699 + t705 + t707) - 1.*t1126*(0. + t1130 + t1136 + t1473 + t1483 + t1780 + t1798 + t638 + t669 + var1[1]);
  p_output1[103]=0.03315*t1857 - 0.19074*t1881 - 1.*t1126*(0. + t1218 + t1219 + t1535 + t1553 + t1835 + t1836 + t6 + t749 + t754) - 1.*t1204*(0. + t1171 + t1174 + t1497 + t1516 + t1817 + t1818 + t775 + t790 + var1[2]);
  p_output1[104]=0.03315*t1895 - 0.19074*t1918 - 1.*t1204*(0. + t1326 + t1331 + t1648 + t1652 + t1933 + t1934 + t918 + t923 + t930) - 1.*t1086*(0. + t1302 + t1307 + t1634 + t1637 + t1924 + t1930 + t937 + t943 + var1[0]);
  p_output1[105]=t1375;
  p_output1[106]=t1386;
  p_output1[107]=t1391;
  p_output1[108]=-0.62554*t2042 + 0.01315*t2073 - 1.*t1086*(0. + t1044 + t1073 + t1421 + t1432 + t1714 + t1732 + t2006 + t2021 + t699 + t705 + t707) - 1.*t1126*(0. + t1130 + t1136 + t1473 + t1483 + t1780 + t1798 + t2079 + t2087 + t638 + t669 + var1[1]);
  p_output1[109]=-0.62554*t2142 + 0.01315*t2157 - 1.*t1126*(0. + t1218 + t1219 + t1535 + t1553 + t1835 + t1836 + t2126 + t2129 + t6 + t749 + t754) - 1.*t1204*(0. + t1171 + t1174 + t1497 + t1516 + t1817 + t1818 + t2109 + t2117 + t775 + t790 + var1[2]);
  p_output1[110]=-0.62554*t2173 + 0.01315*t2181 - 1.*t1204*(0. + t1326 + t1331 + t1648 + t1652 + t1933 + t1934 + t2205 + t2212 + t918 + t923 + t930) - 1.*t1086*(0. + t1302 + t1307 + t1634 + t1637 + t1924 + t1930 + t2185 + t2189 + t937 + t943 + var1[0]);
  p_output1[111]=t1375;
  p_output1[112]=t1386;
  p_output1[113]=t1391;
  p_output1[114]=0.05315*(t2073*t2227 - 1.*t2042*t2251) - 1.03354*(t2042*t2227 + t2073*t2251) - 1.*t1086*(0. + t1044 + t1073 + t1421 + t1432 + t1714 + t1732 + t2006 + t2021 - 1.*t2173*t2257 - 1.*t2181*t2276 + t699 + t705 + t707) - 1.*t1126*(0. + t1130 + t1136 + t1473 + t1483 + t1780 + t1798 + t2079 + t2087 + t2142*t2257 + t2157*t2276 + t638 + t669 + var1[1]);
  p_output1[115]=0.05315*(t2157*t2227 - 1.*t2142*t2251) - 1.03354*(t2142*t2227 + t2157*t2251) - 1.*t1126*(0. + t1218 + t1219 + t1535 + t1553 + t1835 + t1836 + t2126 + t2129 - 1.*t2042*t2257 - 1.*t2073*t2276 + t6 + t749 + t754) - 1.*t1204*(0. + t1171 + t1174 + t1497 + t1516 + t1817 + t1818 + t2109 + t2117 + t2173*t2257 + t2181*t2276 + t775 + t790 + var1[2]);
  p_output1[116]=0.05315*(t2181*t2227 - 1.*t2173*t2251) - 1.03354*(t2173*t2227 + t2181*t2251) - 1.*t1204*(0. + t1326 + t1331 + t1648 + t1652 + t1933 + t1934 + t2205 + t2212 - 1.*t2142*t2257 - 1.*t2157*t2276 + t918 + t923 + t930) - 1.*t1086*(0. + t1302 + t1307 + t1634 + t1637 + t1924 + t1930 + t2185 + t2189 + t2042*t2257 + t2073*t2276 + t937 + t943 + var1[0]);
  p_output1[117]=t1375;
  p_output1[118]=t1386;
  p_output1[119]=t1391;
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

#include "Js_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void Js_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
