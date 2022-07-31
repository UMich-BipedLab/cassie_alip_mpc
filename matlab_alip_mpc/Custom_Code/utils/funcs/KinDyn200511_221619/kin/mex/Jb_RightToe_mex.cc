/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:46 GMT-04:00
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
  double t79;
  double t67;
  double t68;
  double t94;
  double t150;
  double t73;
  double t125;
  double t126;
  double t62;
  double t151;
  double t158;
  double t162;
  double t215;
  double t143;
  double t172;
  double t185;
  double t58;
  double t216;
  double t227;
  double t252;
  double t286;
  double t210;
  double t272;
  double t275;
  double t44;
  double t290;
  double t292;
  double t293;
  double t320;
  double t283;
  double t300;
  double t304;
  double t27;
  double t326;
  double t327;
  double t330;
  double t336;
  double t338;
  double t343;
  double t25;
  double t378;
  double t381;
  double t383;
  double t308;
  double t344;
  double t348;
  double t398;
  double t11;
  double t487;
  double t499;
  double t504;
  double t485;
  double t507;
  double t509;
  double t513;
  double t514;
  double t510;
  double t517;
  double t520;
  double t536;
  double t539;
  double t544;
  double t527;
  double t553;
  double t554;
  double t561;
  double t569;
  double t573;
  double t578;
  double t580;
  double t419;
  double t422;
  double t424;
  double t452;
  double t608;
  double t614;
  double t615;
  double t560;
  double t593;
  double t596;
  double t690;
  double t692;
  double t717;
  double t726;
  double t696;
  double t707;
  double t354;
  double t404;
  double t413;
  double t428;
  double t444;
  double t447;
  double t459;
  double t464;
  double t469;
  double t472;
  double t474;
  double t601;
  double t628;
  double t631;
  double t634;
  double t637;
  double t644;
  double t648;
  double t652;
  double t660;
  double t662;
  double t667;
  double t716;
  double t728;
  double t729;
  double t734;
  double t735;
  double t740;
  double t744;
  double t746;
  double t758;
  double t763;
  double t825;
  double t828;
  double t838;
  double t973;
  double t975;
  double t941;
  double t948;
  double t981;
  double t989;
  double t993;
  double t995;
  double t1001;
  double t1003;
  double t1007;
  double t1009;
  double t918;
  double t924;
  double t957;
  double t958;
  double t996;
  double t1011;
  double t1017;
  double t1024;
  double t1027;
  double t1034;
  double t1036;
  double t1038;
  double t894;
  double t906;
  double t934;
  double t938;
  double t1019;
  double t1039;
  double t1042;
  double t1044;
  double t1049;
  double t1050;
  double t1054;
  double t1059;
  double t887;
  double t888;
  double t908;
  double t910;
  double t1043;
  double t1061;
  double t1063;
  double t1074;
  double t1077;
  double t1081;
  double t1085;
  double t1086;
  double t860;
  double t861;
  double t874;
  double t876;
  double t879;
  double t880;
  double t885;
  double t891;
  double t892;
  double t1064;
  double t1087;
  double t1088;
  double t1094;
  double t1099;
  double t1103;
  double t1109;
  double t1116;
  double t1126;
  double t1132;
  double t839;
  double t844;
  double t848;
  double t1157;
  double t1167;
  double t1172;
  double t1177;
  double t1185;
  double t868;
  double t870;
  double t1101;
  double t1135;
  double t1147;
  double t1203;
  double t1206;
  double t1211;
  double t1214;
  double t1218;
  double t1220;
  double t1222;
  double t1148;
  double t1188;
  double t1195;
  double t1216;
  double t1228;
  double t1232;
  double t1237;
  double t1242;
  double t1244;
  double t811;
  double t812;
  double t813;
  double t1202;
  double t1254;
  double t1272;
  double t1294;
  double t1319;
  double t1325;
  double t1346;
  double t1356;
  double t1376;
  double t1387;
  double t1405;
  double t1427;
  double t1588;
  double t1613;
  t79 = Cos(var1[18]);
  t67 = Cos(var1[19]);
  t68 = Sin(var1[18]);
  t94 = Sin(var1[19]);
  t150 = Cos(var1[17]);
  t73 = t67*t68;
  t125 = t79*t94;
  t126 = 0. + t73 + t125;
  t62 = Sin(var1[17]);
  t151 = -1.*t79*t67;
  t158 = t68*t94;
  t162 = 0. + t151 + t158;
  t215 = Cos(var1[16]);
  t143 = t62*t126;
  t172 = t150*t162;
  t185 = 0. + t143 + t172;
  t58 = Sin(var1[16]);
  t216 = t150*t126;
  t227 = -1.*t62*t162;
  t252 = 0. + t216 + t227;
  t286 = Cos(var1[15]);
  t210 = -1.*t58*t185;
  t272 = t215*t252;
  t275 = 0. + t210 + t272;
  t44 = Sin(var1[15]);
  t290 = t215*t185;
  t292 = t58*t252;
  t293 = 0. + t290 + t292;
  t320 = Cos(var1[13]);
  t283 = t44*t275;
  t300 = t286*t293;
  t304 = 0. + t283 + t300;
  t27 = Sin(var1[13]);
  t326 = Sin(var1[14]);
  t327 = t286*t275;
  t330 = -1.*t44*t293;
  t336 = 0. + t327 + t330;
  t338 = t326*t336;
  t343 = 0. + t338;
  t25 = Cos(var1[5]);
  t378 = t320*t304;
  t381 = t27*t343;
  t383 = 0. + t378 + t381;
  t308 = -1.*t27*t304;
  t344 = t320*t343;
  t348 = 0. + t308 + t344;
  t398 = Sin(var1[5]);
  t11 = Sin(var1[3]);
  t487 = t79*t67;
  t499 = -1.*t68*t94;
  t504 = 0. + t487 + t499;
  t485 = -1.*t62*t126;
  t507 = t150*t504;
  t509 = 0. + t485 + t507;
  t513 = t62*t504;
  t514 = 0. + t216 + t513;
  t510 = t58*t509;
  t517 = t215*t514;
  t520 = 0. + t510 + t517;
  t536 = t215*t509;
  t539 = -1.*t58*t514;
  t544 = 0. + t536 + t539;
  t527 = t286*t520;
  t553 = t44*t544;
  t554 = 0. + t527 + t553;
  t561 = -1.*t44*t520;
  t569 = t286*t544;
  t573 = 0. + t561 + t569;
  t578 = t326*t573;
  t580 = 0. + t578;
  t419 = Cos(var1[3]);
  t422 = Cos(var1[4]);
  t424 = Cos(var1[14]);
  t452 = Sin(var1[4]);
  t608 = t320*t554;
  t614 = t27*t580;
  t615 = 0. + t608 + t614;
  t560 = -1.*t27*t554;
  t593 = t320*t580;
  t596 = 0. + t560 + t593;
  t690 = -1.*t424;
  t692 = 0. + t690;
  t717 = t692*t27;
  t726 = 0. + t717;
  t696 = t320*t692;
  t707 = 0. + t696;
  t354 = t25*t348;
  t404 = -1.*t383*t398;
  t413 = 0. + t354 + t404;
  t428 = t424*t336;
  t444 = 0. + t428;
  t447 = t422*t444;
  t459 = t25*t383;
  t464 = t348*t398;
  t469 = 0. + t459 + t464;
  t472 = t452*t469;
  t474 = 0. + t447 + t472;
  t601 = t25*t596;
  t628 = -1.*t615*t398;
  t631 = 0. + t601 + t628;
  t634 = t424*t573;
  t637 = 0. + t634;
  t644 = t422*t637;
  t648 = t25*t615;
  t652 = t596*t398;
  t660 = 0. + t648 + t652;
  t662 = t452*t660;
  t667 = 0. + t644 + t662;
  t716 = t707*t25;
  t728 = -1.*t726*t398;
  t729 = 0. + t716 + t728;
  t734 = 0. + t326;
  t735 = t422*t734;
  t740 = t25*t726;
  t744 = t707*t398;
  t746 = 0. + t740 + t744;
  t758 = t452*t746;
  t763 = 0. + t735 + t758;
  t825 = -1.*t637*t452;
  t828 = t422*t660;
  t838 = 0. + t825 + t828;
  t973 = -1.*t67;
  t975 = 1. + t973;
  t941 = -1.*t79;
  t948 = 1. + t941;
  t981 = -0.05315*t975;
  t989 = -0.02565*t67;
  t993 = 0.0047000000000001485*t94;
  t995 = 0. + t981 + t989 + t993;
  t1001 = -1.03354*t975;
  t1003 = -1.03824*t67;
  t1007 = 0.027500000000000004*t94;
  t1009 = 0. + t1001 + t1003 + t1007;
  t918 = -1.*t150;
  t924 = 1. + t918;
  t957 = -0.62554*t948;
  t958 = 0.01315*t68;
  t996 = t68*t995;
  t1011 = t79*t1009;
  t1017 = 0. + t957 + t958 + t996 + t1011;
  t1024 = -0.01315*t948;
  t1027 = -0.62554*t68;
  t1034 = t79*t995;
  t1036 = -1.*t68*t1009;
  t1038 = 0. + t1024 + t1027 + t1034 + t1036;
  t894 = -1.*t215;
  t906 = 1. + t894;
  t934 = -0.03315*t924;
  t938 = -0.19074*t62;
  t1019 = -1.*t62*t1017;
  t1039 = t150*t1038;
  t1042 = 0. + t934 + t938 + t1019 + t1039;
  t1044 = -0.19074*t924;
  t1049 = 0.03315*t62;
  t1050 = t150*t1017;
  t1054 = t62*t1038;
  t1059 = 0. + t1044 + t1049 + t1050 + t1054;
  t887 = -1.*t286;
  t888 = 1. + t887;
  t908 = -0.13004*t906;
  t910 = 0.08055*t58;
  t1043 = t58*t1042;
  t1061 = t215*t1059;
  t1063 = 0. + t908 + t910 + t1043 + t1061;
  t1074 = -0.08055*t906;
  t1077 = -0.13004*t58;
  t1081 = t215*t1042;
  t1085 = -1.*t58*t1059;
  t1086 = 0. + t1074 + t1077 + t1081 + t1085;
  t860 = -1.*t320;
  t861 = 1. + t860;
  t874 = -1.*t424;
  t876 = 1. + t874;
  t879 = -0.135*t876;
  t880 = -0.1306*t424;
  t885 = 0.08055*t326;
  t891 = -0.08055*t888;
  t892 = -0.01004*t44;
  t1064 = -1.*t44*t1063;
  t1087 = t286*t1086;
  t1088 = 0. + t891 + t892 + t1064 + t1087;
  t1094 = t326*t1088;
  t1099 = 0. + t879 + t880 + t885 + t1094;
  t1103 = -0.01004*t888;
  t1109 = 0.08055*t44;
  t1116 = t286*t1063;
  t1126 = t44*t1086;
  t1132 = 0. + t1103 + t1109 + t1116 + t1126;
  t839 = -1.*t734*t452;
  t844 = t422*t746;
  t848 = 0. + t839 + t844;
  t1157 = 0.07996*t861;
  t1167 = 0.135*t27;
  t1172 = t27*t1099;
  t1177 = t320*t1132;
  t1185 = 0. + t1157 + t1167 + t1172 + t1177;
  t868 = -0.135*t861;
  t870 = 0.07996*t27;
  t1101 = t320*t1099;
  t1135 = -1.*t27*t1132;
  t1147 = 0. + t868 + t870 + t1101 + t1135;
  t1203 = -0.08055*t876;
  t1206 = -0.004400000000000015*t326;
  t1211 = t424*t1088;
  t1214 = 0. + t1203 + t1206 + t1211;
  t1218 = t25*t1185;
  t1220 = t1147*t398;
  t1222 = 0. + t1218 + t1220;
  t1148 = t25*t1147;
  t1188 = -1.*t1185*t398;
  t1195 = 0. + t1148 + t1188;
  t1216 = -1.*t1214*t452;
  t1228 = t422*t1222;
  t1232 = 0. + t1216 + t1228;
  t1237 = t422*t1214;
  t1242 = t452*t1222;
  t1244 = 0. + t1237 + t1242;
  t811 = -1.*t444*t452;
  t812 = t422*t469;
  t813 = 0. + t811 + t812;
  t1202 = t729*t1195;
  t1254 = -1.*t1195*t631;
  t1272 = -1.*t729*t1195;
  t1294 = t1195*t413;
  t1319 = t1195*t631;
  t1325 = -1.*t1195*t413;
  t1346 = t734*t1214;
  t1356 = -1.*t1214*t637;
  t1376 = -1.*t734*t1214;
  t1387 = t1214*t444;
  t1405 = t1214*t637;
  t1427 = -1.*t1214*t444;
  t1588 = t1132*t554;
  t1613 = -1.*t1132*t304;
  p_output1[0]=0. - 1.*t11*t413 + t419*t474;
  p_output1[1]=0. - 1.*t11*t631 + t419*t667;
  p_output1[2]=0. - 1.*t11*t729 + t419*t763;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t413*t419 + t11*t474;
  p_output1[7]=0. + t419*t631 + t11*t667;
  p_output1[8]=0. + t419*t729 + t11*t763;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t813;
  p_output1[13]=t838;
  p_output1[14]=t848;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1254 - 1.*t1244*t667 - 1.*t1232*t838)*t848 + t838*(t1202 + t1244*t763 + t1232*t848);
  p_output1[19]=(t1294 + t1244*t474 + t1232*t813)*t848 + t813*(t1272 - 1.*t1244*t763 - 1.*t1232*t848);
  p_output1[20]=(t1325 - 1.*t1244*t474 - 1.*t1232*t813)*t838 + t813*(t1319 + t1244*t667 + t1232*t838);
  p_output1[21]=t813;
  p_output1[22]=t838;
  p_output1[23]=t848;
  p_output1[24]=(t1254 + t1356 - 1.*t1222*t660)*t729 + t631*(t1202 + t1346 + t1222*t746);
  p_output1[25]=(t1294 + t1387 + t1222*t469)*t729 + t413*(t1272 + t1376 - 1.*t1222*t746);
  p_output1[26]=(t1325 + t1427 - 1.*t1222*t469)*t631 + t413*(t1319 + t1405 + t1222*t660);
  p_output1[27]=t413;
  p_output1[28]=t631;
  p_output1[29]=t729;
  p_output1[30]=t637*(t1346 + t1147*t707 + t1185*t726) + (t1356 - 1.*t1147*t596 - 1.*t1185*t615)*t734;
  p_output1[31]=t444*(t1376 - 1.*t1147*t707 - 1.*t1185*t726) + (t1387 + t1147*t348 + t1185*t383)*t734;
  p_output1[32]=t444*(t1405 + t1147*t596 + t1185*t615) + (t1427 - 1.*t1147*t348 - 1.*t1185*t383)*t637;
  p_output1[33]=t444;
  p_output1[34]=t637;
  p_output1[35]=t734;
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
  p_output1[78]=0.135*t304 + 0.07996*t343 + t637*(0. + t1346 + t1099*t692) + (t1356 - 1.*t1132*t554 - 1.*t1099*t580)*t734;
  p_output1[79]=0.135*t554 + 0.07996*t580 + t444*(0. + t1376 - 1.*t1099*t692) + (t1387 + t1132*t304 + t1099*t343)*t734;
  p_output1[80]=0. + t444*(t1405 + t1588 + t1099*t580) + (t1427 + t1613 - 1.*t1099*t343)*t637 + 0.07996*t692;
  p_output1[81]=t444;
  p_output1[82]=t637;
  p_output1[83]=t734;
  p_output1[84]=0. - 0.135*t336 + 0.1306*t554;
  p_output1[85]=0. - 0.1306*t304 - 0.135*t573;
  p_output1[86]=-0.08055 + (0. + t1613 - 1.*t1088*t336)*t554 + t304*(0. + t1588 + t1088*t573);
  p_output1[87]=t304;
  p_output1[88]=t554;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t275 + 0.08055*t293 - 1.*t1063*t520 - 1.*t1086*t544;
  p_output1[91]=0. + t1086*t275 + t1063*t293 + 0.08055*t520 - 0.01004*t544;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. + 0.08055*t185 - 0.13004*t252 - 1.*t1042*t509 - 1.*t1059*t514;
  p_output1[97]=0. + t1059*t185 + t1042*t252 - 0.13004*t509 + 0.08055*t514;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.19074*t126 - 1.*t1017*t126 + 0.03315*t162 - 1.*t1038*t504;
  p_output1[103]=0. + 0.03315*t126 + t1038*t126 + t1017*t162 - 0.19074*t504;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0. - 0.01315*t67 - 0.62554*t94 - 1.*t1009*t94 - 1.*t67*t995;
  p_output1[109]=0. - 0.62554*t67 - 1.*t1009*t67 + 0.01315*t94 + t94*t995;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
  p_output1[114]=-0.027500000000000004;
  p_output1[115]=0.0047000000000001485;
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

#include "Jb_RightToe_mex.hh"

namespace SymExpression
{

void Jb_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
