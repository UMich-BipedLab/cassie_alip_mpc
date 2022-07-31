/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:06 GMT-04:00
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
  double t31;
  double t368;
  double t493;
  double t326;
  double t529;
  double t712;
  double t741;
  double t785;
  double t803;
  double t856;
  double t873;
  double t878;
  double t886;
  double t1096;
  double t1249;
  double t1312;
  double t487;
  double t560;
  double t589;
  double t1810;
  double t214;
  double t2186;
  double t2187;
  double t2214;
  double t2257;
  double t2086;
  double t2376;
  double t2383;
  double t2115;
  double t2207;
  double t2271;
  double t2294;
  double t2582;
  double t2600;
  double t2621;
  double t3019;
  double t3020;
  double t3054;
  double t3160;
  double t3921;
  double t3940;
  double t2982;
  double t3039;
  double t3180;
  double t3221;
  double t1926;
  double t1928;
  double t1970;
  double t4924;
  double t4929;
  double t4935;
  double t1482;
  double t1567;
  double t1598;
  double t1849;
  double t1867;
  double t1896;
  double t2148;
  double t2300;
  double t2313;
  double t2334;
  double t2350;
  double t2358;
  double t2400;
  double t2540;
  double t2541;
  double t2561;
  double t2575;
  double t2690;
  double t2700;
  double t2822;
  double t2841;
  double t2856;
  double t2861;
  double t3011;
  double t3235;
  double t3239;
  double t3361;
  double t3362;
  double t3490;
  double t3659;
  double t3862;
  double t3885;
  double t3947;
  double t3998;
  double t4020;
  double t4048;
  double t4055;
  double t4454;
  double t4482;
  double t4610;
  double t4649;
  double t4667;
  double t4732;
  double t6496;
  double t6504;
  double t6523;
  double t6582;
  double t6596;
  double t6613;
  double t6616;
  double t6647;
  double t6659;
  double t7058;
  double t7077;
  double t6899;
  double t6934;
  double t6950;
  double t6966;
  double t7155;
  double t7160;
  double t7185;
  double t6700;
  double t6702;
  double t6723;
  double t6733;
  double t6789;
  double t6506;
  double t6660;
  double t7266;
  double t7307;
  double t7378;
  double t7409;
  double t7497;
  double t7516;
  double t6697;
  double t6831;
  double t6886;
  double t7206;
  double t7404;
  double t7518;
  double t7597;
  double t7682;
  double t7693;
  double t7699;
  double t7002;
  double t7144;
  double t7150;
  double t6494;
  double t8686;
  double t7790;
  double t7816;
  double t7827;
  double t7829;
  double t8505;
  double t8506;
  double t8527;
  double t8163;
  double t8187;
  double t8189;
  double t8236;
  double t6241;
  double t6330;
  double t6331;
  double t6014;
  double t6061;
  double t6080;
  double t9505;
  double t9507;
  double t9508;
  double t9495;
  double t5966;
  double t5969;
  double t5972;
  double t6339;
  double t6412;
  double t6425;
  double t9617;
  double t9620;
  double t9659;
  double t9664;
  double t9665;
  double t9666;
  double t9668;
  double t9671;
  double t9677;
  double t9678;
  double t9689;
  double t9691;
  double t9692;
  double t9694;
  double t9786;
  double t9788;
  double t9789;
  double t9790;
  double t9804;
  double t9805;
  double t9806;
  double t9836;
  double t9837;
  double t9840;
  double t9841;
  double t9843;
  double t5847;
  double t5867;
  double t5895;
  double t5922;
  double t5925;
  double t5949;
  double t6001;
  double t6105;
  double t6220;
  double t6225;
  double t6239;
  double t6337;
  double t6455;
  double t6480;
  double t6892;
  double t7152;
  double t7931;
  double t8029;
  double t8504;
  double t8592;
  double t9908;
  double t9909;
  double t9910;
  double t9302;
  double t9361;
  double t9917;
  double t9918;
  double t9920;
  double t9560;
  double t9575;
  double t9726;
  double t9700;
  double t9710;
  double t9961;
  double t9962;
  double t9965;
  double t9669;
  double t9630;
  double t9634;
  double t9975;
  double t9976;
  double t9977;
  double t9978;
  double t9762;
  double t9779;
  double t10003;
  double t10004;
  double t9851;
  double t9863;
  double t9864;
  double t10017;
  double t9802;
  double t9815;
  double t9817;
  double t10025;
  double t10026;
  double t10027;
  double t10028;
  double t9945;
  double t9951;
  double t9995;
  double t10121;
  double t10122;
  t31 = Cos(var1[3]);
  t368 = Cos(var1[5]);
  t493 = Sin(var1[13]);
  t326 = Cos(var1[13]);
  t529 = Sin(var1[5]);
  t712 = Sin(var1[4]);
  t741 = t368*t493;
  t785 = t326*t529;
  t803 = t741 + t785;
  t856 = t31*t712*t803;
  t873 = Sin(var1[3]);
  t878 = t326*t368;
  t886 = -1.*t493*t529;
  t1096 = t878 + t886;
  t1249 = -1.*t873*t1096;
  t1312 = t856 + t1249;
  t487 = -1.*t326*t368;
  t560 = t493*t529;
  t589 = 0. + t487 + t560;
  t1810 = Sin(var1[14]);
  t214 = Cos(var1[4]);
  t2186 = t493*t1810;
  t2187 = 0. + t2186;
  t2214 = t326*t1810;
  t2257 = 0. + t2214;
  t2086 = Cos(var1[14]);
  t2376 = t368*t2257;
  t2383 = -1.*t2187*t529;
  t2115 = 0. + t2086;
  t2207 = t368*t2187;
  t2271 = t2257*t529;
  t2294 = 0. + t2207 + t2271;
  t2582 = t2086*t368*t493;
  t2600 = t326*t2086*t529;
  t2621 = t2582 + t2600;
  t3019 = -1.*t2086*t493;
  t3020 = 0. + t3019;
  t3054 = -1.*t326*t2086;
  t3160 = 0. + t3054;
  t3921 = t3160*t368;
  t3940 = -1.*t3020*t529;
  t2982 = 0. + t1810;
  t3039 = t368*t3020;
  t3180 = t3160*t529;
  t3221 = 0. + t3039 + t3180;
  t1926 = t326*t368*t1810;
  t1928 = -1.*t493*t1810*t529;
  t1970 = t1926 + t1928;
  t4924 = t873*t712*t803;
  t4929 = t31*t1096;
  t4935 = t4924 + t4929;
  t1482 = 0. + t741 + t785;
  t1567 = t712*t589;
  t1598 = 0. + t1567;
  t1849 = -1.*t368*t493*t1810;
  t1867 = -1.*t326*t1810*t529;
  t1896 = t1849 + t1867;
  t2148 = -1.*t2115*t712;
  t2300 = t214*t2294;
  t2313 = t2148 + t2300;
  t2334 = -1.*t368*t2187;
  t2350 = -1.*t2257*t529;
  t2358 = t2334 + t2350;
  t2400 = t2376 + t2383;
  t2540 = t326*t2086*t368;
  t2541 = -1.*t2086*t493*t529;
  t2561 = t2540 + t2541;
  t2575 = -1.*t214*t1810;
  t2690 = t712*t2621;
  t2700 = t2575 + t2690;
  t2822 = 0. + t2376 + t2383;
  t2841 = t2115*t214;
  t2856 = t712*t2294;
  t2861 = 0. + t2841 + t2856;
  t3011 = -1.*t2982*t712;
  t3235 = t214*t3221;
  t3239 = t3011 + t3235;
  t3361 = -1.*t326*t2086*t368;
  t3362 = t2086*t493*t529;
  t3490 = t3361 + t3362;
  t3659 = -1.*t368*t3020;
  t3862 = -1.*t3160*t529;
  t3885 = t3659 + t3862;
  t3947 = t3921 + t3940;
  t3998 = 0. + t3921 + t3940;
  t4020 = t214*t2982;
  t4048 = t712*t3221;
  t4055 = 0. + t4020 + t4048;
  t4454 = t2086*t214;
  t4482 = t368*t493*t1810;
  t4610 = t326*t1810*t529;
  t4649 = t4482 + t4610;
  t4667 = t712*t4649;
  t4732 = t4454 + t4667;
  t6496 = -1.*t326;
  t6504 = 1. + t6496;
  t6523 = -1.*t2086;
  t6582 = 1. + t6523;
  t6596 = -0.135*t6582;
  t6613 = -0.135*t2086;
  t6616 = 0. + t6596 + t6613;
  t6647 = t326*t6616;
  t6659 = 0.09*t493;
  t7058 = 0.135*t326;
  t7077 = t7058 + t6647 + t6659;
  t6899 = 0.09*t326;
  t6934 = -0.135*t493;
  t6950 = -1.*t6616*t493;
  t6966 = t6899 + t6934 + t6950;
  t7155 = t368*t7077;
  t7160 = t6966*t529;
  t7185 = t7155 + t7160;
  t6700 = 0.07996*t6504;
  t6702 = -0.01004*t326;
  t6723 = 0.135*t493;
  t6733 = t6616*t493;
  t6789 = 0. + t6700 + t6702 + t6723 + t6733;
  t6506 = -0.135*t6504;
  t6660 = 0. + t6506 + t6647 + t6659;
  t7266 = -0.08055*t6582;
  t7307 = -0.08055*t2086;
  t7378 = 0. + t7266 + t7307;
  t7409 = t368*t6789;
  t7497 = t6660*t529;
  t7516 = 0. + t7409 + t7497;
  t6697 = t368*t6660;
  t6831 = -1.*t6789*t529;
  t6886 = 0. + t6697 + t6831;
  t7206 = 0. + t3011 + t3235;
  t7404 = -1.*t7378*t712;
  t7518 = t214*t7516;
  t7597 = 0. + t7404 + t7518;
  t7682 = t7378*t214;
  t7693 = t712*t7516;
  t7699 = 0. + t7682 + t7693;
  t7002 = t368*t6966;
  t7144 = -1.*t7077*t529;
  t7150 = t7002 + t7144;
  t6494 = 0. + t2148 + t2300;
  t8686 = t6697 + t6831;
  t7790 = t6886*t3998;
  t7816 = t7206*t7597;
  t7827 = t4055*t7699;
  t7829 = t7790 + t7816 + t7827;
  t8505 = -1.*t368*t6789;
  t8506 = -1.*t6660*t529;
  t8527 = t8505 + t8506;
  t8163 = -1.*t6886*t2822;
  t8187 = -1.*t7597*t6494;
  t8189 = -1.*t7699*t2861;
  t8236 = t8163 + t8187 + t8189;
  t6241 = -1.*t214*t2982;
  t6330 = -1.*t712*t3221;
  t6331 = t6241 + t6330;
  t6014 = -1.*t2115*t214;
  t6061 = -1.*t712*t2294;
  t6080 = t6014 + t6061;
  t9505 = -1.*t7378*t214;
  t9507 = -1.*t712*t7516;
  t9508 = t9505 + t9507;
  t9495 = t7404 + t7518;
  t5966 = t1810*t712;
  t5969 = t214*t2621;
  t5972 = t5966 + t5969;
  t6339 = -1.*t2086*t712;
  t6412 = t214*t4649;
  t6425 = t6339 + t6412;
  t9617 = t214*t589;
  t9620 = 0. + t9617;
  t9659 = -1.*t6886*t3998;
  t9664 = -1.*t7206*t7597;
  t9665 = -1.*t4055*t7699;
  t9666 = t9659 + t9664 + t9665;
  t9668 = t214*t803*t9666;
  t9671 = t1096*t6886;
  t9677 = t214*t803*t7597;
  t9678 = t712*t803*t7699;
  t9689 = t1482*t6886;
  t9691 = t7597*t9620;
  t9692 = t7699*t1598;
  t9694 = t9689 + t9691 + t9692;
  t9786 = -1.*t1482*t6886;
  t9788 = -1.*t7597*t9620;
  t9789 = -1.*t7699*t1598;
  t9790 = t9786 + t9788 + t9789;
  t9804 = -1.*t1096*t6886;
  t9805 = -1.*t214*t803*t7597;
  t9806 = -1.*t712*t803*t7699;
  t9836 = t6886*t2822;
  t9837 = t7597*t6494;
  t9840 = t7699*t2861;
  t9841 = t9836 + t9837 + t9840;
  t9843 = t214*t803*t9841;
  t5847 = var2[13]*t214*t803;
  t5867 = var2[5]*t214*t803;
  t5895 = -1.*var2[4]*t712*t589;
  t5922 = t5847 + t5867 + t5895;
  t5925 = var2[13]*t214*t1970;
  t5949 = var2[5]*t214*t2400;
  t6001 = var2[14]*t5972;
  t6105 = var2[4]*t6080;
  t6220 = t5925 + t5949 + t6001 + t6105;
  t6225 = var2[13]*t214*t3490;
  t6239 = var2[5]*t214*t3947;
  t6337 = var2[4]*t6331;
  t6455 = var2[14]*t6425;
  t6480 = t6225 + t6239 + t6337 + t6455;
  t6892 = t2621*t6886;
  t7152 = t7150*t3998;
  t7931 = -1.*t6886*t1896;
  t8029 = -1.*t7150*t2822;
  t8504 = t3885*t6886;
  t8592 = t8527*t3998;
  t9908 = t7378*t2982;
  t9909 = t3221*t7516;
  t9910 = t9908 + t9909 + t7790;
  t9302 = -1.*t6886*t2358;
  t9361 = -1.*t8527*t2822;
  t9917 = -1.*t7378*t2115;
  t9918 = -1.*t7516*t2294;
  t9920 = t9917 + t9918 + t8163;
  t9560 = -1.*t2561*t6886;
  t9575 = t6886*t1970;
  t9726 = t1482*t8527;
  t9700 = -1.*t3885*t6886;
  t9710 = -1.*t8527*t3998;
  t9961 = t7516*t589;
  t9962 = 0. + t9961 + t9689;
  t9965 = t803*t7516;
  t9669 = t1482*t7150;
  t9630 = -1.*t2621*t6886;
  t9634 = -1.*t7150*t3998;
  t9975 = -1.*t7378*t2982;
  t9976 = -1.*t3221*t7516;
  t9977 = t9975 + t9976 + t9659;
  t9978 = t1096*t9977;
  t9762 = -1.*t6886*t1970;
  t9779 = t2561*t6886;
  t10003 = -1.*t7516*t589;
  t10004 = 0. + t10003 + t9786;
  t9851 = -1.*t1482*t8527;
  t9863 = t6886*t2358;
  t9864 = t8527*t2822;
  t10017 = -1.*t803*t7516;
  t9802 = -1.*t1482*t7150;
  t9815 = t6886*t1896;
  t9817 = t7150*t2822;
  t10025 = t7378*t2115;
  t10026 = t7516*t2294;
  t10027 = t10025 + t10026 + t9836;
  t10028 = t1096*t10027;
  t9945 = t7378*t1810;
  t9951 = t7378*t2086;
  t9995 = -1.*t7378*t2086;
  t10121 = -1.*var2[14]*t1810;
  t10122 = var2[14]*t2086;
  p_output1[0]=(-1.*t1482*t31 - 1.*t1598*t873)*var2[3] + t214*t31*t589*var2[4] + t1312*var2[5] + t1312*var2[13];
  p_output1[1]=(-1.*t2822*t31 - 1.*t2861*t873)*var2[3] + t2313*t31*var2[4] + (t2400*t31*t712 - 1.*t2358*t873)*var2[5] + (t1970*t31*t712 - 1.*t1896*t873)*var2[13] + (t2700*t31 - 1.*t2561*t873)*var2[14];
  p_output1[2]=(-1.*t31*t3998 - 1.*t4055*t873)*var2[3] + t31*t3239*var2[4] + (t31*t3947*t712 - 1.*t3885*t873)*var2[5] + (t31*t3490*t712 - 1.*t2621*t873)*var2[13] + (t31*t4732 - 1.*t1970*t873)*var2[14];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(t1598*t31 - 1.*t1482*t873)*var2[3] + t214*t589*t873*var2[4] + t4935*var2[5] + t4935*var2[13];
  p_output1[7]=(t2861*t31 - 1.*t2822*t873)*var2[3] + t2313*t873*var2[4] + (t2358*t31 + t2400*t712*t873)*var2[5] + (t1896*t31 + t1970*t712*t873)*var2[13] + (t2561*t31 + t2700*t873)*var2[14];
  p_output1[8]=(t31*t4055 - 1.*t3998*t873)*var2[3] + t3239*t873*var2[4] + (t31*t3885 + t3947*t712*t873)*var2[5] + (t2621*t31 + t3490*t712*t873)*var2[13] + (t1970*t31 + t4732*t873)*var2[14];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5922;
  p_output1[13]=t6220;
  p_output1[14]=t6480;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t6080*t7829 + t6331*t8236 + t7206*(-1.*t6080*t7597 - 1.*t2313*t7699 - 1.*t2861*t9495 - 1.*t6494*t9508) + t6494*(t6331*t7597 + t3239*t7699 + t4055*t9495 + t7206*t9508))*var2[4] + (t214*t2400*t7829 + t214*t3947*t8236 + t6494*(t214*t3947*t7597 + t3947*t712*t7699 + t8504 + t8592 + t4055*t712*t8686 + t214*t7206*t8686) + t7206*(-1.*t214*t2400*t7597 - 1.*t2400*t712*t7699 - 1.*t214*t6494*t8686 - 1.*t2861*t712*t8686 + t9302 + t9361))*var2[5] + (t6494*(t6892 + t7152 + t4055*t712*t7185 + t214*t7185*t7206 + t214*t3490*t7597 + t3490*t712*t7699) + t1970*t214*t7829 + t7206*(-1.*t214*t6494*t7185 - 1.*t2861*t712*t7185 - 1.*t1970*t214*t7597 - 1.*t1970*t712*t7699 + t7931 + t8029) + t214*t3490*t8236)*var2[13] + (t5972*t7829 + t6425*t8236 + t7206*(0. - 1.*t5972*t7597 - 1.*t2700*t7699 + t9560) + t6494*(0. + t6425*t7597 + t4732*t7699 + t9575))*var2[14];
  p_output1[19]=((-1.*t6331*t7597 - 1.*t3239*t7699 - 1.*t4055*t9495 - 1.*t7206*t9508)*t9620 + t7206*(-1.*t589*t712*t7597 + t214*t589*t7699 + t1598*t9495 + t9508*t9620) - 1.*t589*t712*t9666 + t6331*t9694)*var2[4] + (t9668 + t214*t3947*t9694 + t9620*(-1.*t214*t3947*t7597 - 1.*t3947*t712*t7699 - 1.*t4055*t712*t8686 - 1.*t214*t7206*t8686 + t9700 + t9710) + t7206*(t1598*t712*t8686 + t214*t8686*t9620 + t9671 + t9677 + t9678 + t9726))*var2[5] + (t9620*(-1.*t4055*t712*t7185 - 1.*t214*t7185*t7206 - 1.*t214*t3490*t7597 - 1.*t3490*t712*t7699 + t9630 + t9634) + t9668 + t7206*(t1598*t712*t7185 + t214*t7185*t9620 + t9669 + t9671 + t9677 + t9678) + t214*t3490*t9694)*var2[13] + (0. + t6425*t9694 + t9620*(0. - 1.*t6425*t7597 - 1.*t4732*t7699 + t9762))*var2[14];
  p_output1[20]=((t6080*t7597 + t2313*t7699 + t2861*t9495 + t6494*t9508)*t9620 + t6494*(t589*t712*t7597 - 1.*t214*t589*t7699 - 1.*t1598*t9495 - 1.*t9508*t9620) + t6080*t9790 - 1.*t589*t712*t9841)*var2[4] + (t214*t2400*t9790 + t9843 + t6494*(-1.*t1598*t712*t8686 - 1.*t214*t8686*t9620 + t9804 + t9805 + t9806 + t9851) + t9620*(t214*t2400*t7597 + t2400*t712*t7699 + t214*t6494*t8686 + t2861*t712*t8686 + t9863 + t9864))*var2[5] + (t1970*t214*t9790 + t6494*(-1.*t1598*t712*t7185 - 1.*t214*t7185*t9620 + t9802 + t9804 + t9805 + t9806) + t9620*(t214*t6494*t7185 + t2861*t712*t7185 + t1970*t214*t7597 + t1970*t712*t7699 + t9815 + t9817) + t9843)*var2[13] + (0. + t9620*(0. + t5972*t7597 + t2700*t7699 + t9779) + t5972*t9790)*var2[14];
  p_output1[21]=t5922;
  p_output1[22]=t6220;
  p_output1[23]=t6480;
  p_output1[24]=(t2822*(t3947*t7516 + t8504 + t8592 + t3221*t8686) + t3998*(-1.*t2400*t7516 - 1.*t2294*t8686 + t9302 + t9361) + t2358*t9910 + t3885*t9920)*var2[5] + (t2822*(t6892 + t7152 + t3221*t7185 + t3490*t7516) + t3998*(-1.*t2294*t7185 - 1.*t1970*t7516 + t7931 + t8029) + t1896*t9910 + t2621*t9920)*var2[13] + (t2561*t9910 + t1970*t9920 + t3998*(0. - 1.*t2621*t7516 + t9560 + t9945) + t2822*(0. + t4649*t7516 + t9575 + t9951))*var2[14];
  p_output1[25]=(t1482*(-1.*t3947*t7516 - 1.*t3221*t8686 + t9700 + t9710) + t3885*t9962 + t3998*(t589*t8686 + t9671 + t9726 + t9965) + t9978)*var2[5] + (t1482*(-1.*t3221*t7185 - 1.*t3490*t7516 + t9630 + t9634) + t2621*t9962 + t3998*(t589*t7185 + t9669 + t9671 + t9965) + t9978)*var2[13] + (0. + t1970*t9962 + t1482*(0. - 1.*t4649*t7516 + t9762 + t9995))*var2[14];
  p_output1[26]=(t10028 + t10004*t2358 + t2822*(t10017 - 1.*t589*t8686 + t9804 + t9851) + t1482*(t2400*t7516 + t2294*t8686 + t9863 + t9864))*var2[5] + (t10028 + t10004*t1896 + t2822*(t10017 - 1.*t589*t7185 + t9802 + t9804) + t1482*(t2294*t7185 + t1970*t7516 + t9815 + t9817))*var2[13] + (0. + t10004*t2561 + t1482*(0. - 1.*t1810*t7378 + t2621*t7516 + t9779))*var2[14];
  p_output1[27]=t1096*var2[5] + t1096*var2[13];
  p_output1[28]=t2358*var2[5] + t1896*var2[13] + t2561*var2[14];
  p_output1[29]=t3885*var2[5] + t2621*var2[13] + t1970*var2[14];
  p_output1[30]=(t2982*(t1810*t493*t6660 - 1.*t1810*t326*t6789 - 1.*t2257*t6966 - 1.*t2187*t7077) + t2115*(t2086*t493*t6660 - 1.*t2086*t326*t6789 + t3160*t6966 + t3020*t7077))*var2[13] + (-1.*t1810*(t3160*t6660 + t3020*t6789 + t9908) + t2086*(-1.*t2257*t6660 - 1.*t2187*t6789 + t9917) + t2982*(0. - 1.*t2086*t326*t6660 - 1.*t2086*t493*t6789 + t9945) + t2115*(0. + t1810*t326*t6660 + t1810*t493*t6789 + t9951))*var2[14];
  p_output1[31]=t2982*(t326*t6660 + t493*t6789 + t493*t6966 - 1.*t326*t7077)*var2[13] + (0. + t2086*(0. + t493*t6660 - 1.*t326*t6789))*var2[14];
  p_output1[32]=t2115*(-1.*t326*t6660 - 1.*t493*t6789 - 1.*t493*t6966 + t326*t7077)*var2[13] + (0. - 1.*t1810*(0. - 1.*t493*t6660 + t326*t6789))*var2[14];
  p_output1[33]=0;
  p_output1[34]=t10121;
  p_output1[35]=t10122;
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
  p_output1[78]=(t2086*(0. + t1810*t6616 + t9951) + t2086*(0. - 1.*t1810*t6616 + t9995))*var2[14];
  p_output1[79]=0.09*t2086*var2[14];
  p_output1[80]=0.09*t1810*var2[14];
  p_output1[81]=0;
  p_output1[82]=t10121;
  p_output1[83]=t10122;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_RightRotationJoint_mex.hh"

namespace SymExpression
{

void dJb_RightRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
