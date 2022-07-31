/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:06 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t78;
  double t98;
  double t125;
  double t91;
  double t101;
  double t110;
  double t70;
  double t129;
  double t131;
  double t148;
  double t160;
  double t115;
  double t149;
  double t154;
  double t68;
  double t161;
  double t168;
  double t172;
  double t192;
  double t158;
  double t184;
  double t185;
  double t60;
  double t207;
  double t208;
  double t209;
  double t231;
  double t189;
  double t212;
  double t215;
  double t59;
  double t234;
  double t238;
  double t240;
  double t271;
  double t44;
  double t218;
  double t247;
  double t253;
  double t257;
  double t261;
  double t40;
  double t273;
  double t275;
  double t276;
  double t38;
  double t290;
  double t293;
  double t299;
  double t266;
  double t279;
  double t283;
  double t302;
  double t16;
  double t321;
  double t364;
  double t319;
  double t320;
  double t331;
  double t376;
  double t377;
  double t367;
  double t369;
  double t427;
  double t443;
  double t446;
  double t423;
  double t448;
  double t452;
  double t460;
  double t466;
  double t455;
  double t470;
  double t471;
  double t482;
  double t486;
  double t500;
  double t481;
  double t501;
  double t502;
  double t506;
  double t513;
  double t518;
  double t504;
  double t523;
  double t527;
  double t533;
  double t537;
  double t543;
  double t544;
  double t546;
  double t591;
  double t592;
  double t599;
  double t539;
  double t577;
  double t584;
  double t287;
  double t308;
  double t311;
  double t323;
  double t324;
  double t326;
  double t345;
  double t350;
  double t352;
  double t357;
  double t359;
  double t374;
  double t379;
  double t381;
  double t388;
  double t392;
  double t393;
  double t398;
  double t400;
  double t404;
  double t406;
  double t408;
  double t590;
  double t600;
  double t606;
  double t608;
  double t612;
  double t615;
  double t616;
  double t619;
  double t621;
  double t622;
  double t627;
  double t685;
  double t689;
  double t693;
  double t814;
  double t817;
  double t804;
  double t807;
  double t826;
  double t830;
  double t831;
  double t833;
  double t851;
  double t857;
  double t866;
  double t867;
  double t794;
  double t796;
  double t809;
  double t811;
  double t836;
  double t870;
  double t874;
  double t880;
  double t882;
  double t897;
  double t898;
  double t901;
  double t768;
  double t770;
  double t797;
  double t798;
  double t877;
  double t902;
  double t907;
  double t920;
  double t921;
  double t925;
  double t938;
  double t939;
  double t734;
  double t748;
  double t771;
  double t776;
  double t910;
  double t945;
  double t946;
  double t954;
  double t955;
  double t959;
  double t962;
  double t963;
  double t694;
  double t697;
  double t710;
  double t712;
  double t728;
  double t730;
  double t733;
  double t757;
  double t759;
  double t951;
  double t968;
  double t969;
  double t971;
  double t972;
  double t980;
  double t981;
  double t983;
  double t985;
  double t986;
  double t676;
  double t680;
  double t684;
  double t999;
  double t1002;
  double t1009;
  double t1012;
  double t1013;
  double t698;
  double t708;
  double t977;
  double t993;
  double t995;
  double t1039;
  double t1040;
  double t1042;
  double t1048;
  double t1052;
  double t1053;
  double t1054;
  double t997;
  double t1019;
  double t1023;
  double t1051;
  double t1059;
  double t1060;
  double t1062;
  double t1066;
  double t1068;
  double t663;
  double t673;
  double t675;
  double t1026;
  double t1083;
  double t1104;
  double t1131;
  double t1152;
  double t1170;
  double t1196;
  double t1189;
  double t1242;
  double t1223;
  double t1273;
  double t1257;
  double t1448;
  double t1437;
  t78 = Cos(var1[19]);
  t98 = Sin(var1[19]);
  t125 = Cos(var1[18]);
  t91 = 0.642788*t78;
  t101 = -0.766044*t98;
  t110 = t91 + t101;
  t70 = Sin(var1[18]);
  t129 = 0.766044*t78;
  t131 = 0.642788*t98;
  t148 = t129 + t131;
  t160 = Cos(var1[17]);
  t115 = t70*t110;
  t149 = t125*t148;
  t154 = 0. + t115 + t149;
  t68 = Sin(var1[17]);
  t161 = t125*t110;
  t168 = -1.*t70*t148;
  t172 = 0. + t161 + t168;
  t192 = Cos(var1[16]);
  t158 = -1.*t68*t154;
  t184 = t160*t172;
  t185 = 0. + t158 + t184;
  t60 = Sin(var1[16]);
  t207 = t160*t154;
  t208 = t68*t172;
  t209 = 0. + t207 + t208;
  t231 = Cos(var1[15]);
  t189 = t60*t185;
  t212 = t192*t209;
  t215 = 0. + t189 + t212;
  t59 = Sin(var1[15]);
  t234 = t192*t185;
  t238 = -1.*t60*t209;
  t240 = 0. + t234 + t238;
  t271 = Sin(var1[13]);
  t44 = Sin(var1[14]);
  t218 = -1.*t59*t215;
  t247 = t231*t240;
  t253 = 0. + t218 + t247;
  t257 = t44*t253;
  t261 = 0. + t257;
  t40 = Cos(var1[13]);
  t273 = t231*t215;
  t275 = t59*t240;
  t276 = 0. + t273 + t275;
  t38 = Cos(var1[5]);
  t290 = t271*t261;
  t293 = t40*t276;
  t299 = 0. + t290 + t293;
  t266 = t40*t261;
  t279 = -1.*t271*t276;
  t283 = 0. + t266 + t279;
  t302 = Sin(var1[5]);
  t16 = Sin(var1[3]);
  t321 = Cos(var1[14]);
  t364 = 0. + t321;
  t319 = Cos(var1[3]);
  t320 = Cos(var1[4]);
  t331 = Sin(var1[4]);
  t376 = t364*t271;
  t377 = 0. + t376;
  t367 = t40*t364;
  t369 = 0. + t367;
  t427 = -0.766044*t78;
  t443 = -0.642788*t98;
  t446 = t427 + t443;
  t423 = -1.*t70*t110;
  t448 = t125*t446;
  t452 = 0. + t423 + t448;
  t460 = t70*t446;
  t466 = 0. + t161 + t460;
  t455 = t68*t452;
  t470 = t160*t466;
  t471 = 0. + t455 + t470;
  t482 = t160*t452;
  t486 = -1.*t68*t466;
  t500 = 0. + t482 + t486;
  t481 = -1.*t60*t471;
  t501 = t192*t500;
  t502 = 0. + t481 + t501;
  t506 = t192*t471;
  t513 = t60*t500;
  t518 = 0. + t506 + t513;
  t504 = t231*t502;
  t523 = -1.*t59*t518;
  t527 = 0. + t504 + t523;
  t533 = t44*t527;
  t537 = 0. + t533;
  t543 = t59*t502;
  t544 = t231*t518;
  t546 = 0. + t543 + t544;
  t591 = t271*t537;
  t592 = t40*t546;
  t599 = 0. + t591 + t592;
  t539 = t40*t537;
  t577 = -1.*t271*t546;
  t584 = 0. + t539 + t577;
  t287 = t38*t283;
  t308 = -1.*t299*t302;
  t311 = 0. + t287 + t308;
  t323 = t321*t253;
  t324 = 0. + t323;
  t326 = t320*t324;
  t345 = t38*t299;
  t350 = t283*t302;
  t352 = 0. + t345 + t350;
  t357 = t331*t352;
  t359 = 0. + t326 + t357;
  t374 = t369*t38;
  t379 = -1.*t377*t302;
  t381 = 0. + t374 + t379;
  t388 = -1.*t44;
  t392 = 0. + t388;
  t393 = t320*t392;
  t398 = t38*t377;
  t400 = t369*t302;
  t404 = 0. + t398 + t400;
  t406 = t331*t404;
  t408 = 0. + t393 + t406;
  t590 = t38*t584;
  t600 = -1.*t599*t302;
  t606 = 0. + t590 + t600;
  t608 = t321*t527;
  t612 = 0. + t608;
  t615 = t320*t612;
  t616 = t38*t599;
  t619 = t584*t302;
  t621 = 0. + t616 + t619;
  t622 = t331*t621;
  t627 = 0. + t615 + t622;
  t685 = -1.*t612*t331;
  t689 = t320*t621;
  t693 = 0. + t685 + t689;
  t814 = -1.*t78;
  t817 = 1. + t814;
  t804 = -1.*t125;
  t807 = 1. + t804;
  t826 = -0.05315*t817;
  t830 = 0.046027*t78;
  t831 = -0.053841999999999945*t98;
  t833 = 0. + t826 + t830 + t831;
  t851 = -1.03354*t817;
  t857 = -0.979698*t78;
  t866 = 0.099177*t98;
  t867 = 0. + t851 + t857 + t866;
  t794 = -1.*t160;
  t796 = 1. + t794;
  t809 = -0.62554*t807;
  t811 = 0.01315*t70;
  t836 = t70*t833;
  t870 = t125*t867;
  t874 = 0. + t809 + t811 + t836 + t870;
  t880 = -0.01315*t807;
  t882 = -0.62554*t70;
  t897 = t125*t833;
  t898 = -1.*t70*t867;
  t901 = 0. + t880 + t882 + t897 + t898;
  t768 = -1.*t192;
  t770 = 1. + t768;
  t797 = -0.03315*t796;
  t798 = -0.19074*t68;
  t877 = -1.*t68*t874;
  t902 = t160*t901;
  t907 = 0. + t797 + t798 + t877 + t902;
  t920 = -0.19074*t796;
  t921 = 0.03315*t68;
  t925 = t160*t874;
  t938 = t68*t901;
  t939 = 0. + t920 + t921 + t925 + t938;
  t734 = -1.*t231;
  t748 = 1. + t734;
  t771 = -0.13004*t770;
  t776 = 0.08055*t60;
  t910 = t60*t907;
  t945 = t192*t939;
  t946 = 0. + t771 + t776 + t910 + t945;
  t954 = -0.08055*t770;
  t955 = -0.13004*t60;
  t959 = t192*t907;
  t962 = -1.*t60*t939;
  t963 = 0. + t954 + t955 + t959 + t962;
  t694 = -1.*t40;
  t697 = 1. + t694;
  t710 = -1.*t321;
  t712 = 1. + t710;
  t728 = -0.135*t712;
  t730 = -0.1305*t321;
  t733 = 0.08055*t44;
  t757 = -0.08055*t748;
  t759 = -0.01004*t59;
  t951 = -1.*t59*t946;
  t968 = t231*t963;
  t969 = 0. + t757 + t759 + t951 + t968;
  t971 = t44*t969;
  t972 = 0. + t728 + t730 + t733 + t971;
  t980 = -0.01004*t748;
  t981 = 0.08055*t59;
  t983 = t231*t946;
  t985 = t59*t963;
  t986 = 0. + t980 + t981 + t983 + t985;
  t676 = -1.*t392*t331;
  t680 = t320*t404;
  t684 = 0. + t676 + t680;
  t999 = 0.07996*t697;
  t1002 = 0.135*t271;
  t1009 = t271*t972;
  t1012 = t40*t986;
  t1013 = 0. + t999 + t1002 + t1009 + t1012;
  t698 = -0.135*t697;
  t708 = 0.07996*t271;
  t977 = t40*t972;
  t993 = -1.*t271*t986;
  t995 = 0. + t698 + t708 + t977 + t993;
  t1039 = -0.08055*t712;
  t1040 = -0.004500000000000004*t44;
  t1042 = t321*t969;
  t1048 = 0. + t1039 + t1040 + t1042;
  t1052 = t38*t1013;
  t1053 = t995*t302;
  t1054 = 0. + t1052 + t1053;
  t997 = t38*t995;
  t1019 = -1.*t1013*t302;
  t1023 = 0. + t997 + t1019;
  t1051 = -1.*t1048*t331;
  t1059 = t320*t1054;
  t1060 = 0. + t1051 + t1059;
  t1062 = t320*t1048;
  t1066 = t331*t1054;
  t1068 = 0. + t1062 + t1066;
  t663 = -1.*t324*t331;
  t673 = t320*t352;
  t675 = 0. + t663 + t673;
  t1026 = -1.*t381*t1023;
  t1083 = t606*t1023;
  t1104 = -1.*t606*t1023;
  t1131 = t1023*t311;
  t1152 = t381*t1023;
  t1170 = -1.*t1023*t311;
  t1196 = t612*t1048;
  t1189 = -1.*t392*t1048;
  t1242 = t1048*t324;
  t1223 = -1.*t612*t1048;
  t1273 = -1.*t1048*t324;
  t1257 = t392*t1048;
  t1448 = t986*t276;
  t1437 = -1.*t546*t986;
  p_output1[0]=0. - 1.*t16*t311 + t319*t359;
  p_output1[1]=0. - 1.*t16*t381 + t319*t408;
  p_output1[2]=0. - 1.*t16*t606 + t319*t627;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t311*t319 + t16*t359;
  p_output1[7]=0. + t319*t381 + t16*t408;
  p_output1[8]=0. + t319*t606 + t16*t627;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t675;
  p_output1[13]=t684;
  p_output1[14]=t693;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1026 - 1.*t1068*t408 - 1.*t1060*t684)*t693 + t684*(t1083 + t1068*t627 + t1060*t693);
  p_output1[19]=(t1131 + t1068*t359 + t1060*t675)*t693 + t675*(t1104 - 1.*t1068*t627 - 1.*t1060*t693);
  p_output1[20]=(t1170 - 1.*t1068*t359 - 1.*t1060*t675)*t684 + t675*(t1152 + t1068*t408 + t1060*t684);
  p_output1[21]=t675;
  p_output1[22]=t684;
  p_output1[23]=t693;
  p_output1[24]=(t1026 + t1189 - 1.*t1054*t404)*t606 + t381*(t1083 + t1196 + t1054*t621);
  p_output1[25]=(t1131 + t1242 + t1054*t352)*t606 + t311*(t1104 + t1223 - 1.*t1054*t621);
  p_output1[26]=(t1170 + t1273 - 1.*t1054*t352)*t381 + t311*(t1152 + t1257 + t1054*t404);
  p_output1[27]=t311;
  p_output1[28]=t381;
  p_output1[29]=t606;
  p_output1[30]=t612*(t1189 - 1.*t1013*t377 - 1.*t369*t995) + t392*(t1196 + t1013*t599 + t584*t995);
  p_output1[31]=t612*(t1242 + t1013*t299 + t283*t995) + t324*(t1223 - 1.*t1013*t599 - 1.*t584*t995);
  p_output1[32]=t392*(t1273 - 1.*t1013*t299 - 1.*t283*t995) + t324*(t1257 + t1013*t377 + t369*t995);
  p_output1[33]=t324;
  p_output1[34]=t392;
  p_output1[35]=t612;
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
  p_output1[78]=0.07996*t261 + 0.135*t276 + t612*(0. + t1189 - 1.*t364*t972) + t392*(t1196 + t537*t972 + t546*t986);
  p_output1[79]=0. + 0.07996*t364 + t612*(t1242 + t1448 + t261*t972) + t324*(t1223 + t1437 - 1.*t537*t972);
  p_output1[80]=0.07996*t537 + 0.135*t546 + t324*(0. + t1257 + t364*t972) + t392*(t1273 - 1.*t261*t972 - 1.*t276*t986);
  p_output1[81]=t324;
  p_output1[82]=t392;
  p_output1[83]=t612;
  p_output1[84]=0. - 0.135*t253 + 0.1305*t546;
  p_output1[85]=0.08055 + t546*(0. + t1448 + t253*t969) + t276*(0. + t1437 - 1.*t527*t969);
  p_output1[86]=0. - 0.1305*t276 - 0.135*t527;
  p_output1[87]=t276;
  p_output1[88]=0.;
  p_output1[89]=t546;
  p_output1[90]=0. + 0.08055*t215 - 0.01004*t240 - 1.*t518*t946 - 1.*t502*t963;
  p_output1[91]=0.;
  p_output1[92]=0. - 0.01004*t502 + 0.08055*t518 + t215*t946 + t240*t963;
  p_output1[93]=0.;
  p_output1[94]=-1.;
  p_output1[95]=0.;
  p_output1[96]=0. - 0.13004*t185 + 0.08055*t209 - 1.*t500*t907 - 1.*t471*t939;
  p_output1[97]=0.;
  p_output1[98]=0. + 0.08055*t471 - 0.13004*t500 + t185*t907 + t209*t939;
  p_output1[99]=0.;
  p_output1[100]=-1.;
  p_output1[101]=0.;
  p_output1[102]=0. + 0.03315*t154 - 0.19074*t172 - 1.*t466*t874 - 1.*t452*t901;
  p_output1[103]=0.;
  p_output1[104]=0. - 0.19074*t452 + 0.03315*t466 + t154*t874 + t172*t901;
  p_output1[105]=0.;
  p_output1[106]=-1.;
  p_output1[107]=0.;
  p_output1[108]=0. - 0.62554*t110 + 0.01315*t148 - 1.*t446*t833 - 1.*t110*t867;
  p_output1[109]=0.;
  p_output1[110]=0. + 0.01315*t110 - 0.62554*t446 + t110*t833 + t148*t867;
  p_output1[111]=0.;
  p_output1[112]=-1.;
  p_output1[113]=0.;
  p_output1[114]=0.041364954292000045;
  p_output1[115]=0.;
  p_output1[116]=0.1049951265239999;
  p_output1[117]=0.;
  p_output1[118]=-1.;
  p_output1[119]=0.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void Jb_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
