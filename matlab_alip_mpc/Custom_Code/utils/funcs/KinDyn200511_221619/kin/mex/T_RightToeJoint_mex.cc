/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:57 GMT-04:00
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
  double t86;
  double t101;
  double t85;
  double t91;
  double t102;
  double t112;
  double t100;
  double t103;
  double t104;
  double t77;
  double t114;
  double t115;
  double t118;
  double t144;
  double t105;
  double t120;
  double t124;
  double t74;
  double t155;
  double t158;
  double t160;
  double t166;
  double t169;
  double t181;
  double t198;
  double t211;
  double t215;
  double t246;
  double t141;
  double t218;
  double t238;
  double t68;
  double t247;
  double t248;
  double t252;
  double t275;
  double t241;
  double t254;
  double t257;
  double t45;
  double t299;
  double t302;
  double t304;
  double t322;
  double t259;
  double t307;
  double t313;
  double t41;
  double t323;
  double t331;
  double t343;
  double t23;
  double t398;
  double t411;
  double t412;
  double t415;
  double t422;
  double t439;
  double t413;
  double t440;
  double t450;
  double t457;
  double t461;
  double t480;
  double t499;
  double t510;
  double t515;
  double t453;
  double t519;
  double t523;
  double t529;
  double t532;
  double t536;
  double t526;
  double t538;
  double t544;
  double t559;
  double t569;
  double t570;
  double t363;
  double t546;
  double t577;
  double t578;
  double t584;
  double t590;
  double t592;
  double t637;
  double t639;
  double t646;
  double t658;
  double t662;
  double t664;
  double t671;
  double t673;
  double t681;
  double t652;
  double t694;
  double t706;
  double t712;
  double t722;
  double t726;
  double t708;
  double t729;
  double t730;
  double t753;
  double t759;
  double t772;
  double t737;
  double t801;
  double t803;
  double t807;
  double t808;
  double t809;
  double t318;
  double t344;
  double t345;
  double t367;
  double t369;
  double t377;
  double t582;
  double t594;
  double t608;
  double t614;
  double t623;
  double t624;
  double t806;
  double t819;
  double t820;
  double t843;
  double t846;
  double t848;
  double t992;
  double t997;
  double t957;
  double t962;
  double t1075;
  double t1084;
  double t1140;
  double t1143;
  double t1199;
  double t1209;
  double t1239;
  double t1241;
  double t1286;
  double t1297;
  double t866;
  double t867;
  double t868;
  double t963;
  double t965;
  double t982;
  double t998;
  double t1005;
  double t1011;
  double t1019;
  double t1022;
  double t1040;
  double t1047;
  double t1050;
  double t1064;
  double t1093;
  double t1094;
  double t1099;
  double t1126;
  double t1127;
  double t1134;
  double t1156;
  double t1158;
  double t1166;
  double t1170;
  double t1174;
  double t1186;
  double t1211;
  double t1213;
  double t1222;
  double t1226;
  double t1228;
  double t1235;
  double t1242;
  double t1243;
  double t1255;
  double t1260;
  double t1265;
  double t1268;
  double t1300;
  double t1311;
  double t1320;
  double t1329;
  double t1339;
  double t1365;
  double t872;
  double t875;
  double t880;
  double t884;
  double t885;
  double t889;
  t86 = Cos(var1[5]);
  t101 = Sin(var1[3]);
  t85 = Cos(var1[3]);
  t91 = Sin(var1[4]);
  t102 = Sin(var1[5]);
  t112 = Sin(var1[13]);
  t100 = t85*t86*t91;
  t103 = t101*t102;
  t104 = t100 + t103;
  t77 = Cos(var1[13]);
  t114 = -1.*t86*t101;
  t115 = t85*t91*t102;
  t118 = t114 + t115;
  t144 = Cos(var1[15]);
  t105 = t77*t104;
  t120 = -1.*t112*t118;
  t124 = t105 + t120;
  t74 = Sin(var1[15]);
  t155 = Cos(var1[14]);
  t158 = Cos(var1[4]);
  t160 = t155*t85*t158;
  t166 = Sin(var1[14]);
  t169 = t112*t104;
  t181 = t77*t118;
  t198 = t169 + t181;
  t211 = t166*t198;
  t215 = t160 + t211;
  t246 = Cos(var1[16]);
  t141 = t74*t124;
  t218 = t144*t215;
  t238 = t141 + t218;
  t68 = Sin(var1[16]);
  t247 = t144*t124;
  t248 = -1.*t74*t215;
  t252 = t247 + t248;
  t275 = Cos(var1[17]);
  t241 = -1.*t68*t238;
  t254 = t246*t252;
  t257 = t241 + t254;
  t45 = Sin(var1[17]);
  t299 = t246*t238;
  t302 = t68*t252;
  t304 = t299 + t302;
  t322 = Cos(var1[18]);
  t259 = t45*t257;
  t307 = t275*t304;
  t313 = t259 + t307;
  t41 = Sin(var1[18]);
  t323 = t275*t257;
  t331 = -1.*t45*t304;
  t343 = t323 + t331;
  t23 = Cos(var1[19]);
  t398 = t86*t101*t91;
  t411 = -1.*t85*t102;
  t412 = t398 + t411;
  t415 = t85*t86;
  t422 = t101*t91*t102;
  t439 = t415 + t422;
  t413 = t77*t412;
  t440 = -1.*t112*t439;
  t450 = t413 + t440;
  t457 = t155*t158*t101;
  t461 = t112*t412;
  t480 = t77*t439;
  t499 = t461 + t480;
  t510 = t166*t499;
  t515 = t457 + t510;
  t453 = t74*t450;
  t519 = t144*t515;
  t523 = t453 + t519;
  t529 = t144*t450;
  t532 = -1.*t74*t515;
  t536 = t529 + t532;
  t526 = -1.*t68*t523;
  t538 = t246*t536;
  t544 = t526 + t538;
  t559 = t246*t523;
  t569 = t68*t536;
  t570 = t559 + t569;
  t363 = Sin(var1[19]);
  t546 = t45*t544;
  t577 = t275*t570;
  t578 = t546 + t577;
  t584 = t275*t544;
  t590 = -1.*t45*t570;
  t592 = t584 + t590;
  t637 = t77*t158*t86;
  t639 = -1.*t158*t112*t102;
  t646 = t637 + t639;
  t658 = -1.*t155*t91;
  t662 = t158*t86*t112;
  t664 = t77*t158*t102;
  t671 = t662 + t664;
  t673 = t166*t671;
  t681 = t658 + t673;
  t652 = t74*t646;
  t694 = t144*t681;
  t706 = t652 + t694;
  t712 = t144*t646;
  t722 = -1.*t74*t681;
  t726 = t712 + t722;
  t708 = -1.*t68*t706;
  t729 = t246*t726;
  t730 = t708 + t729;
  t753 = t246*t706;
  t759 = t68*t726;
  t772 = t753 + t759;
  t737 = t45*t730;
  t801 = t275*t772;
  t803 = t737 + t801;
  t807 = t275*t730;
  t808 = -1.*t45*t772;
  t809 = t807 + t808;
  t318 = -1.*t41*t313;
  t344 = t322*t343;
  t345 = t318 + t344;
  t367 = t322*t313;
  t369 = t41*t343;
  t377 = t367 + t369;
  t582 = -1.*t41*t578;
  t594 = t322*t592;
  t608 = t582 + t594;
  t614 = t322*t578;
  t623 = t41*t592;
  t624 = t614 + t623;
  t806 = -1.*t41*t803;
  t819 = t322*t809;
  t820 = t806 + t819;
  t843 = t322*t803;
  t846 = t41*t809;
  t848 = t843 + t846;
  t992 = -1.*t77;
  t997 = 1. + t992;
  t957 = -1.*t155;
  t962 = 1. + t957;
  t1075 = -1.*t144;
  t1084 = 1. + t1075;
  t1140 = -1.*t246;
  t1143 = 1. + t1140;
  t1199 = -1.*t275;
  t1209 = 1. + t1199;
  t1239 = -1.*t322;
  t1241 = 1. + t1239;
  t1286 = -1.*t23;
  t1297 = 1. + t1286;
  t866 = t363*t345;
  t867 = t23*t377;
  t868 = t866 + t867;
  t963 = -0.08055*t962;
  t965 = -0.135*t166;
  t982 = 0. + t963 + t965;
  t998 = 0.07996*t997;
  t1005 = 0.135*t112;
  t1011 = 0. + t998 + t1005;
  t1019 = -0.135*t997;
  t1022 = 0.07996*t112;
  t1040 = 0. + t1019 + t1022;
  t1047 = -0.135*t962;
  t1050 = 0.08055*t166;
  t1064 = 0. + t1047 + t1050;
  t1093 = -0.01004*t1084;
  t1094 = 0.08055*t74;
  t1099 = 0. + t1093 + t1094;
  t1126 = -0.08055*t1084;
  t1127 = -0.01004*t74;
  t1134 = 0. + t1126 + t1127;
  t1156 = -0.08055*t1143;
  t1158 = -0.13004*t68;
  t1166 = 0. + t1156 + t1158;
  t1170 = -0.13004*t1143;
  t1174 = 0.08055*t68;
  t1186 = 0. + t1170 + t1174;
  t1211 = -0.19074*t1209;
  t1213 = 0.03315*t45;
  t1222 = 0. + t1211 + t1213;
  t1226 = -0.03315*t1209;
  t1228 = -0.19074*t45;
  t1235 = 0. + t1226 + t1228;
  t1242 = -0.01315*t1241;
  t1243 = -0.62554*t41;
  t1255 = 0. + t1242 + t1243;
  t1260 = -0.62554*t1241;
  t1265 = 0.01315*t41;
  t1268 = 0. + t1260 + t1265;
  t1300 = -1.03354*t1297;
  t1311 = 0.05315*t363;
  t1320 = 0. + t1300 + t1311;
  t1329 = -0.05315*t1297;
  t1339 = -1.03354*t363;
  t1365 = 0. + t1329 + t1339;
  t872 = t363*t608;
  t875 = t23*t624;
  t880 = t872 + t875;
  t884 = t363*t820;
  t885 = t23*t848;
  t889 = t884 + t885;
  p_output1[0]=-1.*t23*t345 + t363*t377;
  p_output1[1]=-1.*t23*t608 + t363*t624;
  p_output1[2]=-1.*t23*t820 + t363*t848;
  p_output1[3]=0.;
  p_output1[4]=t868;
  p_output1[5]=t880;
  p_output1[6]=t889;
  p_output1[7]=0.;
  p_output1[8]=-1.*t155*t198 + t158*t166*t85;
  p_output1[9]=t101*t158*t166 - 1.*t155*t499;
  p_output1[10]=-1.*t155*t671 - 1.*t166*t91;
  p_output1[11]=0.;
  p_output1[12]=0. + t1011*t104 + t1040*t118 + t1099*t124 + t1064*t198 + t1134*t215 + t1166*t238 + t1186*t252 + t1222*t257 + t1235*t304 + t1255*t313 + t1268*t343 + t1320*t345 + t1365*t377 - 1.03354*(t23*t345 - 1.*t363*t377) - 0.1305*(t155*t198 - 1.*t158*t166*t85) - 0.05315*t868 + t158*t85*t982 + var1[0];
  p_output1[13]=0. + t1011*t412 + t1040*t439 + t1099*t450 + t1064*t499 - 0.1305*(-1.*t101*t158*t166 + t155*t499) + t1134*t515 + t1166*t523 + t1186*t536 + t1222*t544 + t1235*t570 + t1255*t578 + t1268*t592 + t1320*t608 + t1365*t624 - 1.03354*(t23*t608 - 1.*t363*t624) - 0.05315*t880 + t101*t158*t982 + var1[1];
  p_output1[14]=0. + t102*t1040*t158 + t1099*t646 + t1064*t671 + t1134*t681 + t1166*t706 + t1186*t726 + t1222*t730 + t1235*t772 + t1255*t803 + t1268*t809 + t1320*t820 + t1365*t848 - 1.03354*(t23*t820 - 1.*t363*t848) + t1011*t158*t86 - 0.05315*t889 - 0.1305*(t155*t671 + t166*t91) - 1.*t91*t982 + var1[2];
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

#include "T_RightToeJoint_mex.hh"

namespace SymExpression
{

void T_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
