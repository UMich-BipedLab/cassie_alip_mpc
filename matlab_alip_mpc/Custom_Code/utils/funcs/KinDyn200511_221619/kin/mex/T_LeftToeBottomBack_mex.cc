/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:11 GMT-04:00
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
  double t101;
  double t135;
  double t144;
  double t136;
  double t150;
  double t132;
  double t172;
  double t175;
  double t176;
  double t143;
  double t156;
  double t157;
  double t180;
  double t64;
  double t227;
  double t233;
  double t235;
  double t119;
  double t121;
  double t125;
  double t170;
  double t193;
  double t202;
  double t211;
  double t213;
  double t219;
  double t236;
  double t290;
  double t222;
  double t250;
  double t254;
  double t57;
  double t306;
  double t309;
  double t318;
  double t339;
  double t282;
  double t322;
  double t327;
  double t44;
  double t344;
  double t350;
  double t352;
  double t357;
  double t333;
  double t353;
  double t354;
  double t38;
  double t358;
  double t359;
  double t364;
  double t386;
  double t355;
  double t365;
  double t376;
  double t4;
  double t387;
  double t388;
  double t390;
  double t487;
  double t495;
  double t501;
  double t448;
  double t464;
  double t468;
  double t528;
  double t529;
  double t532;
  double t435;
  double t486;
  double t505;
  double t507;
  double t512;
  double t525;
  double t526;
  double t539;
  double t556;
  double t569;
  double t577;
  double t597;
  double t562;
  double t598;
  double t600;
  double t609;
  double t624;
  double t625;
  double t604;
  double t630;
  double t633;
  double t663;
  double t665;
  double t667;
  double t637;
  double t668;
  double t673;
  double t676;
  double t679;
  double t685;
  double t765;
  double t769;
  double t770;
  double t735;
  double t739;
  double t741;
  double t745;
  double t752;
  double t754;
  double t763;
  double t777;
  double t778;
  double t795;
  double t797;
  double t798;
  double t783;
  double t801;
  double t810;
  double t817;
  double t822;
  double t825;
  double t813;
  double t826;
  double t831;
  double t844;
  double t846;
  double t849;
  double t841;
  double t852;
  double t854;
  double t867;
  double t869;
  double t870;
  double t384;
  double t391;
  double t393;
  double t404;
  double t412;
  double t415;
  double t675;
  double t691;
  double t708;
  double t710;
  double t712;
  double t717;
  double t866;
  double t871;
  double t880;
  double t893;
  double t899;
  double t904;
  double t1016;
  double t1021;
  double t1096;
  double t1097;
  double t910;
  double t912;
  double t916;
  double t1154;
  double t1159;
  double t1227;
  double t1240;
  double t1285;
  double t1298;
  double t1360;
  double t1366;
  double t1413;
  double t1414;
  double t1028;
  double t1036;
  double t1042;
  double t1049;
  double t1059;
  double t1079;
  double t1112;
  double t1122;
  double t1124;
  double t1136;
  double t1144;
  double t1145;
  double t918;
  double t919;
  double t923;
  double t1170;
  double t1183;
  double t1188;
  double t1204;
  double t1205;
  double t1209;
  double t1242;
  double t1245;
  double t1247;
  double t1260;
  double t1263;
  double t1282;
  double t1309;
  double t1310;
  double t1320;
  double t1324;
  double t1346;
  double t1349;
  double t1377;
  double t1379;
  double t1383;
  double t1386;
  double t1394;
  double t1408;
  double t1417;
  double t1427;
  double t1428;
  double t1434;
  double t1445;
  double t1449;
  double t924;
  double t933;
  double t939;
  t101 = Cos(var1[3]);
  t135 = Cos(var1[5]);
  t144 = Sin(var1[4]);
  t136 = Sin(var1[3]);
  t150 = Sin(var1[5]);
  t132 = Cos(var1[6]);
  t172 = t101*t135*t144;
  t175 = t136*t150;
  t176 = t172 + t175;
  t143 = -1.*t135*t136;
  t156 = t101*t144*t150;
  t157 = t143 + t156;
  t180 = Sin(var1[6]);
  t64 = Cos(var1[8]);
  t227 = t132*t176;
  t233 = -1.*t157*t180;
  t235 = t227 + t233;
  t119 = Cos(var1[4]);
  t121 = Cos(var1[7]);
  t125 = t101*t119*t121;
  t170 = t132*t157;
  t193 = t176*t180;
  t202 = t170 + t193;
  t211 = Sin(var1[7]);
  t213 = t202*t211;
  t219 = t125 + t213;
  t236 = Sin(var1[8]);
  t290 = Cos(var1[9]);
  t222 = t64*t219;
  t250 = t235*t236;
  t254 = t222 + t250;
  t57 = Sin(var1[9]);
  t306 = t64*t235;
  t309 = -1.*t219*t236;
  t318 = t306 + t309;
  t339 = Cos(var1[10]);
  t282 = -1.*t57*t254;
  t322 = t290*t318;
  t327 = t282 + t322;
  t44 = Sin(var1[10]);
  t344 = t290*t254;
  t350 = t57*t318;
  t352 = t344 + t350;
  t357 = Cos(var1[11]);
  t333 = t44*t327;
  t353 = t339*t352;
  t354 = t333 + t353;
  t38 = Sin(var1[11]);
  t358 = t339*t327;
  t359 = -1.*t44*t352;
  t364 = t358 + t359;
  t386 = Cos(var1[12]);
  t355 = -1.*t38*t354;
  t365 = t357*t364;
  t376 = t355 + t365;
  t4 = Sin(var1[12]);
  t387 = t357*t354;
  t388 = t38*t364;
  t390 = t387 + t388;
  t487 = t135*t136*t144;
  t495 = -1.*t101*t150;
  t501 = t487 + t495;
  t448 = t101*t135;
  t464 = t136*t144*t150;
  t468 = t448 + t464;
  t528 = t132*t501;
  t529 = -1.*t468*t180;
  t532 = t528 + t529;
  t435 = t119*t121*t136;
  t486 = t132*t468;
  t505 = t501*t180;
  t507 = t486 + t505;
  t512 = t507*t211;
  t525 = t435 + t512;
  t526 = t64*t525;
  t539 = t532*t236;
  t556 = t526 + t539;
  t569 = t64*t532;
  t577 = -1.*t525*t236;
  t597 = t569 + t577;
  t562 = -1.*t57*t556;
  t598 = t290*t597;
  t600 = t562 + t598;
  t609 = t290*t556;
  t624 = t57*t597;
  t625 = t609 + t624;
  t604 = t44*t600;
  t630 = t339*t625;
  t633 = t604 + t630;
  t663 = t339*t600;
  t665 = -1.*t44*t625;
  t667 = t663 + t665;
  t637 = -1.*t38*t633;
  t668 = t357*t667;
  t673 = t637 + t668;
  t676 = t357*t633;
  t679 = t38*t667;
  t685 = t676 + t679;
  t765 = t119*t135*t132;
  t769 = -1.*t119*t150*t180;
  t770 = t765 + t769;
  t735 = -1.*t121*t144;
  t739 = t119*t132*t150;
  t741 = t119*t135*t180;
  t745 = t739 + t741;
  t752 = t745*t211;
  t754 = t735 + t752;
  t763 = t64*t754;
  t777 = t770*t236;
  t778 = t763 + t777;
  t795 = t64*t770;
  t797 = -1.*t754*t236;
  t798 = t795 + t797;
  t783 = -1.*t57*t778;
  t801 = t290*t798;
  t810 = t783 + t801;
  t817 = t290*t778;
  t822 = t57*t798;
  t825 = t817 + t822;
  t813 = t44*t810;
  t826 = t339*t825;
  t831 = t813 + t826;
  t844 = t339*t810;
  t846 = -1.*t44*t825;
  t849 = t844 + t846;
  t841 = -1.*t38*t831;
  t852 = t357*t849;
  t854 = t841 + t852;
  t867 = t357*t831;
  t869 = t38*t849;
  t870 = t867 + t869;
  t384 = t4*t376;
  t391 = t386*t390;
  t393 = t384 + t391;
  t404 = t386*t376;
  t412 = -1.*t4*t390;
  t415 = t404 + t412;
  t675 = t4*t673;
  t691 = t386*t685;
  t708 = t675 + t691;
  t710 = t386*t673;
  t712 = -1.*t4*t685;
  t717 = t710 + t712;
  t866 = t4*t854;
  t871 = t386*t870;
  t880 = t866 + t871;
  t893 = t386*t854;
  t899 = -1.*t4*t870;
  t904 = t893 + t899;
  t1016 = -1.*t132;
  t1021 = 1. + t1016;
  t1096 = -1.*t121;
  t1097 = 1. + t1096;
  t910 = t121*t202;
  t912 = -1.*t101*t119*t211;
  t916 = t910 + t912;
  t1154 = -1.*t64;
  t1159 = 1. + t1154;
  t1227 = -1.*t290;
  t1240 = 1. + t1227;
  t1285 = -1.*t339;
  t1298 = 1. + t1285;
  t1360 = -1.*t357;
  t1366 = 1. + t1360;
  t1413 = -1.*t386;
  t1414 = 1. + t1413;
  t1028 = 0.07996*t1021;
  t1036 = -0.135*t180;
  t1042 = 0. + t1028 + t1036;
  t1049 = 0.135*t1021;
  t1059 = 0.07996*t180;
  t1079 = 0. + t1049 + t1059;
  t1112 = 0.135*t1097;
  t1122 = 0.08055*t211;
  t1124 = 0. + t1112 + t1122;
  t1136 = -0.08055*t1097;
  t1144 = 0.135*t211;
  t1145 = 0. + t1136 + t1144;
  t918 = t121*t507;
  t919 = -1.*t119*t136*t211;
  t923 = t918 + t919;
  t1170 = -0.08055*t1159;
  t1183 = -0.01004*t236;
  t1188 = 0. + t1170 + t1183;
  t1204 = -0.01004*t1159;
  t1205 = 0.08055*t236;
  t1209 = 0. + t1204 + t1205;
  t1242 = -0.08055*t1240;
  t1245 = -0.13004*t57;
  t1247 = 0. + t1242 + t1245;
  t1260 = -0.13004*t1240;
  t1263 = 0.08055*t57;
  t1282 = 0. + t1260 + t1263;
  t1309 = -0.19074*t1298;
  t1310 = 0.03315*t44;
  t1320 = 0. + t1309 + t1310;
  t1324 = -0.03315*t1298;
  t1346 = -0.19074*t44;
  t1349 = 0. + t1324 + t1346;
  t1377 = -0.01315*t1366;
  t1379 = -0.62554*t38;
  t1383 = 0. + t1377 + t1379;
  t1386 = -0.62554*t1366;
  t1394 = 0.01315*t38;
  t1408 = 0. + t1386 + t1394;
  t1417 = -1.03354*t1414;
  t1427 = 0.05315*t4;
  t1428 = 0. + t1417 + t1427;
  t1434 = -0.05315*t1414;
  t1445 = -1.03354*t4;
  t1449 = 0. + t1434 + t1445;
  t924 = t121*t745;
  t933 = t144*t211;
  t939 = t924 + t933;
  p_output1[0]=0.642788*t393 + 0.766044*t415;
  p_output1[1]=0.642788*t708 + 0.766044*t717;
  p_output1[2]=0.642788*t880 + 0.766044*t904;
  p_output1[3]=0.;
  p_output1[4]=t916;
  p_output1[5]=t923;
  p_output1[6]=t939;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t393 + 0.642788*t415;
  p_output1[9]=-0.766044*t708 + 0.642788*t717;
  p_output1[10]=-0.766044*t880 + 0.642788*t904;
  p_output1[11]=0.;
  p_output1[12]=0. + t101*t1145*t119 + t1079*t157 + t1042*t176 + t1124*t202 + t1188*t219 + t1209*t235 + t1247*t254 + t1282*t318 + t1320*t327 + t1349*t352 + t1383*t354 + t1408*t364 + t1428*t376 + t1449*t390 - 0.063247*t393 - 1.109926*t415 + 0.1305*t916 + var1[0];
  p_output1[13]=0. + t1145*t119*t136 + t1079*t468 + t1042*t501 + t1124*t507 + t1188*t525 + t1209*t532 + t1247*t556 + t1282*t597 + t1320*t600 + t1349*t625 + t1383*t633 + t1408*t667 + t1428*t673 + t1449*t685 - 0.063247*t708 - 1.109926*t717 + 0.1305*t923 + var1[1];
  p_output1[14]=0. + t1042*t119*t135 - 1.*t1145*t144 + t1079*t119*t150 + t1124*t745 + t1188*t754 + t1209*t770 + t1247*t778 + t1282*t798 + t1320*t810 + t1349*t825 + t1383*t831 + t1408*t849 + t1428*t854 + t1449*t870 - 0.063247*t880 - 1.109926*t904 + 0.1305*t939 + var1[2];
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

#include "T_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void T_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
