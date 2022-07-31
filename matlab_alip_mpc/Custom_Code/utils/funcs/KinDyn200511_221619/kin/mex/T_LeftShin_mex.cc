/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:44 GMT-04:00
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
  double t60;
  double t95;
  double t118;
  double t115;
  double t127;
  double t91;
  double t172;
  double t177;
  double t180;
  double t117;
  double t140;
  double t145;
  double t186;
  double t30;
  double t266;
  double t273;
  double t277;
  double t61;
  double t67;
  double t84;
  double t151;
  double t194;
  double t205;
  double t219;
  double t221;
  double t227;
  double t286;
  double t366;
  double t262;
  double t293;
  double t303;
  double t21;
  double t396;
  double t402;
  double t404;
  double t4;
  double t518;
  double t526;
  double t529;
  double t499;
  double t511;
  double t512;
  double t562;
  double t576;
  double t577;
  double t490;
  double t514;
  double t532;
  double t536;
  double t539;
  double t548;
  double t431;
  double t557;
  double t584;
  double t598;
  double t614;
  double t617;
  double t628;
  double t734;
  double t750;
  double t753;
  double t682;
  double t685;
  double t695;
  double t710;
  double t713;
  double t724;
  double t732;
  double t755;
  double t798;
  double t818;
  double t822;
  double t826;
  double t323;
  double t412;
  double t420;
  double t441;
  double t463;
  double t469;
  double t610;
  double t632;
  double t652;
  double t661;
  double t669;
  double t672;
  double t813;
  double t833;
  double t837;
  double t861;
  double t863;
  double t865;
  double t1010;
  double t1012;
  double t1035;
  double t1036;
  double t1135;
  double t1169;
  double t1207;
  double t1233;
  double t1319;
  double t1321;
  double t884;
  double t888;
  double t892;
  double t1014;
  double t1015;
  double t1018;
  double t1021;
  double t1026;
  double t1027;
  double t1045;
  double t1050;
  double t1079;
  double t1088;
  double t1099;
  double t1101;
  double t1171;
  double t1174;
  double t1187;
  double t1190;
  double t1193;
  double t1203;
  double t1237;
  double t1239;
  double t1247;
  double t1295;
  double t1299;
  double t1310;
  double t1336;
  double t1342;
  double t1353;
  double t1366;
  double t1372;
  double t1383;
  double t906;
  double t919;
  double t924;
  double t930;
  double t934;
  double t950;
  t60 = Cos(var1[3]);
  t95 = Cos(var1[5]);
  t118 = Sin(var1[4]);
  t115 = Sin(var1[3]);
  t127 = Sin(var1[5]);
  t91 = Cos(var1[6]);
  t172 = t60*t95*t118;
  t177 = t115*t127;
  t180 = t172 + t177;
  t117 = -1.*t95*t115;
  t140 = t60*t118*t127;
  t145 = t117 + t140;
  t186 = Sin(var1[6]);
  t30 = Cos(var1[8]);
  t266 = t91*t180;
  t273 = -1.*t145*t186;
  t277 = t266 + t273;
  t61 = Cos(var1[4]);
  t67 = Cos(var1[7]);
  t84 = t60*t61*t67;
  t151 = t91*t145;
  t194 = t180*t186;
  t205 = t151 + t194;
  t219 = Sin(var1[7]);
  t221 = t205*t219;
  t227 = t84 + t221;
  t286 = Sin(var1[8]);
  t366 = Cos(var1[9]);
  t262 = t30*t227;
  t293 = t277*t286;
  t303 = t262 + t293;
  t21 = Sin(var1[9]);
  t396 = t30*t277;
  t402 = -1.*t227*t286;
  t404 = t396 + t402;
  t4 = Cos(var1[10]);
  t518 = t95*t115*t118;
  t526 = -1.*t60*t127;
  t529 = t518 + t526;
  t499 = t60*t95;
  t511 = t115*t118*t127;
  t512 = t499 + t511;
  t562 = t91*t529;
  t576 = -1.*t512*t186;
  t577 = t562 + t576;
  t490 = t61*t67*t115;
  t514 = t91*t512;
  t532 = t529*t186;
  t536 = t514 + t532;
  t539 = t536*t219;
  t548 = t490 + t539;
  t431 = Sin(var1[10]);
  t557 = t30*t548;
  t584 = t577*t286;
  t598 = t557 + t584;
  t614 = t30*t577;
  t617 = -1.*t548*t286;
  t628 = t614 + t617;
  t734 = t61*t95*t91;
  t750 = -1.*t61*t127*t186;
  t753 = t734 + t750;
  t682 = -1.*t67*t118;
  t685 = t61*t91*t127;
  t695 = t61*t95*t186;
  t710 = t685 + t695;
  t713 = t710*t219;
  t724 = t682 + t713;
  t732 = t30*t724;
  t755 = t753*t286;
  t798 = t732 + t755;
  t818 = t30*t753;
  t822 = -1.*t724*t286;
  t826 = t818 + t822;
  t323 = -1.*t21*t303;
  t412 = t366*t404;
  t420 = t323 + t412;
  t441 = t366*t303;
  t463 = t21*t404;
  t469 = t441 + t463;
  t610 = -1.*t21*t598;
  t632 = t366*t628;
  t652 = t610 + t632;
  t661 = t366*t598;
  t669 = t21*t628;
  t672 = t661 + t669;
  t813 = -1.*t21*t798;
  t833 = t366*t826;
  t837 = t813 + t833;
  t861 = t366*t798;
  t863 = t21*t826;
  t865 = t861 + t863;
  t1010 = -1.*t91;
  t1012 = 1. + t1010;
  t1035 = -1.*t67;
  t1036 = 1. + t1035;
  t1135 = -1.*t30;
  t1169 = 1. + t1135;
  t1207 = -1.*t366;
  t1233 = 1. + t1207;
  t1319 = -1.*t4;
  t1321 = 1. + t1319;
  t884 = t431*t420;
  t888 = t4*t469;
  t892 = t884 + t888;
  t1014 = 0.07996*t1012;
  t1015 = -0.135*t186;
  t1018 = 0. + t1014 + t1015;
  t1021 = 0.135*t1012;
  t1026 = 0.07996*t186;
  t1027 = 0. + t1021 + t1026;
  t1045 = 0.135*t1036;
  t1050 = 0.08055*t219;
  t1079 = 0. + t1045 + t1050;
  t1088 = -0.08055*t1036;
  t1099 = 0.135*t219;
  t1101 = 0. + t1088 + t1099;
  t1171 = -0.08055*t1169;
  t1174 = -0.01004*t286;
  t1187 = 0. + t1171 + t1174;
  t1190 = -0.01004*t1169;
  t1193 = 0.08055*t286;
  t1203 = 0. + t1190 + t1193;
  t1237 = -0.08055*t1233;
  t1239 = -0.13004*t21;
  t1247 = 0. + t1237 + t1239;
  t1295 = -0.13004*t1233;
  t1299 = 0.08055*t21;
  t1310 = 0. + t1295 + t1299;
  t1336 = -0.19074*t1321;
  t1342 = 0.03315*t431;
  t1353 = 0. + t1336 + t1342;
  t1366 = -0.03315*t1321;
  t1372 = -0.19074*t431;
  t1383 = 0. + t1366 + t1372;
  t906 = t431*t652;
  t919 = t4*t672;
  t924 = t906 + t919;
  t930 = t431*t837;
  t934 = t4*t865;
  t950 = t930 + t934;
  p_output1[0]=-1.*t4*t420 + t431*t469;
  p_output1[1]=-1.*t4*t652 + t431*t672;
  p_output1[2]=-1.*t4*t837 + t431*t865;
  p_output1[3]=0.;
  p_output1[4]=t892;
  p_output1[5]=t924;
  p_output1[6]=t950;
  p_output1[7]=0.;
  p_output1[8]=t219*t60*t61 - 1.*t205*t67;
  p_output1[9]=t115*t219*t61 - 1.*t536*t67;
  p_output1[10]=-1.*t118*t219 - 1.*t67*t710;
  p_output1[11]=0.;
  p_output1[12]=0. + t1027*t145 + t1018*t180 + t1079*t205 + t1187*t227 + t1203*t277 + t1247*t303 + t1310*t404 + t1353*t420 + t1383*t469 - 0.37414*(t4*t420 - 1.*t431*t469) + t1101*t60*t61 + 0.1303*(-1.*t219*t60*t61 + t205*t67) - 0.03195*t892 + var1[0];
  p_output1[13]=0. + t1027*t512 + t1018*t529 + t1079*t536 + t1187*t548 + t1203*t577 + t1247*t598 + t1101*t115*t61 + t1310*t628 + t1353*t652 + 0.1303*(-1.*t115*t219*t61 + t536*t67) + t1383*t672 - 0.37414*(t4*t652 - 1.*t431*t672) - 0.03195*t924 + var1[1];
  p_output1[14]=0. - 1.*t1101*t118 + t1027*t127*t61 + t1079*t710 + 0.1303*(t118*t219 + t67*t710) + t1187*t724 + t1203*t753 + t1247*t798 + t1310*t826 + t1353*t837 + t1383*t865 - 0.37414*(t4*t837 - 1.*t431*t865) + t1018*t61*t95 - 0.03195*t950 + var1[2];
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

#include "T_LeftShin_mex.hh"

namespace SymExpression
{

void T_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
