/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:15 GMT-04:00
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
  double t54;
  double t65;
  double t52;
  double t56;
  double t67;
  double t82;
  double t60;
  double t75;
  double t78;
  double t46;
  double t83;
  double t85;
  double t106;
  double t120;
  double t79;
  double t107;
  double t116;
  double t42;
  double t153;
  double t161;
  double t164;
  double t185;
  double t205;
  double t209;
  double t215;
  double t218;
  double t227;
  double t260;
  double t117;
  double t238;
  double t249;
  double t39;
  double t277;
  double t300;
  double t307;
  double t366;
  double t252;
  double t328;
  double t355;
  double t19;
  double t375;
  double t380;
  double t382;
  double t397;
  double t364;
  double t385;
  double t387;
  double t15;
  double t398;
  double t406;
  double t409;
  double t425;
  double t393;
  double t421;
  double t423;
  double t12;
  double t426;
  double t428;
  double t430;
  double t463;
  double t474;
  double t483;
  double t488;
  double t495;
  double t498;
  double t486;
  double t500;
  double t504;
  double t515;
  double t523;
  double t525;
  double t551;
  double t564;
  double t565;
  double t509;
  double t567;
  double t572;
  double t583;
  double t587;
  double t589;
  double t576;
  double t591;
  double t593;
  double t618;
  double t626;
  double t629;
  double t594;
  double t632;
  double t635;
  double t661;
  double t669;
  double t670;
  double t660;
  double t672;
  double t675;
  double t691;
  double t696;
  double t701;
  double t746;
  double t748;
  double t752;
  double t762;
  double t768;
  double t769;
  double t774;
  double t775;
  double t777;
  double t753;
  double t780;
  double t782;
  double t804;
  double t810;
  double t813;
  double t786;
  double t817;
  double t819;
  double t827;
  double t830;
  double t832;
  double t820;
  double t837;
  double t838;
  double t853;
  double t854;
  double t855;
  double t840;
  double t856;
  double t861;
  double t872;
  double t883;
  double t885;
  double t424;
  double t433;
  double t436;
  double t439;
  double t442;
  double t453;
  double t676;
  double t711;
  double t713;
  double t724;
  double t731;
  double t738;
  double t869;
  double t890;
  double t891;
  double t899;
  double t907;
  double t929;
  double t1094;
  double t1100;
  double t1069;
  double t1070;
  double t941;
  double t943;
  double t948;
  double t1165;
  double t1166;
  double t1239;
  double t1245;
  double t1312;
  double t1330;
  double t1382;
  double t1401;
  double t1475;
  double t1476;
  double t1071;
  double t1075;
  double t1078;
  double t1112;
  double t1119;
  double t1128;
  double t1141;
  double t1142;
  double t1145;
  double t1151;
  double t1153;
  double t1158;
  double t1170;
  double t1182;
  double t1188;
  double t960;
  double t962;
  double t966;
  double t1207;
  double t1220;
  double t1230;
  double t1250;
  double t1263;
  double t1269;
  double t1277;
  double t1300;
  double t1303;
  double t1333;
  double t1342;
  double t1348;
  double t1354;
  double t1367;
  double t1371;
  double t1413;
  double t1419;
  double t1422;
  double t1443;
  double t1447;
  double t1451;
  double t1488;
  double t1495;
  double t1497;
  double t1505;
  double t1519;
  double t1521;
  double t967;
  double t974;
  double t993;
  t54 = Cos(var1[5]);
  t65 = Sin(var1[3]);
  t52 = Cos(var1[3]);
  t56 = Sin(var1[4]);
  t67 = Sin(var1[5]);
  t82 = Sin(var1[13]);
  t60 = t52*t54*t56;
  t75 = t65*t67;
  t78 = t60 + t75;
  t46 = Cos(var1[13]);
  t83 = -1.*t54*t65;
  t85 = t52*t56*t67;
  t106 = t83 + t85;
  t120 = Cos(var1[15]);
  t79 = t46*t78;
  t107 = -1.*t82*t106;
  t116 = t79 + t107;
  t42 = Sin(var1[15]);
  t153 = Cos(var1[14]);
  t161 = Cos(var1[4]);
  t164 = t153*t52*t161;
  t185 = Sin(var1[14]);
  t205 = t82*t78;
  t209 = t46*t106;
  t215 = t205 + t209;
  t218 = t185*t215;
  t227 = t164 + t218;
  t260 = Cos(var1[16]);
  t117 = t42*t116;
  t238 = t120*t227;
  t249 = t117 + t238;
  t39 = Sin(var1[16]);
  t277 = t120*t116;
  t300 = -1.*t42*t227;
  t307 = t277 + t300;
  t366 = Cos(var1[17]);
  t252 = -1.*t39*t249;
  t328 = t260*t307;
  t355 = t252 + t328;
  t19 = Sin(var1[17]);
  t375 = t260*t249;
  t380 = t39*t307;
  t382 = t375 + t380;
  t397 = Cos(var1[18]);
  t364 = t19*t355;
  t385 = t366*t382;
  t387 = t364 + t385;
  t15 = Sin(var1[18]);
  t398 = t366*t355;
  t406 = -1.*t19*t382;
  t409 = t398 + t406;
  t425 = Cos(var1[19]);
  t393 = -1.*t15*t387;
  t421 = t397*t409;
  t423 = t393 + t421;
  t12 = Sin(var1[19]);
  t426 = t397*t387;
  t428 = t15*t409;
  t430 = t426 + t428;
  t463 = t54*t65*t56;
  t474 = -1.*t52*t67;
  t483 = t463 + t474;
  t488 = t52*t54;
  t495 = t65*t56*t67;
  t498 = t488 + t495;
  t486 = t46*t483;
  t500 = -1.*t82*t498;
  t504 = t486 + t500;
  t515 = t153*t161*t65;
  t523 = t82*t483;
  t525 = t46*t498;
  t551 = t523 + t525;
  t564 = t185*t551;
  t565 = t515 + t564;
  t509 = t42*t504;
  t567 = t120*t565;
  t572 = t509 + t567;
  t583 = t120*t504;
  t587 = -1.*t42*t565;
  t589 = t583 + t587;
  t576 = -1.*t39*t572;
  t591 = t260*t589;
  t593 = t576 + t591;
  t618 = t260*t572;
  t626 = t39*t589;
  t629 = t618 + t626;
  t594 = t19*t593;
  t632 = t366*t629;
  t635 = t594 + t632;
  t661 = t366*t593;
  t669 = -1.*t19*t629;
  t670 = t661 + t669;
  t660 = -1.*t15*t635;
  t672 = t397*t670;
  t675 = t660 + t672;
  t691 = t397*t635;
  t696 = t15*t670;
  t701 = t691 + t696;
  t746 = t46*t161*t54;
  t748 = -1.*t161*t82*t67;
  t752 = t746 + t748;
  t762 = -1.*t153*t56;
  t768 = t161*t54*t82;
  t769 = t46*t161*t67;
  t774 = t768 + t769;
  t775 = t185*t774;
  t777 = t762 + t775;
  t753 = t42*t752;
  t780 = t120*t777;
  t782 = t753 + t780;
  t804 = t120*t752;
  t810 = -1.*t42*t777;
  t813 = t804 + t810;
  t786 = -1.*t39*t782;
  t817 = t260*t813;
  t819 = t786 + t817;
  t827 = t260*t782;
  t830 = t39*t813;
  t832 = t827 + t830;
  t820 = t19*t819;
  t837 = t366*t832;
  t838 = t820 + t837;
  t853 = t366*t819;
  t854 = -1.*t19*t832;
  t855 = t853 + t854;
  t840 = -1.*t15*t838;
  t856 = t397*t855;
  t861 = t840 + t856;
  t872 = t397*t838;
  t883 = t15*t855;
  t885 = t872 + t883;
  t424 = t12*t423;
  t433 = t425*t430;
  t436 = t424 + t433;
  t439 = t425*t423;
  t442 = -1.*t12*t430;
  t453 = t439 + t442;
  t676 = t12*t675;
  t711 = t425*t701;
  t713 = t676 + t711;
  t724 = t425*t675;
  t731 = -1.*t12*t701;
  t738 = t724 + t731;
  t869 = t12*t861;
  t890 = t425*t885;
  t891 = t869 + t890;
  t899 = t425*t861;
  t907 = -1.*t12*t885;
  t929 = t899 + t907;
  t1094 = -1.*t46;
  t1100 = 1. + t1094;
  t1069 = -1.*t153;
  t1070 = 1. + t1069;
  t941 = -1.*t52*t161*t185;
  t943 = t153*t215;
  t948 = t941 + t943;
  t1165 = -1.*t120;
  t1166 = 1. + t1165;
  t1239 = -1.*t260;
  t1245 = 1. + t1239;
  t1312 = -1.*t366;
  t1330 = 1. + t1312;
  t1382 = -1.*t397;
  t1401 = 1. + t1382;
  t1475 = -1.*t425;
  t1476 = 1. + t1475;
  t1071 = -0.08055*t1070;
  t1075 = -0.135*t185;
  t1078 = 0. + t1071 + t1075;
  t1112 = 0.07996*t1100;
  t1119 = 0.135*t82;
  t1128 = 0. + t1112 + t1119;
  t1141 = -0.135*t1100;
  t1142 = 0.07996*t82;
  t1145 = 0. + t1141 + t1142;
  t1151 = -0.135*t1070;
  t1153 = 0.08055*t185;
  t1158 = 0. + t1151 + t1153;
  t1170 = -0.01004*t1166;
  t1182 = 0.08055*t42;
  t1188 = 0. + t1170 + t1182;
  t960 = -1.*t161*t185*t65;
  t962 = t153*t551;
  t966 = t960 + t962;
  t1207 = -0.08055*t1166;
  t1220 = -0.01004*t42;
  t1230 = 0. + t1207 + t1220;
  t1250 = -0.08055*t1245;
  t1263 = -0.13004*t39;
  t1269 = 0. + t1250 + t1263;
  t1277 = -0.13004*t1245;
  t1300 = 0.08055*t39;
  t1303 = 0. + t1277 + t1300;
  t1333 = -0.19074*t1330;
  t1342 = 0.03315*t19;
  t1348 = 0. + t1333 + t1342;
  t1354 = -0.03315*t1330;
  t1367 = -0.19074*t19;
  t1371 = 0. + t1354 + t1367;
  t1413 = -0.01315*t1401;
  t1419 = -0.62554*t15;
  t1422 = 0. + t1413 + t1419;
  t1443 = -0.62554*t1401;
  t1447 = 0.01315*t15;
  t1451 = 0. + t1443 + t1447;
  t1488 = -1.03354*t1476;
  t1495 = 0.05315*t12;
  t1497 = 0. + t1488 + t1495;
  t1505 = -0.05315*t1476;
  t1519 = -1.03354*t12;
  t1521 = 0. + t1505 + t1519;
  t967 = t185*t56;
  t974 = t153*t774;
  t993 = t967 + t974;
  p_output1[0]=0.642788*t436 + 0.766044*t453;
  p_output1[1]=0.642788*t713 + 0.766044*t738;
  p_output1[2]=0.642788*t891 + 0.766044*t929;
  p_output1[3]=0.;
  p_output1[4]=t948;
  p_output1[5]=t966;
  p_output1[6]=t993;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t436 + 0.642788*t453;
  p_output1[9]=-0.766044*t713 + 0.642788*t738;
  p_output1[10]=-0.766044*t891 + 0.642788*t929;
  p_output1[11]=0.;
  p_output1[12]=0. + t106*t1145 + t116*t1188 + t1158*t215 + t1230*t227 + t1269*t249 + t1303*t307 + t1348*t355 + t1371*t382 + t1422*t387 + t1451*t409 + t1497*t423 + t1521*t430 + 0.046027*t436 - 0.979698*t453 + t1078*t161*t52 + t1128*t78 - 0.1305*t948 + var1[0];
  p_output1[13]=0. + t1128*t483 + t1145*t498 + t1188*t504 + t1158*t551 + t1230*t565 + t1269*t572 + t1303*t589 + t1348*t593 + t1371*t629 + t1422*t635 + t1078*t161*t65 + t1451*t670 + t1497*t675 + t1521*t701 + 0.046027*t713 - 0.979698*t738 - 0.1305*t966 + var1[1];
  p_output1[14]=0. + t1128*t161*t54 - 1.*t1078*t56 + t1145*t161*t67 + t1188*t752 + t1158*t774 + t1230*t777 + t1269*t782 + t1303*t813 + t1348*t819 + t1371*t832 + t1422*t838 + t1451*t855 + t1497*t861 + t1521*t885 + 0.046027*t891 - 0.979698*t929 - 0.1305*t993 + var1[2];
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

#include "T_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void T_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
