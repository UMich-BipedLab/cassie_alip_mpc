/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:30 GMT-04:00
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
  double t339;
  double t340;
  double t359;
  double t646;
  double t605;
  double t621;
  double t649;
  double t679;
  double t629;
  double t651;
  double t665;
  double t598;
  double t695;
  double t710;
  double t727;
  double t197;
  double t286;
  double t312;
  double t409;
  double t863;
  double t666;
  double t751;
  double t774;
  double t555;
  double t882;
  double t903;
  double t904;
  double t361;
  double t106;
  double t785;
  double t970;
  double t1012;
  double t1092;
  double t1104;
  double t1122;
  double t1135;
  double t1141;
  double t438;
  double t1516;
  double t1542;
  double t1555;
  double t1514;
  double t1560;
  double t1561;
  double t1593;
  double t1621;
  double t1562;
  double t1624;
  double t1634;
  double t1760;
  double t1789;
  double t1818;
  double t1842;
  double t1851;
  double t1944;
  double t1955;
  double t187;
  double t203;
  double t367;
  double t397;
  double t402;
  double t427;
  double t430;
  double t448;
  double t453;
  double t461;
  double t494;
  double t1022;
  double t1042;
  double t1085;
  double t1132;
  double t1181;
  double t1246;
  double t1285;
  double t1292;
  double t1343;
  double t1398;
  double t1418;
  double t1432;
  double t1445;
  double t1468;
  double t1648;
  double t1686;
  double t1732;
  double t1832;
  double t1854;
  double t1855;
  double t1859;
  double t1867;
  double t1871;
  double t1881;
  double t1883;
  double t1889;
  double t1891;
  double t1892;
  double t1951;
  double t1958;
  double t1975;
  double t2033;
  double t2047;
  double t2048;
  double t2016;
  double t2065;
  double t2077;
  double t2137;
  double t2145;
  double t2154;
  double t2168;
  double t2182;
  double t2186;
  double t2157;
  double t2187;
  double t2192;
  double t2199;
  double t2210;
  double t2220;
  double t2197;
  double t2227;
  double t2265;
  double t2293;
  double t2317;
  double t2352;
  double t2278;
  double t2374;
  double t2391;
  double t2417;
  double t2422;
  double t2431;
  double t540;
  double t1511;
  double t1911;
  double t1936;
  double t2117;
  double t2120;
  double t2122;
  double t2124;
  double t2570;
  double t2601;
  double t2611;
  double t2630;
  double t2641;
  double t2645;
  double t2616;
  double t2650;
  double t2684;
  double t2733;
  double t2744;
  double t2745;
  double t2761;
  double t2765;
  double t2769;
  double t2751;
  double t2808;
  double t2821;
  double t2827;
  double t2834;
  double t2835;
  double t2826;
  double t2838;
  double t2857;
  double t2889;
  double t2909;
  double t2910;
  double t2464;
  double t2473;
  double t2488;
  double t2490;
  double t2859;
  double t2911;
  double t2915;
  double t2927;
  double t2930;
  double t2932;
  double t3077;
  double t3093;
  double t3098;
  double t3114;
  double t3122;
  double t3125;
  double t3132;
  double t3156;
  double t3165;
  double t3128;
  double t3182;
  double t3184;
  double t3252;
  double t3332;
  double t3374;
  double t3191;
  double t3375;
  double t3382;
  double t3417;
  double t3422;
  double t3445;
  double t3393;
  double t3453;
  double t3471;
  double t3515;
  double t3516;
  double t3536;
  double t1947;
  double t2084;
  double t2088;
  double t3707;
  double t3709;
  double t3744;
  double t3749;
  double t3766;
  double t3768;
  double t3826;
  double t3871;
  double t3876;
  double t2414;
  double t2443;
  double t2448;
  double t2500;
  double t2518;
  double t2527;
  double t3745;
  double t3799;
  double t3902;
  double t3985;
  double t2566;
  double t2701;
  double t2720;
  double t4011;
  double t4045;
  double t4061;
  double t4062;
  double t2916;
  double t2965;
  double t2966;
  double t4081;
  double t4089;
  double t4123;
  double t4140;
  double t2976;
  double t2993;
  double t3005;
  double t3069;
  double t3104;
  double t3105;
  double t3486;
  double t3590;
  double t3621;
  double t3626;
  double t3633;
  double t3634;
  double t4353;
  double t4366;
  double t4408;
  double t4413;
  double t4532;
  double t4541;
  double t4546;
  double t4547;
  double t4580;
  double t4658;
  double t4665;
  double t4676;
  double t4453;
  double t4549;
  double t4713;
  double t4810;
  double t4835;
  double t4839;
  double t4851;
  double t4887;
  double t4968;
  double t4978;
  double t4985;
  double t4992;
  double t4999;
  double t5012;
  double t5047;
  double t5094;
  double t5124;
  double t5128;
  double t5176;
  double t5200;
  double t5204;
  double t5473;
  double t5493;
  double t5512;
  double t5527;
  double t5576;
  double t5609;
  double t5663;
  double t5666;
  double t5675;
  double t5688;
  double t5690;
  double t5712;
  t339 = Cos(var1[14]);
  t340 = -1.*t339;
  t359 = 0. + t340;
  t646 = Cos(var1[17]);
  t605 = Cos(var1[18]);
  t621 = Sin(var1[17]);
  t649 = Sin(var1[18]);
  t679 = Cos(var1[16]);
  t629 = t605*t621;
  t651 = t646*t649;
  t665 = 0. + t629 + t651;
  t598 = Sin(var1[16]);
  t695 = t646*t605;
  t710 = -1.*t621*t649;
  t727 = 0. + t695 + t710;
  t197 = Sin(var1[4]);
  t286 = Cos(var1[4]);
  t312 = Cos(var1[5]);
  t409 = Cos(var1[13]);
  t863 = Sin(var1[15]);
  t666 = -1.*t598*t665;
  t751 = t679*t727;
  t774 = 0. + t666 + t751;
  t555 = Cos(var1[15]);
  t882 = t679*t665;
  t903 = t598*t727;
  t904 = 0. + t882 + t903;
  t361 = Sin(var1[13]);
  t106 = Sin(var1[14]);
  t785 = t555*t774;
  t970 = -1.*t863*t904;
  t1012 = 0. + t785 + t970;
  t1092 = t863*t774;
  t1104 = t555*t904;
  t1122 = 0. + t1092 + t1104;
  t1135 = t106*t1012;
  t1141 = 0. + t1135;
  t438 = Sin(var1[5]);
  t1516 = -1.*t646*t605;
  t1542 = t621*t649;
  t1555 = 0. + t1516 + t1542;
  t1514 = t598*t665;
  t1560 = t679*t1555;
  t1561 = 0. + t1514 + t1560;
  t1593 = -1.*t598*t1555;
  t1621 = 0. + t882 + t1593;
  t1562 = -1.*t863*t1561;
  t1624 = t555*t1621;
  t1634 = 0. + t1562 + t1624;
  t1760 = t555*t1561;
  t1789 = t863*t1621;
  t1818 = 0. + t1760 + t1789;
  t1842 = t106*t1634;
  t1851 = 0. + t1842;
  t1944 = Cos(var1[3]);
  t1955 = Sin(var1[3]);
  t187 = 0. + t106;
  t203 = -1.*t187*t197;
  t367 = t359*t361;
  t397 = 0. + t367;
  t402 = t312*t397;
  t427 = t409*t359;
  t430 = 0. + t427;
  t448 = t430*t438;
  t453 = 0. + t402 + t448;
  t461 = t286*t453;
  t494 = 0. + t203 + t461;
  t1022 = t339*t1012;
  t1042 = 0. + t1022;
  t1085 = -1.*t1042*t197;
  t1132 = t409*t1122;
  t1181 = t361*t1141;
  t1246 = 0. + t1132 + t1181;
  t1285 = t312*t1246;
  t1292 = -1.*t361*t1122;
  t1343 = t409*t1141;
  t1398 = 0. + t1292 + t1343;
  t1418 = t1398*t438;
  t1432 = 0. + t1285 + t1418;
  t1445 = t286*t1432;
  t1468 = 0. + t1085 + t1445;
  t1648 = t339*t1634;
  t1686 = 0. + t1648;
  t1732 = -1.*t1686*t197;
  t1832 = t409*t1818;
  t1854 = t361*t1851;
  t1855 = 0. + t1832 + t1854;
  t1859 = t312*t1855;
  t1867 = -1.*t361*t1818;
  t1871 = t409*t1851;
  t1881 = 0. + t1867 + t1871;
  t1883 = t1881*t438;
  t1889 = 0. + t1859 + t1883;
  t1891 = t286*t1889;
  t1892 = 0. + t1732 + t1891;
  t1951 = t1944*t312*t197;
  t1958 = t1955*t438;
  t1975 = t1951 + t1958;
  t2033 = -1.*t312*t1955;
  t2047 = t1944*t197*t438;
  t2048 = t2033 + t2047;
  t2016 = t361*t1975;
  t2065 = t409*t2048;
  t2077 = t2016 + t2065;
  t2137 = t409*t1975;
  t2145 = -1.*t361*t2048;
  t2154 = t2137 + t2145;
  t2168 = t339*t1944*t286;
  t2182 = t106*t2077;
  t2186 = t2168 + t2182;
  t2157 = t863*t2154;
  t2187 = t555*t2186;
  t2192 = t2157 + t2187;
  t2199 = t555*t2154;
  t2210 = -1.*t863*t2186;
  t2220 = t2199 + t2210;
  t2197 = -1.*t598*t2192;
  t2227 = t679*t2220;
  t2265 = t2197 + t2227;
  t2293 = t679*t2192;
  t2317 = t598*t2220;
  t2352 = t2293 + t2317;
  t2278 = t621*t2265;
  t2374 = t646*t2352;
  t2391 = t2278 + t2374;
  t2417 = t646*t2265;
  t2422 = -1.*t621*t2352;
  t2431 = t2417 + t2422;
  t540 = 0.0239*t494;
  t1511 = -0.000036*t1468;
  t1911 = 0.000063*t1892;
  t1936 = t540 + t1511 + t1911;
  t2117 = 0.000063*t494;
  t2120 = -0.00288*t1468;
  t2122 = 0.00113*t1892;
  t2124 = t2117 + t2120 + t2122;
  t2570 = t312*t1955*t197;
  t2601 = -1.*t1944*t438;
  t2611 = t2570 + t2601;
  t2630 = t1944*t312;
  t2641 = t1955*t197*t438;
  t2645 = t2630 + t2641;
  t2616 = t361*t2611;
  t2650 = t409*t2645;
  t2684 = t2616 + t2650;
  t2733 = t409*t2611;
  t2744 = -1.*t361*t2645;
  t2745 = t2733 + t2744;
  t2761 = t339*t286*t1955;
  t2765 = t106*t2684;
  t2769 = t2761 + t2765;
  t2751 = t863*t2745;
  t2808 = t555*t2769;
  t2821 = t2751 + t2808;
  t2827 = t555*t2745;
  t2834 = -1.*t863*t2769;
  t2835 = t2827 + t2834;
  t2826 = -1.*t598*t2821;
  t2838 = t679*t2835;
  t2857 = t2826 + t2838;
  t2889 = t679*t2821;
  t2909 = t598*t2835;
  t2910 = t2889 + t2909;
  t2464 = -0.000036*t494;
  t2473 = 0.0231*t1468;
  t2488 = -0.00288*t1892;
  t2490 = t2464 + t2473 + t2488;
  t2859 = t621*t2857;
  t2911 = t646*t2910;
  t2915 = t2859 + t2911;
  t2927 = t646*t2857;
  t2930 = -1.*t621*t2910;
  t2932 = t2927 + t2930;
  t3077 = t286*t312*t361;
  t3093 = t409*t286*t438;
  t3098 = t3077 + t3093;
  t3114 = t409*t286*t312;
  t3122 = -1.*t286*t361*t438;
  t3125 = t3114 + t3122;
  t3132 = -1.*t339*t197;
  t3156 = t106*t3098;
  t3165 = t3132 + t3156;
  t3128 = t863*t3125;
  t3182 = t555*t3165;
  t3184 = t3128 + t3182;
  t3252 = t555*t3125;
  t3332 = -1.*t863*t3165;
  t3374 = t3252 + t3332;
  t3191 = -1.*t598*t3184;
  t3375 = t679*t3374;
  t3382 = t3191 + t3375;
  t3417 = t679*t3184;
  t3422 = t598*t3374;
  t3445 = t3417 + t3422;
  t3393 = t621*t3382;
  t3453 = t646*t3445;
  t3471 = t3393 + t3453;
  t3515 = t646*t3382;
  t3516 = -1.*t621*t3445;
  t3536 = t3515 + t3516;
  t1947 = t1944*t286*t106;
  t2084 = -1.*t339*t2077;
  t2088 = t1947 + t2084;
  t3707 = t430*t312;
  t3709 = -1.*t397*t438;
  t3744 = 0. + t3707 + t3709;
  t3749 = t312*t1398;
  t3766 = -1.*t1246*t438;
  t3768 = 0. + t3749 + t3766;
  t3826 = t312*t1881;
  t3871 = -1.*t1855*t438;
  t3876 = 0. + t3826 + t3871;
  t2414 = t649*t2391;
  t2443 = -1.*t605*t2431;
  t2448 = t2414 + t2443;
  t2500 = t605*t2391;
  t2518 = t649*t2431;
  t2527 = t2500 + t2518;
  t3745 = 0.0239*t3744;
  t3799 = -0.000036*t3768;
  t3902 = 0.000063*t3876;
  t3985 = t3745 + t3799 + t3902;
  t2566 = t286*t106*t1955;
  t2701 = -1.*t339*t2684;
  t2720 = t2566 + t2701;
  t4011 = 0.000063*t3744;
  t4045 = -0.00288*t3768;
  t4061 = 0.00113*t3876;
  t4062 = t4011 + t4045 + t4061;
  t2916 = t649*t2915;
  t2965 = -1.*t605*t2932;
  t2966 = t2916 + t2965;
  t4081 = -0.000036*t3744;
  t4089 = 0.0231*t3768;
  t4123 = -0.00288*t3876;
  t4140 = t4081 + t4089 + t4123;
  t2976 = t605*t2915;
  t2993 = t649*t2932;
  t3005 = t2976 + t2993;
  t3069 = -1.*t106*t197;
  t3104 = -1.*t339*t3098;
  t3105 = t3069 + t3104;
  t3486 = t649*t3471;
  t3590 = -1.*t605*t3536;
  t3621 = t3486 + t3590;
  t3626 = t605*t3471;
  t3633 = t649*t3536;
  t3634 = t3626 + t3633;
  t4353 = 0.0239*t187;
  t4366 = -0.000036*t1042;
  t4408 = 0.000063*t1686;
  t4413 = t4353 + t4366 + t4408;
  t4532 = 0.000063*t187;
  t4541 = -0.00288*t1042;
  t4546 = 0.00113*t1686;
  t4547 = t4532 + t4541 + t4546;
  t4580 = -0.000036*t187;
  t4658 = 0.0231*t1042;
  t4665 = -0.00288*t1686;
  t4676 = t4580 + t4658 + t4665;
  t4453 = t4413*t2088;
  t4549 = t4547*t2448;
  t4713 = t4676*t2527;
  t4810 = t4453 + t4549 + t4713;
  t4835 = t4413*t2720;
  t4839 = t4547*t2966;
  t4851 = t4676*t3005;
  t4887 = t4835 + t4839 + t4851;
  t4968 = t4413*t3105;
  t4978 = t4547*t3621;
  t4985 = t4676*t3634;
  t4992 = t4968 + t4978 + t4985;
  t4999 = -0.000036*t1122;
  t5012 = 0.000063*t1818;
  t5047 = t4999 + t5012;
  t5094 = -0.00288*t1122;
  t5124 = 0.00113*t1818;
  t5128 = t5094 + t5124;
  t5176 = 0.0231*t1122;
  t5200 = -0.00288*t1818;
  t5204 = t5176 + t5200;
  t5473 = 0.0239*t2088;
  t5493 = 0.000063*t2448;
  t5512 = -0.000036*t2527;
  t5527 = t5473 + t5493 + t5512;
  t5576 = 0.0239*t2720;
  t5609 = 0.000063*t2966;
  t5663 = -0.000036*t3005;
  t5666 = t5576 + t5609 + t5663;
  t5675 = 0.0239*t3105;
  t5688 = 0.000063*t3621;
  t5690 = -0.000036*t3634;
  t5712 = t5675 + t5688 + t5690;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1936*t2088 + t2124*t2448 + t2490*t2527;
  p_output1[10]=t1936*t2720 + t2124*t2966 + t2490*t3005;
  p_output1[11]=t1936*t3105 + t2124*t3621 + t2490*t3634;
  p_output1[12]=t2088*t3985 + t2448*t4062 + t2527*t4140;
  p_output1[13]=t2720*t3985 + t2966*t4062 + t3005*t4140;
  p_output1[14]=t3105*t3985 + t3621*t4062 + t3634*t4140;
  p_output1[15]=t4810;
  p_output1[16]=t4887;
  p_output1[17]=t4992;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t4810;
  p_output1[40]=t4887;
  p_output1[41]=t4992;
  p_output1[42]=t2088*t5047 + t2448*t5128 + t2527*t5204;
  p_output1[43]=t2720*t5047 + t2966*t5128 + t3005*t5204;
  p_output1[44]=t3105*t5047 + t3621*t5128 + t3634*t5204;
  p_output1[45]=t5527;
  p_output1[46]=t5666;
  p_output1[47]=t5712;
  p_output1[48]=t5527;
  p_output1[49]=t5666;
  p_output1[50]=t5712;
  p_output1[51]=t5527;
  p_output1[52]=t5666;
  p_output1[53]=t5712;
  p_output1[54]=t5527;
  p_output1[55]=t5666;
  p_output1[56]=t5712;
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

#include "Jdq_AMWorld_RightTarsus_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
