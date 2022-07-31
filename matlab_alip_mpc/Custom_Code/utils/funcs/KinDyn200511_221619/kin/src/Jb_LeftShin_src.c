/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftShin_src.h"

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
  double t252;
  double t324;
  double t234;
  double t415;
  double t168;
  double t488;
  double t509;
  double t535;
  double t287;
  double t425;
  double t435;
  double t541;
  double t642;
  double t452;
  double t553;
  double t596;
  double t103;
  double t648;
  double t653;
  double t716;
  double t739;
  double t740;
  double t743;
  double t823;
  double t631;
  double t745;
  double t775;
  double t46;
  double t844;
  double t850;
  double t866;
  double t14;
  double t1114;
  double t1127;
  double t1151;
  double t1156;
  double t1180;
  double t1205;
  double t1215;
  double t1236;
  double t1268;
  double t1280;
  double t954;
  double t964;
  double t994;
  double t1061;
  double t1198;
  double t1282;
  double t1309;
  double t1381;
  double t1390;
  double t1405;
  double t1536;
  double t1551;
  double t1573;
  double t1576;
  double t1624;
  double t1654;
  double t795;
  double t869;
  double t873;
  double t1011;
  double t1017;
  double t1047;
  double t1067;
  double t1072;
  double t1074;
  double t1089;
  double t1091;
  double t1361;
  double t1421;
  double t1425;
  double t1444;
  double t1446;
  double t1455;
  double t1476;
  double t1482;
  double t1485;
  double t1492;
  double t1496;
  double t1588;
  double t1660;
  double t1669;
  double t1686;
  double t1697;
  double t1704;
  double t1705;
  double t1716;
  double t1729;
  double t1762;
  double t1922;
  double t1937;
  double t1945;
  double t2083;
  double t2101;
  double t2059;
  double t2066;
  double t2105;
  double t2109;
  double t2129;
  double t2130;
  double t2146;
  double t2148;
  double t2149;
  double t2153;
  double t2031;
  double t2034;
  double t2218;
  double t2221;
  double t2236;
  double t2248;
  double t2254;
  double t2076;
  double t2082;
  double t2137;
  double t2165;
  double t2174;
  double t1959;
  double t1987;
  double t2049;
  double t2177;
  double t2208;
  double t2255;
  double t2257;
  double t2286;
  double t2294;
  double t2308;
  double t2329;
  double t2335;
  double t2360;
  double t2364;
  double t2375;
  double t2383;
  double t2395;
  double t2397;
  double t2407;
  double t1946;
  double t1949;
  double t1955;
  double t1991;
  double t2003;
  double t2280;
  double t2415;
  double t2432;
  double t2468;
  double t2476;
  double t2478;
  double t2480;
  double t2492;
  double t2521;
  double t2529;
  double t2532;
  double t2542;
  double t2547;
  double t2549;
  double t2552;
  double t2444;
  double t2494;
  double t2499;
  double t2545;
  double t2558;
  double t2562;
  double t2572;
  double t2574;
  double t2590;
  double t1888;
  double t1910;
  double t1921;
  double t2504;
  double t2596;
  double t2633;
  double t2672;
  double t2704;
  double t2743;
  double t2797;
  double t2882;
  double t2915;
  double t2936;
  double t2975;
  double t2994;
  double t3404;
  double t3423;
  t252 = Cos(var1[10]);
  t324 = Sin(var1[9]);
  t234 = Cos(var1[9]);
  t415 = Sin(var1[10]);
  t168 = Cos(var1[8]);
  t488 = t252*t324;
  t509 = t234*t415;
  t535 = 0. + t488 + t509;
  t287 = -1.*t234*t252;
  t425 = t324*t415;
  t435 = 0. + t287 + t425;
  t541 = Sin(var1[8]);
  t642 = Cos(var1[6]);
  t452 = t168*t435;
  t553 = t535*t541;
  t596 = 0. + t452 + t553;
  t103 = Sin(var1[6]);
  t648 = Sin(var1[7]);
  t653 = t168*t535;
  t716 = -1.*t435*t541;
  t739 = 0. + t653 + t716;
  t740 = t648*t739;
  t743 = 0. + t740;
  t823 = Sin(var1[5]);
  t631 = -1.*t103*t596;
  t745 = t642*t743;
  t775 = 0. + t631 + t745;
  t46 = Cos(var1[5]);
  t844 = t642*t596;
  t850 = t103*t743;
  t866 = 0. + t844 + t850;
  t14 = Sin(var1[3]);
  t1114 = t234*t252;
  t1127 = -1.*t324*t415;
  t1151 = 0. + t1114 + t1127;
  t1156 = t1151*t541;
  t1180 = 0. + t653 + t1156;
  t1205 = t168*t1151;
  t1215 = -1.*t535*t541;
  t1236 = 0. + t1205 + t1215;
  t1268 = t648*t1236;
  t1280 = 0. + t1268;
  t954 = Cos(var1[3]);
  t964 = Cos(var1[4]);
  t994 = Cos(var1[7]);
  t1061 = Sin(var1[4]);
  t1198 = -1.*t103*t1180;
  t1282 = t642*t1280;
  t1309 = 0. + t1198 + t1282;
  t1381 = t642*t1180;
  t1390 = t103*t1280;
  t1405 = 0. + t1381 + t1390;
  t1536 = -1.*t994;
  t1551 = 0. + t1536;
  t1573 = t642*t1551;
  t1576 = 0. + t1573;
  t1624 = t1551*t103;
  t1654 = 0. + t1624;
  t795 = t46*t775;
  t869 = -1.*t823*t866;
  t873 = 0. + t795 + t869;
  t1011 = t994*t739;
  t1017 = 0. + t1011;
  t1047 = t964*t1017;
  t1067 = t823*t775;
  t1072 = t46*t866;
  t1074 = 0. + t1067 + t1072;
  t1089 = t1061*t1074;
  t1091 = 0. + t1047 + t1089;
  t1361 = t46*t1309;
  t1421 = -1.*t823*t1405;
  t1425 = 0. + t1361 + t1421;
  t1444 = t994*t1236;
  t1446 = 0. + t1444;
  t1455 = t964*t1446;
  t1476 = t823*t1309;
  t1482 = t46*t1405;
  t1485 = 0. + t1476 + t1482;
  t1492 = t1061*t1485;
  t1496 = 0. + t1455 + t1492;
  t1588 = t46*t1576;
  t1660 = -1.*t823*t1654;
  t1669 = 0. + t1588 + t1660;
  t1686 = t1576*t823;
  t1697 = t46*t1654;
  t1704 = 0. + t1686 + t1697;
  t1705 = t1061*t1704;
  t1716 = 0. + t648;
  t1729 = t964*t1716;
  t1762 = 0. + t1705 + t1729;
  t1922 = -1.*t1061*t1446;
  t1937 = t964*t1485;
  t1945 = 0. + t1922 + t1937;
  t2083 = -1.*t252;
  t2101 = 1. + t2083;
  t2059 = -1.*t234;
  t2066 = 1. + t2059;
  t2105 = -0.19074*t2101;
  t2109 = -0.37414*t252;
  t2129 = 0.0011999999999999997*t415;
  t2130 = 0. + t2105 + t2109 + t2129;
  t2146 = -0.03315*t2101;
  t2148 = -0.03195*t252;
  t2149 = 0.18339999999999998*t415;
  t2153 = 0. + t2146 + t2148 + t2149;
  t2031 = -1.*t168;
  t2034 = 1. + t2031;
  t2218 = -0.08055*t2066;
  t2221 = -0.13004*t324;
  t2236 = -1.*t324*t2130;
  t2248 = t234*t2153;
  t2254 = 0. + t2218 + t2221 + t2236 + t2248;
  t2076 = -0.13004*t2066;
  t2082 = 0.08055*t324;
  t2137 = t234*t2130;
  t2165 = t324*t2153;
  t2174 = 0. + t2076 + t2082 + t2137 + t2165;
  t1959 = -1.*t642;
  t1987 = 1. + t1959;
  t2049 = -0.01004*t2034;
  t2177 = t168*t2174;
  t2208 = 0.08055*t541;
  t2255 = t2254*t541;
  t2257 = 0. + t2049 + t2177 + t2208 + t2255;
  t2286 = -1.*t994;
  t2294 = 1. + t2286;
  t2308 = 0.135*t2294;
  t2329 = 0.1303*t994;
  t2335 = 0.08055*t648;
  t2360 = -0.08055*t2034;
  t2364 = t168*t2254;
  t2375 = -0.01004*t541;
  t2383 = -1.*t2174*t541;
  t2395 = 0. + t2360 + t2364 + t2375 + t2383;
  t2397 = t648*t2395;
  t2407 = 0. + t2308 + t2329 + t2335 + t2397;
  t1946 = t964*t1704;
  t1949 = -1.*t1061*t1716;
  t1955 = 0. + t1946 + t1949;
  t1991 = 0.135*t1987;
  t2003 = 0.07996*t103;
  t2280 = -1.*t103*t2257;
  t2415 = t642*t2407;
  t2432 = 0. + t1991 + t2003 + t2280 + t2415;
  t2468 = 0.07996*t1987;
  t2476 = -0.135*t103;
  t2478 = t642*t2257;
  t2480 = t103*t2407;
  t2492 = 0. + t2468 + t2476 + t2478 + t2480;
  t2521 = -0.08055*t2294;
  t2529 = 0.00470000000000001*t648;
  t2532 = t994*t2395;
  t2542 = 0. + t2521 + t2529 + t2532;
  t2547 = t823*t2432;
  t2549 = t46*t2492;
  t2552 = 0. + t2547 + t2549;
  t2444 = t46*t2432;
  t2494 = -1.*t823*t2492;
  t2499 = 0. + t2444 + t2494;
  t2545 = -1.*t1061*t2542;
  t2558 = t964*t2552;
  t2562 = 0. + t2545 + t2558;
  t2572 = t964*t2542;
  t2574 = t1061*t2552;
  t2590 = 0. + t2572 + t2574;
  t1888 = -1.*t1061*t1017;
  t1910 = t964*t1074;
  t1921 = 0. + t1888 + t1910;
  t2504 = t1669*t2499;
  t2596 = -1.*t2499*t1425;
  t2633 = -1.*t1669*t2499;
  t2672 = t2499*t873;
  t2704 = t2499*t1425;
  t2743 = -1.*t2499*t873;
  t2797 = t1716*t2542;
  t2882 = -1.*t2542*t1446;
  t2915 = -1.*t1716*t2542;
  t2936 = t2542*t1017;
  t2975 = t2542*t1446;
  t2994 = -1.*t2542*t1017;
  t3404 = t2257*t1180;
  t3423 = -1.*t2257*t596;
  p_output1[0]=0. - 1.*t14*t873 + t1091*t954;
  p_output1[1]=0. - 1.*t14*t1425 + t1496*t954;
  p_output1[2]=0. - 1.*t14*t1669 + t1762*t954;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1091*t14 + t873*t954;
  p_output1[7]=0. + t14*t1496 + t1425*t954;
  p_output1[8]=0. + t14*t1762 + t1669*t954;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1921;
  p_output1[13]=t1945;
  p_output1[14]=t1955;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1945*(t2504 + t1955*t2562 + t1762*t2590) + t1955*(-1.*t1945*t2562 - 1.*t1496*t2590 + t2596);
  p_output1[19]=t1921*(-1.*t1955*t2562 - 1.*t1762*t2590 + t2633) + t1955*(t1921*t2562 + t1091*t2590 + t2672);
  p_output1[20]=t1921*(t1945*t2562 + t1496*t2590 + t2704) + t1945*(-1.*t1921*t2562 - 1.*t1091*t2590 + t2743);
  p_output1[21]=t1921;
  p_output1[22]=t1945;
  p_output1[23]=t1955;
  p_output1[24]=t1425*(t2504 + t1704*t2552 + t2797) + t1669*(-1.*t1485*t2552 + t2596 + t2882);
  p_output1[25]=t1669*(t1074*t2552 + t2672 + t2936) + (-1.*t1704*t2552 + t2633 + t2915)*t873;
  p_output1[26]=t1425*(-1.*t1074*t2552 + t2743 + t2994) + (t1485*t2552 + t2704 + t2975)*t873;
  p_output1[27]=t873;
  p_output1[28]=t1425;
  p_output1[29]=t1669;
  p_output1[30]=t1446*(t1576*t2432 + t1654*t2492 + t2797) + t1716*(-1.*t1309*t2432 - 1.*t1405*t2492 + t2882);
  p_output1[31]=t1017*(-1.*t1576*t2432 - 1.*t1654*t2492 + t2915) + t1716*(t2936 + t2432*t775 + t2492*t866);
  p_output1[32]=t1017*(t1309*t2432 + t1405*t2492 + t2975) + t1446*(t2994 - 1.*t2432*t775 - 1.*t2492*t866);
  p_output1[33]=t1017;
  p_output1[34]=t1446;
  p_output1[35]=t1716;
  p_output1[36]=t1446*(0. + t1551*t2407 + t2797) + t1716*(-1.*t1180*t2257 - 1.*t1280*t2407 + t2882) - 0.135*t596 + 0.07996*t743;
  p_output1[37]=-0.135*t1180 + 0.07996*t1280 + t1017*(0. - 1.*t1551*t2407 + t2915) + t1716*(t2936 + t2257*t596 + t2407*t743);
  p_output1[38]=0. + 0.07996*t1551 + t1017*(t1280*t2407 + t2975 + t3404) + t1446*(t2994 + t3423 - 1.*t2407*t743);
  p_output1[39]=t1017;
  p_output1[40]=t1446;
  p_output1[41]=t1716;
  p_output1[42]=0. - 0.1303*t1180 + 0.135*t739;
  p_output1[43]=0. + 0.135*t1236 + 0.1303*t596;
  p_output1[44]=-0.08055 + (0. + t1236*t2395 + t3404)*t596 + t1180*(0. + t3423 - 1.*t2395*t739);
  p_output1[45]=t596;
  p_output1[46]=t1180;
  p_output1[47]=0.;
  p_output1[48]=0. - 1.*t1151*t2254 + 0.08055*t435 - 0.01004*t535 - 1.*t2174*t535;
  p_output1[49]=0. - 0.01004*t1151 + t2174*t435 + 0.08055*t535 + t2254*t535;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.08055*t252 - 1.*t2153*t252 - 0.13004*t415 - 1.*t2130*t415;
  p_output1[55]=0. - 0.13004*t252 - 1.*t2130*t252 + 0.08055*t415 + t2153*t415;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=-0.0011999999999999997;
  p_output1[61]=0.18339999999999998;
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



void Jb_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
