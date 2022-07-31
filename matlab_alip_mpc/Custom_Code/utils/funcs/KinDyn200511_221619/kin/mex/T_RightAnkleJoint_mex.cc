/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:29 GMT-04:00
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
  double t57;
  double t60;
  double t56;
  double t58;
  double t61;
  double t81;
  double t59;
  double t63;
  double t68;
  double t55;
  double t83;
  double t86;
  double t87;
  double t117;
  double t71;
  double t106;
  double t111;
  double t46;
  double t118;
  double t120;
  double t123;
  double t124;
  double t138;
  double t149;
  double t155;
  double t159;
  double t166;
  double t188;
  double t116;
  double t171;
  double t181;
  double t40;
  double t193;
  double t198;
  double t207;
  double t249;
  double t183;
  double t213;
  double t218;
  double t29;
  double t266;
  double t270;
  double t271;
  double t6;
  double t313;
  double t316;
  double t348;
  double t382;
  double t385;
  double t388;
  double t374;
  double t403;
  double t416;
  double t420;
  double t423;
  double t424;
  double t429;
  double t432;
  double t434;
  double t418;
  double t438;
  double t439;
  double t455;
  double t460;
  double t462;
  double t291;
  double t440;
  double t466;
  double t473;
  double t493;
  double t505;
  double t509;
  double t578;
  double t604;
  double t605;
  double t623;
  double t638;
  double t663;
  double t676;
  double t682;
  double t687;
  double t615;
  double t695;
  double t697;
  double t708;
  double t710;
  double t712;
  double t705;
  double t713;
  double t720;
  double t726;
  double t747;
  double t756;
  double t231;
  double t273;
  double t287;
  double t292;
  double t298;
  double t303;
  double t478;
  double t510;
  double t534;
  double t543;
  double t556;
  double t564;
  double t724;
  double t757;
  double t758;
  double t772;
  double t774;
  double t782;
  double t913;
  double t918;
  double t870;
  double t882;
  double t1000;
  double t1001;
  double t1066;
  double t1067;
  double t1155;
  double t1162;
  double t1206;
  double t1211;
  double t793;
  double t794;
  double t795;
  double t884;
  double t891;
  double t899;
  double t919;
  double t933;
  double t941;
  double t952;
  double t954;
  double t967;
  double t973;
  double t976;
  double t981;
  double t1005;
  double t1007;
  double t1008;
  double t1041;
  double t1045;
  double t1056;
  double t1068;
  double t1082;
  double t1091;
  double t1110;
  double t1117;
  double t1125;
  double t1167;
  double t1182;
  double t1184;
  double t1193;
  double t1196;
  double t1203;
  double t1218;
  double t1227;
  double t1242;
  double t1251;
  double t1275;
  double t1284;
  double t798;
  double t799;
  double t802;
  double t807;
  double t820;
  double t821;
  t57 = Cos(var1[5]);
  t60 = Sin(var1[3]);
  t56 = Cos(var1[3]);
  t58 = Sin(var1[4]);
  t61 = Sin(var1[5]);
  t81 = Sin(var1[13]);
  t59 = t56*t57*t58;
  t63 = t60*t61;
  t68 = t59 + t63;
  t55 = Cos(var1[13]);
  t83 = -1.*t57*t60;
  t86 = t56*t58*t61;
  t87 = t83 + t86;
  t117 = Cos(var1[15]);
  t71 = t55*t68;
  t106 = -1.*t81*t87;
  t111 = t71 + t106;
  t46 = Sin(var1[15]);
  t118 = Cos(var1[14]);
  t120 = Cos(var1[4]);
  t123 = t118*t56*t120;
  t124 = Sin(var1[14]);
  t138 = t81*t68;
  t149 = t55*t87;
  t155 = t138 + t149;
  t159 = t124*t155;
  t166 = t123 + t159;
  t188 = Cos(var1[16]);
  t116 = t46*t111;
  t171 = t117*t166;
  t181 = t116 + t171;
  t40 = Sin(var1[16]);
  t193 = t117*t111;
  t198 = -1.*t46*t166;
  t207 = t193 + t198;
  t249 = Cos(var1[17]);
  t183 = -1.*t40*t181;
  t213 = t188*t207;
  t218 = t183 + t213;
  t29 = Sin(var1[17]);
  t266 = t188*t181;
  t270 = t40*t207;
  t271 = t266 + t270;
  t6 = Sin(var1[18]);
  t313 = t57*t60*t58;
  t316 = -1.*t56*t61;
  t348 = t313 + t316;
  t382 = t56*t57;
  t385 = t60*t58*t61;
  t388 = t382 + t385;
  t374 = t55*t348;
  t403 = -1.*t81*t388;
  t416 = t374 + t403;
  t420 = t118*t120*t60;
  t423 = t81*t348;
  t424 = t55*t388;
  t429 = t423 + t424;
  t432 = t124*t429;
  t434 = t420 + t432;
  t418 = t46*t416;
  t438 = t117*t434;
  t439 = t418 + t438;
  t455 = t117*t416;
  t460 = -1.*t46*t434;
  t462 = t455 + t460;
  t291 = Cos(var1[18]);
  t440 = -1.*t40*t439;
  t466 = t188*t462;
  t473 = t440 + t466;
  t493 = t188*t439;
  t505 = t40*t462;
  t509 = t493 + t505;
  t578 = t55*t120*t57;
  t604 = -1.*t120*t81*t61;
  t605 = t578 + t604;
  t623 = -1.*t118*t58;
  t638 = t120*t57*t81;
  t663 = t55*t120*t61;
  t676 = t638 + t663;
  t682 = t124*t676;
  t687 = t623 + t682;
  t615 = t46*t605;
  t695 = t117*t687;
  t697 = t615 + t695;
  t708 = t117*t605;
  t710 = -1.*t46*t687;
  t712 = t708 + t710;
  t705 = -1.*t40*t697;
  t713 = t188*t712;
  t720 = t705 + t713;
  t726 = t188*t697;
  t747 = t40*t712;
  t756 = t726 + t747;
  t231 = t29*t218;
  t273 = t249*t271;
  t287 = t231 + t273;
  t292 = t249*t218;
  t298 = -1.*t29*t271;
  t303 = t292 + t298;
  t478 = t29*t473;
  t510 = t249*t509;
  t534 = t478 + t510;
  t543 = t249*t473;
  t556 = -1.*t29*t509;
  t564 = t543 + t556;
  t724 = t29*t720;
  t757 = t249*t756;
  t758 = t724 + t757;
  t772 = t249*t720;
  t774 = -1.*t29*t756;
  t782 = t772 + t774;
  t913 = -1.*t55;
  t918 = 1. + t913;
  t870 = -1.*t118;
  t882 = 1. + t870;
  t1000 = -1.*t117;
  t1001 = 1. + t1000;
  t1066 = -1.*t188;
  t1067 = 1. + t1066;
  t1155 = -1.*t249;
  t1162 = 1. + t1155;
  t1206 = -1.*t291;
  t1211 = 1. + t1206;
  t793 = t291*t287;
  t794 = t6*t303;
  t795 = t793 + t794;
  t884 = -0.08055*t882;
  t891 = -0.135*t124;
  t899 = 0. + t884 + t891;
  t919 = 0.07996*t918;
  t933 = 0.135*t81;
  t941 = 0. + t919 + t933;
  t952 = -0.135*t918;
  t954 = 0.07996*t81;
  t967 = 0. + t952 + t954;
  t973 = -0.135*t882;
  t976 = 0.08055*t124;
  t981 = 0. + t973 + t976;
  t1005 = -0.01004*t1001;
  t1007 = 0.08055*t46;
  t1008 = 0. + t1005 + t1007;
  t1041 = -0.08055*t1001;
  t1045 = -0.01004*t46;
  t1056 = 0. + t1041 + t1045;
  t1068 = -0.08055*t1067;
  t1082 = -0.13004*t40;
  t1091 = 0. + t1068 + t1082;
  t1110 = -0.13004*t1067;
  t1117 = 0.08055*t40;
  t1125 = 0. + t1110 + t1117;
  t1167 = -0.19074*t1162;
  t1182 = 0.03315*t29;
  t1184 = 0. + t1167 + t1182;
  t1193 = -0.03315*t1162;
  t1196 = -0.19074*t29;
  t1203 = 0. + t1193 + t1196;
  t1218 = -0.01315*t1211;
  t1227 = -0.62554*t6;
  t1242 = 0. + t1218 + t1227;
  t1251 = -0.62554*t1211;
  t1275 = 0.01315*t6;
  t1284 = 0. + t1251 + t1275;
  t798 = t291*t534;
  t799 = t6*t564;
  t802 = t798 + t799;
  t807 = t291*t758;
  t820 = t6*t782;
  t821 = t807 + t820;
  p_output1[0]=-1.*t291*t303 + t287*t6;
  p_output1[1]=-1.*t291*t564 + t534*t6;
  p_output1[2]=t6*t758 - 1.*t291*t782;
  p_output1[3]=0.;
  p_output1[4]=t795;
  p_output1[5]=t802;
  p_output1[6]=t821;
  p_output1[7]=0.;
  p_output1[8]=-1.*t118*t155 + t120*t124*t56;
  p_output1[9]=-1.*t118*t429 + t120*t124*t60;
  p_output1[10]=-1.*t124*t58 - 1.*t118*t676;
  p_output1[11]=0.;
  p_output1[12]=0. + t1008*t111 + t1056*t166 + t1091*t181 + t1125*t207 + t1184*t218 + t1203*t271 + t1242*t287 + t1284*t303 - 0.1305*(t118*t155 - 1.*t120*t124*t56) - 0.62554*(t291*t303 - 1.*t287*t6) - 0.01315*t795 + t120*t56*t899 + t68*t941 + t87*t967 + t155*t981 + var1[0];
  p_output1[13]=0. + t1008*t416 + t1056*t434 + t1091*t439 + t1125*t462 + t1184*t473 + t1203*t509 + t1242*t534 + t1284*t564 - 0.62554*(t291*t564 - 1.*t534*t6) - 0.1305*(t118*t429 - 1.*t120*t124*t60) - 0.01315*t802 + t120*t60*t899 + t348*t941 + t388*t967 + t429*t981 + var1[1];
  p_output1[14]=0. + t1008*t605 - 0.1305*(t124*t58 + t118*t676) + t1056*t687 + t1091*t697 + t1125*t712 + t1184*t720 + t1203*t756 + t1242*t758 + t1284*t782 - 0.62554*(-1.*t6*t758 + t291*t782) - 0.01315*t821 - 1.*t58*t899 + t120*t57*t941 + t120*t61*t967 + t676*t981 + var1[2];
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

#include "T_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void T_RightAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
