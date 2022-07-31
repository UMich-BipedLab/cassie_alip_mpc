/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:36 GMT-04:00
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
  double t30;
  double t72;
  double t88;
  double t75;
  double t90;
  double t68;
  double t111;
  double t117;
  double t118;
  double t81;
  double t104;
  double t107;
  double t119;
  double t28;
  double t157;
  double t158;
  double t159;
  double t47;
  double t63;
  double t64;
  double t110;
  double t122;
  double t137;
  double t139;
  double t147;
  double t148;
  double t169;
  double t215;
  double t150;
  double t191;
  double t200;
  double t23;
  double t216;
  double t243;
  double t252;
  double t290;
  double t208;
  double t281;
  double t283;
  double t17;
  double t291;
  double t293;
  double t298;
  double t318;
  double t287;
  double t303;
  double t307;
  double t7;
  double t323;
  double t324;
  double t327;
  double t5;
  double t415;
  double t422;
  double t438;
  double t388;
  double t396;
  double t405;
  double t474;
  double t496;
  double t501;
  double t376;
  double t406;
  double t441;
  double t455;
  double t456;
  double t462;
  double t473;
  double t522;
  double t523;
  double t527;
  double t530;
  double t540;
  double t525;
  double t546;
  double t561;
  double t577;
  double t591;
  double t598;
  double t347;
  double t566;
  double t602;
  double t605;
  double t613;
  double t619;
  double t632;
  double t708;
  double t723;
  double t724;
  double t671;
  double t682;
  double t689;
  double t695;
  double t696;
  double t697;
  double t702;
  double t729;
  double t731;
  double t733;
  double t734;
  double t746;
  double t732;
  double t752;
  double t754;
  double t757;
  double t761;
  double t765;
  double t755;
  double t775;
  double t782;
  double t793;
  double t796;
  double t797;
  double t312;
  double t328;
  double t329;
  double t350;
  double t352;
  double t358;
  double t610;
  double t641;
  double t643;
  double t653;
  double t655;
  double t662;
  double t789;
  double t799;
  double t812;
  double t824;
  double t832;
  double t834;
  double t937;
  double t939;
  double t1005;
  double t1007;
  double t1084;
  double t1093;
  double t1149;
  double t1153;
  double t1197;
  double t1200;
  double t1228;
  double t1233;
  double t1318;
  double t1321;
  double t848;
  double t861;
  double t866;
  double t944;
  double t947;
  double t953;
  double t963;
  double t966;
  double t977;
  double t1016;
  double t1024;
  double t1027;
  double t1042;
  double t1049;
  double t1053;
  double t1095;
  double t1097;
  double t1107;
  double t1131;
  double t1132;
  double t1142;
  double t1154;
  double t1159;
  double t1166;
  double t1170;
  double t1173;
  double t1176;
  double t1202;
  double t1209;
  double t1210;
  double t1221;
  double t1225;
  double t1226;
  double t1244;
  double t1245;
  double t1272;
  double t1284;
  double t1285;
  double t1300;
  double t1322;
  double t1326;
  double t1333;
  double t1351;
  double t1365;
  double t1377;
  double t869;
  double t872;
  double t880;
  double t881;
  double t885;
  double t888;
  t30 = Cos(var1[3]);
  t72 = Cos(var1[5]);
  t88 = Sin(var1[4]);
  t75 = Sin(var1[3]);
  t90 = Sin(var1[5]);
  t68 = Cos(var1[6]);
  t111 = t30*t72*t88;
  t117 = t75*t90;
  t118 = t111 + t117;
  t81 = -1.*t72*t75;
  t104 = t30*t88*t90;
  t107 = t81 + t104;
  t119 = Sin(var1[6]);
  t28 = Cos(var1[8]);
  t157 = t68*t118;
  t158 = -1.*t107*t119;
  t159 = t157 + t158;
  t47 = Cos(var1[4]);
  t63 = Cos(var1[7]);
  t64 = t30*t47*t63;
  t110 = t68*t107;
  t122 = t118*t119;
  t137 = t110 + t122;
  t139 = Sin(var1[7]);
  t147 = t137*t139;
  t148 = t64 + t147;
  t169 = Sin(var1[8]);
  t215 = Cos(var1[9]);
  t150 = t28*t148;
  t191 = t159*t169;
  t200 = t150 + t191;
  t23 = Sin(var1[9]);
  t216 = t28*t159;
  t243 = -1.*t148*t169;
  t252 = t216 + t243;
  t290 = Cos(var1[10]);
  t208 = -1.*t23*t200;
  t281 = t215*t252;
  t283 = t208 + t281;
  t17 = Sin(var1[10]);
  t291 = t215*t200;
  t293 = t23*t252;
  t298 = t291 + t293;
  t318 = Cos(var1[11]);
  t287 = t17*t283;
  t303 = t290*t298;
  t307 = t287 + t303;
  t7 = Sin(var1[11]);
  t323 = t290*t283;
  t324 = -1.*t17*t298;
  t327 = t323 + t324;
  t5 = Cos(var1[12]);
  t415 = t72*t75*t88;
  t422 = -1.*t30*t90;
  t438 = t415 + t422;
  t388 = t30*t72;
  t396 = t75*t88*t90;
  t405 = t388 + t396;
  t474 = t68*t438;
  t496 = -1.*t405*t119;
  t501 = t474 + t496;
  t376 = t47*t63*t75;
  t406 = t68*t405;
  t441 = t438*t119;
  t455 = t406 + t441;
  t456 = t455*t139;
  t462 = t376 + t456;
  t473 = t28*t462;
  t522 = t501*t169;
  t523 = t473 + t522;
  t527 = t28*t501;
  t530 = -1.*t462*t169;
  t540 = t527 + t530;
  t525 = -1.*t23*t523;
  t546 = t215*t540;
  t561 = t525 + t546;
  t577 = t215*t523;
  t591 = t23*t540;
  t598 = t577 + t591;
  t347 = Sin(var1[12]);
  t566 = t17*t561;
  t602 = t290*t598;
  t605 = t566 + t602;
  t613 = t290*t561;
  t619 = -1.*t17*t598;
  t632 = t613 + t619;
  t708 = t47*t72*t68;
  t723 = -1.*t47*t90*t119;
  t724 = t708 + t723;
  t671 = -1.*t63*t88;
  t682 = t47*t68*t90;
  t689 = t47*t72*t119;
  t695 = t682 + t689;
  t696 = t695*t139;
  t697 = t671 + t696;
  t702 = t28*t697;
  t729 = t724*t169;
  t731 = t702 + t729;
  t733 = t28*t724;
  t734 = -1.*t697*t169;
  t746 = t733 + t734;
  t732 = -1.*t23*t731;
  t752 = t215*t746;
  t754 = t732 + t752;
  t757 = t215*t731;
  t761 = t23*t746;
  t765 = t757 + t761;
  t755 = t17*t754;
  t775 = t290*t765;
  t782 = t755 + t775;
  t793 = t290*t754;
  t796 = -1.*t17*t765;
  t797 = t793 + t796;
  t312 = -1.*t7*t307;
  t328 = t318*t327;
  t329 = t312 + t328;
  t350 = t318*t307;
  t352 = t7*t327;
  t358 = t350 + t352;
  t610 = -1.*t7*t605;
  t641 = t318*t632;
  t643 = t610 + t641;
  t653 = t318*t605;
  t655 = t7*t632;
  t662 = t653 + t655;
  t789 = -1.*t7*t782;
  t799 = t318*t797;
  t812 = t789 + t799;
  t824 = t318*t782;
  t832 = t7*t797;
  t834 = t824 + t832;
  t937 = -1.*t68;
  t939 = 1. + t937;
  t1005 = -1.*t63;
  t1007 = 1. + t1005;
  t1084 = -1.*t28;
  t1093 = 1. + t1084;
  t1149 = -1.*t215;
  t1153 = 1. + t1149;
  t1197 = -1.*t290;
  t1200 = 1. + t1197;
  t1228 = -1.*t318;
  t1233 = 1. + t1228;
  t1318 = -1.*t5;
  t1321 = 1. + t1318;
  t848 = t347*t329;
  t861 = t5*t358;
  t866 = t848 + t861;
  t944 = 0.07996*t939;
  t947 = -0.135*t119;
  t953 = 0. + t944 + t947;
  t963 = 0.135*t939;
  t966 = 0.07996*t119;
  t977 = 0. + t963 + t966;
  t1016 = 0.135*t1007;
  t1024 = 0.08055*t139;
  t1027 = 0. + t1016 + t1024;
  t1042 = -0.08055*t1007;
  t1049 = 0.135*t139;
  t1053 = 0. + t1042 + t1049;
  t1095 = -0.08055*t1093;
  t1097 = -0.01004*t169;
  t1107 = 0. + t1095 + t1097;
  t1131 = -0.01004*t1093;
  t1132 = 0.08055*t169;
  t1142 = 0. + t1131 + t1132;
  t1154 = -0.08055*t1153;
  t1159 = -0.13004*t23;
  t1166 = 0. + t1154 + t1159;
  t1170 = -0.13004*t1153;
  t1173 = 0.08055*t23;
  t1176 = 0. + t1170 + t1173;
  t1202 = -0.19074*t1200;
  t1209 = 0.03315*t17;
  t1210 = 0. + t1202 + t1209;
  t1221 = -0.03315*t1200;
  t1225 = -0.19074*t17;
  t1226 = 0. + t1221 + t1225;
  t1244 = -0.01315*t1233;
  t1245 = -0.62554*t7;
  t1272 = 0. + t1244 + t1245;
  t1284 = -0.62554*t1233;
  t1285 = 0.01315*t7;
  t1300 = 0. + t1284 + t1285;
  t1322 = -1.03354*t1321;
  t1326 = 0.05315*t347;
  t1333 = 0. + t1322 + t1326;
  t1351 = -0.05315*t1321;
  t1365 = -1.03354*t347;
  t1377 = 0. + t1351 + t1365;
  t869 = t347*t643;
  t872 = t5*t662;
  t880 = t869 + t872;
  t881 = t347*t812;
  t885 = t5*t834;
  t888 = t881 + t885;
  p_output1[0]=t347*t358 - 1.*t329*t5;
  p_output1[1]=-1.*t5*t643 + t347*t662;
  p_output1[2]=-1.*t5*t812 + t347*t834;
  p_output1[3]=0.;
  p_output1[4]=t866;
  p_output1[5]=t880;
  p_output1[6]=t888;
  p_output1[7]=0.;
  p_output1[8]=t139*t30*t47 - 1.*t137*t63;
  p_output1[9]=-1.*t455*t63 + t139*t47*t75;
  p_output1[10]=-1.*t63*t695 - 1.*t139*t88;
  p_output1[11]=0.;
  p_output1[12]=0. + t1027*t137 + t1107*t148 + t1142*t159 + t1166*t200 + t1176*t252 + t1210*t283 + t1226*t298 + t1272*t307 + t1300*t327 + t1333*t329 + t1377*t358 + t1053*t30*t47 - 1.03354*(-1.*t347*t358 + t329*t5) + 0.1305*(-1.*t139*t30*t47 + t137*t63) - 0.05315*t866 + t118*t953 + t107*t977 + var1[0];
  p_output1[13]=0. + t1027*t455 + t1107*t462 + t1142*t501 + t1166*t523 + t1176*t540 + t1210*t561 + t1226*t598 + t1272*t605 + t1300*t632 + t1333*t643 + t1377*t662 - 1.03354*(t5*t643 - 1.*t347*t662) + t1053*t47*t75 + 0.1305*(t455*t63 - 1.*t139*t47*t75) - 0.05315*t880 + t438*t953 + t405*t977 + var1[1];
  p_output1[14]=0. + t1027*t695 + t1107*t697 + t1142*t724 + t1166*t731 + t1176*t746 + t1210*t754 + t1226*t765 + t1272*t782 + t1300*t797 + t1333*t812 + t1377*t834 - 1.03354*(t5*t812 - 1.*t347*t834) - 1.*t1053*t88 + 0.1305*(t63*t695 + t139*t88) - 0.05315*t888 + t47*t72*t953 + t47*t90*t977 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftToeJoint_mex.hh"

namespace SymExpression
{

void T_LeftToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
