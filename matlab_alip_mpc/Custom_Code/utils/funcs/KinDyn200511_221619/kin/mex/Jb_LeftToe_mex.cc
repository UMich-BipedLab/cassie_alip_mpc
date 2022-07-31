/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:50 GMT-04:00
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
  double t94;
  double t72;
  double t79;
  double t99;
  double t134;
  double t89;
  double t108;
  double t124;
  double t68;
  double t136;
  double t163;
  double t165;
  double t201;
  double t127;
  double t188;
  double t193;
  double t45;
  double t204;
  double t207;
  double t217;
  double t40;
  double t254;
  double t263;
  double t277;
  double t194;
  double t229;
  double t234;
  double t285;
  double t308;
  double t248;
  double t292;
  double t303;
  double t38;
  double t312;
  double t315;
  double t336;
  double t342;
  double t355;
  double t356;
  double t387;
  double t304;
  double t369;
  double t380;
  double t32;
  double t390;
  double t399;
  double t406;
  double t9;
  double t547;
  double t548;
  double t566;
  double t545;
  double t567;
  double t568;
  double t575;
  double t584;
  double t619;
  double t620;
  double t627;
  double t569;
  double t586;
  double t599;
  double t606;
  double t633;
  double t637;
  double t639;
  double t640;
  double t643;
  double t665;
  double t668;
  double t446;
  double t451;
  double t454;
  double t494;
  double t638;
  double t670;
  double t672;
  double t683;
  double t690;
  double t696;
  double t737;
  double t743;
  double t748;
  double t749;
  double t765;
  double t766;
  double t383;
  double t417;
  double t433;
  double t459;
  double t467;
  double t485;
  double t504;
  double t516;
  double t517;
  double t520;
  double t522;
  double t674;
  double t699;
  double t702;
  double t705;
  double t706;
  double t708;
  double t711;
  double t714;
  double t716;
  double t719;
  double t720;
  double t759;
  double t768;
  double t769;
  double t773;
  double t780;
  double t781;
  double t783;
  double t784;
  double t792;
  double t794;
  double t853;
  double t854;
  double t857;
  double t949;
  double t953;
  double t915;
  double t928;
  double t954;
  double t957;
  double t958;
  double t959;
  double t961;
  double t975;
  double t976;
  double t977;
  double t906;
  double t907;
  double t939;
  double t947;
  double t960;
  double t978;
  double t980;
  double t987;
  double t989;
  double t992;
  double t993;
  double t994;
  double t901;
  double t902;
  double t908;
  double t912;
  double t982;
  double t997;
  double t999;
  double t1008;
  double t1017;
  double t1021;
  double t1024;
  double t1026;
  double t890;
  double t891;
  double t1062;
  double t1064;
  double t1065;
  double t1066;
  double t1069;
  double t904;
  double t905;
  double t1005;
  double t1027;
  double t1037;
  double t872;
  double t876;
  double t898;
  double t1040;
  double t1061;
  double t1074;
  double t1076;
  double t1088;
  double t1089;
  double t1090;
  double t1095;
  double t1098;
  double t1115;
  double t1122;
  double t1124;
  double t1131;
  double t1132;
  double t1142;
  double t1144;
  double t861;
  double t863;
  double t866;
  double t878;
  double t883;
  double t1081;
  double t1149;
  double t1168;
  double t1176;
  double t1181;
  double t1186;
  double t1188;
  double t1204;
  double t1224;
  double t1225;
  double t1226;
  double t1231;
  double t1240;
  double t1243;
  double t1244;
  double t1174;
  double t1205;
  double t1210;
  double t1233;
  double t1247;
  double t1250;
  double t1255;
  double t1267;
  double t1269;
  double t832;
  double t840;
  double t850;
  double t1211;
  double t1279;
  double t1310;
  double t1321;
  double t1342;
  double t1355;
  double t1373;
  double t1379;
  double t1395;
  double t1410;
  double t1453;
  double t1476;
  double t1659;
  double t1671;
  t94 = Cos(var1[11]);
  t72 = Cos(var1[12]);
  t79 = Sin(var1[11]);
  t99 = Sin(var1[12]);
  t134 = Cos(var1[10]);
  t89 = t72*t79;
  t108 = t94*t99;
  t124 = 0. + t89 + t108;
  t68 = Sin(var1[10]);
  t136 = -1.*t94*t72;
  t163 = t79*t99;
  t165 = 0. + t136 + t163;
  t201 = Sin(var1[9]);
  t127 = t68*t124;
  t188 = t134*t165;
  t193 = 0. + t127 + t188;
  t45 = Cos(var1[9]);
  t204 = t134*t124;
  t207 = -1.*t68*t165;
  t217 = 0. + t204 + t207;
  t40 = Cos(var1[8]);
  t254 = -1.*t201*t193;
  t263 = t45*t217;
  t277 = 0. + t254 + t263;
  t194 = t45*t193;
  t229 = t201*t217;
  t234 = 0. + t194 + t229;
  t285 = Sin(var1[8]);
  t308 = Cos(var1[6]);
  t248 = t40*t234;
  t292 = t277*t285;
  t303 = 0. + t248 + t292;
  t38 = Sin(var1[6]);
  t312 = Sin(var1[7]);
  t315 = t40*t277;
  t336 = -1.*t234*t285;
  t342 = 0. + t315 + t336;
  t355 = t312*t342;
  t356 = 0. + t355;
  t387 = Sin(var1[5]);
  t304 = -1.*t38*t303;
  t369 = t308*t356;
  t380 = 0. + t304 + t369;
  t32 = Cos(var1[5]);
  t390 = t308*t303;
  t399 = t38*t356;
  t406 = 0. + t390 + t399;
  t9 = Sin(var1[3]);
  t547 = t94*t72;
  t548 = -1.*t79*t99;
  t566 = 0. + t547 + t548;
  t545 = -1.*t68*t124;
  t567 = t134*t566;
  t568 = 0. + t545 + t567;
  t575 = t68*t566;
  t584 = 0. + t204 + t575;
  t619 = t45*t568;
  t620 = -1.*t201*t584;
  t627 = 0. + t619 + t620;
  t569 = t201*t568;
  t586 = t45*t584;
  t599 = 0. + t569 + t586;
  t606 = t40*t599;
  t633 = t627*t285;
  t637 = 0. + t606 + t633;
  t639 = t40*t627;
  t640 = -1.*t599*t285;
  t643 = 0. + t639 + t640;
  t665 = t312*t643;
  t668 = 0. + t665;
  t446 = Cos(var1[3]);
  t451 = Cos(var1[4]);
  t454 = Cos(var1[7]);
  t494 = Sin(var1[4]);
  t638 = -1.*t38*t637;
  t670 = t308*t668;
  t672 = 0. + t638 + t670;
  t683 = t308*t637;
  t690 = t38*t668;
  t696 = 0. + t683 + t690;
  t737 = -1.*t454;
  t743 = 0. + t737;
  t748 = t308*t743;
  t749 = 0. + t748;
  t765 = t743*t38;
  t766 = 0. + t765;
  t383 = t32*t380;
  t417 = -1.*t387*t406;
  t433 = 0. + t383 + t417;
  t459 = t454*t342;
  t467 = 0. + t459;
  t485 = t451*t467;
  t504 = t387*t380;
  t516 = t32*t406;
  t517 = 0. + t504 + t516;
  t520 = t494*t517;
  t522 = 0. + t485 + t520;
  t674 = t32*t672;
  t699 = -1.*t387*t696;
  t702 = 0. + t674 + t699;
  t705 = t454*t643;
  t706 = 0. + t705;
  t708 = t451*t706;
  t711 = t387*t672;
  t714 = t32*t696;
  t716 = 0. + t711 + t714;
  t719 = t494*t716;
  t720 = 0. + t708 + t719;
  t759 = t32*t749;
  t768 = -1.*t387*t766;
  t769 = 0. + t759 + t768;
  t773 = t749*t387;
  t780 = t32*t766;
  t781 = 0. + t773 + t780;
  t783 = t494*t781;
  t784 = 0. + t312;
  t792 = t451*t784;
  t794 = 0. + t783 + t792;
  t853 = -1.*t494*t706;
  t854 = t451*t716;
  t857 = 0. + t853 + t854;
  t949 = -1.*t72;
  t953 = 1. + t949;
  t915 = -1.*t94;
  t928 = 1. + t915;
  t954 = -0.05315*t953;
  t957 = -0.02565*t72;
  t958 = 0.0047000000000001485*t99;
  t959 = 0. + t954 + t957 + t958;
  t961 = -1.03354*t953;
  t975 = -1.03824*t72;
  t976 = 0.027500000000000004*t99;
  t977 = 0. + t961 + t975 + t976;
  t906 = -1.*t134;
  t907 = 1. + t906;
  t939 = -0.62554*t928;
  t947 = 0.01315*t79;
  t960 = t79*t959;
  t978 = t94*t977;
  t980 = 0. + t939 + t947 + t960 + t978;
  t987 = -0.01315*t928;
  t989 = -0.62554*t79;
  t992 = t94*t959;
  t993 = -1.*t79*t977;
  t994 = 0. + t987 + t989 + t992 + t993;
  t901 = -1.*t45;
  t902 = 1. + t901;
  t908 = -0.03315*t907;
  t912 = -0.19074*t68;
  t982 = -1.*t68*t980;
  t997 = t134*t994;
  t999 = 0. + t908 + t912 + t982 + t997;
  t1008 = -0.19074*t907;
  t1017 = 0.03315*t68;
  t1021 = t134*t980;
  t1024 = t68*t994;
  t1026 = 0. + t1008 + t1017 + t1021 + t1024;
  t890 = -1.*t40;
  t891 = 1. + t890;
  t1062 = -0.08055*t902;
  t1064 = -0.13004*t201;
  t1065 = t45*t999;
  t1066 = -1.*t201*t1026;
  t1069 = 0. + t1062 + t1064 + t1065 + t1066;
  t904 = -0.13004*t902;
  t905 = 0.08055*t201;
  t1005 = t201*t999;
  t1027 = t45*t1026;
  t1037 = 0. + t904 + t905 + t1005 + t1027;
  t872 = -1.*t308;
  t876 = 1. + t872;
  t898 = -0.01004*t891;
  t1040 = t40*t1037;
  t1061 = 0.08055*t285;
  t1074 = t1069*t285;
  t1076 = 0. + t898 + t1040 + t1061 + t1074;
  t1088 = -1.*t454;
  t1089 = 1. + t1088;
  t1090 = 0.135*t1089;
  t1095 = 0.1306*t454;
  t1098 = 0.08055*t312;
  t1115 = -0.08055*t891;
  t1122 = t40*t1069;
  t1124 = -0.01004*t285;
  t1131 = -1.*t1037*t285;
  t1132 = 0. + t1115 + t1122 + t1124 + t1131;
  t1142 = t312*t1132;
  t1144 = 0. + t1090 + t1095 + t1098 + t1142;
  t861 = t451*t781;
  t863 = -1.*t494*t784;
  t866 = 0. + t861 + t863;
  t878 = 0.135*t876;
  t883 = 0.07996*t38;
  t1081 = -1.*t38*t1076;
  t1149 = t308*t1144;
  t1168 = 0. + t878 + t883 + t1081 + t1149;
  t1176 = 0.07996*t876;
  t1181 = -0.135*t38;
  t1186 = t308*t1076;
  t1188 = t38*t1144;
  t1204 = 0. + t1176 + t1181 + t1186 + t1188;
  t1224 = -0.08055*t1089;
  t1225 = 0.004400000000000015*t312;
  t1226 = t454*t1132;
  t1231 = 0. + t1224 + t1225 + t1226;
  t1240 = t387*t1168;
  t1243 = t32*t1204;
  t1244 = 0. + t1240 + t1243;
  t1174 = t32*t1168;
  t1205 = -1.*t387*t1204;
  t1210 = 0. + t1174 + t1205;
  t1233 = -1.*t494*t1231;
  t1247 = t451*t1244;
  t1250 = 0. + t1233 + t1247;
  t1255 = t451*t1231;
  t1267 = t494*t1244;
  t1269 = 0. + t1255 + t1267;
  t832 = -1.*t494*t467;
  t840 = t451*t517;
  t850 = 0. + t832 + t840;
  t1211 = t769*t1210;
  t1279 = -1.*t1210*t702;
  t1310 = -1.*t769*t1210;
  t1321 = t1210*t433;
  t1342 = t1210*t702;
  t1355 = -1.*t1210*t433;
  t1373 = t784*t1231;
  t1379 = -1.*t1231*t706;
  t1395 = -1.*t784*t1231;
  t1410 = t1231*t467;
  t1453 = t1231*t706;
  t1476 = -1.*t1231*t467;
  t1659 = t1076*t637;
  t1671 = -1.*t1076*t303;
  p_output1[0]=0. + t446*t522 - 1.*t433*t9;
  p_output1[1]=0. + t446*t720 - 1.*t702*t9;
  p_output1[2]=0. + t446*t794 - 1.*t769*t9;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t433*t446 + t522*t9;
  p_output1[7]=0. + t446*t702 + t720*t9;
  p_output1[8]=0. + t446*t769 + t794*t9;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t850;
  p_output1[13]=t857;
  p_output1[14]=t866;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1279 - 1.*t1269*t720 - 1.*t1250*t857)*t866 + t857*(t1211 + t1269*t794 + t1250*t866);
  p_output1[19]=(t1321 + t1269*t522 + t1250*t850)*t866 + t850*(t1310 - 1.*t1269*t794 - 1.*t1250*t866);
  p_output1[20]=(t1355 - 1.*t1269*t522 - 1.*t1250*t850)*t857 + t850*(t1342 + t1269*t720 + t1250*t857);
  p_output1[21]=t850;
  p_output1[22]=t857;
  p_output1[23]=t866;
  p_output1[24]=(t1279 + t1379 - 1.*t1244*t716)*t769 + t702*(t1211 + t1373 + t1244*t781);
  p_output1[25]=(t1321 + t1410 + t1244*t517)*t769 + t433*(t1310 + t1395 - 1.*t1244*t781);
  p_output1[26]=(t1355 + t1476 - 1.*t1244*t517)*t702 + t433*(t1342 + t1453 + t1244*t716);
  p_output1[27]=t433;
  p_output1[28]=t702;
  p_output1[29]=t769;
  p_output1[30]=t706*(t1373 + t1168*t749 + t1204*t766) + (t1379 - 1.*t1168*t672 - 1.*t1204*t696)*t784;
  p_output1[31]=t467*(t1395 - 1.*t1168*t749 - 1.*t1204*t766) + (t1410 + t1168*t380 + t1204*t406)*t784;
  p_output1[32]=t467*(t1453 + t1168*t672 + t1204*t696) + (t1476 - 1.*t1168*t380 - 1.*t1204*t406)*t706;
  p_output1[33]=t467;
  p_output1[34]=t706;
  p_output1[35]=t784;
  p_output1[36]=-0.135*t303 + 0.07996*t356 + t706*(0. + t1373 + t1144*t743) + (t1379 - 1.*t1076*t637 - 1.*t1144*t668)*t784;
  p_output1[37]=-0.135*t637 + 0.07996*t668 + t467*(0. + t1395 - 1.*t1144*t743) + (t1410 + t1076*t303 + t1144*t356)*t784;
  p_output1[38]=0. + t467*(t1453 + t1659 + t1144*t668) + (t1476 + t1671 - 1.*t1144*t356)*t706 + 0.07996*t743;
  p_output1[39]=t467;
  p_output1[40]=t706;
  p_output1[41]=t784;
  p_output1[42]=0. + 0.135*t342 - 0.1306*t637;
  p_output1[43]=0. + 0.1306*t303 + 0.135*t643;
  p_output1[44]=-0.08055 + (0. + t1671 - 1.*t1132*t342)*t637 + t303*(0. + t1659 + t1132*t643);
  p_output1[45]=t303;
  p_output1[46]=t637;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t234 - 0.01004*t277 - 1.*t1037*t599 - 1.*t1069*t627;
  p_output1[49]=0. + t1037*t234 + t1069*t277 + 0.08055*t599 - 0.01004*t627;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. + 0.08055*t193 - 0.13004*t217 - 1.*t1026*t584 - 1.*t568*t999;
  p_output1[55]=0. + t1026*t193 - 0.13004*t568 + 0.08055*t584 + t217*t999;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.19074*t124 + 0.03315*t165 - 1.*t124*t980 - 1.*t566*t994;
  p_output1[61]=0. + 0.03315*t124 - 0.19074*t566 + t165*t980 + t124*t994;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0. - 0.01315*t72 - 1.*t72*t959 - 0.62554*t99 - 1.*t977*t99;
  p_output1[67]=0. - 0.62554*t72 - 1.*t72*t977 + 0.01315*t99 + t959*t99;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
  p_output1[72]=-0.027500000000000004;
  p_output1[73]=0.0047000000000001485;
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

#include "Jb_LeftToe_mex.hh"

namespace SymExpression
{

void Jb_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
