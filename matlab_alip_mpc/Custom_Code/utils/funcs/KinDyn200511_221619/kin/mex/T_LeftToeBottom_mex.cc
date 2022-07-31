/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:39 GMT-04:00
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
  double t46;
  double t72;
  double t91;
  double t76;
  double t96;
  double t67;
  double t121;
  double t123;
  double t124;
  double t89;
  double t115;
  double t118;
  double t143;
  double t14;
  double t182;
  double t186;
  double t190;
  double t54;
  double t60;
  double t62;
  double t120;
  double t157;
  double t163;
  double t165;
  double t166;
  double t175;
  double t193;
  double t239;
  double t176;
  double t215;
  double t225;
  double t13;
  double t243;
  double t246;
  double t248;
  double t308;
  double t226;
  double t273;
  double t292;
  double t11;
  double t309;
  double t311;
  double t313;
  double t331;
  double t302;
  double t315;
  double t323;
  double t8;
  double t334;
  double t337;
  double t347;
  double t401;
  double t325;
  double t353;
  double t360;
  double t5;
  double t403;
  double t409;
  double t410;
  double t518;
  double t519;
  double t520;
  double t499;
  double t503;
  double t507;
  double t584;
  double t609;
  double t612;
  double t478;
  double t517;
  double t528;
  double t529;
  double t532;
  double t540;
  double t559;
  double t618;
  double t621;
  double t623;
  double t630;
  double t633;
  double t622;
  double t641;
  double t644;
  double t660;
  double t669;
  double t675;
  double t645;
  double t679;
  double t683;
  double t691;
  double t695;
  double t707;
  double t689;
  double t715;
  double t716;
  double t725;
  double t726;
  double t727;
  double t829;
  double t835;
  double t837;
  double t793;
  double t794;
  double t795;
  double t810;
  double t821;
  double t823;
  double t826;
  double t841;
  double t843;
  double t863;
  double t864;
  double t877;
  double t858;
  double t879;
  double t880;
  double t892;
  double t907;
  double t908;
  double t883;
  double t931;
  double t953;
  double t970;
  double t982;
  double t990;
  double t966;
  double t993;
  double t997;
  double t1020;
  double t1025;
  double t1026;
  double t371;
  double t412;
  double t420;
  double t452;
  double t453;
  double t458;
  double t720;
  double t728;
  double t735;
  double t757;
  double t760;
  double t769;
  double t1005;
  double t1029;
  double t1038;
  double t1049;
  double t1052;
  double t1063;
  double t1211;
  double t1222;
  double t1315;
  double t1318;
  double t1073;
  double t1080;
  double t1088;
  double t1407;
  double t1416;
  double t1462;
  double t1464;
  double t1531;
  double t1538;
  double t1594;
  double t1597;
  double t1668;
  double t1687;
  double t1241;
  double t1249;
  double t1252;
  double t1268;
  double t1271;
  double t1278;
  double t1329;
  double t1333;
  double t1340;
  double t1345;
  double t1353;
  double t1357;
  double t1090;
  double t1098;
  double t1101;
  double t1421;
  double t1426;
  double t1434;
  double t1450;
  double t1456;
  double t1457;
  double t1484;
  double t1487;
  double t1495;
  double t1502;
  double t1523;
  double t1525;
  double t1541;
  double t1544;
  double t1550;
  double t1571;
  double t1574;
  double t1577;
  double t1604;
  double t1609;
  double t1613;
  double t1625;
  double t1629;
  double t1639;
  double t1694;
  double t1701;
  double t1705;
  double t1722;
  double t1730;
  double t1731;
  double t1120;
  double t1130;
  double t1165;
  t46 = Cos(var1[3]);
  t72 = Cos(var1[5]);
  t91 = Sin(var1[4]);
  t76 = Sin(var1[3]);
  t96 = Sin(var1[5]);
  t67 = Cos(var1[6]);
  t121 = t46*t72*t91;
  t123 = t76*t96;
  t124 = t121 + t123;
  t89 = -1.*t72*t76;
  t115 = t46*t91*t96;
  t118 = t89 + t115;
  t143 = Sin(var1[6]);
  t14 = Cos(var1[8]);
  t182 = t67*t124;
  t186 = -1.*t118*t143;
  t190 = t182 + t186;
  t54 = Cos(var1[4]);
  t60 = Cos(var1[7]);
  t62 = t46*t54*t60;
  t120 = t67*t118;
  t157 = t124*t143;
  t163 = t120 + t157;
  t165 = Sin(var1[7]);
  t166 = t163*t165;
  t175 = t62 + t166;
  t193 = Sin(var1[8]);
  t239 = Cos(var1[9]);
  t176 = t14*t175;
  t215 = t190*t193;
  t225 = t176 + t215;
  t13 = Sin(var1[9]);
  t243 = t14*t190;
  t246 = -1.*t175*t193;
  t248 = t243 + t246;
  t308 = Cos(var1[10]);
  t226 = -1.*t13*t225;
  t273 = t239*t248;
  t292 = t226 + t273;
  t11 = Sin(var1[10]);
  t309 = t239*t225;
  t311 = t13*t248;
  t313 = t309 + t311;
  t331 = Cos(var1[11]);
  t302 = t11*t292;
  t315 = t308*t313;
  t323 = t302 + t315;
  t8 = Sin(var1[11]);
  t334 = t308*t292;
  t337 = -1.*t11*t313;
  t347 = t334 + t337;
  t401 = Cos(var1[12]);
  t325 = -1.*t8*t323;
  t353 = t331*t347;
  t360 = t325 + t353;
  t5 = Sin(var1[12]);
  t403 = t331*t323;
  t409 = t8*t347;
  t410 = t403 + t409;
  t518 = t72*t76*t91;
  t519 = -1.*t46*t96;
  t520 = t518 + t519;
  t499 = t46*t72;
  t503 = t76*t91*t96;
  t507 = t499 + t503;
  t584 = t67*t520;
  t609 = -1.*t507*t143;
  t612 = t584 + t609;
  t478 = t54*t60*t76;
  t517 = t67*t507;
  t528 = t520*t143;
  t529 = t517 + t528;
  t532 = t529*t165;
  t540 = t478 + t532;
  t559 = t14*t540;
  t618 = t612*t193;
  t621 = t559 + t618;
  t623 = t14*t612;
  t630 = -1.*t540*t193;
  t633 = t623 + t630;
  t622 = -1.*t13*t621;
  t641 = t239*t633;
  t644 = t622 + t641;
  t660 = t239*t621;
  t669 = t13*t633;
  t675 = t660 + t669;
  t645 = t11*t644;
  t679 = t308*t675;
  t683 = t645 + t679;
  t691 = t308*t644;
  t695 = -1.*t11*t675;
  t707 = t691 + t695;
  t689 = -1.*t8*t683;
  t715 = t331*t707;
  t716 = t689 + t715;
  t725 = t331*t683;
  t726 = t8*t707;
  t727 = t725 + t726;
  t829 = t54*t72*t67;
  t835 = -1.*t54*t96*t143;
  t837 = t829 + t835;
  t793 = -1.*t60*t91;
  t794 = t54*t67*t96;
  t795 = t54*t72*t143;
  t810 = t794 + t795;
  t821 = t810*t165;
  t823 = t793 + t821;
  t826 = t14*t823;
  t841 = t837*t193;
  t843 = t826 + t841;
  t863 = t14*t837;
  t864 = -1.*t823*t193;
  t877 = t863 + t864;
  t858 = -1.*t13*t843;
  t879 = t239*t877;
  t880 = t858 + t879;
  t892 = t239*t843;
  t907 = t13*t877;
  t908 = t892 + t907;
  t883 = t11*t880;
  t931 = t308*t908;
  t953 = t883 + t931;
  t970 = t308*t880;
  t982 = -1.*t11*t908;
  t990 = t970 + t982;
  t966 = -1.*t8*t953;
  t993 = t331*t990;
  t997 = t966 + t993;
  t1020 = t331*t953;
  t1025 = t8*t990;
  t1026 = t1020 + t1025;
  t371 = t5*t360;
  t412 = t401*t410;
  t420 = t371 + t412;
  t452 = t401*t360;
  t453 = -1.*t5*t410;
  t458 = t452 + t453;
  t720 = t5*t716;
  t728 = t401*t727;
  t735 = t720 + t728;
  t757 = t401*t716;
  t760 = -1.*t5*t727;
  t769 = t757 + t760;
  t1005 = t5*t997;
  t1029 = t401*t1026;
  t1038 = t1005 + t1029;
  t1049 = t401*t997;
  t1052 = -1.*t5*t1026;
  t1063 = t1049 + t1052;
  t1211 = -1.*t67;
  t1222 = 1. + t1211;
  t1315 = -1.*t60;
  t1318 = 1. + t1315;
  t1073 = t60*t163;
  t1080 = -1.*t46*t54*t165;
  t1088 = t1073 + t1080;
  t1407 = -1.*t14;
  t1416 = 1. + t1407;
  t1462 = -1.*t239;
  t1464 = 1. + t1462;
  t1531 = -1.*t308;
  t1538 = 1. + t1531;
  t1594 = -1.*t331;
  t1597 = 1. + t1594;
  t1668 = -1.*t401;
  t1687 = 1. + t1668;
  t1241 = 0.07996*t1222;
  t1249 = -0.135*t143;
  t1252 = 0. + t1241 + t1249;
  t1268 = 0.135*t1222;
  t1271 = 0.07996*t143;
  t1278 = 0. + t1268 + t1271;
  t1329 = 0.135*t1318;
  t1333 = 0.08055*t165;
  t1340 = 0. + t1329 + t1333;
  t1345 = -0.08055*t1318;
  t1353 = 0.135*t165;
  t1357 = 0. + t1345 + t1353;
  t1090 = t60*t529;
  t1098 = -1.*t54*t76*t165;
  t1101 = t1090 + t1098;
  t1421 = -0.08055*t1416;
  t1426 = -0.01004*t193;
  t1434 = 0. + t1421 + t1426;
  t1450 = -0.01004*t1416;
  t1456 = 0.08055*t193;
  t1457 = 0. + t1450 + t1456;
  t1484 = -0.08055*t1464;
  t1487 = -0.13004*t13;
  t1495 = 0. + t1484 + t1487;
  t1502 = -0.13004*t1464;
  t1523 = 0.08055*t13;
  t1525 = 0. + t1502 + t1523;
  t1541 = -0.19074*t1538;
  t1544 = 0.03315*t11;
  t1550 = 0. + t1541 + t1544;
  t1571 = -0.03315*t1538;
  t1574 = -0.19074*t11;
  t1577 = 0. + t1571 + t1574;
  t1604 = -0.01315*t1597;
  t1609 = -0.62554*t8;
  t1613 = 0. + t1604 + t1609;
  t1625 = -0.62554*t1597;
  t1629 = 0.01315*t8;
  t1639 = 0. + t1625 + t1629;
  t1694 = -1.03354*t1687;
  t1701 = 0.05315*t5;
  t1705 = 0. + t1694 + t1701;
  t1722 = -0.05315*t1687;
  t1730 = -1.03354*t5;
  t1731 = 0. + t1722 + t1730;
  t1120 = t60*t810;
  t1130 = t91*t165;
  t1165 = t1120 + t1130;
  p_output1[0]=0.642788*t420 + 0.766044*t458;
  p_output1[1]=0.642788*t735 + 0.766044*t769;
  p_output1[2]=0.642788*t1038 + 0.766044*t1063;
  p_output1[3]=0.;
  p_output1[4]=t1088;
  p_output1[5]=t1101;
  p_output1[6]=t1165;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t420 + 0.642788*t458;
  p_output1[9]=-0.766044*t735 + 0.642788*t769;
  p_output1[10]=-0.766044*t1038 + 0.642788*t1063;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*t1088 + t124*t1252 + t118*t1278 + t1340*t163 + t1434*t175 + t1457*t190 + t1495*t225 + t1525*t248 + t1550*t292 + t1577*t313 + t1613*t323 + t1639*t347 + t1705*t360 + t1731*t410 - 0.00095*t420 - 1.05124*t458 + t1357*t46*t54 + var1[0];
  p_output1[13]=0. + 0.1305*t1101 + t1278*t507 + t1252*t520 + t1340*t529 + t1434*t540 + t1457*t612 + t1495*t621 + t1525*t633 + t1550*t644 + t1577*t675 + t1613*t683 + t1639*t707 + t1705*t716 + t1731*t727 - 0.00095*t735 + t1357*t54*t76 - 1.05124*t769 + var1[1];
  p_output1[14]=0. - 0.00095*t1038 - 1.05124*t1063 + 0.1305*t1165 + t1026*t1731 + t1252*t54*t72 + t1340*t810 + t1434*t823 + t1457*t837 + t1495*t843 + t1525*t877 + t1550*t880 + t1577*t908 - 1.*t1357*t91 + t1613*t953 + t1278*t54*t96 + t1639*t990 + t1705*t997 + var1[2];
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

#include "T_LeftToeBottom_mex.hh"

namespace SymExpression
{

void T_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
