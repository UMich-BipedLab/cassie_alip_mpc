/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:49 GMT-04:00
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
  double t166;
  double t139;
  double t145;
  double t171;
  double t208;
  double t151;
  double t181;
  double t183;
  double t127;
  double t223;
  double t225;
  double t231;
  double t255;
  double t196;
  double t234;
  double t248;
  double t109;
  double t258;
  double t263;
  double t266;
  double t309;
  double t252;
  double t270;
  double t300;
  double t104;
  double t321;
  double t322;
  double t332;
  double t358;
  double t306;
  double t348;
  double t349;
  double t50;
  double t365;
  double t366;
  double t367;
  double t379;
  double t380;
  double t390;
  double t37;
  double t409;
  double t425;
  double t438;
  double t355;
  double t394;
  double t404;
  double t448;
  double t21;
  double t540;
  double t542;
  double t562;
  double t530;
  double t569;
  double t570;
  double t577;
  double t591;
  double t576;
  double t598;
  double t602;
  double t624;
  double t634;
  double t639;
  double t607;
  double t641;
  double t644;
  double t664;
  double t667;
  double t675;
  double t680;
  double t682;
  double t464;
  double t466;
  double t467;
  double t481;
  double t693;
  double t695;
  double t705;
  double t661;
  double t687;
  double t689;
  double t776;
  double t778;
  double t795;
  double t796;
  double t785;
  double t787;
  double t407;
  double t450;
  double t451;
  double t469;
  double t474;
  double t477;
  double t484;
  double t499;
  double t500;
  double t512;
  double t514;
  double t690;
  double t710;
  double t719;
  double t736;
  double t741;
  double t751;
  double t756;
  double t762;
  double t763;
  double t768;
  double t771;
  double t793;
  double t819;
  double t826;
  double t853;
  double t859;
  double t860;
  double t876;
  double t883;
  double t886;
  double t900;
  double t946;
  double t949;
  double t951;
  double t1068;
  double t1074;
  double t1059;
  double t1064;
  double t1123;
  double t1124;
  double t1136;
  double t1081;
  double t1082;
  double t1090;
  double t1034;
  double t1042;
  double t1067;
  double t1111;
  double t1114;
  double t1137;
  double t1157;
  double t1166;
  double t1172;
  double t1178;
  double t1180;
  double t1186;
  double t1018;
  double t1025;
  double t1044;
  double t1049;
  double t1162;
  double t1190;
  double t1191;
  double t1201;
  double t1202;
  double t1205;
  double t1211;
  double t1213;
  double t986;
  double t987;
  double t1027;
  double t1029;
  double t1197;
  double t1220;
  double t1223;
  double t1231;
  double t1237;
  double t1238;
  double t1247;
  double t1250;
  double t971;
  double t977;
  double t991;
  double t996;
  double t1229;
  double t1253;
  double t1254;
  double t1260;
  double t1265;
  double t1269;
  double t1272;
  double t1273;
  double t1276;
  double t1278;
  double t1285;
  double t1286;
  double t1295;
  double t1296;
  double t1309;
  double t955;
  double t958;
  double t964;
  double t1330;
  double t1331;
  double t1334;
  double t1335;
  double t1337;
  double t979;
  double t980;
  double t1257;
  double t1316;
  double t1326;
  double t1346;
  double t1351;
  double t1353;
  double t1354;
  double t1359;
  double t1363;
  double t1364;
  double t1328;
  double t1338;
  double t1339;
  double t1357;
  double t1367;
  double t1371;
  double t1379;
  double t1383;
  double t1393;
  double t940;
  double t942;
  double t945;
  double t1340;
  double t1400;
  double t1419;
  double t1456;
  double t1485;
  double t1507;
  double t1531;
  double t1553;
  double t1575;
  double t1584;
  double t1602;
  double t1611;
  double t1803;
  double t1808;
  t166 = Cos(var1[18]);
  t139 = Cos(var1[19]);
  t145 = Sin(var1[18]);
  t171 = Sin(var1[19]);
  t208 = Cos(var1[17]);
  t151 = t139*t145;
  t181 = t166*t171;
  t183 = 0. + t151 + t181;
  t127 = Sin(var1[17]);
  t223 = -1.*t166*t139;
  t225 = t145*t171;
  t231 = 0. + t223 + t225;
  t255 = Cos(var1[16]);
  t196 = t127*t183;
  t234 = t208*t231;
  t248 = 0. + t196 + t234;
  t109 = Sin(var1[16]);
  t258 = t208*t183;
  t263 = -1.*t127*t231;
  t266 = 0. + t258 + t263;
  t309 = Cos(var1[15]);
  t252 = -1.*t109*t248;
  t270 = t255*t266;
  t300 = 0. + t252 + t270;
  t104 = Sin(var1[15]);
  t321 = t255*t248;
  t322 = t109*t266;
  t332 = 0. + t321 + t322;
  t358 = Cos(var1[13]);
  t306 = t104*t300;
  t348 = t309*t332;
  t349 = 0. + t306 + t348;
  t50 = Sin(var1[13]);
  t365 = Sin(var1[14]);
  t366 = t309*t300;
  t367 = -1.*t104*t332;
  t379 = 0. + t366 + t367;
  t380 = t365*t379;
  t390 = 0. + t380;
  t37 = Cos(var1[5]);
  t409 = t358*t349;
  t425 = t50*t390;
  t438 = 0. + t409 + t425;
  t355 = -1.*t50*t349;
  t394 = t358*t390;
  t404 = 0. + t355 + t394;
  t448 = Sin(var1[5]);
  t21 = Sin(var1[3]);
  t540 = t166*t139;
  t542 = -1.*t145*t171;
  t562 = 0. + t540 + t542;
  t530 = -1.*t127*t183;
  t569 = t208*t562;
  t570 = 0. + t530 + t569;
  t577 = t127*t562;
  t591 = 0. + t258 + t577;
  t576 = t109*t570;
  t598 = t255*t591;
  t602 = 0. + t576 + t598;
  t624 = t255*t570;
  t634 = -1.*t109*t591;
  t639 = 0. + t624 + t634;
  t607 = t309*t602;
  t641 = t104*t639;
  t644 = 0. + t607 + t641;
  t664 = -1.*t104*t602;
  t667 = t309*t639;
  t675 = 0. + t664 + t667;
  t680 = t365*t675;
  t682 = 0. + t680;
  t464 = Cos(var1[3]);
  t466 = Cos(var1[4]);
  t467 = Cos(var1[14]);
  t481 = Sin(var1[4]);
  t693 = t358*t644;
  t695 = t50*t682;
  t705 = 0. + t693 + t695;
  t661 = -1.*t50*t644;
  t687 = t358*t682;
  t689 = 0. + t661 + t687;
  t776 = -1.*t467;
  t778 = 0. + t776;
  t795 = t778*t50;
  t796 = 0. + t795;
  t785 = t358*t778;
  t787 = 0. + t785;
  t407 = t37*t404;
  t450 = -1.*t438*t448;
  t451 = 0. + t407 + t450;
  t469 = t467*t379;
  t474 = 0. + t469;
  t477 = t466*t474;
  t484 = t37*t438;
  t499 = t404*t448;
  t500 = 0. + t484 + t499;
  t512 = t481*t500;
  t514 = 0. + t477 + t512;
  t690 = t37*t689;
  t710 = -1.*t705*t448;
  t719 = 0. + t690 + t710;
  t736 = t467*t675;
  t741 = 0. + t736;
  t751 = t466*t741;
  t756 = t37*t705;
  t762 = t689*t448;
  t763 = 0. + t756 + t762;
  t768 = t481*t763;
  t771 = 0. + t751 + t768;
  t793 = t787*t37;
  t819 = -1.*t796*t448;
  t826 = 0. + t793 + t819;
  t853 = 0. + t365;
  t859 = t466*t853;
  t860 = t37*t796;
  t876 = t787*t448;
  t883 = 0. + t860 + t876;
  t886 = t481*t883;
  t900 = 0. + t859 + t886;
  t946 = -1.*t741*t481;
  t949 = t466*t763;
  t951 = 0. + t946 + t949;
  t1068 = -1.*t139;
  t1074 = 1. + t1068;
  t1059 = -1.*t166;
  t1064 = 1. + t1059;
  t1123 = -1.03354*t1074;
  t1124 = -1.03354*t139;
  t1136 = 0. + t1123 + t1124;
  t1081 = -0.05315*t1074;
  t1082 = -0.05315*t139;
  t1090 = 0. + t1081 + t1082;
  t1034 = -1.*t208;
  t1042 = 1. + t1034;
  t1067 = -0.01315*t1064;
  t1111 = t166*t1090;
  t1114 = -0.62554*t145;
  t1137 = -1.*t1136*t145;
  t1157 = 0. + t1067 + t1111 + t1114 + t1137;
  t1166 = -0.62554*t1064;
  t1172 = t166*t1136;
  t1178 = 0.01315*t145;
  t1180 = t1090*t145;
  t1186 = 0. + t1166 + t1172 + t1178 + t1180;
  t1018 = -1.*t255;
  t1025 = 1. + t1018;
  t1044 = -0.19074*t1042;
  t1049 = 0.03315*t127;
  t1162 = t127*t1157;
  t1190 = t208*t1186;
  t1191 = 0. + t1044 + t1049 + t1162 + t1190;
  t1201 = -0.03315*t1042;
  t1202 = -0.19074*t127;
  t1205 = t208*t1157;
  t1211 = -1.*t127*t1186;
  t1213 = 0. + t1201 + t1202 + t1205 + t1211;
  t986 = -1.*t309;
  t987 = 1. + t986;
  t1027 = -0.08055*t1025;
  t1029 = -0.13004*t109;
  t1197 = -1.*t109*t1191;
  t1220 = t255*t1213;
  t1223 = 0. + t1027 + t1029 + t1197 + t1220;
  t1231 = -0.13004*t1025;
  t1237 = 0.08055*t109;
  t1238 = t255*t1191;
  t1247 = t109*t1213;
  t1250 = 0. + t1231 + t1237 + t1238 + t1247;
  t971 = -1.*t358;
  t977 = 1. + t971;
  t991 = -0.01004*t987;
  t996 = 0.08055*t104;
  t1229 = t104*t1223;
  t1253 = t309*t1250;
  t1254 = 0. + t991 + t996 + t1229 + t1253;
  t1260 = -1.*t467;
  t1265 = 1. + t1260;
  t1269 = -0.135*t1265;
  t1272 = -0.1305*t467;
  t1273 = 0.08055*t365;
  t1276 = -0.08055*t987;
  t1278 = -0.01004*t104;
  t1285 = t309*t1223;
  t1286 = -1.*t104*t1250;
  t1295 = 0. + t1276 + t1278 + t1285 + t1286;
  t1296 = t365*t1295;
  t1309 = 0. + t1269 + t1272 + t1273 + t1296;
  t955 = -1.*t853*t481;
  t958 = t466*t883;
  t964 = 0. + t955 + t958;
  t1330 = 0.07996*t977;
  t1331 = 0.135*t50;
  t1334 = t358*t1254;
  t1335 = t50*t1309;
  t1337 = 0. + t1330 + t1331 + t1334 + t1335;
  t979 = -0.135*t977;
  t980 = 0.07996*t50;
  t1257 = -1.*t50*t1254;
  t1316 = t358*t1309;
  t1326 = 0. + t979 + t980 + t1257 + t1316;
  t1346 = -0.08055*t1265;
  t1351 = -0.004500000000000004*t365;
  t1353 = t467*t1295;
  t1354 = 0. + t1346 + t1351 + t1353;
  t1359 = t37*t1337;
  t1363 = t1326*t448;
  t1364 = 0. + t1359 + t1363;
  t1328 = t37*t1326;
  t1338 = -1.*t1337*t448;
  t1339 = 0. + t1328 + t1338;
  t1357 = -1.*t1354*t481;
  t1367 = t466*t1364;
  t1371 = 0. + t1357 + t1367;
  t1379 = t466*t1354;
  t1383 = t481*t1364;
  t1393 = 0. + t1379 + t1383;
  t940 = -1.*t474*t481;
  t942 = t466*t500;
  t945 = 0. + t940 + t942;
  t1340 = t826*t1339;
  t1400 = -1.*t1339*t719;
  t1419 = -1.*t826*t1339;
  t1456 = t1339*t451;
  t1485 = t1339*t719;
  t1507 = -1.*t1339*t451;
  t1531 = t853*t1354;
  t1553 = -1.*t1354*t741;
  t1575 = -1.*t853*t1354;
  t1584 = t1354*t474;
  t1602 = t1354*t741;
  t1611 = -1.*t1354*t474;
  t1803 = t1254*t644;
  t1808 = -1.*t1254*t349;
  p_output1[0]=0. - 1.*t21*t451 + t464*t514;
  p_output1[1]=0. - 1.*t21*t719 + t464*t771;
  p_output1[2]=0. - 1.*t21*t826 + t464*t900;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t451*t464 + t21*t514;
  p_output1[7]=0. + t464*t719 + t21*t771;
  p_output1[8]=0. + t464*t826 + t21*t900;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t945;
  p_output1[13]=t951;
  p_output1[14]=t964;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1400 - 1.*t1393*t771 - 1.*t1371*t951)*t964 + t951*(t1340 + t1393*t900 + t1371*t964);
  p_output1[19]=(t1456 + t1393*t514 + t1371*t945)*t964 + t945*(t1419 - 1.*t1393*t900 - 1.*t1371*t964);
  p_output1[20]=(t1507 - 1.*t1393*t514 - 1.*t1371*t945)*t951 + t945*(t1485 + t1393*t771 + t1371*t951);
  p_output1[21]=t945;
  p_output1[22]=t951;
  p_output1[23]=t964;
  p_output1[24]=(t1400 + t1553 - 1.*t1364*t763)*t826 + t719*(t1340 + t1531 + t1364*t883);
  p_output1[25]=(t1456 + t1584 + t1364*t500)*t826 + t451*(t1419 + t1575 - 1.*t1364*t883);
  p_output1[26]=(t1507 + t1611 - 1.*t1364*t500)*t719 + t451*(t1485 + t1602 + t1364*t763);
  p_output1[27]=t451;
  p_output1[28]=t719;
  p_output1[29]=t826;
  p_output1[30]=t741*(t1531 + t1326*t787 + t1337*t796) + (t1553 - 1.*t1326*t689 - 1.*t1337*t705)*t853;
  p_output1[31]=t474*(t1575 - 1.*t1326*t787 - 1.*t1337*t796) + (t1584 + t1326*t404 + t1337*t438)*t853;
  p_output1[32]=t474*(t1602 + t1326*t689 + t1337*t705) + (t1611 - 1.*t1326*t404 - 1.*t1337*t438)*t741;
  p_output1[33]=t474;
  p_output1[34]=t741;
  p_output1[35]=t853;
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
  p_output1[78]=0.135*t349 + 0.07996*t390 + t741*(0. + t1531 + t1309*t778) + (t1553 - 1.*t1254*t644 - 1.*t1309*t682)*t853;
  p_output1[79]=0.135*t644 + 0.07996*t682 + t474*(0. + t1575 - 1.*t1309*t778) + (t1584 + t1254*t349 + t1309*t390)*t853;
  p_output1[80]=0. + t474*(t1602 + t1803 + t1309*t682) + (t1611 + t1808 - 1.*t1309*t390)*t741 + 0.07996*t778;
  p_output1[81]=t474;
  p_output1[82]=t741;
  p_output1[83]=t853;
  p_output1[84]=0. - 0.135*t379 + 0.1305*t644;
  p_output1[85]=0. - 0.1305*t349 - 0.135*t675;
  p_output1[86]=-0.08055 + (0. + t1808 - 1.*t1295*t379)*t644 + t349*(0. + t1803 + t1295*t675);
  p_output1[87]=t349;
  p_output1[88]=t644;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t300 + 0.08055*t332 - 1.*t1250*t602 - 1.*t1223*t639;
  p_output1[91]=0. + t1223*t300 + t1250*t332 + 0.08055*t602 - 0.01004*t639;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. + 0.08055*t248 - 0.13004*t266 - 1.*t1213*t570 - 1.*t1191*t591;
  p_output1[97]=0. + t1191*t248 + t1213*t266 - 0.13004*t570 + 0.08055*t591;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.19074*t183 - 1.*t1186*t183 + 0.03315*t231 - 1.*t1157*t562;
  p_output1[103]=0. + 0.03315*t183 + t1157*t183 + t1186*t231 - 0.19074*t562;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0. - 0.01315*t139 - 1.*t1090*t139 - 0.62554*t171 - 1.*t1136*t171;
  p_output1[109]=0. - 0.62554*t139 - 1.*t1136*t139 + 0.01315*t171 + t1090*t171;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
  p_output1[114]=0.;
  p_output1[115]=0.;
  p_output1[116]=0.;
  p_output1[117]=0.;
  p_output1[118]=0.;
  p_output1[119]=1.;
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

#include "Jb_RightToeJoint_mex.hh"

namespace SymExpression
{

void Jb_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
