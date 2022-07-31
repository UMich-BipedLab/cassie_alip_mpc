/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:28 GMT-04:00
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
  double t111;
  double t70;
  double t77;
  double t121;
  double t175;
  double t84;
  double t139;
  double t146;
  double t69;
  double t177;
  double t187;
  double t190;
  double t208;
  double t150;
  double t192;
  double t200;
  double t68;
  double t217;
  double t229;
  double t238;
  double t47;
  double t290;
  double t294;
  double t295;
  double t204;
  double t240;
  double t270;
  double t296;
  double t309;
  double t285;
  double t297;
  double t299;
  double t43;
  double t314;
  double t319;
  double t336;
  double t337;
  double t338;
  double t355;
  double t386;
  double t305;
  double t360;
  double t366;
  double t40;
  double t397;
  double t400;
  double t401;
  double t6;
  double t503;
  double t511;
  double t520;
  double t502;
  double t526;
  double t530;
  double t539;
  double t541;
  double t558;
  double t575;
  double t579;
  double t536;
  double t546;
  double t548;
  double t555;
  double t583;
  double t593;
  double t597;
  double t602;
  double t606;
  double t612;
  double t618;
  double t421;
  double t429;
  double t433;
  double t450;
  double t596;
  double t622;
  double t624;
  double t631;
  double t644;
  double t647;
  double t748;
  double t753;
  double t766;
  double t776;
  double t797;
  double t817;
  double t373;
  double t403;
  double t409;
  double t434;
  double t442;
  double t447;
  double t452;
  double t470;
  double t471;
  double t474;
  double t480;
  double t630;
  double t661;
  double t668;
  double t677;
  double t690;
  double t699;
  double t700;
  double t701;
  double t715;
  double t717;
  double t738;
  double t784;
  double t822;
  double t825;
  double t827;
  double t835;
  double t840;
  double t841;
  double t846;
  double t847;
  double t851;
  double t911;
  double t914;
  double t915;
  double t1023;
  double t1024;
  double t1012;
  double t1013;
  double t1074;
  double t1084;
  double t1090;
  double t1025;
  double t1031;
  double t1046;
  double t996;
  double t997;
  double t1017;
  double t1055;
  double t1072;
  double t1093;
  double t1095;
  double t1100;
  double t1104;
  double t1114;
  double t1125;
  double t1127;
  double t977;
  double t981;
  double t1002;
  double t1011;
  double t1099;
  double t1136;
  double t1137;
  double t1139;
  double t1142;
  double t1144;
  double t1146;
  double t1149;
  double t959;
  double t970;
  double t1169;
  double t1172;
  double t1180;
  double t1183;
  double t1185;
  double t982;
  double t995;
  double t1138;
  double t1156;
  double t1157;
  double t929;
  double t931;
  double t975;
  double t1160;
  double t1162;
  double t1188;
  double t1190;
  double t1198;
  double t1202;
  double t1213;
  double t1214;
  double t1217;
  double t1223;
  double t1228;
  double t1229;
  double t1231;
  double t1235;
  double t1237;
  double t1238;
  double t916;
  double t919;
  double t927;
  double t939;
  double t949;
  double t1193;
  double t1253;
  double t1255;
  double t1267;
  double t1280;
  double t1281;
  double t1283;
  double t1287;
  double t1296;
  double t1299;
  double t1303;
  double t1305;
  double t1308;
  double t1316;
  double t1327;
  double t1258;
  double t1288;
  double t1290;
  double t1307;
  double t1331;
  double t1334;
  double t1337;
  double t1339;
  double t1341;
  double t906;
  double t908;
  double t910;
  double t1291;
  double t1362;
  double t1413;
  double t1463;
  double t1491;
  double t1519;
  double t1557;
  double t1574;
  double t1594;
  double t1609;
  double t1650;
  double t1664;
  double t1854;
  double t1861;
  t111 = Cos(var1[11]);
  t70 = Cos(var1[12]);
  t77 = Sin(var1[11]);
  t121 = Sin(var1[12]);
  t175 = Cos(var1[10]);
  t84 = t70*t77;
  t139 = t111*t121;
  t146 = 0. + t84 + t139;
  t69 = Sin(var1[10]);
  t177 = -1.*t111*t70;
  t187 = t77*t121;
  t190 = 0. + t177 + t187;
  t208 = Sin(var1[9]);
  t150 = t69*t146;
  t192 = t175*t190;
  t200 = 0. + t150 + t192;
  t68 = Cos(var1[9]);
  t217 = t175*t146;
  t229 = -1.*t69*t190;
  t238 = 0. + t217 + t229;
  t47 = Cos(var1[8]);
  t290 = -1.*t208*t200;
  t294 = t68*t238;
  t295 = 0. + t290 + t294;
  t204 = t68*t200;
  t240 = t208*t238;
  t270 = 0. + t204 + t240;
  t296 = Sin(var1[8]);
  t309 = Cos(var1[6]);
  t285 = t47*t270;
  t297 = t295*t296;
  t299 = 0. + t285 + t297;
  t43 = Sin(var1[6]);
  t314 = Sin(var1[7]);
  t319 = t47*t295;
  t336 = -1.*t270*t296;
  t337 = 0. + t319 + t336;
  t338 = t314*t337;
  t355 = 0. + t338;
  t386 = Sin(var1[5]);
  t305 = -1.*t43*t299;
  t360 = t309*t355;
  t366 = 0. + t305 + t360;
  t40 = Cos(var1[5]);
  t397 = t309*t299;
  t400 = t43*t355;
  t401 = 0. + t397 + t400;
  t6 = Sin(var1[3]);
  t503 = t111*t70;
  t511 = -1.*t77*t121;
  t520 = 0. + t503 + t511;
  t502 = -1.*t69*t146;
  t526 = t175*t520;
  t530 = 0. + t502 + t526;
  t539 = t69*t520;
  t541 = 0. + t217 + t539;
  t558 = t68*t530;
  t575 = -1.*t208*t541;
  t579 = 0. + t558 + t575;
  t536 = t208*t530;
  t546 = t68*t541;
  t548 = 0. + t536 + t546;
  t555 = t47*t548;
  t583 = t579*t296;
  t593 = 0. + t555 + t583;
  t597 = t47*t579;
  t602 = -1.*t548*t296;
  t606 = 0. + t597 + t602;
  t612 = t314*t606;
  t618 = 0. + t612;
  t421 = Cos(var1[3]);
  t429 = Cos(var1[4]);
  t433 = Cos(var1[7]);
  t450 = Sin(var1[4]);
  t596 = -1.*t43*t593;
  t622 = t309*t618;
  t624 = 0. + t596 + t622;
  t631 = t309*t593;
  t644 = t43*t618;
  t647 = 0. + t631 + t644;
  t748 = -1.*t433;
  t753 = 0. + t748;
  t766 = t309*t753;
  t776 = 0. + t766;
  t797 = t753*t43;
  t817 = 0. + t797;
  t373 = t40*t366;
  t403 = -1.*t386*t401;
  t409 = 0. + t373 + t403;
  t434 = t433*t337;
  t442 = 0. + t434;
  t447 = t429*t442;
  t452 = t386*t366;
  t470 = t40*t401;
  t471 = 0. + t452 + t470;
  t474 = t450*t471;
  t480 = 0. + t447 + t474;
  t630 = t40*t624;
  t661 = -1.*t386*t647;
  t668 = 0. + t630 + t661;
  t677 = t433*t606;
  t690 = 0. + t677;
  t699 = t429*t690;
  t700 = t386*t624;
  t701 = t40*t647;
  t715 = 0. + t700 + t701;
  t717 = t450*t715;
  t738 = 0. + t699 + t717;
  t784 = t40*t776;
  t822 = -1.*t386*t817;
  t825 = 0. + t784 + t822;
  t827 = t776*t386;
  t835 = t40*t817;
  t840 = 0. + t827 + t835;
  t841 = t450*t840;
  t846 = 0. + t314;
  t847 = t429*t846;
  t851 = 0. + t841 + t847;
  t911 = -1.*t450*t690;
  t914 = t429*t715;
  t915 = 0. + t911 + t914;
  t1023 = -1.*t70;
  t1024 = 1. + t1023;
  t1012 = -1.*t111;
  t1013 = 1. + t1012;
  t1074 = -1.03354*t1024;
  t1084 = -1.03354*t70;
  t1090 = 0. + t1074 + t1084;
  t1025 = -0.05315*t1024;
  t1031 = -0.05315*t70;
  t1046 = 0. + t1025 + t1031;
  t996 = -1.*t175;
  t997 = 1. + t996;
  t1017 = -0.01315*t1013;
  t1055 = t111*t1046;
  t1072 = -0.62554*t77;
  t1093 = -1.*t1090*t77;
  t1095 = 0. + t1017 + t1055 + t1072 + t1093;
  t1100 = -0.62554*t1013;
  t1104 = t111*t1090;
  t1114 = 0.01315*t77;
  t1125 = t1046*t77;
  t1127 = 0. + t1100 + t1104 + t1114 + t1125;
  t977 = -1.*t68;
  t981 = 1. + t977;
  t1002 = -0.19074*t997;
  t1011 = 0.03315*t69;
  t1099 = t69*t1095;
  t1136 = t175*t1127;
  t1137 = 0. + t1002 + t1011 + t1099 + t1136;
  t1139 = -0.03315*t997;
  t1142 = -0.19074*t69;
  t1144 = t175*t1095;
  t1146 = -1.*t69*t1127;
  t1149 = 0. + t1139 + t1142 + t1144 + t1146;
  t959 = -1.*t47;
  t970 = 1. + t959;
  t1169 = -0.08055*t981;
  t1172 = -0.13004*t208;
  t1180 = -1.*t208*t1137;
  t1183 = t68*t1149;
  t1185 = 0. + t1169 + t1172 + t1180 + t1183;
  t982 = -0.13004*t981;
  t995 = 0.08055*t208;
  t1138 = t68*t1137;
  t1156 = t208*t1149;
  t1157 = 0. + t982 + t995 + t1138 + t1156;
  t929 = -1.*t309;
  t931 = 1. + t929;
  t975 = -0.01004*t970;
  t1160 = t47*t1157;
  t1162 = 0.08055*t296;
  t1188 = t1185*t296;
  t1190 = 0. + t975 + t1160 + t1162 + t1188;
  t1198 = -1.*t433;
  t1202 = 1. + t1198;
  t1213 = 0.135*t1202;
  t1214 = 0.1305*t433;
  t1217 = 0.08055*t314;
  t1223 = -0.08055*t970;
  t1228 = t47*t1185;
  t1229 = -0.01004*t296;
  t1231 = -1.*t1157*t296;
  t1235 = 0. + t1223 + t1228 + t1229 + t1231;
  t1237 = t314*t1235;
  t1238 = 0. + t1213 + t1214 + t1217 + t1237;
  t916 = t429*t840;
  t919 = -1.*t450*t846;
  t927 = 0. + t916 + t919;
  t939 = 0.135*t931;
  t949 = 0.07996*t43;
  t1193 = -1.*t43*t1190;
  t1253 = t309*t1238;
  t1255 = 0. + t939 + t949 + t1193 + t1253;
  t1267 = 0.07996*t931;
  t1280 = -0.135*t43;
  t1281 = t309*t1190;
  t1283 = t43*t1238;
  t1287 = 0. + t1267 + t1280 + t1281 + t1283;
  t1296 = -0.08055*t1202;
  t1299 = 0.004500000000000004*t314;
  t1303 = t433*t1235;
  t1305 = 0. + t1296 + t1299 + t1303;
  t1308 = t386*t1255;
  t1316 = t40*t1287;
  t1327 = 0. + t1308 + t1316;
  t1258 = t40*t1255;
  t1288 = -1.*t386*t1287;
  t1290 = 0. + t1258 + t1288;
  t1307 = -1.*t450*t1305;
  t1331 = t429*t1327;
  t1334 = 0. + t1307 + t1331;
  t1337 = t429*t1305;
  t1339 = t450*t1327;
  t1341 = 0. + t1337 + t1339;
  t906 = -1.*t450*t442;
  t908 = t429*t471;
  t910 = 0. + t906 + t908;
  t1291 = t825*t1290;
  t1362 = -1.*t1290*t668;
  t1413 = -1.*t825*t1290;
  t1463 = t1290*t409;
  t1491 = t1290*t668;
  t1519 = -1.*t1290*t409;
  t1557 = t846*t1305;
  t1574 = -1.*t1305*t690;
  t1594 = -1.*t846*t1305;
  t1609 = t1305*t442;
  t1650 = t1305*t690;
  t1664 = -1.*t1305*t442;
  t1854 = t1190*t593;
  t1861 = -1.*t1190*t299;
  p_output1[0]=0. + t421*t480 - 1.*t409*t6;
  p_output1[1]=0. - 1.*t6*t668 + t421*t738;
  p_output1[2]=0. - 1.*t6*t825 + t421*t851;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t409*t421 + t480*t6;
  p_output1[7]=0. + t421*t668 + t6*t738;
  p_output1[8]=0. + t421*t825 + t6*t851;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t910;
  p_output1[13]=t915;
  p_output1[14]=t927;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1362 - 1.*t1341*t738 - 1.*t1334*t915)*t927 + t915*(t1291 + t1341*t851 + t1334*t927);
  p_output1[19]=(t1463 + t1341*t480 + t1334*t910)*t927 + t910*(t1413 - 1.*t1341*t851 - 1.*t1334*t927);
  p_output1[20]=(t1519 - 1.*t1341*t480 - 1.*t1334*t910)*t915 + t910*(t1491 + t1341*t738 + t1334*t915);
  p_output1[21]=t910;
  p_output1[22]=t915;
  p_output1[23]=t927;
  p_output1[24]=(t1362 + t1574 - 1.*t1327*t715)*t825 + t668*(t1291 + t1557 + t1327*t840);
  p_output1[25]=(t1463 + t1609 + t1327*t471)*t825 + t409*(t1413 + t1594 - 1.*t1327*t840);
  p_output1[26]=(t1519 + t1664 - 1.*t1327*t471)*t668 + t409*(t1491 + t1650 + t1327*t715);
  p_output1[27]=t409;
  p_output1[28]=t668;
  p_output1[29]=t825;
  p_output1[30]=t690*(t1557 + t1255*t776 + t1287*t817) + (t1574 - 1.*t1255*t624 - 1.*t1287*t647)*t846;
  p_output1[31]=t442*(t1594 - 1.*t1255*t776 - 1.*t1287*t817) + (t1609 + t1255*t366 + t1287*t401)*t846;
  p_output1[32]=t442*(t1650 + t1255*t624 + t1287*t647) + (t1664 - 1.*t1255*t366 - 1.*t1287*t401)*t690;
  p_output1[33]=t442;
  p_output1[34]=t690;
  p_output1[35]=t846;
  p_output1[36]=-0.135*t299 + 0.07996*t355 + t690*(0. + t1557 + t1238*t753) + (t1574 - 1.*t1190*t593 - 1.*t1238*t618)*t846;
  p_output1[37]=-0.135*t593 + 0.07996*t618 + t442*(0. + t1594 - 1.*t1238*t753) + (t1609 + t1190*t299 + t1238*t355)*t846;
  p_output1[38]=0. + t442*(t1650 + t1854 + t1238*t618) + (t1664 + t1861 - 1.*t1238*t355)*t690 + 0.07996*t753;
  p_output1[39]=t442;
  p_output1[40]=t690;
  p_output1[41]=t846;
  p_output1[42]=0. + 0.135*t337 - 0.1305*t593;
  p_output1[43]=0. + 0.1305*t299 + 0.135*t606;
  p_output1[44]=-0.08055 + (0. + t1861 - 1.*t1235*t337)*t593 + t299*(0. + t1854 + t1235*t606);
  p_output1[45]=t299;
  p_output1[46]=t593;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t270 - 0.01004*t295 - 1.*t1157*t548 - 1.*t1185*t579;
  p_output1[49]=0. + t1157*t270 + t1185*t295 + 0.08055*t548 - 0.01004*t579;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. + 0.08055*t200 - 0.13004*t238 - 1.*t1149*t530 - 1.*t1137*t541;
  p_output1[55]=0. + t1137*t200 + t1149*t238 - 0.13004*t530 + 0.08055*t541;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.19074*t146 - 1.*t1127*t146 + 0.03315*t190 - 1.*t1095*t520;
  p_output1[61]=0. + 0.03315*t146 + t1095*t146 + t1127*t190 - 0.19074*t520;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0. - 0.62554*t121 - 1.*t1090*t121 - 0.01315*t70 - 1.*t1046*t70;
  p_output1[67]=0. + 0.01315*t121 + t1046*t121 - 0.62554*t70 - 1.*t1090*t70;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
  p_output1[72]=0.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0.;
  p_output1[77]=1.;
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

#include "Jb_LeftToeJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
