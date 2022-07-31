/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightKneeJoint_src.h"

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
  double t85;
  double t88;
  double t234;
  double t311;
  double t278;
  double t315;
  double t521;
  double t615;
  double t371;
  double t412;
  double t466;
  double t477;
  double t497;
  double t512;
  double t514;
  double t524;
  double t616;
  double t618;
  double t651;
  double t661;
  double t666;
  double t1027;
  double t985;
  double t723;
  double t737;
  double t752;
  double t1129;
  double t1134;
  double t810;
  double t851;
  double t880;
  double t1137;
  double t1142;
  double t1143;
  double t1158;
  double t1199;
  double t1208;
  double t1062;
  double t1106;
  double t1107;
  double t64;
  double t1394;
  double t1409;
  double t1436;
  double t1292;
  double t1293;
  double t1294;
  double t1010;
  double t1030;
  double t1053;
  double t1260;
  double t1261;
  double t1649;
  double t1658;
  double t1274;
  double t1697;
  double t1699;
  double t1488;
  double t1489;
  double t1492;
  double t1445;
  double t1450;
  double t1452;
  double t1701;
  double t1716;
  double t1724;
  double t1148;
  double t1243;
  double t1769;
  double t1779;
  double t1807;
  double t1378;
  double t1390;
  double t1932;
  double t1941;
  double t1946;
  double t1345;
  double t1346;
  double t1529;
  double t1561;
  double t1845;
  double t1866;
  double t1896;
  double t2029;
  double t2030;
  double t2057;
  double t1505;
  double t1506;
  double t1509;
  double t1755;
  double t1824;
  double t2394;
  double t2408;
  double t2460;
  double t2499;
  double t2233;
  double t2236;
  double t2239;
  double t1657;
  double t1662;
  double t1671;
  double t1952;
  double t1975;
  double t2490;
  double t2561;
  double t2565;
  double t2597;
  double t2641;
  double t2642;
  double t2173;
  double t2178;
  double t2202;
  double t2002;
  double t2018;
  double t2079;
  double t2127;
  double t2242;
  double t2248;
  double t2278;
  double t2281;
  double t2322;
  double t2329;
  double t2337;
  double t2345;
  double t2363;
  double t2368;
  double t2386;
  double t2387;
  double t2389;
  t85 = Cos(var1[3]);
  t88 = Sin(var1[3]);
  t234 = Cos(var1[4]);
  t311 = Sin(var1[4]);
  t278 = -1.*var1[2]*t234*t88;
  t315 = -1.*var1[1]*t311;
  t521 = Cos(var1[5]);
  t615 = Sin(var1[5]);
  t371 = var1[2]*t85*t234;
  t412 = var1[0]*t311;
  t466 = -1.*var1[1]*t85*t234;
  t477 = var1[0]*t234*t88;
  t497 = t85*t234;
  t512 = t234*t88;
  t514 = -1.*t311;
  t524 = t85*t521*t311;
  t616 = t88*t615;
  t618 = t524 + t616;
  t651 = -1.*t521*t88;
  t661 = t85*t311*t615;
  t666 = t651 + t661;
  t1027 = Cos(var1[13]);
  t985 = Sin(var1[13]);
  t723 = t521*t88*t311;
  t737 = -1.*t85*t615;
  t752 = t723 + t737;
  t1129 = -1.*t1027;
  t1134 = 1. + t1129;
  t810 = t85*t521;
  t851 = t88*t311*t615;
  t880 = t810 + t851;
  t1137 = 0.07996*t1134;
  t1142 = 0.135*t985;
  t1143 = 0. + t1137 + t1142;
  t1158 = -0.135*t1134;
  t1199 = 0.07996*t985;
  t1208 = 0. + t1158 + t1199;
  t1062 = t1027*t234*t521;
  t1106 = -1.*t234*t985*t615;
  t1107 = t1062 + t1106;
  t64 = -1.*var1[0];
  t1394 = t1027*t618;
  t1409 = -1.*t985*t666;
  t1436 = t1394 + t1409;
  t1292 = t1027*t752;
  t1293 = -1.*t985*t880;
  t1294 = t1292 + t1293;
  t1010 = t985*t618;
  t1030 = t1027*t666;
  t1053 = t1010 + t1030;
  t1260 = -1.*var1[2];
  t1261 = -1.*t234*t521*t1143;
  t1649 = Cos(var1[14]);
  t1658 = Sin(var1[14]);
  t1274 = -1.*t234*t1208*t615;
  t1697 = -1.*t1649;
  t1699 = 1. + t1697;
  t1488 = t234*t521*t985;
  t1489 = t1027*t234*t615;
  t1492 = t1488 + t1489;
  t1445 = t985*t752;
  t1450 = t1027*t880;
  t1452 = t1445 + t1450;
  t1701 = -0.08055*t1699;
  t1716 = -0.135*t1658;
  t1724 = 0. + t1701 + t1716;
  t1148 = t1143*t752;
  t1243 = t1208*t880;
  t1769 = -0.135*t1699;
  t1779 = 0.08055*t1658;
  t1807 = 0. + t1769 + t1779;
  t1378 = t234*t521*t1143;
  t1390 = t234*t1208*t615;
  t1932 = t1658*t311;
  t1941 = t1649*t1492;
  t1946 = t1932 + t1941;
  t1345 = -1.*t1143*t618;
  t1346 = -1.*t1208*t666;
  t1529 = t1143*t618;
  t1561 = t1208*t666;
  t1845 = -1.*t234*t1658*t88;
  t1866 = t1649*t1452;
  t1896 = t1845 + t1866;
  t2029 = -1.*t85*t234*t1658;
  t2030 = t1649*t1053;
  t2057 = t2029 + t2030;
  t1505 = -1.*var1[1];
  t1506 = -1.*t1143*t752;
  t1509 = -1.*t1208*t880;
  t1755 = t1724*t311;
  t1824 = -1.*t1807*t1492;
  t2394 = Cos(var1[15]);
  t2408 = -1.*t2394;
  t2460 = 1. + t2408;
  t2499 = Sin(var1[15]);
  t2233 = -1.*t1649*t311;
  t2236 = t1658*t1492;
  t2239 = t2233 + t2236;
  t1657 = t1649*t85*t234;
  t1662 = t1658*t1053;
  t1671 = t1657 + t1662;
  t1952 = t234*t1724*t88;
  t1975 = t1807*t1452;
  t2490 = -0.01004*t2460;
  t2561 = 0.08055*t2499;
  t2565 = 0. + t2490 + t2561;
  t2597 = -0.08055*t2460;
  t2641 = -0.01004*t2499;
  t2642 = 0. + t2597 + t2641;
  t2173 = t1649*t234*t88;
  t2178 = t1658*t1452;
  t2202 = t2173 + t2178;
  t2002 = -1.*t1724*t311;
  t2018 = t1807*t1492;
  t2079 = -1.*t85*t234*t1724;
  t2127 = -1.*t1807*t1053;
  t2242 = t85*t234*t1724;
  t2248 = t1807*t1053;
  t2278 = -1.*t234*t1724*t88;
  t2281 = -1.*t1807*t1452;
  t2322 = t85*t234*t1658;
  t2329 = -1.*t1649*t1053;
  t2337 = 0. + t2322 + t2329;
  t2345 = t234*t1658*t88;
  t2363 = -1.*t1649*t1452;
  t2368 = 0. + t2345 + t2363;
  t2386 = -1.*t1658*t311;
  t2387 = -1.*t1649*t1492;
  t2389 = 0. + t2386 + t2387;
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
  p_output1[19]=t64;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t85*var1[2];
  p_output1[25]=-1.*t88*var1[2];
  p_output1[26]=t85*var1[0] + t88*var1[1];
  p_output1[27]=-1.*t88;
  p_output1[28]=t85;
  p_output1[29]=0;
  p_output1[30]=t278 + t315;
  p_output1[31]=t371 + t412;
  p_output1[32]=t466 + t477;
  p_output1[33]=t497;
  p_output1[34]=t512;
  p_output1[35]=t514;
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
  p_output1[78]=t278 + t315 + 0.135*t618 + 0.07996*t666;
  p_output1[79]=t371 + t412 + 0.135*t752 + 0.07996*t880;
  p_output1[80]=t466 + t477 + 0.135*t234*t521 + 0.07996*t234*t615;
  p_output1[81]=0. + t497;
  p_output1[82]=0. + t512;
  p_output1[83]=0. + t514;
  p_output1[84]=0.08055*t1053 + (0. + t1260 + t1261 + t1274)*t1294 - 0.135*t234*t85 + t1107*(0. + t1148 + t1243 + var1[1]);
  p_output1[85]=0.08055*t1452 + t1107*(0. + t1345 + t1346 + t64) - 0.135*t234*t88 + t1436*(0. + t1378 + t1390 + var1[2]);
  p_output1[86]=0.08055*t1492 + t1436*(0. + t1505 + t1506 + t1509) + 0.135*t311 + t1294*(0. + t1529 + t1561 + var1[0]);
  p_output1[87]=0. + t1394 + t1409;
  p_output1[88]=0. + t1292 + t1293;
  p_output1[89]=0. + t1062 + t1106;
  p_output1[90]=0.08055*t1436 - 0.01004*t1671 - 1.*(0. + t1260 + t1261 + t1274 + t1755 + t1824)*t1896 - 1.*t1946*(0. + t1148 + t1243 + t1952 + t1975 + var1[1]);
  p_output1[91]=0.08055*t1294 - 0.01004*t2202 - 1.*t1946*(0. + t1345 + t1346 + t2079 + t2127 + t64) - 1.*t2057*(0. + t1378 + t1390 + t2002 + t2018 + var1[2]);
  p_output1[92]=0.08055*t1107 - 0.01004*t2239 - 1.*t2057*(0. + t1505 + t1506 + t1509 + t2278 + t2281) - 1.*t1896*(0. + t1529 + t1561 + t2242 + t2248 + var1[0]);
  p_output1[93]=t2337;
  p_output1[94]=t2368;
  p_output1[95]=t2389;
  p_output1[96]=-0.13004*(t1671*t2394 + t1436*t2499) + 0.08055*(t1436*t2394 - 1.*t1671*t2499) - 1.*t1896*(0. + t1260 + t1261 + t1274 + t1755 + t1824 - 1.*t1107*t2565 - 1.*t2239*t2642) - 1.*t1946*(0. + t1148 + t1243 + t1952 + t1975 + t1294*t2565 + t2202*t2642 + var1[1]);
  p_output1[97]=-0.13004*(t2202*t2394 + t1294*t2499) + 0.08055*(t1294*t2394 - 1.*t2202*t2499) - 1.*t1946*(0. + t1345 + t1346 + t2079 + t2127 - 1.*t1436*t2565 - 1.*t1671*t2642 + t64) - 1.*t2057*(0. + t1378 + t1390 + t2002 + t2018 + t1107*t2565 + t2239*t2642 + var1[2]);
  p_output1[98]=-0.13004*(t2239*t2394 + t1107*t2499) + 0.08055*(t1107*t2394 - 1.*t2239*t2499) - 1.*t2057*(0. + t1505 + t1506 + t1509 + t2278 + t2281 - 1.*t1294*t2565 - 1.*t2202*t2642) - 1.*t1896*(0. + t1529 + t1561 + t2242 + t2248 + t1436*t2565 + t1671*t2642 + var1[0]);
  p_output1[99]=t2337;
  p_output1[100]=t2368;
  p_output1[101]=t2389;
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



void Js_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
