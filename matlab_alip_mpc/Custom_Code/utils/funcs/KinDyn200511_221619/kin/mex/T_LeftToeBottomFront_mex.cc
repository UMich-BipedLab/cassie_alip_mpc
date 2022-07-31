/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:43 GMT-04:00
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
  double t84;
  double t117;
  double t137;
  double t126;
  double t142;
  double t111;
  double t154;
  double t156;
  double t158;
  double t133;
  double t146;
  double t148;
  double t175;
  double t66;
  double t214;
  double t219;
  double t224;
  double t86;
  double t96;
  double t108;
  double t152;
  double t178;
  double t197;
  double t198;
  double t199;
  double t202;
  double t235;
  double t248;
  double t209;
  double t236;
  double t240;
  double t57;
  double t267;
  double t269;
  double t277;
  double t315;
  double t247;
  double t281;
  double t311;
  double t47;
  double t321;
  double t336;
  double t339;
  double t365;
  double t314;
  double t344;
  double t346;
  double t21;
  double t374;
  double t382;
  double t396;
  double t430;
  double t357;
  double t400;
  double t423;
  double t16;
  double t432;
  double t433;
  double t434;
  double t528;
  double t529;
  double t540;
  double t510;
  double t512;
  double t514;
  double t598;
  double t601;
  double t611;
  double t504;
  double t520;
  double t568;
  double t579;
  double t582;
  double t588;
  double t591;
  double t614;
  double t617;
  double t629;
  double t642;
  double t651;
  double t625;
  double t652;
  double t655;
  double t669;
  double t673;
  double t676;
  double t658;
  double t681;
  double t689;
  double t701;
  double t707;
  double t714;
  double t698;
  double t725;
  double t727;
  double t745;
  double t754;
  double t761;
  double t868;
  double t869;
  double t887;
  double t833;
  double t840;
  double t841;
  double t845;
  double t850;
  double t865;
  double t866;
  double t890;
  double t895;
  double t899;
  double t903;
  double t908;
  double t897;
  double t915;
  double t918;
  double t945;
  double t957;
  double t966;
  double t936;
  double t971;
  double t972;
  double t976;
  double t982;
  double t983;
  double t973;
  double t985;
  double t989;
  double t995;
  double t1001;
  double t1005;
  double t427;
  double t445;
  double t460;
  double t463;
  double t472;
  double t486;
  double t736;
  double t762;
  double t789;
  double t794;
  double t797;
  double t825;
  double t990;
  double t1009;
  double t1015;
  double t1025;
  double t1026;
  double t1031;
  double t1203;
  double t1208;
  double t1311;
  double t1321;
  double t1051;
  double t1058;
  double t1065;
  double t1398;
  double t1409;
  double t1457;
  double t1461;
  double t1536;
  double t1551;
  double t1625;
  double t1627;
  double t1663;
  double t1680;
  double t1214;
  double t1226;
  double t1232;
  double t1256;
  double t1262;
  double t1274;
  double t1325;
  double t1340;
  double t1341;
  double t1346;
  double t1354;
  double t1363;
  double t1073;
  double t1078;
  double t1083;
  double t1412;
  double t1413;
  double t1417;
  double t1428;
  double t1430;
  double t1440;
  double t1471;
  double t1472;
  double t1478;
  double t1502;
  double t1523;
  double t1530;
  double t1554;
  double t1576;
  double t1580;
  double t1599;
  double t1606;
  double t1612;
  double t1636;
  double t1638;
  double t1639;
  double t1648;
  double t1657;
  double t1659;
  double t1685;
  double t1689;
  double t1712;
  double t1727;
  double t1728;
  double t1734;
  double t1095;
  double t1102;
  double t1105;
  t84 = Cos(var1[3]);
  t117 = Cos(var1[5]);
  t137 = Sin(var1[4]);
  t126 = Sin(var1[3]);
  t142 = Sin(var1[5]);
  t111 = Cos(var1[6]);
  t154 = t84*t117*t137;
  t156 = t126*t142;
  t158 = t154 + t156;
  t133 = -1.*t117*t126;
  t146 = t84*t137*t142;
  t148 = t133 + t146;
  t175 = Sin(var1[6]);
  t66 = Cos(var1[8]);
  t214 = t111*t158;
  t219 = -1.*t148*t175;
  t224 = t214 + t219;
  t86 = Cos(var1[4]);
  t96 = Cos(var1[7]);
  t108 = t84*t86*t96;
  t152 = t111*t148;
  t178 = t158*t175;
  t197 = t152 + t178;
  t198 = Sin(var1[7]);
  t199 = t197*t198;
  t202 = t108 + t199;
  t235 = Sin(var1[8]);
  t248 = Cos(var1[9]);
  t209 = t66*t202;
  t236 = t224*t235;
  t240 = t209 + t236;
  t57 = Sin(var1[9]);
  t267 = t66*t224;
  t269 = -1.*t202*t235;
  t277 = t267 + t269;
  t315 = Cos(var1[10]);
  t247 = -1.*t57*t240;
  t281 = t248*t277;
  t311 = t247 + t281;
  t47 = Sin(var1[10]);
  t321 = t248*t240;
  t336 = t57*t277;
  t339 = t321 + t336;
  t365 = Cos(var1[11]);
  t314 = t47*t311;
  t344 = t315*t339;
  t346 = t314 + t344;
  t21 = Sin(var1[11]);
  t374 = t315*t311;
  t382 = -1.*t47*t339;
  t396 = t374 + t382;
  t430 = Cos(var1[12]);
  t357 = -1.*t21*t346;
  t400 = t365*t396;
  t423 = t357 + t400;
  t16 = Sin(var1[12]);
  t432 = t365*t346;
  t433 = t21*t396;
  t434 = t432 + t433;
  t528 = t117*t126*t137;
  t529 = -1.*t84*t142;
  t540 = t528 + t529;
  t510 = t84*t117;
  t512 = t126*t137*t142;
  t514 = t510 + t512;
  t598 = t111*t540;
  t601 = -1.*t514*t175;
  t611 = t598 + t601;
  t504 = t86*t96*t126;
  t520 = t111*t514;
  t568 = t540*t175;
  t579 = t520 + t568;
  t582 = t579*t198;
  t588 = t504 + t582;
  t591 = t66*t588;
  t614 = t611*t235;
  t617 = t591 + t614;
  t629 = t66*t611;
  t642 = -1.*t588*t235;
  t651 = t629 + t642;
  t625 = -1.*t57*t617;
  t652 = t248*t651;
  t655 = t625 + t652;
  t669 = t248*t617;
  t673 = t57*t651;
  t676 = t669 + t673;
  t658 = t47*t655;
  t681 = t315*t676;
  t689 = t658 + t681;
  t701 = t315*t655;
  t707 = -1.*t47*t676;
  t714 = t701 + t707;
  t698 = -1.*t21*t689;
  t725 = t365*t714;
  t727 = t698 + t725;
  t745 = t365*t689;
  t754 = t21*t714;
  t761 = t745 + t754;
  t868 = t86*t117*t111;
  t869 = -1.*t86*t142*t175;
  t887 = t868 + t869;
  t833 = -1.*t96*t137;
  t840 = t86*t111*t142;
  t841 = t86*t117*t175;
  t845 = t840 + t841;
  t850 = t845*t198;
  t865 = t833 + t850;
  t866 = t66*t865;
  t890 = t887*t235;
  t895 = t866 + t890;
  t899 = t66*t887;
  t903 = -1.*t865*t235;
  t908 = t899 + t903;
  t897 = -1.*t57*t895;
  t915 = t248*t908;
  t918 = t897 + t915;
  t945 = t248*t895;
  t957 = t57*t908;
  t966 = t945 + t957;
  t936 = t47*t918;
  t971 = t315*t966;
  t972 = t936 + t971;
  t976 = t315*t918;
  t982 = -1.*t47*t966;
  t983 = t976 + t982;
  t973 = -1.*t21*t972;
  t985 = t365*t983;
  t989 = t973 + t985;
  t995 = t365*t972;
  t1001 = t21*t983;
  t1005 = t995 + t1001;
  t427 = t16*t423;
  t445 = t430*t434;
  t460 = t427 + t445;
  t463 = t430*t423;
  t472 = -1.*t16*t434;
  t486 = t463 + t472;
  t736 = t16*t727;
  t762 = t430*t761;
  t789 = t736 + t762;
  t794 = t430*t727;
  t797 = -1.*t16*t761;
  t825 = t794 + t797;
  t990 = t16*t989;
  t1009 = t430*t1005;
  t1015 = t990 + t1009;
  t1025 = t430*t989;
  t1026 = -1.*t16*t1005;
  t1031 = t1025 + t1026;
  t1203 = -1.*t111;
  t1208 = 1. + t1203;
  t1311 = -1.*t96;
  t1321 = 1. + t1311;
  t1051 = t96*t197;
  t1058 = -1.*t84*t86*t198;
  t1065 = t1051 + t1058;
  t1398 = -1.*t66;
  t1409 = 1. + t1398;
  t1457 = -1.*t248;
  t1461 = 1. + t1457;
  t1536 = -1.*t315;
  t1551 = 1. + t1536;
  t1625 = -1.*t365;
  t1627 = 1. + t1625;
  t1663 = -1.*t430;
  t1680 = 1. + t1663;
  t1214 = 0.07996*t1208;
  t1226 = -0.135*t175;
  t1232 = 0. + t1214 + t1226;
  t1256 = 0.135*t1208;
  t1262 = 0.07996*t175;
  t1274 = 0. + t1256 + t1262;
  t1325 = 0.135*t1321;
  t1340 = 0.08055*t198;
  t1341 = 0. + t1325 + t1340;
  t1346 = -0.08055*t1321;
  t1354 = 0.135*t198;
  t1363 = 0. + t1346 + t1354;
  t1073 = t96*t579;
  t1078 = -1.*t86*t126*t198;
  t1083 = t1073 + t1078;
  t1412 = -0.08055*t1409;
  t1413 = -0.01004*t235;
  t1417 = 0. + t1412 + t1413;
  t1428 = -0.01004*t1409;
  t1430 = 0.08055*t235;
  t1440 = 0. + t1428 + t1430;
  t1471 = -0.08055*t1461;
  t1472 = -0.13004*t57;
  t1478 = 0. + t1471 + t1472;
  t1502 = -0.13004*t1461;
  t1523 = 0.08055*t57;
  t1530 = 0. + t1502 + t1523;
  t1554 = -0.19074*t1551;
  t1576 = 0.03315*t47;
  t1580 = 0. + t1554 + t1576;
  t1599 = -0.03315*t1551;
  t1606 = -0.19074*t47;
  t1612 = 0. + t1599 + t1606;
  t1636 = -0.01315*t1627;
  t1638 = -0.62554*t21;
  t1639 = 0. + t1636 + t1638;
  t1648 = -0.62554*t1627;
  t1657 = 0.01315*t21;
  t1659 = 0. + t1648 + t1657;
  t1685 = -1.03354*t1680;
  t1689 = 0.05315*t16;
  t1712 = 0. + t1685 + t1689;
  t1727 = -0.05315*t1680;
  t1728 = -1.03354*t16;
  t1734 = 0. + t1727 + t1728;
  t1095 = t96*t845;
  t1102 = t137*t198;
  t1105 = t1095 + t1102;
  p_output1[0]=0.642788*t460 + 0.766044*t486;
  p_output1[1]=0.642788*t789 + 0.766044*t825;
  p_output1[2]=0.642788*t1015 + 0.766044*t1031;
  p_output1[3]=0.;
  p_output1[4]=t1065;
  p_output1[5]=t1083;
  p_output1[6]=t1105;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t460 + 0.642788*t486;
  p_output1[9]=-0.766044*t789 + 0.642788*t825;
  p_output1[10]=-0.766044*t1015 + 0.642788*t1031;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*t1065 + t1274*t148 + t1232*t158 + t1341*t197 + t1417*t202 + t1440*t224 + t1478*t240 + t1530*t277 + t1580*t311 + t1612*t339 + t1639*t346 + t1659*t396 + t1712*t423 + t1734*t434 + 0.046027*t460 - 0.979698*t486 + t1363*t84*t86 + var1[0];
  p_output1[13]=0. + 0.1305*t1083 + t1274*t514 + t1232*t540 + t1341*t579 + t1417*t588 + t1440*t611 + t1478*t617 + t1530*t651 + t1580*t655 + t1612*t676 + t1639*t689 + t1659*t714 + t1712*t727 + t1734*t761 + 0.046027*t789 - 0.979698*t825 + t126*t1363*t86 + var1[1];
  p_output1[14]=0. + 0.046027*t1015 - 0.979698*t1031 + 0.1305*t1105 - 1.*t1363*t137 + t1005*t1734 + t1341*t845 + t117*t1232*t86 + t1274*t142*t86 + t1417*t865 + t1440*t887 + t1478*t895 + t1530*t908 + t1580*t918 + t1612*t966 + t1639*t972 + t1659*t983 + t1712*t989 + var1[2];
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

#include "T_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void T_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
