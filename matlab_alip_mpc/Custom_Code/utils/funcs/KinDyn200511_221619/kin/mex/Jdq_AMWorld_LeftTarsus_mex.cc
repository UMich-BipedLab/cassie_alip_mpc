/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t223;
  double t451;
  double t571;
  double t454;
  double t583;
  double t302;
  double t626;
  double t671;
  double t723;
  double t529;
  double t589;
  double t600;
  double t735;
  double t192;
  double t835;
  double t903;
  double t914;
  double t252;
  double t268;
  double t269;
  double t618;
  double t757;
  double t761;
  double t763;
  double t787;
  double t807;
  double t926;
  double t951;
  double t833;
  double t942;
  double t947;
  double t162;
  double t985;
  double t990;
  double t1006;
  double t1084;
  double t949;
  double t1018;
  double t1031;
  double t98;
  double t1091;
  double t1101;
  double t1111;
  double t1299;
  double t1326;
  double t74;
  double t1191;
  double t1498;
  double t1518;
  double t1533;
  double t1549;
  double t1566;
  double t1591;
  double t1756;
  double t1757;
  double t1768;
  double t1545;
  double t1645;
  double t1736;
  double t1741;
  double t1801;
  double t1825;
  double t1867;
  double t1899;
  double t1914;
  double t1927;
  double t1945;
  double t2084;
  double t2121;
  double t2129;
  double t2170;
  double t2173;
  double t2184;
  double t2135;
  double t2153;
  double t2166;
  double t2213;
  double t2220;
  double t2313;
  double t2328;
  double t2345;
  double t2383;
  double t2405;
  double t1339;
  double t1357;
  double t1370;
  double t1375;
  double t1398;
  double t1400;
  double t1436;
  double t1452;
  double t1457;
  double t1462;
  double t1470;
  double t1827;
  double t1851;
  double t1860;
  double t1921;
  double t1948;
  double t1949;
  double t1983;
  double t1987;
  double t2024;
  double t2026;
  double t2027;
  double t2035;
  double t2040;
  double t2070;
  double t2248;
  double t2266;
  double t2279;
  double t2355;
  double t2421;
  double t2435;
  double t2477;
  double t2489;
  double t2495;
  double t2526;
  double t2532;
  double t2536;
  double t2554;
  double t2562;
  double t1063;
  double t1116;
  double t1161;
  double t1236;
  double t1238;
  double t1268;
  double t2958;
  double t2965;
  double t3011;
  double t2918;
  double t2943;
  double t2946;
  double t3112;
  double t3138;
  double t3147;
  double t2874;
  double t2955;
  double t3034;
  double t3037;
  double t3039;
  double t3086;
  double t3098;
  double t3163;
  double t3190;
  double t3245;
  double t3258;
  double t3271;
  double t3240;
  double t3293;
  double t3295;
  double t3312;
  double t3329;
  double t3363;
  double t1496;
  double t2083;
  double t2568;
  double t2572;
  double t2616;
  double t2649;
  double t2674;
  double t2704;
  double t3311;
  double t3392;
  double t3430;
  double t3451;
  double t3473;
  double t3480;
  double t2773;
  double t2779;
  double t2793;
  double t2801;
  double t3818;
  double t3819;
  double t3829;
  double t3613;
  double t3619;
  double t3626;
  double t3729;
  double t3742;
  double t3778;
  double t3779;
  double t3845;
  double t3869;
  double t3884;
  double t3910;
  double t3918;
  double t3878;
  double t3925;
  double t3927;
  double t3956;
  double t3957;
  double t3991;
  double t3954;
  double t4044;
  double t4071;
  double t4091;
  double t4092;
  double t4100;
  double t1162;
  double t1274;
  double t1280;
  double t2581;
  double t2590;
  double t2611;
  double t4425;
  double t4452;
  double t4453;
  double t4512;
  double t4522;
  double t4544;
  double t4592;
  double t4672;
  double t4715;
  double t2763;
  double t2768;
  double t2769;
  double t3449;
  double t3490;
  double t3500;
  double t4495;
  double t4547;
  double t4720;
  double t4725;
  double t3549;
  double t3556;
  double t3585;
  double t4754;
  double t4770;
  double t4813;
  double t4871;
  double t3589;
  double t3591;
  double t3593;
  double t4930;
  double t4951;
  double t5043;
  double t5085;
  double t4083;
  double t4122;
  double t4123;
  double t4130;
  double t4149;
  double t4178;
  double t4234;
  double t4256;
  double t4319;
  double t5439;
  double t5462;
  double t5466;
  double t5476;
  double t5495;
  double t5541;
  double t5564;
  double t5600;
  double t5619;
  double t5652;
  double t5672;
  double t5675;
  double t5488;
  double t5617;
  double t5704;
  double t5761;
  double t5787;
  double t5802;
  double t5892;
  double t5917;
  double t5938;
  double t5953;
  double t5964;
  double t5990;
  double t5995;
  double t6004;
  double t6010;
  double t6033;
  double t6164;
  double t6165;
  double t6169;
  double t6176;
  double t6189;
  double t6413;
  double t6457;
  double t6460;
  double t6473;
  double t6480;
  double t6562;
  double t6614;
  double t6631;
  double t6638;
  double t6644;
  double t6651;
  double t6672;
  t223 = Cos(var1[3]);
  t451 = Cos(var1[5]);
  t571 = Sin(var1[4]);
  t454 = Sin(var1[3]);
  t583 = Sin(var1[5]);
  t302 = Cos(var1[6]);
  t626 = t223*t451*t571;
  t671 = t454*t583;
  t723 = t626 + t671;
  t529 = -1.*t451*t454;
  t589 = t223*t571*t583;
  t600 = t529 + t589;
  t735 = Sin(var1[6]);
  t192 = Cos(var1[8]);
  t835 = t302*t723;
  t903 = -1.*t600*t735;
  t914 = t835 + t903;
  t252 = Cos(var1[4]);
  t268 = Cos(var1[7]);
  t269 = t223*t252*t268;
  t618 = t302*t600;
  t757 = t723*t735;
  t761 = t618 + t757;
  t763 = Sin(var1[7]);
  t787 = t761*t763;
  t807 = t269 + t787;
  t926 = Sin(var1[8]);
  t951 = Cos(var1[9]);
  t833 = t192*t807;
  t942 = t914*t926;
  t947 = t833 + t942;
  t162 = Sin(var1[9]);
  t985 = t192*t914;
  t990 = -1.*t807*t926;
  t1006 = t985 + t990;
  t1084 = Cos(var1[10]);
  t949 = -1.*t162*t947;
  t1018 = t951*t1006;
  t1031 = t949 + t1018;
  t98 = Sin(var1[10]);
  t1091 = t951*t947;
  t1101 = t162*t1006;
  t1111 = t1091 + t1101;
  t1299 = -1.*t268;
  t1326 = 0. + t1299;
  t74 = Cos(var1[11]);
  t1191 = Sin(var1[11]);
  t1498 = t74*t98;
  t1518 = t1084*t1191;
  t1533 = 0. + t1498 + t1518;
  t1549 = t1084*t74;
  t1566 = -1.*t98*t1191;
  t1591 = 0. + t1549 + t1566;
  t1756 = t951*t1533;
  t1757 = t162*t1591;
  t1768 = 0. + t1756 + t1757;
  t1545 = -1.*t162*t1533;
  t1645 = t951*t1591;
  t1736 = 0. + t1545 + t1645;
  t1741 = t192*t1736;
  t1801 = -1.*t1768*t926;
  t1825 = 0. + t1741 + t1801;
  t1867 = t192*t1768;
  t1899 = t1736*t926;
  t1914 = 0. + t1867 + t1899;
  t1927 = t763*t1825;
  t1945 = 0. + t1927;
  t2084 = -1.*t1084*t74;
  t2121 = t98*t1191;
  t2129 = 0. + t2084 + t2121;
  t2170 = t162*t1533;
  t2173 = t951*t2129;
  t2184 = 0. + t2170 + t2173;
  t2135 = -1.*t162*t2129;
  t2153 = 0. + t1756 + t2135;
  t2166 = t192*t2153;
  t2213 = -1.*t2184*t926;
  t2220 = 0. + t2166 + t2213;
  t2313 = t192*t2184;
  t2328 = t2153*t926;
  t2345 = 0. + t2313 + t2328;
  t2383 = t763*t2220;
  t2405 = 0. + t2383;
  t1339 = t302*t1326;
  t1357 = 0. + t1339;
  t1370 = t1357*t583;
  t1375 = t1326*t735;
  t1398 = 0. + t1375;
  t1400 = t451*t1398;
  t1436 = 0. + t1370 + t1400;
  t1452 = t252*t1436;
  t1457 = 0. + t763;
  t1462 = -1.*t571*t1457;
  t1470 = 0. + t1452 + t1462;
  t1827 = t268*t1825;
  t1851 = 0. + t1827;
  t1860 = -1.*t571*t1851;
  t1921 = -1.*t735*t1914;
  t1948 = t302*t1945;
  t1949 = 0. + t1921 + t1948;
  t1983 = t583*t1949;
  t1987 = t302*t1914;
  t2024 = t735*t1945;
  t2026 = 0. + t1987 + t2024;
  t2027 = t451*t2026;
  t2035 = 0. + t1983 + t2027;
  t2040 = t252*t2035;
  t2070 = 0. + t1860 + t2040;
  t2248 = t268*t2220;
  t2266 = 0. + t2248;
  t2279 = -1.*t571*t2266;
  t2355 = -1.*t735*t2345;
  t2421 = t302*t2405;
  t2435 = 0. + t2355 + t2421;
  t2477 = t583*t2435;
  t2489 = t302*t2345;
  t2495 = t735*t2405;
  t2526 = 0. + t2489 + t2495;
  t2532 = t451*t2526;
  t2536 = 0. + t2477 + t2532;
  t2554 = t252*t2536;
  t2562 = 0. + t2279 + t2554;
  t1063 = t98*t1031;
  t1116 = t1084*t1111;
  t1161 = t1063 + t1116;
  t1236 = t1084*t1031;
  t1238 = -1.*t98*t1111;
  t1268 = t1236 + t1238;
  t2958 = t451*t454*t571;
  t2965 = -1.*t223*t583;
  t3011 = t2958 + t2965;
  t2918 = t223*t451;
  t2943 = t454*t571*t583;
  t2946 = t2918 + t2943;
  t3112 = t302*t3011;
  t3138 = -1.*t2946*t735;
  t3147 = t3112 + t3138;
  t2874 = t252*t268*t454;
  t2955 = t302*t2946;
  t3034 = t3011*t735;
  t3037 = t2955 + t3034;
  t3039 = t3037*t763;
  t3086 = t2874 + t3039;
  t3098 = t192*t3086;
  t3163 = t3147*t926;
  t3190 = t3098 + t3163;
  t3245 = t192*t3147;
  t3258 = -1.*t3086*t926;
  t3271 = t3245 + t3258;
  t3240 = -1.*t162*t3190;
  t3293 = t951*t3271;
  t3295 = t3240 + t3293;
  t3312 = t951*t3190;
  t3329 = t162*t3271;
  t3363 = t3312 + t3329;
  t1496 = 0.000036*t1470;
  t2083 = 0.0231*t2070;
  t2568 = -0.00288*t2562;
  t2572 = t1496 + t2083 + t2568;
  t2616 = 0.0239*t1470;
  t2649 = 0.000036*t2070;
  t2674 = -0.000063*t2562;
  t2704 = t2616 + t2649 + t2674;
  t3311 = t98*t3295;
  t3392 = t1084*t3363;
  t3430 = t3311 + t3392;
  t3451 = t1084*t3295;
  t3473 = -1.*t98*t3363;
  t3480 = t3451 + t3473;
  t2773 = -0.000063*t1470;
  t2779 = -0.00288*t2070;
  t2793 = 0.00113*t2562;
  t2801 = t2773 + t2779 + t2793;
  t3818 = t252*t451*t302;
  t3819 = -1.*t252*t583*t735;
  t3829 = t3818 + t3819;
  t3613 = -1.*t268*t571;
  t3619 = t252*t302*t583;
  t3626 = t252*t451*t735;
  t3729 = t3619 + t3626;
  t3742 = t3729*t763;
  t3778 = t3613 + t3742;
  t3779 = t192*t3778;
  t3845 = t3829*t926;
  t3869 = t3779 + t3845;
  t3884 = t192*t3829;
  t3910 = -1.*t3778*t926;
  t3918 = t3884 + t3910;
  t3878 = -1.*t162*t3869;
  t3925 = t951*t3918;
  t3927 = t3878 + t3925;
  t3956 = t951*t3869;
  t3957 = t162*t3918;
  t3991 = t3956 + t3957;
  t3954 = t98*t3927;
  t4044 = t1084*t3991;
  t4071 = t3954 + t4044;
  t4091 = t1084*t3927;
  t4092 = -1.*t98*t3991;
  t4100 = t4091 + t4092;
  t1162 = t74*t1161;
  t1274 = t1191*t1268;
  t1280 = t1162 + t1274;
  t2581 = -1.*t268*t761;
  t2590 = t223*t252*t763;
  t2611 = t2581 + t2590;
  t4425 = t451*t1357;
  t4452 = -1.*t583*t1398;
  t4453 = 0. + t4425 + t4452;
  t4512 = t451*t1949;
  t4522 = -1.*t583*t2026;
  t4544 = 0. + t4512 + t4522;
  t4592 = t451*t2435;
  t4672 = -1.*t583*t2526;
  t4715 = 0. + t4592 + t4672;
  t2763 = t1191*t1161;
  t2768 = -1.*t74*t1268;
  t2769 = t2763 + t2768;
  t3449 = t74*t3430;
  t3490 = t1191*t3480;
  t3500 = t3449 + t3490;
  t4495 = 0.000036*t4453;
  t4547 = 0.0231*t4544;
  t4720 = -0.00288*t4715;
  t4725 = t4495 + t4547 + t4720;
  t3549 = -1.*t268*t3037;
  t3556 = t252*t454*t763;
  t3585 = t3549 + t3556;
  t4754 = 0.0239*t4453;
  t4770 = 0.000036*t4544;
  t4813 = -0.000063*t4715;
  t4871 = t4754 + t4770 + t4813;
  t3589 = t1191*t3430;
  t3591 = -1.*t74*t3480;
  t3593 = t3589 + t3591;
  t4930 = -0.000063*t4453;
  t4951 = -0.00288*t4544;
  t5043 = 0.00113*t4715;
  t5085 = t4930 + t4951 + t5043;
  t4083 = t74*t4071;
  t4122 = t1191*t4100;
  t4123 = t4083 + t4122;
  t4130 = -1.*t268*t3729;
  t4149 = -1.*t571*t763;
  t4178 = t4130 + t4149;
  t4234 = t1191*t4071;
  t4256 = -1.*t74*t4100;
  t4319 = t4234 + t4256;
  t5439 = 0.0239*t1457;
  t5462 = 0.000036*t1851;
  t5466 = -0.000063*t2266;
  t5476 = t5439 + t5462 + t5466;
  t5495 = -0.000063*t1457;
  t5541 = -0.00288*t1851;
  t5564 = 0.00113*t2266;
  t5600 = t5495 + t5541 + t5564;
  t5619 = 0.000036*t1457;
  t5652 = 0.0231*t1851;
  t5672 = -0.00288*t2266;
  t5675 = t5619 + t5652 + t5672;
  t5488 = t2611*t5476;
  t5617 = t5600*t2769;
  t5704 = t5675*t1280;
  t5761 = t5488 + t5617 + t5704;
  t5787 = t3585*t5476;
  t5802 = t5600*t3593;
  t5892 = t5675*t3500;
  t5917 = t5787 + t5802 + t5892;
  t5938 = t4178*t5476;
  t5953 = t5600*t4319;
  t5964 = t5675*t4123;
  t5990 = t5938 + t5953 + t5964;
  t5995 = 0.000036*t1914;
  t6004 = -0.000063*t2345;
  t6010 = t5995 + t6004;
  t6033 = -0.00288*t1914;
  t6164 = 0.00113*t2345;
  t6165 = t6033 + t6164;
  t6169 = 0.0231*t1914;
  t6176 = -0.00288*t2345;
  t6189 = t6169 + t6176;
  t6413 = 0.0239*t2611;
  t6457 = -0.000063*t2769;
  t6460 = 0.000036*t1280;
  t6473 = t6413 + t6457 + t6460;
  t6480 = 0.0239*t3585;
  t6562 = -0.000063*t3593;
  t6614 = 0.000036*t3500;
  t6631 = t6480 + t6562 + t6614;
  t6638 = 0.0239*t4178;
  t6644 = -0.000063*t4319;
  t6651 = 0.000036*t4123;
  t6672 = t6638 + t6644 + t6651;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1280*t2572 + t2611*t2704 + t2769*t2801;
  p_output1[10]=t2572*t3500 + t2704*t3585 + t2801*t3593;
  p_output1[11]=t2572*t4123 + t2704*t4178 + t2801*t4319;
  p_output1[12]=t1280*t4725 + t2611*t4871 + t2769*t5085;
  p_output1[13]=t3500*t4725 + t3585*t4871 + t3593*t5085;
  p_output1[14]=t4123*t4725 + t4178*t4871 + t4319*t5085;
  p_output1[15]=t5761;
  p_output1[16]=t5917;
  p_output1[17]=t5990;
  p_output1[18]=t5761;
  p_output1[19]=t5917;
  p_output1[20]=t5990;
  p_output1[21]=t2611*t6010 + t2769*t6165 + t1280*t6189;
  p_output1[22]=t3585*t6010 + t3593*t6165 + t3500*t6189;
  p_output1[23]=t4178*t6010 + t4319*t6165 + t4123*t6189;
  p_output1[24]=t6473;
  p_output1[25]=t6631;
  p_output1[26]=t6672;
  p_output1[27]=t6473;
  p_output1[28]=t6631;
  p_output1[29]=t6672;
  p_output1[30]=t6473;
  p_output1[31]=t6631;
  p_output1[32]=t6672;
  p_output1[33]=t6473;
  p_output1[34]=t6631;
  p_output1[35]=t6672;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMWorld_LeftTarsus_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
