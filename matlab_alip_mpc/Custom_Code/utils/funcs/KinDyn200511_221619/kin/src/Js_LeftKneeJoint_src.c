/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftKneeJoint_src.h"

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
  double t148;
  double t163;
  double t325;
  double t372;
  double t343;
  double t373;
  double t610;
  double t674;
  double t454;
  double t478;
  double t543;
  double t574;
  double t578;
  double t597;
  double t601;
  double t752;
  double t753;
  double t765;
  double t777;
  double t782;
  double t789;
  double t882;
  double t886;
  double t888;
  double t893;
  double t730;
  double t732;
  double t734;
  double t628;
  double t711;
  double t722;
  double t891;
  double t899;
  double t904;
  double t921;
  double t922;
  double t926;
  double t84;
  double t971;
  double t979;
  double t1007;
  double t1345;
  double t1355;
  double t1382;
  double t1072;
  double t1088;
  double t1108;
  double t1051;
  double t1055;
  double t1062;
  double t1433;
  double t1443;
  double t1444;
  double t1692;
  double t1697;
  double t1714;
  double t1738;
  double t1172;
  double t1218;
  double t1223;
  double t912;
  double t955;
  double t1732;
  double t1771;
  double t1780;
  double t1819;
  double t1838;
  double t1841;
  double t1019;
  double t1022;
  double t1025;
  double t1269;
  double t1310;
  double t1122;
  double t1137;
  double t2031;
  double t2033;
  double t2040;
  double t1494;
  double t1503;
  double t1528;
  double t2174;
  double t2194;
  double t2275;
  double t1562;
  double t1563;
  double t1927;
  double t1938;
  double t1939;
  double t1806;
  double t1855;
  double t2481;
  double t2488;
  double t2498;
  double t2606;
  double t2641;
  double t2652;
  double t2690;
  double t1970;
  double t1972;
  double t2354;
  double t2360;
  double t2381;
  double t2653;
  double t2710;
  double t2711;
  double t2732;
  double t2739;
  double t2741;
  double t2060;
  double t2061;
  double t2080;
  double t2163;
  double t2166;
  double t2297;
  double t2300;
  double t2449;
  double t2460;
  double t2425;
  double t2427;
  double t2528;
  double t2532;
  double t2533;
  double t2537;
  double t2545;
  double t2546;
  double t2549;
  double t2577;
  double t2583;
  t148 = Cos(var1[3]);
  t163 = Sin(var1[3]);
  t325 = Cos(var1[4]);
  t372 = Sin(var1[4]);
  t343 = -1.*var1[2]*t325*t163;
  t373 = -1.*var1[1]*t372;
  t610 = Cos(var1[5]);
  t674 = Sin(var1[5]);
  t454 = var1[2]*t148*t325;
  t478 = var1[0]*t372;
  t543 = -1.*var1[1]*t148*t325;
  t574 = var1[0]*t325*t163;
  t578 = t148*t325;
  t597 = t325*t163;
  t601 = -1.*t372;
  t752 = t610*t163*t372;
  t753 = -1.*t148*t674;
  t765 = t752 + t753;
  t777 = t148*t610;
  t782 = t163*t372*t674;
  t789 = t777 + t782;
  t882 = Cos(var1[6]);
  t886 = -1.*t882;
  t888 = 1. + t886;
  t893 = Sin(var1[6]);
  t730 = -1.*t610*t163;
  t732 = t148*t372*t674;
  t734 = t730 + t732;
  t628 = t148*t610*t372;
  t711 = t163*t674;
  t722 = t628 + t711;
  t891 = 0.07996*t888;
  t899 = -0.135*t893;
  t904 = 0. + t891 + t899;
  t921 = 0.135*t888;
  t922 = 0.07996*t893;
  t926 = 0. + t921 + t922;
  t84 = -1.*var1[0];
  t971 = t325*t610*t882;
  t979 = -1.*t325*t674*t893;
  t1007 = t971 + t979;
  t1345 = t882*t722;
  t1355 = -1.*t734*t893;
  t1382 = t1345 + t1355;
  t1072 = t882*t765;
  t1088 = -1.*t789*t893;
  t1108 = t1072 + t1088;
  t1051 = -1.*var1[2];
  t1055 = -1.*t325*t610*t904;
  t1062 = -1.*t325*t674*t926;
  t1433 = t325*t882*t674;
  t1443 = t325*t610*t893;
  t1444 = t1433 + t1443;
  t1692 = Cos(var1[7]);
  t1697 = -1.*t1692;
  t1714 = 1. + t1697;
  t1738 = Sin(var1[7]);
  t1172 = t882*t789;
  t1218 = t765*t893;
  t1223 = t1172 + t1218;
  t912 = t765*t904;
  t955 = t789*t926;
  t1732 = 0.135*t1714;
  t1771 = 0.08055*t1738;
  t1780 = 0. + t1732 + t1771;
  t1819 = -0.08055*t1714;
  t1838 = 0.135*t1738;
  t1841 = 0. + t1819 + t1838;
  t1019 = t882*t734;
  t1022 = t722*t893;
  t1025 = t1019 + t1022;
  t1269 = t325*t610*t904;
  t1310 = t325*t674*t926;
  t1122 = -1.*t722*t904;
  t1137 = -1.*t734*t926;
  t2031 = t1692*t1444;
  t2033 = t372*t1738;
  t2040 = t2031 + t2033;
  t1494 = -1.*var1[1];
  t1503 = -1.*t765*t904;
  t1528 = -1.*t789*t926;
  t2174 = t1692*t1025;
  t2194 = -1.*t148*t325*t1738;
  t2275 = t2174 + t2194;
  t1562 = t722*t904;
  t1563 = t734*t926;
  t1927 = t1692*t1223;
  t1938 = -1.*t325*t163*t1738;
  t1939 = t1927 + t1938;
  t1806 = -1.*t1444*t1780;
  t1855 = t372*t1841;
  t2481 = -1.*t1692*t372;
  t2488 = t1444*t1738;
  t2498 = t2481 + t2488;
  t2606 = Cos(var1[8]);
  t2641 = -1.*t2606;
  t2652 = 1. + t2641;
  t2690 = Sin(var1[8]);
  t1970 = t1223*t1780;
  t1972 = t325*t163*t1841;
  t2354 = t325*t1692*t163;
  t2360 = t1223*t1738;
  t2381 = t2354 + t2360;
  t2653 = -0.08055*t2652;
  t2710 = -0.01004*t2690;
  t2711 = 0. + t2653 + t2710;
  t2732 = -0.01004*t2652;
  t2739 = 0.08055*t2690;
  t2741 = 0. + t2732 + t2739;
  t2060 = t148*t325*t1692;
  t2061 = t1025*t1738;
  t2080 = t2060 + t2061;
  t2163 = t1444*t1780;
  t2166 = -1.*t372*t1841;
  t2297 = -1.*t1025*t1780;
  t2300 = -1.*t148*t325*t1841;
  t2449 = t1025*t1780;
  t2460 = t148*t325*t1841;
  t2425 = -1.*t1223*t1780;
  t2427 = -1.*t325*t163*t1841;
  t2528 = -1.*t1692*t1025;
  t2532 = t148*t325*t1738;
  t2533 = 0. + t2528 + t2532;
  t2537 = -1.*t1692*t1223;
  t2545 = t325*t163*t1738;
  t2546 = 0. + t2537 + t2545;
  t2549 = -1.*t1692*t1444;
  t2577 = -1.*t372*t1738;
  t2583 = 0. + t2549 + t2577;
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
  p_output1[19]=t84;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t148*var1[2];
  p_output1[25]=-1.*t163*var1[2];
  p_output1[26]=t148*var1[0] + t163*var1[1];
  p_output1[27]=-1.*t163;
  p_output1[28]=t148;
  p_output1[29]=0;
  p_output1[30]=t343 + t373;
  p_output1[31]=t454 + t478;
  p_output1[32]=t543 + t574;
  p_output1[33]=t578;
  p_output1[34]=t597;
  p_output1[35]=t601;
  p_output1[36]=t343 + t373 - 0.135*t722 + 0.07996*t734;
  p_output1[37]=t454 + t478 - 0.135*t765 + 0.07996*t789;
  p_output1[38]=t543 + t574 - 0.135*t325*t610 + 0.07996*t325*t674;
  p_output1[39]=0. + t578;
  p_output1[40]=0. + t597;
  p_output1[41]=0. + t601;
  p_output1[42]=0.08055*t1025 + (0. + t1051 + t1055 + t1062)*t1108 + 0.135*t148*t325 + t1007*(0. + t912 + t955 + var1[1]);
  p_output1[43]=0.08055*t1223 + 0.135*t163*t325 + t1007*(0. + t1122 + t1137 + t84) + t1382*(0. + t1269 + t1310 + var1[2]);
  p_output1[44]=0.08055*t1444 + t1382*(0. + t1494 + t1503 + t1528) - 0.135*t372 + t1108*(0. + t1562 + t1563 + var1[0]);
  p_output1[45]=0. + t1345 + t1355;
  p_output1[46]=0. + t1072 + t1088;
  p_output1[47]=0. + t971 + t979;
  p_output1[48]=0.08055*t1382 - 1.*(0. + t1051 + t1055 + t1062 + t1806 + t1855)*t1939 - 0.01004*t2080 - 1.*t2040*(0. + t1970 + t1972 + t912 + t955 + var1[1]);
  p_output1[49]=0.08055*t1108 - 0.01004*t2381 - 1.*t2040*(0. + t1122 + t1137 + t2297 + t2300 + t84) - 1.*t2275*(0. + t1269 + t1310 + t2163 + t2166 + var1[2]);
  p_output1[50]=0.08055*t1007 - 1.*t2275*(0. + t1494 + t1503 + t1528 + t2425 + t2427) - 0.01004*t2498 - 1.*t1939*(0. + t1562 + t1563 + t2449 + t2460 + var1[0]);
  p_output1[51]=t2533;
  p_output1[52]=t2546;
  p_output1[53]=t2583;
  p_output1[54]=-0.13004*(t2080*t2606 + t1382*t2690) + 0.08055*(t1382*t2606 - 1.*t2080*t2690) - 1.*t1939*(0. + t1051 + t1055 + t1062 + t1806 + t1855 - 1.*t2498*t2711 - 1.*t1007*t2741) - 1.*t2040*(0. + t1970 + t1972 + t2381*t2711 + t1108*t2741 + t912 + t955 + var1[1]);
  p_output1[55]=-0.13004*(t2381*t2606 + t1108*t2690) + 0.08055*(t1108*t2606 - 1.*t2381*t2690) - 1.*t2040*(0. + t1122 + t1137 + t2297 + t2300 - 1.*t2080*t2711 - 1.*t1382*t2741 + t84) - 1.*t2275*(0. + t1269 + t1310 + t2163 + t2166 + t2498*t2711 + t1007*t2741 + var1[2]);
  p_output1[56]=-0.13004*(t2498*t2606 + t1007*t2690) + 0.08055*(t1007*t2606 - 1.*t2498*t2690) - 1.*t2275*(0. + t1494 + t1503 + t1528 + t2425 + t2427 - 1.*t2381*t2711 - 1.*t1108*t2741) - 1.*t1939*(0. + t1562 + t1563 + t2449 + t2460 + t2080*t2711 + t1382*t2741 + var1[0]);
  p_output1[57]=t2533;
  p_output1[58]=t2546;
  p_output1[59]=t2583;
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



void Js_LeftKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
