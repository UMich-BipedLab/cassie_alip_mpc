/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:55 GMT-04:00
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
  double t85;
  double t72;
  double t80;
  double t91;
  double t98;
  double t83;
  double t92;
  double t95;
  double t56;
  double t103;
  double t104;
  double t105;
  double t114;
  double t97;
  double t107;
  double t109;
  double t45;
  double t119;
  double t120;
  double t122;
  double t128;
  double t137;
  double t157;
  double t162;
  double t171;
  double t176;
  double t214;
  double t110;
  double t178;
  double t184;
  double t43;
  double t215;
  double t220;
  double t227;
  double t242;
  double t208;
  double t229;
  double t230;
  double t38;
  double t246;
  double t263;
  double t264;
  double t284;
  double t232;
  double t265;
  double t268;
  double t31;
  double t292;
  double t295;
  double t301;
  double t12;
  double t368;
  double t371;
  double t374;
  double t377;
  double t388;
  double t396;
  double t375;
  double t412;
  double t418;
  double t436;
  double t438;
  double t440;
  double t449;
  double t456;
  double t457;
  double t427;
  double t462;
  double t463;
  double t473;
  double t481;
  double t516;
  double t471;
  double t523;
  double t524;
  double t547;
  double t564;
  double t567;
  double t334;
  double t546;
  double t568;
  double t581;
  double t590;
  double t592;
  double t597;
  double t642;
  double t651;
  double t658;
  double t664;
  double t665;
  double t666;
  double t680;
  double t682;
  double t687;
  double t660;
  double t691;
  double t697;
  double t705;
  double t711;
  double t714;
  double t703;
  double t717;
  double t718;
  double t733;
  double t743;
  double t744;
  double t720;
  double t745;
  double t756;
  double t762;
  double t768;
  double t771;
  double t277;
  double t307;
  double t308;
  double t337;
  double t345;
  double t353;
  double t588;
  double t603;
  double t607;
  double t614;
  double t617;
  double t618;
  double t757;
  double t775;
  double t786;
  double t797;
  double t798;
  double t799;
  double t959;
  double t961;
  double t936;
  double t938;
  double t1053;
  double t1054;
  double t1162;
  double t1163;
  double t1199;
  double t1204;
  double t1252;
  double t1260;
  double t1315;
  double t1318;
  double t809;
  double t817;
  double t826;
  double t942;
  double t947;
  double t952;
  double t964;
  double t965;
  double t971;
  double t988;
  double t996;
  double t1000;
  double t1022;
  double t1023;
  double t1046;
  double t1057;
  double t1061;
  double t1069;
  double t1136;
  double t1152;
  double t1153;
  double t1165;
  double t1167;
  double t1170;
  double t1175;
  double t1181;
  double t1190;
  double t1210;
  double t1213;
  double t1216;
  double t1229;
  double t1234;
  double t1246;
  double t1261;
  double t1264;
  double t1268;
  double t1270;
  double t1287;
  double t1288;
  double t1319;
  double t1320;
  double t1321;
  double t1326;
  double t1327;
  double t1330;
  double t839;
  double t842;
  double t844;
  double t870;
  double t873;
  double t876;
  t78 = Cos(var1[5]);
  t85 = Sin(var1[3]);
  t72 = Cos(var1[3]);
  t80 = Sin(var1[4]);
  t91 = Sin(var1[5]);
  t98 = Sin(var1[13]);
  t83 = t72*t78*t80;
  t92 = t85*t91;
  t95 = t83 + t92;
  t56 = Cos(var1[13]);
  t103 = -1.*t78*t85;
  t104 = t72*t80*t91;
  t105 = t103 + t104;
  t114 = Cos(var1[15]);
  t97 = t56*t95;
  t107 = -1.*t98*t105;
  t109 = t97 + t107;
  t45 = Sin(var1[15]);
  t119 = Cos(var1[14]);
  t120 = Cos(var1[4]);
  t122 = t119*t72*t120;
  t128 = Sin(var1[14]);
  t137 = t98*t95;
  t157 = t56*t105;
  t162 = t137 + t157;
  t171 = t128*t162;
  t176 = t122 + t171;
  t214 = Cos(var1[16]);
  t110 = t45*t109;
  t178 = t114*t176;
  t184 = t110 + t178;
  t43 = Sin(var1[16]);
  t215 = t114*t109;
  t220 = -1.*t45*t176;
  t227 = t215 + t220;
  t242 = Cos(var1[17]);
  t208 = -1.*t43*t184;
  t229 = t214*t227;
  t230 = t208 + t229;
  t38 = Sin(var1[17]);
  t246 = t214*t184;
  t263 = t43*t227;
  t264 = t246 + t263;
  t284 = Cos(var1[18]);
  t232 = t38*t230;
  t265 = t242*t264;
  t268 = t232 + t265;
  t31 = Sin(var1[18]);
  t292 = t242*t230;
  t295 = -1.*t38*t264;
  t301 = t292 + t295;
  t12 = Cos(var1[19]);
  t368 = t78*t85*t80;
  t371 = -1.*t72*t91;
  t374 = t368 + t371;
  t377 = t72*t78;
  t388 = t85*t80*t91;
  t396 = t377 + t388;
  t375 = t56*t374;
  t412 = -1.*t98*t396;
  t418 = t375 + t412;
  t436 = t119*t120*t85;
  t438 = t98*t374;
  t440 = t56*t396;
  t449 = t438 + t440;
  t456 = t128*t449;
  t457 = t436 + t456;
  t427 = t45*t418;
  t462 = t114*t457;
  t463 = t427 + t462;
  t473 = t114*t418;
  t481 = -1.*t45*t457;
  t516 = t473 + t481;
  t471 = -1.*t43*t463;
  t523 = t214*t516;
  t524 = t471 + t523;
  t547 = t214*t463;
  t564 = t43*t516;
  t567 = t547 + t564;
  t334 = Sin(var1[19]);
  t546 = t38*t524;
  t568 = t242*t567;
  t581 = t546 + t568;
  t590 = t242*t524;
  t592 = -1.*t38*t567;
  t597 = t590 + t592;
  t642 = t56*t120*t78;
  t651 = -1.*t120*t98*t91;
  t658 = t642 + t651;
  t664 = -1.*t119*t80;
  t665 = t120*t78*t98;
  t666 = t56*t120*t91;
  t680 = t665 + t666;
  t682 = t128*t680;
  t687 = t664 + t682;
  t660 = t45*t658;
  t691 = t114*t687;
  t697 = t660 + t691;
  t705 = t114*t658;
  t711 = -1.*t45*t687;
  t714 = t705 + t711;
  t703 = -1.*t43*t697;
  t717 = t214*t714;
  t718 = t703 + t717;
  t733 = t214*t697;
  t743 = t43*t714;
  t744 = t733 + t743;
  t720 = t38*t718;
  t745 = t242*t744;
  t756 = t720 + t745;
  t762 = t242*t718;
  t768 = -1.*t38*t744;
  t771 = t762 + t768;
  t277 = -1.*t31*t268;
  t307 = t284*t301;
  t308 = t277 + t307;
  t337 = t284*t268;
  t345 = t31*t301;
  t353 = t337 + t345;
  t588 = -1.*t31*t581;
  t603 = t284*t597;
  t607 = t588 + t603;
  t614 = t284*t581;
  t617 = t31*t597;
  t618 = t614 + t617;
  t757 = -1.*t31*t756;
  t775 = t284*t771;
  t786 = t757 + t775;
  t797 = t284*t756;
  t798 = t31*t771;
  t799 = t797 + t798;
  t959 = -1.*t56;
  t961 = 1. + t959;
  t936 = -1.*t119;
  t938 = 1. + t936;
  t1053 = -1.*t114;
  t1054 = 1. + t1053;
  t1162 = -1.*t214;
  t1163 = 1. + t1162;
  t1199 = -1.*t242;
  t1204 = 1. + t1199;
  t1252 = -1.*t284;
  t1260 = 1. + t1252;
  t1315 = -1.*t12;
  t1318 = 1. + t1315;
  t809 = t334*t308;
  t817 = t12*t353;
  t826 = t809 + t817;
  t942 = -0.08055*t938;
  t947 = -0.135*t128;
  t952 = 0. + t942 + t947;
  t964 = 0.07996*t961;
  t965 = 0.135*t98;
  t971 = 0. + t964 + t965;
  t988 = -0.135*t961;
  t996 = 0.07996*t98;
  t1000 = 0. + t988 + t996;
  t1022 = -0.135*t938;
  t1023 = 0.08055*t128;
  t1046 = 0. + t1022 + t1023;
  t1057 = -0.01004*t1054;
  t1061 = 0.08055*t45;
  t1069 = 0. + t1057 + t1061;
  t1136 = -0.08055*t1054;
  t1152 = -0.01004*t45;
  t1153 = 0. + t1136 + t1152;
  t1165 = -0.08055*t1163;
  t1167 = -0.13004*t43;
  t1170 = 0. + t1165 + t1167;
  t1175 = -0.13004*t1163;
  t1181 = 0.08055*t43;
  t1190 = 0. + t1175 + t1181;
  t1210 = -0.19074*t1204;
  t1213 = 0.03315*t38;
  t1216 = 0. + t1210 + t1213;
  t1229 = -0.03315*t1204;
  t1234 = -0.19074*t38;
  t1246 = 0. + t1229 + t1234;
  t1261 = -0.01315*t1260;
  t1264 = -0.62554*t31;
  t1268 = 0. + t1261 + t1264;
  t1270 = -0.62554*t1260;
  t1287 = 0.01315*t31;
  t1288 = 0. + t1270 + t1287;
  t1319 = -1.03354*t1318;
  t1320 = 0.05315*t334;
  t1321 = 0. + t1319 + t1320;
  t1326 = -0.05315*t1318;
  t1327 = -1.03354*t334;
  t1330 = 0. + t1326 + t1327;
  t839 = t334*t607;
  t842 = t12*t618;
  t844 = t839 + t842;
  t870 = t334*t786;
  t873 = t12*t799;
  t876 = t870 + t873;
  p_output1[0]=-1.*t12*t308 + t334*t353;
  p_output1[1]=-1.*t12*t607 + t334*t618;
  p_output1[2]=-1.*t12*t786 + t334*t799;
  p_output1[3]=0.;
  p_output1[4]=t826;
  p_output1[5]=t844;
  p_output1[6]=t876;
  p_output1[7]=0.;
  p_output1[8]=-1.*t119*t162 + t120*t128*t72;
  p_output1[9]=-1.*t119*t449 + t120*t128*t85;
  p_output1[10]=-1.*t119*t680 - 1.*t128*t80;
  p_output1[11]=0.;
  p_output1[12]=0. + t1000*t105 + t1069*t109 + t1046*t162 + t1153*t176 + t1170*t184 + t1190*t227 + t1216*t230 + t1246*t264 + t1268*t268 + t1288*t301 + t1321*t308 + t1330*t353 - 1.03824*(t12*t308 - 1.*t334*t353) - 0.1306*(t119*t162 - 1.*t120*t128*t72) - 0.02565*t826 + t120*t72*t952 + t95*t971 + var1[0];
  p_output1[13]=0. + t1000*t396 + t1069*t418 + t1046*t449 + t1153*t457 + t1170*t463 + t1190*t516 + t1216*t524 + t1246*t567 + t1268*t581 + t1288*t597 + t1321*t607 + t1330*t618 - 1.03824*(t12*t607 - 1.*t334*t618) - 0.02565*t844 - 0.1306*(t119*t449 - 1.*t120*t128*t85) + t120*t85*t952 + t374*t971 + var1[1];
  p_output1[14]=0. + t1069*t658 + t1046*t680 + t1153*t687 + t1170*t697 + t1190*t714 + t1216*t718 + t1246*t744 + t1268*t756 + t1288*t771 + t1321*t786 + t1330*t799 - 1.03824*(t12*t786 - 1.*t334*t799) - 0.1306*(t119*t680 + t128*t80) - 0.02565*t876 + t1000*t120*t91 - 1.*t80*t952 + t120*t78*t971 + var1[2];
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

#include "T_RightToe_mex.hh"

namespace SymExpression
{

void T_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
