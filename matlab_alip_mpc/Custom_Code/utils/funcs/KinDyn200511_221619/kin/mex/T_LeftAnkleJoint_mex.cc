/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:08 GMT-04:00
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
  double t48;
  double t107;
  double t120;
  double t118;
  double t125;
  double t77;
  double t141;
  double t143;
  double t144;
  double t119;
  double t129;
  double t132;
  double t151;
  double t43;
  double t197;
  double t201;
  double t202;
  double t55;
  double t62;
  double t72;
  double t134;
  double t170;
  double t171;
  double t174;
  double t178;
  double t179;
  double t214;
  double t252;
  double t196;
  double t221;
  double t229;
  double t33;
  double t255;
  double t262;
  double t263;
  double t315;
  double t249;
  double t283;
  double t299;
  double t23;
  double t319;
  double t322;
  double t329;
  double t7;
  double t483;
  double t496;
  double t517;
  double t428;
  double t466;
  double t469;
  double t545;
  double t550;
  double t567;
  double t404;
  double t474;
  double t523;
  double t527;
  double t529;
  double t536;
  double t538;
  double t570;
  double t571;
  double t582;
  double t585;
  double t587;
  double t352;
  double t572;
  double t594;
  double t605;
  double t617;
  double t623;
  double t625;
  double t745;
  double t757;
  double t759;
  double t704;
  double t709;
  double t730;
  double t736;
  double t737;
  double t740;
  double t743;
  double t766;
  double t770;
  double t777;
  double t784;
  double t791;
  double t775;
  double t794;
  double t798;
  double t807;
  double t810;
  double t812;
  double t306;
  double t330;
  double t333;
  double t358;
  double t370;
  double t381;
  double t612;
  double t626;
  double t627;
  double t642;
  double t658;
  double t660;
  double t802;
  double t814;
  double t820;
  double t823;
  double t844;
  double t855;
  double t961;
  double t964;
  double t1040;
  double t1041;
  double t1121;
  double t1124;
  double t1187;
  double t1190;
  double t1247;
  double t1249;
  double t1311;
  double t1326;
  double t878;
  double t879;
  double t914;
  double t983;
  double t993;
  double t997;
  double t1021;
  double t1025;
  double t1034;
  double t1049;
  double t1051;
  double t1053;
  double t1063;
  double t1066;
  double t1067;
  double t1145;
  double t1150;
  double t1151;
  double t1162;
  double t1170;
  double t1174;
  double t1195;
  double t1198;
  double t1201;
  double t1210;
  double t1232;
  double t1234;
  double t1260;
  double t1262;
  double t1273;
  double t1280;
  double t1281;
  double t1292;
  double t1329;
  double t1333;
  double t1334;
  double t1352;
  double t1353;
  double t1361;
  double t915;
  double t919;
  double t920;
  double t932;
  double t933;
  double t934;
  t48 = Cos(var1[3]);
  t107 = Cos(var1[5]);
  t120 = Sin(var1[4]);
  t118 = Sin(var1[3]);
  t125 = Sin(var1[5]);
  t77 = Cos(var1[6]);
  t141 = t48*t107*t120;
  t143 = t118*t125;
  t144 = t141 + t143;
  t119 = -1.*t107*t118;
  t129 = t48*t120*t125;
  t132 = t119 + t129;
  t151 = Sin(var1[6]);
  t43 = Cos(var1[8]);
  t197 = t77*t144;
  t201 = -1.*t132*t151;
  t202 = t197 + t201;
  t55 = Cos(var1[4]);
  t62 = Cos(var1[7]);
  t72 = t48*t55*t62;
  t134 = t77*t132;
  t170 = t144*t151;
  t171 = t134 + t170;
  t174 = Sin(var1[7]);
  t178 = t171*t174;
  t179 = t72 + t178;
  t214 = Sin(var1[8]);
  t252 = Cos(var1[9]);
  t196 = t43*t179;
  t221 = t202*t214;
  t229 = t196 + t221;
  t33 = Sin(var1[9]);
  t255 = t43*t202;
  t262 = -1.*t179*t214;
  t263 = t255 + t262;
  t315 = Cos(var1[10]);
  t249 = -1.*t33*t229;
  t283 = t252*t263;
  t299 = t249 + t283;
  t23 = Sin(var1[10]);
  t319 = t252*t229;
  t322 = t33*t263;
  t329 = t319 + t322;
  t7 = Sin(var1[11]);
  t483 = t107*t118*t120;
  t496 = -1.*t48*t125;
  t517 = t483 + t496;
  t428 = t48*t107;
  t466 = t118*t120*t125;
  t469 = t428 + t466;
  t545 = t77*t517;
  t550 = -1.*t469*t151;
  t567 = t545 + t550;
  t404 = t55*t62*t118;
  t474 = t77*t469;
  t523 = t517*t151;
  t527 = t474 + t523;
  t529 = t527*t174;
  t536 = t404 + t529;
  t538 = t43*t536;
  t570 = t567*t214;
  t571 = t538 + t570;
  t582 = t43*t567;
  t585 = -1.*t536*t214;
  t587 = t582 + t585;
  t352 = Cos(var1[11]);
  t572 = -1.*t33*t571;
  t594 = t252*t587;
  t605 = t572 + t594;
  t617 = t252*t571;
  t623 = t33*t587;
  t625 = t617 + t623;
  t745 = t55*t107*t77;
  t757 = -1.*t55*t125*t151;
  t759 = t745 + t757;
  t704 = -1.*t62*t120;
  t709 = t55*t77*t125;
  t730 = t55*t107*t151;
  t736 = t709 + t730;
  t737 = t736*t174;
  t740 = t704 + t737;
  t743 = t43*t740;
  t766 = t759*t214;
  t770 = t743 + t766;
  t777 = t43*t759;
  t784 = -1.*t740*t214;
  t791 = t777 + t784;
  t775 = -1.*t33*t770;
  t794 = t252*t791;
  t798 = t775 + t794;
  t807 = t252*t770;
  t810 = t33*t791;
  t812 = t807 + t810;
  t306 = t23*t299;
  t330 = t315*t329;
  t333 = t306 + t330;
  t358 = t315*t299;
  t370 = -1.*t23*t329;
  t381 = t358 + t370;
  t612 = t23*t605;
  t626 = t315*t625;
  t627 = t612 + t626;
  t642 = t315*t605;
  t658 = -1.*t23*t625;
  t660 = t642 + t658;
  t802 = t23*t798;
  t814 = t315*t812;
  t820 = t802 + t814;
  t823 = t315*t798;
  t844 = -1.*t23*t812;
  t855 = t823 + t844;
  t961 = -1.*t77;
  t964 = 1. + t961;
  t1040 = -1.*t62;
  t1041 = 1. + t1040;
  t1121 = -1.*t43;
  t1124 = 1. + t1121;
  t1187 = -1.*t252;
  t1190 = 1. + t1187;
  t1247 = -1.*t315;
  t1249 = 1. + t1247;
  t1311 = -1.*t352;
  t1326 = 1. + t1311;
  t878 = t352*t333;
  t879 = t7*t381;
  t914 = t878 + t879;
  t983 = 0.07996*t964;
  t993 = -0.135*t151;
  t997 = 0. + t983 + t993;
  t1021 = 0.135*t964;
  t1025 = 0.07996*t151;
  t1034 = 0. + t1021 + t1025;
  t1049 = 0.135*t1041;
  t1051 = 0.08055*t174;
  t1053 = 0. + t1049 + t1051;
  t1063 = -0.08055*t1041;
  t1066 = 0.135*t174;
  t1067 = 0. + t1063 + t1066;
  t1145 = -0.08055*t1124;
  t1150 = -0.01004*t214;
  t1151 = 0. + t1145 + t1150;
  t1162 = -0.01004*t1124;
  t1170 = 0.08055*t214;
  t1174 = 0. + t1162 + t1170;
  t1195 = -0.08055*t1190;
  t1198 = -0.13004*t33;
  t1201 = 0. + t1195 + t1198;
  t1210 = -0.13004*t1190;
  t1232 = 0.08055*t33;
  t1234 = 0. + t1210 + t1232;
  t1260 = -0.19074*t1249;
  t1262 = 0.03315*t23;
  t1273 = 0. + t1260 + t1262;
  t1280 = -0.03315*t1249;
  t1281 = -0.19074*t23;
  t1292 = 0. + t1280 + t1281;
  t1329 = -0.01315*t1326;
  t1333 = -0.62554*t7;
  t1334 = 0. + t1329 + t1333;
  t1352 = -0.62554*t1326;
  t1353 = 0.01315*t7;
  t1361 = 0. + t1352 + t1353;
  t915 = t352*t627;
  t919 = t7*t660;
  t920 = t915 + t919;
  t932 = t352*t820;
  t933 = t7*t855;
  t934 = t932 + t933;
  p_output1[0]=-1.*t352*t381 + t333*t7;
  p_output1[1]=-1.*t352*t660 + t627*t7;
  p_output1[2]=t7*t820 - 1.*t352*t855;
  p_output1[3]=0.;
  p_output1[4]=t914;
  p_output1[5]=t920;
  p_output1[6]=t934;
  p_output1[7]=0.;
  p_output1[8]=t174*t48*t55 - 1.*t171*t62;
  p_output1[9]=t118*t174*t55 - 1.*t527*t62;
  p_output1[10]=-1.*t120*t174 - 1.*t62*t736;
  p_output1[11]=0.;
  p_output1[12]=0. + t1034*t132 + t1053*t171 + t1151*t179 + t1174*t202 + t1201*t229 + t1234*t263 + t1273*t299 + t1292*t329 + t1334*t333 + t1361*t381 + t1067*t48*t55 + 0.1305*(-1.*t174*t48*t55 + t171*t62) - 0.62554*(t352*t381 - 1.*t333*t7) - 0.01315*t914 + t144*t997 + var1[0];
  p_output1[13]=0. + t1034*t469 + t1053*t527 + t1151*t536 + t1067*t118*t55 + t1174*t567 + t1201*t571 + t1234*t587 + t1273*t605 + 0.1305*(-1.*t118*t174*t55 + t527*t62) + t1292*t625 + t1334*t627 + t1361*t660 - 0.62554*(t352*t660 - 1.*t627*t7) - 0.01315*t920 + t517*t997 + var1[1];
  p_output1[14]=0. - 1.*t1067*t120 + t1034*t125*t55 + t1053*t736 + 0.1305*(t120*t174 + t62*t736) + t1151*t740 + t1174*t759 + t1201*t770 + t1234*t791 + t1273*t798 + t1292*t812 + t1334*t820 + t1361*t855 - 0.62554*(-1.*t7*t820 + t352*t855) - 0.01315*t934 + t107*t55*t997 + var1[2];
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

#include "T_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void T_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
