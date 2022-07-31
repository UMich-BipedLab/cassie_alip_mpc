/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftKneeSpringJoint_src.h"

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
  double t150;
  double t182;
  double t131;
  double t186;
  double t116;
  double t294;
  double t311;
  double t343;
  double t175;
  double t193;
  double t220;
  double t382;
  double t430;
  double t234;
  double t389;
  double t397;
  double t90;
  double t447;
  double t452;
  double t462;
  double t487;
  double t492;
  double t493;
  double t600;
  double t422;
  double t523;
  double t550;
  double t80;
  double t623;
  double t633;
  double t635;
  double t61;
  double t812;
  double t815;
  double t822;
  double t829;
  double t830;
  double t836;
  double t843;
  double t858;
  double t902;
  double t907;
  double t655;
  double t659;
  double t679;
  double t731;
  double t833;
  double t909;
  double t915;
  double t920;
  double t932;
  double t934;
  double t1037;
  double t1047;
  double t1092;
  double t1096;
  double t1118;
  double t1123;
  double t596;
  double t636;
  double t637;
  double t690;
  double t694;
  double t698;
  double t746;
  double t747;
  double t754;
  double t794;
  double t805;
  double t916;
  double t935;
  double t939;
  double t949;
  double t951;
  double t956;
  double t968;
  double t980;
  double t1008;
  double t1023;
  double t1025;
  double t1100;
  double t1135;
  double t1152;
  double t1167;
  double t1170;
  double t1184;
  double t1191;
  double t1195;
  double t1197;
  double t1204;
  double t1345;
  double t1353;
  double t1360;
  double t1500;
  double t1509;
  double t1472;
  double t1481;
  double t1550;
  double t1553;
  double t1554;
  double t1511;
  double t1515;
  double t1524;
  double t1460;
  double t1466;
  double t1577;
  double t1582;
  double t1603;
  double t1608;
  double t1619;
  double t1489;
  double t1532;
  double t1533;
  double t1568;
  double t1571;
  double t1415;
  double t1423;
  double t1468;
  double t1575;
  double t1576;
  double t1620;
  double t1621;
  double t1638;
  double t1641;
  double t1644;
  double t1647;
  double t1651;
  double t1667;
  double t1676;
  double t1701;
  double t1707;
  double t1711;
  double t1727;
  double t1735;
  double t1364;
  double t1387;
  double t1411;
  double t1431;
  double t1434;
  double t1629;
  double t1736;
  double t1739;
  double t1766;
  double t1768;
  double t1770;
  double t1774;
  double t1782;
  double t1813;
  double t1825;
  double t1832;
  double t1833;
  double t1852;
  double t1854;
  double t1860;
  double t1763;
  double t1786;
  double t1803;
  double t1844;
  double t1880;
  double t1888;
  double t1900;
  double t1928;
  double t1929;
  double t1331;
  double t1332;
  double t1337;
  double t1806;
  double t1956;
  double t1993;
  double t2013;
  double t2043;
  double t2070;
  double t2089;
  double t2117;
  double t2148;
  double t2159;
  double t2204;
  double t2235;
  double t2564;
  double t2576;
  t150 = Cos(var1[10]);
  t182 = Sin(var1[9]);
  t131 = Cos(var1[9]);
  t186 = Sin(var1[10]);
  t116 = Cos(var1[8]);
  t294 = t150*t182;
  t311 = t131*t186;
  t343 = 0. + t294 + t311;
  t175 = -1.*t131*t150;
  t193 = t182*t186;
  t220 = 0. + t175 + t193;
  t382 = Sin(var1[8]);
  t430 = Cos(var1[6]);
  t234 = t116*t220;
  t389 = t343*t382;
  t397 = 0. + t234 + t389;
  t90 = Sin(var1[6]);
  t447 = Sin(var1[7]);
  t452 = t116*t343;
  t462 = -1.*t220*t382;
  t487 = 0. + t452 + t462;
  t492 = t447*t487;
  t493 = 0. + t492;
  t600 = Sin(var1[5]);
  t422 = -1.*t90*t397;
  t523 = t430*t493;
  t550 = 0. + t422 + t523;
  t80 = Cos(var1[5]);
  t623 = t430*t397;
  t633 = t90*t493;
  t635 = 0. + t623 + t633;
  t61 = Sin(var1[3]);
  t812 = t131*t150;
  t815 = -1.*t182*t186;
  t822 = 0. + t812 + t815;
  t829 = t822*t382;
  t830 = 0. + t452 + t829;
  t836 = t116*t822;
  t843 = -1.*t343*t382;
  t858 = 0. + t836 + t843;
  t902 = t447*t858;
  t907 = 0. + t902;
  t655 = Cos(var1[3]);
  t659 = Cos(var1[4]);
  t679 = Cos(var1[7]);
  t731 = Sin(var1[4]);
  t833 = -1.*t90*t830;
  t909 = t430*t907;
  t915 = 0. + t833 + t909;
  t920 = t430*t830;
  t932 = t90*t907;
  t934 = 0. + t920 + t932;
  t1037 = -1.*t679;
  t1047 = 0. + t1037;
  t1092 = t430*t1047;
  t1096 = 0. + t1092;
  t1118 = t1047*t90;
  t1123 = 0. + t1118;
  t596 = t80*t550;
  t636 = -1.*t600*t635;
  t637 = 0. + t596 + t636;
  t690 = t679*t487;
  t694 = 0. + t690;
  t698 = t659*t694;
  t746 = t600*t550;
  t747 = t80*t635;
  t754 = 0. + t746 + t747;
  t794 = t731*t754;
  t805 = 0. + t698 + t794;
  t916 = t80*t915;
  t935 = -1.*t600*t934;
  t939 = 0. + t916 + t935;
  t949 = t679*t858;
  t951 = 0. + t949;
  t956 = t659*t951;
  t968 = t600*t915;
  t980 = t80*t934;
  t1008 = 0. + t968 + t980;
  t1023 = t731*t1008;
  t1025 = 0. + t956 + t1023;
  t1100 = t80*t1096;
  t1135 = -1.*t600*t1123;
  t1152 = 0. + t1100 + t1135;
  t1167 = t1096*t600;
  t1170 = t80*t1123;
  t1184 = 0. + t1167 + t1170;
  t1191 = t731*t1184;
  t1195 = 0. + t447;
  t1197 = t659*t1195;
  t1204 = 0. + t1191 + t1197;
  t1345 = -1.*t731*t951;
  t1353 = t659*t1008;
  t1360 = 0. + t1345 + t1353;
  t1500 = -1.*t150;
  t1509 = 1. + t1500;
  t1472 = -1.*t131;
  t1481 = 1. + t1472;
  t1550 = -0.03315*t1509;
  t1553 = -0.03315*t150;
  t1554 = 0. + t1550 + t1553;
  t1511 = -0.19074*t1509;
  t1515 = -0.19074*t150;
  t1524 = 0. + t1511 + t1515;
  t1460 = -1.*t116;
  t1466 = 1. + t1460;
  t1577 = -0.08055*t1481;
  t1582 = t131*t1554;
  t1603 = -0.13004*t182;
  t1608 = -1.*t1524*t182;
  t1619 = 0. + t1577 + t1582 + t1603 + t1608;
  t1489 = -0.13004*t1481;
  t1532 = t131*t1524;
  t1533 = 0.08055*t182;
  t1568 = t1554*t182;
  t1571 = 0. + t1489 + t1532 + t1533 + t1568;
  t1415 = -1.*t430;
  t1423 = 1. + t1415;
  t1468 = -0.01004*t1466;
  t1575 = t116*t1571;
  t1576 = 0.08055*t382;
  t1620 = t1619*t382;
  t1621 = 0. + t1468 + t1575 + t1576 + t1620;
  t1638 = -1.*t679;
  t1641 = 1. + t1638;
  t1644 = 0.135*t1641;
  t1647 = 0.1305*t679;
  t1651 = 0.08055*t447;
  t1667 = -0.08055*t1466;
  t1676 = t116*t1619;
  t1701 = -0.01004*t382;
  t1707 = -1.*t1571*t382;
  t1711 = 0. + t1667 + t1676 + t1701 + t1707;
  t1727 = t447*t1711;
  t1735 = 0. + t1644 + t1647 + t1651 + t1727;
  t1364 = t659*t1184;
  t1387 = -1.*t731*t1195;
  t1411 = 0. + t1364 + t1387;
  t1431 = 0.135*t1423;
  t1434 = 0.07996*t90;
  t1629 = -1.*t90*t1621;
  t1736 = t430*t1735;
  t1739 = 0. + t1431 + t1434 + t1629 + t1736;
  t1766 = 0.07996*t1423;
  t1768 = -0.135*t90;
  t1770 = t430*t1621;
  t1774 = t90*t1735;
  t1782 = 0. + t1766 + t1768 + t1770 + t1774;
  t1813 = -0.08055*t1641;
  t1825 = 0.004500000000000004*t447;
  t1832 = t679*t1711;
  t1833 = 0. + t1813 + t1825 + t1832;
  t1852 = t600*t1739;
  t1854 = t80*t1782;
  t1860 = 0. + t1852 + t1854;
  t1763 = t80*t1739;
  t1786 = -1.*t600*t1782;
  t1803 = 0. + t1763 + t1786;
  t1844 = -1.*t731*t1833;
  t1880 = t659*t1860;
  t1888 = 0. + t1844 + t1880;
  t1900 = t659*t1833;
  t1928 = t731*t1860;
  t1929 = 0. + t1900 + t1928;
  t1331 = -1.*t731*t694;
  t1332 = t659*t754;
  t1337 = 0. + t1331 + t1332;
  t1806 = t1152*t1803;
  t1956 = -1.*t1803*t939;
  t1993 = -1.*t1152*t1803;
  t2013 = t1803*t637;
  t2043 = t1803*t939;
  t2070 = -1.*t1803*t637;
  t2089 = t1195*t1833;
  t2117 = -1.*t1833*t951;
  t2148 = -1.*t1195*t1833;
  t2159 = t1833*t694;
  t2204 = t1833*t951;
  t2235 = -1.*t1833*t694;
  t2564 = t1621*t830;
  t2576 = -1.*t1621*t397;
  p_output1[0]=0. - 1.*t61*t637 + t655*t805;
  p_output1[1]=0. + t1025*t655 - 1.*t61*t939;
  p_output1[2]=0. - 1.*t1152*t61 + t1204*t655;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t637*t655 + t61*t805;
  p_output1[7]=0. + t1025*t61 + t655*t939;
  p_output1[8]=0. + t1204*t61 + t1152*t655;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1337;
  p_output1[13]=t1360;
  p_output1[14]=t1411;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1360*(t1806 + t1411*t1888 + t1204*t1929) + t1411*(-1.*t1360*t1888 - 1.*t1025*t1929 + t1956);
  p_output1[19]=t1337*(-1.*t1411*t1888 - 1.*t1204*t1929 + t1993) + t1411*(t1337*t1888 + t2013 + t1929*t805);
  p_output1[20]=t1337*(t1360*t1888 + t1025*t1929 + t2043) + t1360*(-1.*t1337*t1888 + t2070 - 1.*t1929*t805);
  p_output1[21]=t1337;
  p_output1[22]=t1360;
  p_output1[23]=t1411;
  p_output1[24]=t1152*(-1.*t1008*t1860 + t1956 + t2117) + (t1806 + t1184*t1860 + t2089)*t939;
  p_output1[25]=(-1.*t1184*t1860 + t1993 + t2148)*t637 + t1152*(t2013 + t2159 + t1860*t754);
  p_output1[26]=(t1008*t1860 + t2043 + t2204)*t637 + (t2070 + t2235 - 1.*t1860*t754)*t939;
  p_output1[27]=t637;
  p_output1[28]=t939;
  p_output1[29]=t1152;
  p_output1[30]=t1195*(t2117 - 1.*t1739*t915 - 1.*t1782*t934) + (t1096*t1739 + t1123*t1782 + t2089)*t951;
  p_output1[31]=t1195*(t2159 + t1739*t550 + t1782*t635) + (-1.*t1096*t1739 - 1.*t1123*t1782 + t2148)*t694;
  p_output1[32]=t694*(t2204 + t1739*t915 + t1782*t934) + (t2235 - 1.*t1739*t550 - 1.*t1782*t635)*t951;
  p_output1[33]=t694;
  p_output1[34]=t951;
  p_output1[35]=t1195;
  p_output1[36]=-0.135*t397 + 0.07996*t493 + t1195*(t2117 - 1.*t1621*t830 - 1.*t1735*t907) + (0. + t1047*t1735 + t2089)*t951;
  p_output1[37]=t1195*(t2159 + t1621*t397 + t1735*t493) + (0. - 1.*t1047*t1735 + t2148)*t694 - 0.135*t830 + 0.07996*t907;
  p_output1[38]=0. + 0.07996*t1047 + t694*(t2204 + t2564 + t1735*t907) + (t2235 + t2576 - 1.*t1735*t493)*t951;
  p_output1[39]=t694;
  p_output1[40]=t951;
  p_output1[41]=t1195;
  p_output1[42]=0. + 0.135*t487 - 0.1305*t830;
  p_output1[43]=0. + 0.1305*t397 + 0.135*t858;
  p_output1[44]=-0.08055 + (0. + t2576 - 1.*t1711*t487)*t830 + t397*(0. + t2564 + t1711*t858);
  p_output1[45]=t397;
  p_output1[46]=t830;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t220 - 0.01004*t343 - 1.*t1571*t343 - 1.*t1619*t822;
  p_output1[49]=0. + t1571*t220 + 0.08055*t343 + t1619*t343 - 0.01004*t822;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.08055*t150 - 1.*t150*t1554 - 0.13004*t186 - 1.*t1524*t186;
  p_output1[55]=0. - 0.13004*t150 - 1.*t150*t1524 + 0.08055*t186 + t1554*t186;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
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



void Jb_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
