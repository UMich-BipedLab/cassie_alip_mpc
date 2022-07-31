/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftTarsus_src.h"

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
  double t187;
  double t122;
  double t144;
  double t197;
  double t306;
  double t183;
  double t261;
  double t267;
  double t101;
  double t312;
  double t319;
  double t350;
  double t94;
  double t373;
  double t396;
  double t400;
  double t293;
  double t359;
  double t367;
  double t414;
  double t477;
  double t372;
  double t446;
  double t457;
  double t78;
  double t484;
  double t488;
  double t506;
  double t521;
  double t522;
  double t529;
  double t613;
  double t467;
  double t561;
  double t572;
  double t76;
  double t614;
  double t619;
  double t635;
  double t48;
  double t778;
  double t789;
  double t791;
  double t809;
  double t813;
  double t820;
  double t793;
  double t805;
  double t807;
  double t823;
  double t824;
  double t836;
  double t839;
  double t854;
  double t856;
  double t859;
  double t693;
  double t701;
  double t720;
  double t743;
  double t830;
  double t860;
  double t866;
  double t870;
  double t871;
  double t875;
  double t1011;
  double t1017;
  double t1028;
  double t1038;
  double t1044;
  double t1048;
  double t592;
  double t657;
  double t685;
  double t721;
  double t724;
  double t739;
  double t749;
  double t754;
  double t756;
  double t761;
  double t769;
  double t869;
  double t882;
  double t890;
  double t925;
  double t947;
  double t955;
  double t969;
  double t974;
  double t978;
  double t985;
  double t993;
  double t1043;
  double t1052;
  double t1056;
  double t1061;
  double t1073;
  double t1082;
  double t1105;
  double t1111;
  double t1130;
  double t1132;
  double t1277;
  double t1278;
  double t1284;
  double t1408;
  double t1424;
  double t1398;
  double t1400;
  double t1432;
  double t1441;
  double t1446;
  double t1461;
  double t1466;
  double t1469;
  double t1471;
  double t1477;
  double t1376;
  double t1382;
  double t1405;
  double t1406;
  double t1464;
  double t1483;
  double t1500;
  double t1519;
  double t1520;
  double t1522;
  double t1524;
  double t1525;
  double t1348;
  double t1359;
  double t1559;
  double t1568;
  double t1570;
  double t1579;
  double t1584;
  double t1383;
  double t1388;
  double t1504;
  double t1528;
  double t1536;
  double t1317;
  double t1319;
  double t1362;
  double t1544;
  double t1552;
  double t1592;
  double t1594;
  double t1606;
  double t1609;
  double t1621;
  double t1624;
  double t1636;
  double t1645;
  double t1650;
  double t1668;
  double t1670;
  double t1673;
  double t1675;
  double t1682;
  double t1291;
  double t1296;
  double t1316;
  double t1326;
  double t1343;
  double t1599;
  double t1693;
  double t1694;
  double t1703;
  double t1705;
  double t1707;
  double t1717;
  double t1719;
  double t1745;
  double t1749;
  double t1753;
  double t1762;
  double t1767;
  double t1768;
  double t1773;
  double t1695;
  double t1733;
  double t1743;
  double t1764;
  double t1779;
  double t1782;
  double t1789;
  double t1793;
  double t1802;
  double t1258;
  double t1269;
  double t1275;
  double t1744;
  double t1816;
  double t1845;
  double t1869;
  double t1897;
  double t1917;
  double t1941;
  double t1969;
  double t1987;
  double t2013;
  double t2031;
  double t2037;
  double t2274;
  double t2279;
  t187 = Cos(var1[10]);
  t122 = Cos(var1[11]);
  t144 = Sin(var1[10]);
  t197 = Sin(var1[11]);
  t306 = Cos(var1[9]);
  t183 = t122*t144;
  t261 = t187*t197;
  t267 = 0. + t183 + t261;
  t101 = Sin(var1[9]);
  t312 = -1.*t187*t122;
  t319 = t144*t197;
  t350 = 0. + t312 + t319;
  t94 = Cos(var1[8]);
  t373 = t306*t267;
  t396 = -1.*t101*t350;
  t400 = 0. + t373 + t396;
  t293 = t101*t267;
  t359 = t306*t350;
  t367 = 0. + t293 + t359;
  t414 = Sin(var1[8]);
  t477 = Cos(var1[6]);
  t372 = t94*t367;
  t446 = t400*t414;
  t457 = 0. + t372 + t446;
  t78 = Sin(var1[6]);
  t484 = Sin(var1[7]);
  t488 = t94*t400;
  t506 = -1.*t367*t414;
  t521 = 0. + t488 + t506;
  t522 = t484*t521;
  t529 = 0. + t522;
  t613 = Sin(var1[5]);
  t467 = -1.*t78*t457;
  t561 = t477*t529;
  t572 = 0. + t467 + t561;
  t76 = Cos(var1[5]);
  t614 = t477*t457;
  t619 = t78*t529;
  t635 = 0. + t614 + t619;
  t48 = Sin(var1[3]);
  t778 = t187*t122;
  t789 = -1.*t144*t197;
  t791 = 0. + t778 + t789;
  t809 = -1.*t101*t267;
  t813 = t306*t791;
  t820 = 0. + t809 + t813;
  t793 = t101*t791;
  t805 = 0. + t373 + t793;
  t807 = t94*t805;
  t823 = t820*t414;
  t824 = 0. + t807 + t823;
  t836 = t94*t820;
  t839 = -1.*t805*t414;
  t854 = 0. + t836 + t839;
  t856 = t484*t854;
  t859 = 0. + t856;
  t693 = Cos(var1[3]);
  t701 = Cos(var1[4]);
  t720 = Cos(var1[7]);
  t743 = Sin(var1[4]);
  t830 = -1.*t78*t824;
  t860 = t477*t859;
  t866 = 0. + t830 + t860;
  t870 = t477*t824;
  t871 = t78*t859;
  t875 = 0. + t870 + t871;
  t1011 = -1.*t720;
  t1017 = 0. + t1011;
  t1028 = t477*t1017;
  t1038 = 0. + t1028;
  t1044 = t1017*t78;
  t1048 = 0. + t1044;
  t592 = t76*t572;
  t657 = -1.*t613*t635;
  t685 = 0. + t592 + t657;
  t721 = t720*t521;
  t724 = 0. + t721;
  t739 = t701*t724;
  t749 = t613*t572;
  t754 = t76*t635;
  t756 = 0. + t749 + t754;
  t761 = t743*t756;
  t769 = 0. + t739 + t761;
  t869 = t76*t866;
  t882 = -1.*t613*t875;
  t890 = 0. + t869 + t882;
  t925 = t720*t854;
  t947 = 0. + t925;
  t955 = t701*t947;
  t969 = t613*t866;
  t974 = t76*t875;
  t978 = 0. + t969 + t974;
  t985 = t743*t978;
  t993 = 0. + t955 + t985;
  t1043 = t76*t1038;
  t1052 = -1.*t613*t1048;
  t1056 = 0. + t1043 + t1052;
  t1061 = t1038*t613;
  t1073 = t76*t1048;
  t1082 = 0. + t1061 + t1073;
  t1105 = t743*t1082;
  t1111 = 0. + t484;
  t1130 = t701*t1111;
  t1132 = 0. + t1105 + t1130;
  t1277 = -1.*t743*t947;
  t1278 = t701*t978;
  t1284 = 0. + t1277 + t1278;
  t1408 = -1.*t122;
  t1424 = 1. + t1408;
  t1398 = -1.*t187;
  t1400 = 1. + t1398;
  t1432 = -0.62554*t1424;
  t1441 = -0.73604*t122;
  t1446 = -0.030599999999999995*t197;
  t1461 = 0. + t1432 + t1441 + t1446;
  t1466 = -0.01315*t1424;
  t1469 = -0.04375*t122;
  t1471 = 0.11050000000000004*t197;
  t1477 = 0. + t1466 + t1469 + t1471;
  t1376 = -1.*t306;
  t1382 = 1. + t1376;
  t1405 = -0.03315*t1400;
  t1406 = -0.19074*t144;
  t1464 = -1.*t144*t1461;
  t1483 = t187*t1477;
  t1500 = 0. + t1405 + t1406 + t1464 + t1483;
  t1519 = -0.19074*t1400;
  t1520 = 0.03315*t144;
  t1522 = t187*t1461;
  t1524 = t144*t1477;
  t1525 = 0. + t1519 + t1520 + t1522 + t1524;
  t1348 = -1.*t94;
  t1359 = 1. + t1348;
  t1559 = -0.08055*t1382;
  t1568 = -0.13004*t101;
  t1570 = t306*t1500;
  t1579 = -1.*t101*t1525;
  t1584 = 0. + t1559 + t1568 + t1570 + t1579;
  t1383 = -0.13004*t1382;
  t1388 = 0.08055*t101;
  t1504 = t101*t1500;
  t1528 = t306*t1525;
  t1536 = 0. + t1383 + t1388 + t1504 + t1528;
  t1317 = -1.*t477;
  t1319 = 1. + t1317;
  t1362 = -0.01004*t1359;
  t1544 = t94*t1536;
  t1552 = 0.08055*t414;
  t1592 = t1584*t414;
  t1594 = 0. + t1362 + t1544 + t1552 + t1592;
  t1606 = -1.*t720;
  t1609 = 1. + t1606;
  t1621 = 0.135*t1609;
  t1624 = 0.1318*t720;
  t1636 = 0.08055*t484;
  t1645 = -0.08055*t1359;
  t1650 = t94*t1584;
  t1668 = -0.01004*t414;
  t1670 = -1.*t1536*t414;
  t1673 = 0. + t1645 + t1650 + t1668 + t1670;
  t1675 = t484*t1673;
  t1682 = 0. + t1621 + t1624 + t1636 + t1675;
  t1291 = t701*t1082;
  t1296 = -1.*t743*t1111;
  t1316 = 0. + t1291 + t1296;
  t1326 = 0.135*t1319;
  t1343 = 0.07996*t78;
  t1599 = -1.*t78*t1594;
  t1693 = t477*t1682;
  t1694 = 0. + t1326 + t1343 + t1599 + t1693;
  t1703 = 0.07996*t1319;
  t1705 = -0.135*t78;
  t1707 = t477*t1594;
  t1717 = t78*t1682;
  t1719 = 0. + t1703 + t1705 + t1707 + t1717;
  t1745 = -0.08055*t1609;
  t1749 = 0.0032000000000000084*t484;
  t1753 = t720*t1673;
  t1762 = 0. + t1745 + t1749 + t1753;
  t1767 = t613*t1694;
  t1768 = t76*t1719;
  t1773 = 0. + t1767 + t1768;
  t1695 = t76*t1694;
  t1733 = -1.*t613*t1719;
  t1743 = 0. + t1695 + t1733;
  t1764 = -1.*t743*t1762;
  t1779 = t701*t1773;
  t1782 = 0. + t1764 + t1779;
  t1789 = t701*t1762;
  t1793 = t743*t1773;
  t1802 = 0. + t1789 + t1793;
  t1258 = -1.*t743*t724;
  t1269 = t701*t756;
  t1275 = 0. + t1258 + t1269;
  t1744 = t1056*t1743;
  t1816 = -1.*t1743*t890;
  t1845 = -1.*t1056*t1743;
  t1869 = t1743*t685;
  t1897 = t1743*t890;
  t1917 = -1.*t1743*t685;
  t1941 = t1111*t1762;
  t1969 = -1.*t1762*t947;
  t1987 = -1.*t1111*t1762;
  t2013 = t1762*t724;
  t2031 = t1762*t947;
  t2037 = -1.*t1762*t724;
  t2274 = t1594*t824;
  t2279 = -1.*t1594*t457;
  p_output1[0]=0. - 1.*t48*t685 + t693*t769;
  p_output1[1]=0. - 1.*t48*t890 + t693*t993;
  p_output1[2]=0. - 1.*t1056*t48 + t1132*t693;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t685*t693 + t48*t769;
  p_output1[7]=0. + t693*t890 + t48*t993;
  p_output1[8]=0. + t1132*t48 + t1056*t693;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1275;
  p_output1[13]=t1284;
  p_output1[14]=t1316;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1284*(t1744 + t1316*t1782 + t1132*t1802) + t1316*(-1.*t1284*t1782 + t1816 - 1.*t1802*t993);
  p_output1[19]=t1275*(-1.*t1316*t1782 - 1.*t1132*t1802 + t1845) + t1316*(t1275*t1782 + t1869 + t1802*t769);
  p_output1[20]=t1284*(-1.*t1275*t1782 + t1917 - 1.*t1802*t769) + t1275*(t1284*t1782 + t1897 + t1802*t993);
  p_output1[21]=t1275;
  p_output1[22]=t1284;
  p_output1[23]=t1316;
  p_output1[24]=(t1744 + t1082*t1773 + t1941)*t890 + t1056*(t1816 + t1969 - 1.*t1773*t978);
  p_output1[25]=(-1.*t1082*t1773 + t1845 + t1987)*t685 + t1056*(t1869 + t2013 + t1773*t756);
  p_output1[26]=(t1917 + t2037 - 1.*t1773*t756)*t890 + t685*(t1897 + t2031 + t1773*t978);
  p_output1[27]=t685;
  p_output1[28]=t890;
  p_output1[29]=t1056;
  p_output1[30]=t1111*(t1969 - 1.*t1694*t866 - 1.*t1719*t875) + (t1038*t1694 + t1048*t1719 + t1941)*t947;
  p_output1[31]=t1111*(t2013 + t1694*t572 + t1719*t635) + (-1.*t1038*t1694 - 1.*t1048*t1719 + t1987)*t724;
  p_output1[32]=t724*(t2031 + t1694*t866 + t1719*t875) + (t2037 - 1.*t1694*t572 - 1.*t1719*t635)*t947;
  p_output1[33]=t724;
  p_output1[34]=t947;
  p_output1[35]=t1111;
  p_output1[36]=-0.135*t457 + 0.07996*t529 + t1111*(t1969 - 1.*t1594*t824 - 1.*t1682*t859) + (0. + t1017*t1682 + t1941)*t947;
  p_output1[37]=t1111*(t2013 + t1594*t457 + t1682*t529) + (0. - 1.*t1017*t1682 + t1987)*t724 - 0.135*t824 + 0.07996*t859;
  p_output1[38]=0. + 0.07996*t1017 + t724*(t2031 + t2274 + t1682*t859) + (t2037 + t2279 - 1.*t1682*t529)*t947;
  p_output1[39]=t724;
  p_output1[40]=t947;
  p_output1[41]=t1111;
  p_output1[42]=0. + 0.135*t521 - 0.1318*t824;
  p_output1[43]=0. + 0.1318*t457 + 0.135*t854;
  p_output1[44]=-0.08055 + (0. + t2279 - 1.*t1673*t521)*t824 + t457*(0. + t2274 + t1673*t854);
  p_output1[45]=t457;
  p_output1[46]=t824;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t367 - 0.01004*t400 - 1.*t1536*t805 - 1.*t1584*t820;
  p_output1[49]=0. + t1536*t367 + t1584*t400 + 0.08055*t805 - 0.01004*t820;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.13004*t267 - 1.*t1525*t267 + 0.08055*t350 - 1.*t1500*t791;
  p_output1[55]=0. + 0.08055*t267 + t1500*t267 + t1525*t350 - 0.13004*t791;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.03315*t122 - 1.*t122*t1477 - 0.19074*t197 - 1.*t1461*t197;
  p_output1[61]=0. - 0.19074*t122 - 1.*t122*t1461 + 0.03315*t197 + t1477*t197;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0.030599999999999995;
  p_output1[67]=0.11050000000000004;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
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



void Jb_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
