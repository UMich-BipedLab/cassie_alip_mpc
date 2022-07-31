/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:36 GMT-04:00
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
  double t93;
  double t110;
  double t81;
  double t100;
  double t113;
  double t137;
  double t106;
  double t119;
  double t132;
  double t78;
  double t139;
  double t144;
  double t147;
  double t171;
  double t135;
  double t148;
  double t155;
  double t71;
  double t174;
  double t180;
  double t185;
  double t188;
  double t213;
  double t215;
  double t227;
  double t242;
  double t245;
  double t301;
  double t164;
  double t246;
  double t258;
  double t27;
  double t320;
  double t352;
  double t353;
  double t20;
  double t445;
  double t448;
  double t455;
  double t460;
  double t461;
  double t465;
  double t457;
  double t481;
  double t494;
  double t542;
  double t555;
  double t562;
  double t570;
  double t576;
  double t577;
  double t396;
  double t496;
  double t592;
  double t595;
  double t600;
  double t610;
  double t616;
  double t769;
  double t778;
  double t785;
  double t791;
  double t795;
  double t821;
  double t831;
  double t840;
  double t842;
  double t789;
  double t863;
  double t868;
  double t879;
  double t881;
  double t897;
  double t294;
  double t376;
  double t387;
  double t399;
  double t410;
  double t423;
  double t596;
  double t626;
  double t627;
  double t646;
  double t676;
  double t704;
  double t877;
  double t900;
  double t907;
  double t943;
  double t946;
  double t971;
  double t1228;
  double t1231;
  double t1170;
  double t1173;
  double t1352;
  double t1355;
  double t1457;
  double t1463;
  double t1540;
  double t1543;
  double t994;
  double t1025;
  double t1028;
  double t1183;
  double t1198;
  double t1201;
  double t1235;
  double t1243;
  double t1246;
  double t1258;
  double t1268;
  double t1288;
  double t1314;
  double t1320;
  double t1325;
  double t1357;
  double t1360;
  double t1367;
  double t1412;
  double t1414;
  double t1416;
  double t1469;
  double t1470;
  double t1487;
  double t1492;
  double t1493;
  double t1498;
  double t1563;
  double t1585;
  double t1593;
  double t1621;
  double t1624;
  double t1640;
  double t1029;
  double t1040;
  double t1042;
  double t1053;
  double t1059;
  double t1065;
  t93 = Cos(var1[5]);
  t110 = Sin(var1[3]);
  t81 = Cos(var1[3]);
  t100 = Sin(var1[4]);
  t113 = Sin(var1[5]);
  t137 = Sin(var1[13]);
  t106 = t81*t93*t100;
  t119 = t110*t113;
  t132 = t106 + t119;
  t78 = Cos(var1[13]);
  t139 = -1.*t93*t110;
  t144 = t81*t100*t113;
  t147 = t139 + t144;
  t171 = Cos(var1[15]);
  t135 = t78*t132;
  t148 = -1.*t137*t147;
  t155 = t135 + t148;
  t71 = Sin(var1[15]);
  t174 = Cos(var1[14]);
  t180 = Cos(var1[4]);
  t185 = t174*t81*t180;
  t188 = Sin(var1[14]);
  t213 = t137*t132;
  t215 = t78*t147;
  t227 = t213 + t215;
  t242 = t188*t227;
  t245 = t185 + t242;
  t301 = Cos(var1[16]);
  t164 = t71*t155;
  t246 = t171*t245;
  t258 = t164 + t246;
  t27 = Sin(var1[16]);
  t320 = t171*t155;
  t352 = -1.*t71*t245;
  t353 = t320 + t352;
  t20 = Cos(var1[17]);
  t445 = t93*t110*t100;
  t448 = -1.*t81*t113;
  t455 = t445 + t448;
  t460 = t81*t93;
  t461 = t110*t100*t113;
  t465 = t460 + t461;
  t457 = t78*t455;
  t481 = -1.*t137*t465;
  t494 = t457 + t481;
  t542 = t174*t180*t110;
  t555 = t137*t455;
  t562 = t78*t465;
  t570 = t555 + t562;
  t576 = t188*t570;
  t577 = t542 + t576;
  t396 = Sin(var1[17]);
  t496 = t71*t494;
  t592 = t171*t577;
  t595 = t496 + t592;
  t600 = t171*t494;
  t610 = -1.*t71*t577;
  t616 = t600 + t610;
  t769 = t78*t180*t93;
  t778 = -1.*t180*t137*t113;
  t785 = t769 + t778;
  t791 = -1.*t174*t100;
  t795 = t180*t93*t137;
  t821 = t78*t180*t113;
  t831 = t795 + t821;
  t840 = t188*t831;
  t842 = t791 + t840;
  t789 = t71*t785;
  t863 = t171*t842;
  t868 = t789 + t863;
  t879 = t171*t785;
  t881 = -1.*t71*t842;
  t897 = t879 + t881;
  t294 = -1.*t27*t258;
  t376 = t301*t353;
  t387 = t294 + t376;
  t399 = t301*t258;
  t410 = t27*t353;
  t423 = t399 + t410;
  t596 = -1.*t27*t595;
  t626 = t301*t616;
  t627 = t596 + t626;
  t646 = t301*t595;
  t676 = t27*t616;
  t704 = t646 + t676;
  t877 = -1.*t27*t868;
  t900 = t301*t897;
  t907 = t877 + t900;
  t943 = t301*t868;
  t946 = t27*t897;
  t971 = t943 + t946;
  t1228 = -1.*t78;
  t1231 = 1. + t1228;
  t1170 = -1.*t174;
  t1173 = 1. + t1170;
  t1352 = -1.*t171;
  t1355 = 1. + t1352;
  t1457 = -1.*t301;
  t1463 = 1. + t1457;
  t1540 = -1.*t20;
  t1543 = 1. + t1540;
  t994 = t396*t387;
  t1025 = t20*t423;
  t1028 = t994 + t1025;
  t1183 = -0.08055*t1173;
  t1198 = -0.135*t188;
  t1201 = 0. + t1183 + t1198;
  t1235 = 0.07996*t1231;
  t1243 = 0.135*t137;
  t1246 = 0. + t1235 + t1243;
  t1258 = -0.135*t1231;
  t1268 = 0.07996*t137;
  t1288 = 0. + t1258 + t1268;
  t1314 = -0.135*t1173;
  t1320 = 0.08055*t188;
  t1325 = 0. + t1314 + t1320;
  t1357 = -0.01004*t1355;
  t1360 = 0.08055*t71;
  t1367 = 0. + t1357 + t1360;
  t1412 = -0.08055*t1355;
  t1414 = -0.01004*t71;
  t1416 = 0. + t1412 + t1414;
  t1469 = -0.08055*t1463;
  t1470 = -0.13004*t27;
  t1487 = 0. + t1469 + t1470;
  t1492 = -0.13004*t1463;
  t1493 = 0.08055*t27;
  t1498 = 0. + t1492 + t1493;
  t1563 = -0.19074*t1543;
  t1585 = 0.03315*t396;
  t1593 = 0. + t1563 + t1585;
  t1621 = -0.03315*t1543;
  t1624 = -0.19074*t396;
  t1640 = 0. + t1621 + t1624;
  t1029 = t396*t627;
  t1040 = t20*t704;
  t1042 = t1029 + t1040;
  t1053 = t396*t907;
  t1059 = t20*t971;
  t1065 = t1053 + t1059;
  p_output1[0]=-1.*t20*t387 + t396*t423;
  p_output1[1]=-1.*t20*t627 + t396*t704;
  p_output1[2]=-1.*t20*t907 + t396*t971;
  p_output1[3]=0.;
  p_output1[4]=t1028;
  p_output1[5]=t1042;
  p_output1[6]=t1065;
  p_output1[7]=0.;
  p_output1[8]=-1.*t174*t227 + t180*t188*t81;
  p_output1[9]=t110*t180*t188 - 1.*t174*t570;
  p_output1[10]=-1.*t100*t188 - 1.*t174*t831;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03195*t1028 + t1246*t132 + t1288*t147 + t1367*t155 + t1325*t227 + t1416*t245 + t1487*t258 + t1498*t353 + t1593*t387 + t1640*t423 - 0.37414*(t20*t387 - 1.*t396*t423) + t1201*t180*t81 - 0.1303*(t174*t227 - 1.*t180*t188*t81) + var1[0];
  p_output1[13]=0. - 0.03195*t1042 + t110*t1201*t180 + t1246*t455 + t1288*t465 + t1367*t494 + t1325*t570 - 0.1303*(-1.*t110*t180*t188 + t174*t570) + t1416*t577 + t1487*t595 + t1498*t616 + t1593*t627 + t1640*t704 - 0.37414*(t20*t627 - 1.*t396*t704) + var1[1];
  p_output1[14]=0. - 0.03195*t1065 - 1.*t100*t1201 + t113*t1288*t180 + t1367*t785 + t1325*t831 - 0.1303*(t100*t188 + t174*t831) + t1416*t842 + t1487*t868 + t1498*t897 + t1593*t907 + t1246*t180*t93 + t1640*t971 - 0.37414*(t20*t907 - 1.*t396*t971) + var1[2];
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

#include "T_RightShin_mex.hh"

namespace SymExpression
{

void T_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
