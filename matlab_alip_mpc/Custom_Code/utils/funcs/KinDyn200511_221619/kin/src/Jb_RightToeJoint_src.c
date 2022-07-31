/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightToeJoint_src.h"

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
  double t266;
  double t234;
  double t249;
  double t270;
  double t322;
  double t258;
  double t300;
  double t306;
  double t225;
  double t348;
  double t362;
  double t365;
  double t394;
  double t321;
  double t366;
  double t371;
  double t196;
  double t407;
  double t409;
  double t425;
  double t469;
  double t380;
  double t452;
  double t464;
  double t181;
  double t477;
  double t484;
  double t499;
  double t540;
  double t466;
  double t512;
  double t515;
  double t151;
  double t552;
  double t567;
  double t569;
  double t576;
  double t577;
  double t596;
  double t37;
  double t641;
  double t667;
  double t675;
  double t529;
  double t598;
  double t607;
  double t680;
  double t18;
  double t793;
  double t795;
  double t848;
  double t785;
  double t859;
  double t860;
  double t886;
  double t904;
  double t876;
  double t907;
  double t909;
  double t912;
  double t917;
  double t918;
  double t911;
  double t921;
  double t925;
  double t937;
  double t938;
  double t942;
  double t949;
  double t958;
  double t694;
  double t695;
  double t720;
  double t751;
  double t991;
  double t996;
  double t1006;
  double t927;
  double t974;
  double t979;
  double t1162;
  double t1166;
  double t1182;
  double t1190;
  double t1172;
  double t1178;
  double t624;
  double t687;
  double t690;
  double t732;
  double t736;
  double t748;
  double t756;
  double t762;
  double t768;
  double t772;
  double t774;
  double t980;
  double t1011;
  double t1027;
  double t1044;
  double t1049;
  double t1052;
  double t1067;
  double t1081;
  double t1082;
  double t1111;
  double t1114;
  double t1180;
  double t1201;
  double t1202;
  double t1220;
  double t1229;
  double t1231;
  double t1237;
  double t1238;
  double t1247;
  double t1253;
  double t1346;
  double t1351;
  double t1353;
  double t1482;
  double t1486;
  double t1468;
  double t1472;
  double t1527;
  double t1529;
  double t1530;
  double t1488;
  double t1493;
  double t1499;
  double t1442;
  double t1445;
  double t1476;
  double t1521;
  double t1524;
  double t1545;
  double t1546;
  double t1556;
  double t1560;
  double t1563;
  double t1573;
  double t1576;
  double t1414;
  double t1416;
  double t1446;
  double t1466;
  double t1548;
  double t1578;
  double t1583;
  double t1593;
  double t1594;
  double t1599;
  double t1606;
  double t1607;
  double t1397;
  double t1399;
  double t1417;
  double t1420;
  double t1590;
  double t1610;
  double t1616;
  double t1622;
  double t1626;
  double t1628;
  double t1632;
  double t1635;
  double t1377;
  double t1379;
  double t1403;
  double t1409;
  double t1617;
  double t1636;
  double t1639;
  double t1643;
  double t1651;
  double t1653;
  double t1655;
  double t1656;
  double t1658;
  double t1663;
  double t1665;
  double t1667;
  double t1668;
  double t1684;
  double t1686;
  double t1359;
  double t1363;
  double t1367;
  double t1694;
  double t1696;
  double t1701;
  double t1704;
  double t1707;
  double t1383;
  double t1395;
  double t1641;
  double t1687;
  double t1689;
  double t1722;
  double t1726;
  double t1727;
  double t1733;
  double t1742;
  double t1743;
  double t1747;
  double t1693;
  double t1708;
  double t1711;
  double t1737;
  double t1748;
  double t1750;
  double t1758;
  double t1759;
  double t1761;
  double t1331;
  double t1334;
  double t1335;
  double t1721;
  double t1781;
  double t1804;
  double t1818;
  double t1864;
  double t1884;
  double t1919;
  double t1935;
  double t1960;
  double t1974;
  double t1994;
  double t2020;
  double t2204;
  double t2209;
  t266 = Cos(var1[18]);
  t234 = Cos(var1[19]);
  t249 = Sin(var1[18]);
  t270 = Sin(var1[19]);
  t322 = Cos(var1[17]);
  t258 = t234*t249;
  t300 = t266*t270;
  t306 = 0. + t258 + t300;
  t225 = Sin(var1[17]);
  t348 = -1.*t266*t234;
  t362 = t249*t270;
  t365 = 0. + t348 + t362;
  t394 = Cos(var1[16]);
  t321 = t225*t306;
  t366 = t322*t365;
  t371 = 0. + t321 + t366;
  t196 = Sin(var1[16]);
  t407 = t322*t306;
  t409 = -1.*t225*t365;
  t425 = 0. + t407 + t409;
  t469 = Cos(var1[15]);
  t380 = -1.*t196*t371;
  t452 = t394*t425;
  t464 = 0. + t380 + t452;
  t181 = Sin(var1[15]);
  t477 = t394*t371;
  t484 = t196*t425;
  t499 = 0. + t477 + t484;
  t540 = Cos(var1[13]);
  t466 = t181*t464;
  t512 = t469*t499;
  t515 = 0. + t466 + t512;
  t151 = Sin(var1[13]);
  t552 = Sin(var1[14]);
  t567 = t469*t464;
  t569 = -1.*t181*t499;
  t576 = 0. + t567 + t569;
  t577 = t552*t576;
  t596 = 0. + t577;
  t37 = Cos(var1[5]);
  t641 = t540*t515;
  t667 = t151*t596;
  t675 = 0. + t641 + t667;
  t529 = -1.*t151*t515;
  t598 = t540*t596;
  t607 = 0. + t529 + t598;
  t680 = Sin(var1[5]);
  t18 = Sin(var1[3]);
  t793 = t266*t234;
  t795 = -1.*t249*t270;
  t848 = 0. + t793 + t795;
  t785 = -1.*t225*t306;
  t859 = t322*t848;
  t860 = 0. + t785 + t859;
  t886 = t225*t848;
  t904 = 0. + t407 + t886;
  t876 = t196*t860;
  t907 = t394*t904;
  t909 = 0. + t876 + t907;
  t912 = t394*t860;
  t917 = -1.*t196*t904;
  t918 = 0. + t912 + t917;
  t911 = t469*t909;
  t921 = t181*t918;
  t925 = 0. + t911 + t921;
  t937 = -1.*t181*t909;
  t938 = t469*t918;
  t942 = 0. + t937 + t938;
  t949 = t552*t942;
  t958 = 0. + t949;
  t694 = Cos(var1[3]);
  t695 = Cos(var1[4]);
  t720 = Cos(var1[14]);
  t751 = Sin(var1[4]);
  t991 = t540*t925;
  t996 = t151*t958;
  t1006 = 0. + t991 + t996;
  t927 = -1.*t151*t925;
  t974 = t540*t958;
  t979 = 0. + t927 + t974;
  t1162 = -1.*t720;
  t1166 = 0. + t1162;
  t1182 = t1166*t151;
  t1190 = 0. + t1182;
  t1172 = t540*t1166;
  t1178 = 0. + t1172;
  t624 = t37*t607;
  t687 = -1.*t675*t680;
  t690 = 0. + t624 + t687;
  t732 = t720*t576;
  t736 = 0. + t732;
  t748 = t695*t736;
  t756 = t37*t675;
  t762 = t607*t680;
  t768 = 0. + t756 + t762;
  t772 = t751*t768;
  t774 = 0. + t748 + t772;
  t980 = t37*t979;
  t1011 = -1.*t1006*t680;
  t1027 = 0. + t980 + t1011;
  t1044 = t720*t942;
  t1049 = 0. + t1044;
  t1052 = t695*t1049;
  t1067 = t37*t1006;
  t1081 = t979*t680;
  t1082 = 0. + t1067 + t1081;
  t1111 = t751*t1082;
  t1114 = 0. + t1052 + t1111;
  t1180 = t1178*t37;
  t1201 = -1.*t1190*t680;
  t1202 = 0. + t1180 + t1201;
  t1220 = 0. + t552;
  t1229 = t695*t1220;
  t1231 = t37*t1190;
  t1237 = t1178*t680;
  t1238 = 0. + t1231 + t1237;
  t1247 = t751*t1238;
  t1253 = 0. + t1229 + t1247;
  t1346 = -1.*t1049*t751;
  t1351 = t695*t1082;
  t1353 = 0. + t1346 + t1351;
  t1482 = -1.*t234;
  t1486 = 1. + t1482;
  t1468 = -1.*t266;
  t1472 = 1. + t1468;
  t1527 = -1.03354*t1486;
  t1529 = -1.03354*t234;
  t1530 = 0. + t1527 + t1529;
  t1488 = -0.05315*t1486;
  t1493 = -0.05315*t234;
  t1499 = 0. + t1488 + t1493;
  t1442 = -1.*t322;
  t1445 = 1. + t1442;
  t1476 = -0.01315*t1472;
  t1521 = t266*t1499;
  t1524 = -0.62554*t249;
  t1545 = -1.*t1530*t249;
  t1546 = 0. + t1476 + t1521 + t1524 + t1545;
  t1556 = -0.62554*t1472;
  t1560 = t266*t1530;
  t1563 = 0.01315*t249;
  t1573 = t1499*t249;
  t1576 = 0. + t1556 + t1560 + t1563 + t1573;
  t1414 = -1.*t394;
  t1416 = 1. + t1414;
  t1446 = -0.19074*t1445;
  t1466 = 0.03315*t225;
  t1548 = t225*t1546;
  t1578 = t322*t1576;
  t1583 = 0. + t1446 + t1466 + t1548 + t1578;
  t1593 = -0.03315*t1445;
  t1594 = -0.19074*t225;
  t1599 = t322*t1546;
  t1606 = -1.*t225*t1576;
  t1607 = 0. + t1593 + t1594 + t1599 + t1606;
  t1397 = -1.*t469;
  t1399 = 1. + t1397;
  t1417 = -0.08055*t1416;
  t1420 = -0.13004*t196;
  t1590 = -1.*t196*t1583;
  t1610 = t394*t1607;
  t1616 = 0. + t1417 + t1420 + t1590 + t1610;
  t1622 = -0.13004*t1416;
  t1626 = 0.08055*t196;
  t1628 = t394*t1583;
  t1632 = t196*t1607;
  t1635 = 0. + t1622 + t1626 + t1628 + t1632;
  t1377 = -1.*t540;
  t1379 = 1. + t1377;
  t1403 = -0.01004*t1399;
  t1409 = 0.08055*t181;
  t1617 = t181*t1616;
  t1636 = t469*t1635;
  t1639 = 0. + t1403 + t1409 + t1617 + t1636;
  t1643 = -1.*t720;
  t1651 = 1. + t1643;
  t1653 = -0.135*t1651;
  t1655 = -0.1305*t720;
  t1656 = 0.08055*t552;
  t1658 = -0.08055*t1399;
  t1663 = -0.01004*t181;
  t1665 = t469*t1616;
  t1667 = -1.*t181*t1635;
  t1668 = 0. + t1658 + t1663 + t1665 + t1667;
  t1684 = t552*t1668;
  t1686 = 0. + t1653 + t1655 + t1656 + t1684;
  t1359 = -1.*t1220*t751;
  t1363 = t695*t1238;
  t1367 = 0. + t1359 + t1363;
  t1694 = 0.07996*t1379;
  t1696 = 0.135*t151;
  t1701 = t540*t1639;
  t1704 = t151*t1686;
  t1707 = 0. + t1694 + t1696 + t1701 + t1704;
  t1383 = -0.135*t1379;
  t1395 = 0.07996*t151;
  t1641 = -1.*t151*t1639;
  t1687 = t540*t1686;
  t1689 = 0. + t1383 + t1395 + t1641 + t1687;
  t1722 = -0.08055*t1651;
  t1726 = -0.004500000000000004*t552;
  t1727 = t720*t1668;
  t1733 = 0. + t1722 + t1726 + t1727;
  t1742 = t37*t1707;
  t1743 = t1689*t680;
  t1747 = 0. + t1742 + t1743;
  t1693 = t37*t1689;
  t1708 = -1.*t1707*t680;
  t1711 = 0. + t1693 + t1708;
  t1737 = -1.*t1733*t751;
  t1748 = t695*t1747;
  t1750 = 0. + t1737 + t1748;
  t1758 = t695*t1733;
  t1759 = t751*t1747;
  t1761 = 0. + t1758 + t1759;
  t1331 = -1.*t736*t751;
  t1334 = t695*t768;
  t1335 = 0. + t1331 + t1334;
  t1721 = t1202*t1711;
  t1781 = -1.*t1711*t1027;
  t1804 = -1.*t1202*t1711;
  t1818 = t1711*t690;
  t1864 = t1711*t1027;
  t1884 = -1.*t1711*t690;
  t1919 = t1220*t1733;
  t1935 = -1.*t1733*t1049;
  t1960 = -1.*t1220*t1733;
  t1974 = t1733*t736;
  t1994 = t1733*t1049;
  t2020 = -1.*t1733*t736;
  t2204 = t1639*t925;
  t2209 = -1.*t1639*t515;
  p_output1[0]=0. - 1.*t18*t690 + t694*t774;
  p_output1[1]=0. - 1.*t1027*t18 + t1114*t694;
  p_output1[2]=0. - 1.*t1202*t18 + t1253*t694;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t690*t694 + t18*t774;
  p_output1[7]=0. + t1114*t18 + t1027*t694;
  p_output1[8]=0. + t1253*t18 + t1202*t694;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1335;
  p_output1[13]=t1353;
  p_output1[14]=t1367;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1353*(t1721 + t1367*t1750 + t1253*t1761) + t1367*(-1.*t1353*t1750 - 1.*t1114*t1761 + t1781);
  p_output1[19]=t1335*(-1.*t1367*t1750 - 1.*t1253*t1761 + t1804) + t1367*(t1335*t1750 + t1818 + t1761*t774);
  p_output1[20]=t1335*(t1353*t1750 + t1114*t1761 + t1864) + t1353*(-1.*t1335*t1750 + t1884 - 1.*t1761*t774);
  p_output1[21]=t1335;
  p_output1[22]=t1353;
  p_output1[23]=t1367;
  p_output1[24]=t1027*(t1721 + t1238*t1747 + t1919) + t1202*(-1.*t1082*t1747 + t1781 + t1935);
  p_output1[25]=(-1.*t1238*t1747 + t1804 + t1960)*t690 + t1202*(t1818 + t1974 + t1747*t768);
  p_output1[26]=(t1082*t1747 + t1864 + t1994)*t690 + t1027*(t1884 + t2020 - 1.*t1747*t768);
  p_output1[27]=t690;
  p_output1[28]=t1027;
  p_output1[29]=t1202;
  p_output1[30]=t1049*(t1178*t1689 + t1190*t1707 + t1919) + t1220*(-1.*t1006*t1707 + t1935 - 1.*t1689*t979);
  p_output1[31]=t1220*(t1974 + t1689*t607 + t1707*t675) + (-1.*t1178*t1689 - 1.*t1190*t1707 + t1960)*t736;
  p_output1[32]=t1049*(t2020 - 1.*t1689*t607 - 1.*t1707*t675) + t736*(t1006*t1707 + t1994 + t1689*t979);
  p_output1[33]=t736;
  p_output1[34]=t1049;
  p_output1[35]=t1220;
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
  p_output1[78]=t1049*(0. + t1166*t1686 + t1919) + 0.135*t515 + 0.07996*t596 + t1220*(t1935 - 1.*t1639*t925 - 1.*t1686*t958);
  p_output1[79]=t1220*(t1974 + t1639*t515 + t1686*t596) + (0. - 1.*t1166*t1686 + t1960)*t736 + 0.135*t925 + 0.07996*t958;
  p_output1[80]=0. + 0.07996*t1166 + t1049*(t2020 + t2209 - 1.*t1686*t596) + t736*(t1994 + t2204 + t1686*t958);
  p_output1[81]=t736;
  p_output1[82]=t1049;
  p_output1[83]=t1220;
  p_output1[84]=0. - 0.135*t576 + 0.1305*t925;
  p_output1[85]=0. - 0.1305*t515 - 0.135*t942;
  p_output1[86]=-0.08055 + (0. + t2209 - 1.*t1668*t576)*t925 + t515*(0. + t2204 + t1668*t942);
  p_output1[87]=t515;
  p_output1[88]=t925;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t464 + 0.08055*t499 - 1.*t1635*t909 - 1.*t1616*t918;
  p_output1[91]=0. + t1616*t464 + t1635*t499 + 0.08055*t909 - 0.01004*t918;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. + 0.08055*t371 - 0.13004*t425 - 1.*t1607*t860 - 1.*t1583*t904;
  p_output1[97]=0. + t1583*t371 + t1607*t425 - 0.13004*t860 + 0.08055*t904;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.19074*t306 - 1.*t1576*t306 + 0.03315*t365 - 1.*t1546*t848;
  p_output1[103]=0. + 0.03315*t306 + t1546*t306 + t1576*t365 - 0.19074*t848;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0. - 0.01315*t234 - 1.*t1499*t234 - 0.62554*t270 - 1.*t1530*t270;
  p_output1[109]=0. - 0.62554*t234 - 1.*t1530*t234 + 0.01315*t270 + t1499*t270;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
  p_output1[114]=0.;
  p_output1[115]=0.;
  p_output1[116]=0.;
  p_output1[117]=0.;
  p_output1[118]=0.;
  p_output1[119]=1.;
}



void Jb_RightToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
