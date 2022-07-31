/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightKneeSpringJoint_src.h"

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
  double t373;
  double t274;
  double t291;
  double t375;
  double t476;
  double t342;
  double t379;
  double t453;
  double t238;
  double t483;
  double t484;
  double t487;
  double t506;
  double t468;
  double t500;
  double t502;
  double t194;
  double t538;
  double t631;
  double t633;
  double t646;
  double t668;
  double t700;
  double t146;
  double t740;
  double t746;
  double t756;
  double t505;
  double t709;
  double t719;
  double t758;
  double t92;
  double t1056;
  double t1058;
  double t1085;
  double t1086;
  double t1089;
  double t1102;
  double t1128;
  double t1137;
  double t1139;
  double t1142;
  double t834;
  double t839;
  double t884;
  double t944;
  double t1184;
  double t1191;
  double t1193;
  double t1100;
  double t1155;
  double t1172;
  double t1364;
  double t1367;
  double t1473;
  double t1475;
  double t1389;
  double t1408;
  double t727;
  double t769;
  double t783;
  double t899;
  double t911;
  double t921;
  double t982;
  double t990;
  double t1002;
  double t1030;
  double t1031;
  double t1176;
  double t1194;
  double t1201;
  double t1209;
  double t1223;
  double t1234;
  double t1240;
  double t1277;
  double t1304;
  double t1311;
  double t1322;
  double t1424;
  double t1484;
  double t1487;
  double t1535;
  double t1569;
  double t1575;
  double t1588;
  double t1592;
  double t1606;
  double t1628;
  double t1847;
  double t1848;
  double t1850;
  double t1992;
  double t2015;
  double t1976;
  double t1977;
  double t2079;
  double t2082;
  double t2088;
  double t2026;
  double t2048;
  double t2051;
  double t1935;
  double t1942;
  double t1986;
  double t2059;
  double t2064;
  double t2098;
  double t2134;
  double t2140;
  double t2143;
  double t2149;
  double t2160;
  double t2162;
  double t1885;
  double t1893;
  double t1947;
  double t1969;
  double t2137;
  double t2171;
  double t2172;
  double t2192;
  double t2201;
  double t2207;
  double t2213;
  double t2222;
  double t2226;
  double t2247;
  double t2256;
  double t2258;
  double t2262;
  double t2264;
  double t2265;
  double t1852;
  double t1872;
  double t1883;
  double t2303;
  double t2312;
  double t2317;
  double t2320;
  double t2329;
  double t1902;
  double t1925;
  double t2188;
  double t2272;
  double t2280;
  double t2362;
  double t2364;
  double t2386;
  double t2399;
  double t2415;
  double t2425;
  double t2428;
  double t2281;
  double t2343;
  double t2346;
  double t2409;
  double t2436;
  double t2443;
  double t2457;
  double t2458;
  double t2468;
  double t1783;
  double t1789;
  double t1805;
  double t2358;
  double t2485;
  double t2526;
  double t2574;
  double t2604;
  double t2658;
  double t2698;
  double t2718;
  double t2764;
  double t2808;
  double t2854;
  double t2891;
  double t3262;
  double t3301;
  t373 = Cos(var1[16]);
  t274 = Cos(var1[17]);
  t291 = Sin(var1[16]);
  t375 = Sin(var1[17]);
  t476 = Cos(var1[15]);
  t342 = t274*t291;
  t379 = t373*t375;
  t453 = 0. + t342 + t379;
  t238 = Sin(var1[15]);
  t483 = -1.*t373*t274;
  t484 = t291*t375;
  t487 = 0. + t483 + t484;
  t506 = Cos(var1[13]);
  t468 = t238*t453;
  t500 = t476*t487;
  t502 = 0. + t468 + t500;
  t194 = Sin(var1[13]);
  t538 = Sin(var1[14]);
  t631 = t476*t453;
  t633 = -1.*t238*t487;
  t646 = 0. + t631 + t633;
  t668 = t538*t646;
  t700 = 0. + t668;
  t146 = Cos(var1[5]);
  t740 = t506*t502;
  t746 = t194*t700;
  t756 = 0. + t740 + t746;
  t505 = -1.*t194*t502;
  t709 = t506*t700;
  t719 = 0. + t505 + t709;
  t758 = Sin(var1[5]);
  t92 = Sin(var1[3]);
  t1056 = t373*t274;
  t1058 = -1.*t291*t375;
  t1085 = 0. + t1056 + t1058;
  t1086 = t238*t1085;
  t1089 = 0. + t631 + t1086;
  t1102 = -1.*t238*t453;
  t1128 = t476*t1085;
  t1137 = 0. + t1102 + t1128;
  t1139 = t538*t1137;
  t1142 = 0. + t1139;
  t834 = Cos(var1[3]);
  t839 = Cos(var1[4]);
  t884 = Cos(var1[14]);
  t944 = Sin(var1[4]);
  t1184 = t506*t1089;
  t1191 = t194*t1142;
  t1193 = 0. + t1184 + t1191;
  t1100 = -1.*t194*t1089;
  t1155 = t506*t1142;
  t1172 = 0. + t1100 + t1155;
  t1364 = -1.*t884;
  t1367 = 0. + t1364;
  t1473 = t1367*t194;
  t1475 = 0. + t1473;
  t1389 = t506*t1367;
  t1408 = 0. + t1389;
  t727 = t146*t719;
  t769 = -1.*t756*t758;
  t783 = 0. + t727 + t769;
  t899 = t884*t646;
  t911 = 0. + t899;
  t921 = t839*t911;
  t982 = t146*t756;
  t990 = t719*t758;
  t1002 = 0. + t982 + t990;
  t1030 = t944*t1002;
  t1031 = 0. + t921 + t1030;
  t1176 = t146*t1172;
  t1194 = -1.*t1193*t758;
  t1201 = 0. + t1176 + t1194;
  t1209 = t884*t1137;
  t1223 = 0. + t1209;
  t1234 = t839*t1223;
  t1240 = t146*t1193;
  t1277 = t1172*t758;
  t1304 = 0. + t1240 + t1277;
  t1311 = t944*t1304;
  t1322 = 0. + t1234 + t1311;
  t1424 = t1408*t146;
  t1484 = -1.*t1475*t758;
  t1487 = 0. + t1424 + t1484;
  t1535 = 0. + t538;
  t1569 = t839*t1535;
  t1575 = t146*t1475;
  t1588 = t1408*t758;
  t1592 = 0. + t1575 + t1588;
  t1606 = t944*t1592;
  t1628 = 0. + t1569 + t1606;
  t1847 = -1.*t1223*t944;
  t1848 = t839*t1304;
  t1850 = 0. + t1847 + t1848;
  t1992 = -1.*t274;
  t2015 = 1. + t1992;
  t1976 = -1.*t373;
  t1977 = 1. + t1976;
  t2079 = -0.19074*t2015;
  t2082 = -0.19074*t274;
  t2088 = 0. + t2079 + t2082;
  t2026 = -0.03315*t2015;
  t2048 = -0.03315*t274;
  t2051 = 0. + t2026 + t2048;
  t1935 = -1.*t476;
  t1942 = 1. + t1935;
  t1986 = -0.08055*t1977;
  t2059 = t373*t2051;
  t2064 = -0.13004*t291;
  t2098 = -1.*t2088*t291;
  t2134 = 0. + t1986 + t2059 + t2064 + t2098;
  t2140 = -0.13004*t1977;
  t2143 = t373*t2088;
  t2149 = 0.08055*t291;
  t2160 = t2051*t291;
  t2162 = 0. + t2140 + t2143 + t2149 + t2160;
  t1885 = -1.*t506;
  t1893 = 1. + t1885;
  t1947 = -0.01004*t1942;
  t1969 = 0.08055*t238;
  t2137 = t238*t2134;
  t2171 = t476*t2162;
  t2172 = 0. + t1947 + t1969 + t2137 + t2171;
  t2192 = -1.*t884;
  t2201 = 1. + t2192;
  t2207 = -0.135*t2201;
  t2213 = -0.1305*t884;
  t2222 = 0.08055*t538;
  t2226 = -0.08055*t1942;
  t2247 = -0.01004*t238;
  t2256 = t476*t2134;
  t2258 = -1.*t238*t2162;
  t2262 = 0. + t2226 + t2247 + t2256 + t2258;
  t2264 = t538*t2262;
  t2265 = 0. + t2207 + t2213 + t2222 + t2264;
  t1852 = -1.*t1535*t944;
  t1872 = t839*t1592;
  t1883 = 0. + t1852 + t1872;
  t2303 = 0.07996*t1893;
  t2312 = 0.135*t194;
  t2317 = t506*t2172;
  t2320 = t194*t2265;
  t2329 = 0. + t2303 + t2312 + t2317 + t2320;
  t1902 = -0.135*t1893;
  t1925 = 0.07996*t194;
  t2188 = -1.*t194*t2172;
  t2272 = t506*t2265;
  t2280 = 0. + t1902 + t1925 + t2188 + t2272;
  t2362 = -0.08055*t2201;
  t2364 = -0.004500000000000004*t538;
  t2386 = t884*t2262;
  t2399 = 0. + t2362 + t2364 + t2386;
  t2415 = t146*t2329;
  t2425 = t2280*t758;
  t2428 = 0. + t2415 + t2425;
  t2281 = t146*t2280;
  t2343 = -1.*t2329*t758;
  t2346 = 0. + t2281 + t2343;
  t2409 = -1.*t2399*t944;
  t2436 = t839*t2428;
  t2443 = 0. + t2409 + t2436;
  t2457 = t839*t2399;
  t2458 = t944*t2428;
  t2468 = 0. + t2457 + t2458;
  t1783 = -1.*t911*t944;
  t1789 = t839*t1002;
  t1805 = 0. + t1783 + t1789;
  t2358 = t1487*t2346;
  t2485 = -1.*t2346*t1201;
  t2526 = -1.*t1487*t2346;
  t2574 = t2346*t783;
  t2604 = t2346*t1201;
  t2658 = -1.*t2346*t783;
  t2698 = t1535*t2399;
  t2718 = -1.*t2399*t1223;
  t2764 = -1.*t1535*t2399;
  t2808 = t2399*t911;
  t2854 = t2399*t1223;
  t2891 = -1.*t2399*t911;
  t3262 = t2172*t1089;
  t3301 = -1.*t2172*t502;
  p_output1[0]=0. + t1031*t834 - 1.*t783*t92;
  p_output1[1]=0. + t1322*t834 - 1.*t1201*t92;
  p_output1[2]=0. + t1628*t834 - 1.*t1487*t92;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t783*t834 + t1031*t92;
  p_output1[7]=0. + t1201*t834 + t1322*t92;
  p_output1[8]=0. + t1487*t834 + t1628*t92;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1805;
  p_output1[13]=t1850;
  p_output1[14]=t1883;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1850*(t2358 + t1883*t2443 + t1628*t2468) + t1883*(-1.*t1850*t2443 - 1.*t1322*t2468 + t2485);
  p_output1[19]=t1805*(-1.*t1883*t2443 - 1.*t1628*t2468 + t2526) + t1883*(t1805*t2443 + t1031*t2468 + t2574);
  p_output1[20]=t1805*(t1850*t2443 + t1322*t2468 + t2604) + t1850*(-1.*t1805*t2443 - 1.*t1031*t2468 + t2658);
  p_output1[21]=t1805;
  p_output1[22]=t1850;
  p_output1[23]=t1883;
  p_output1[24]=t1201*(t2358 + t1592*t2428 + t2698) + t1487*(-1.*t1304*t2428 + t2485 + t2718);
  p_output1[25]=t1487*(t1002*t2428 + t2574 + t2808) + (-1.*t1592*t2428 + t2526 + t2764)*t783;
  p_output1[26]=t1201*(-1.*t1002*t2428 + t2658 + t2891) + (t1304*t2428 + t2604 + t2854)*t783;
  p_output1[27]=t783;
  p_output1[28]=t1201;
  p_output1[29]=t1487;
  p_output1[30]=t1223*(t1408*t2280 + t1475*t2329 + t2698) + t1535*(-1.*t1172*t2280 - 1.*t1193*t2329 + t2718);
  p_output1[31]=t1535*(t2808 + t2280*t719 + t2329*t756) + (-1.*t1408*t2280 - 1.*t1475*t2329 + t2764)*t911;
  p_output1[32]=t1223*(t2891 - 1.*t2280*t719 - 1.*t2329*t756) + (t1172*t2280 + t1193*t2329 + t2854)*t911;
  p_output1[33]=t911;
  p_output1[34]=t1223;
  p_output1[35]=t1535;
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
  p_output1[78]=t1223*(0. + t1367*t2265 + t2698) + t1535*(-1.*t1089*t2172 - 1.*t1142*t2265 + t2718) + 0.135*t502 + 0.07996*t700;
  p_output1[79]=0.135*t1089 + 0.07996*t1142 + t1535*(t2808 + t2172*t502 + t2265*t700) + (0. - 1.*t1367*t2265 + t2764)*t911;
  p_output1[80]=0. + 0.07996*t1367 + t1223*(t2891 + t3301 - 1.*t2265*t700) + (t1142*t2265 + t2854 + t3262)*t911;
  p_output1[81]=t911;
  p_output1[82]=t1223;
  p_output1[83]=t1535;
  p_output1[84]=0. + 0.1305*t1089 - 0.135*t646;
  p_output1[85]=0. - 0.135*t1137 - 0.1305*t502;
  p_output1[86]=-0.08055 + (0. + t1137*t2262 + t3262)*t502 + t1089*(0. + t3301 - 1.*t2262*t646);
  p_output1[87]=t502;
  p_output1[88]=t1089;
  p_output1[89]=0.;
  p_output1[90]=0. - 1.*t1085*t2134 - 0.01004*t453 - 1.*t2162*t453 + 0.08055*t487;
  p_output1[91]=0. - 0.01004*t1085 + 0.08055*t453 + t2134*t453 + t2162*t487;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.08055*t274 - 1.*t2051*t274 - 0.13004*t375 - 1.*t2088*t375;
  p_output1[97]=0. - 0.13004*t274 - 1.*t2088*t274 + 0.08055*t375 + t2051*t375;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0.;
  p_output1[103]=0.;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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



void Jb_RightKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
