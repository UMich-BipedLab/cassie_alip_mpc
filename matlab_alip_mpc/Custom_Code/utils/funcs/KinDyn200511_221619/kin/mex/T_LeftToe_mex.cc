/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:59 GMT-04:00
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
  double t45;
  double t82;
  double t94;
  double t83;
  double t95;
  double t77;
  double t115;
  double t123;
  double t124;
  double t85;
  double t98;
  double t104;
  double t127;
  double t43;
  double t159;
  double t160;
  double t167;
  double t47;
  double t64;
  double t71;
  double t107;
  double t131;
  double t136;
  double t141;
  double t143;
  double t150;
  double t168;
  double t211;
  double t154;
  double t179;
  double t195;
  double t42;
  double t213;
  double t219;
  double t222;
  double t268;
  double t202;
  double t233;
  double t253;
  double t31;
  double t270;
  double t276;
  double t278;
  double t300;
  double t266;
  double t280;
  double t288;
  double t26;
  double t308;
  double t311;
  double t312;
  double t18;
  double t400;
  double t410;
  double t413;
  double t375;
  double t386;
  double t389;
  double t474;
  double t495;
  double t502;
  double t367;
  double t390;
  double t414;
  double t441;
  double t445;
  double t449;
  double t456;
  double t503;
  double t505;
  double t520;
  double t543;
  double t545;
  double t515;
  double t549;
  double t564;
  double t580;
  double t583;
  double t589;
  double t343;
  double t575;
  double t603;
  double t623;
  double t632;
  double t635;
  double t644;
  double t734;
  double t735;
  double t744;
  double t689;
  double t695;
  double t705;
  double t713;
  double t718;
  double t726;
  double t729;
  double t749;
  double t750;
  double t783;
  double t784;
  double t796;
  double t773;
  double t799;
  double t802;
  double t829;
  double t836;
  double t838;
  double t807;
  double t841;
  double t842;
  double t847;
  double t849;
  double t856;
  double t296;
  double t318;
  double t320;
  double t346;
  double t347;
  double t351;
  double t630;
  double t645;
  double t647;
  double t660;
  double t668;
  double t670;
  double t846;
  double t858;
  double t860;
  double t863;
  double t883;
  double t885;
  double t995;
  double t997;
  double t1062;
  double t1072;
  double t1150;
  double t1151;
  double t1223;
  double t1232;
  double t1319;
  double t1325;
  double t1370;
  double t1378;
  double t1445;
  double t1458;
  double t907;
  double t911;
  double t919;
  double t1000;
  double t1027;
  double t1036;
  double t1044;
  double t1045;
  double t1046;
  double t1078;
  double t1096;
  double t1097;
  double t1110;
  double t1113;
  double t1118;
  double t1165;
  double t1172;
  double t1192;
  double t1195;
  double t1208;
  double t1219;
  double t1247;
  double t1253;
  double t1267;
  double t1292;
  double t1302;
  double t1315;
  double t1328;
  double t1337;
  double t1341;
  double t1352;
  double t1353;
  double t1358;
  double t1383;
  double t1386;
  double t1391;
  double t1401;
  double t1403;
  double t1407;
  double t1459;
  double t1468;
  double t1471;
  double t1487;
  double t1490;
  double t1494;
  double t921;
  double t922;
  double t924;
  double t926;
  double t927;
  double t935;
  t45 = Cos(var1[3]);
  t82 = Cos(var1[5]);
  t94 = Sin(var1[4]);
  t83 = Sin(var1[3]);
  t95 = Sin(var1[5]);
  t77 = Cos(var1[6]);
  t115 = t45*t82*t94;
  t123 = t83*t95;
  t124 = t115 + t123;
  t85 = -1.*t82*t83;
  t98 = t45*t94*t95;
  t104 = t85 + t98;
  t127 = Sin(var1[6]);
  t43 = Cos(var1[8]);
  t159 = t77*t124;
  t160 = -1.*t104*t127;
  t167 = t159 + t160;
  t47 = Cos(var1[4]);
  t64 = Cos(var1[7]);
  t71 = t45*t47*t64;
  t107 = t77*t104;
  t131 = t124*t127;
  t136 = t107 + t131;
  t141 = Sin(var1[7]);
  t143 = t136*t141;
  t150 = t71 + t143;
  t168 = Sin(var1[8]);
  t211 = Cos(var1[9]);
  t154 = t43*t150;
  t179 = t167*t168;
  t195 = t154 + t179;
  t42 = Sin(var1[9]);
  t213 = t43*t167;
  t219 = -1.*t150*t168;
  t222 = t213 + t219;
  t268 = Cos(var1[10]);
  t202 = -1.*t42*t195;
  t233 = t211*t222;
  t253 = t202 + t233;
  t31 = Sin(var1[10]);
  t270 = t211*t195;
  t276 = t42*t222;
  t278 = t270 + t276;
  t300 = Cos(var1[11]);
  t266 = t31*t253;
  t280 = t268*t278;
  t288 = t266 + t280;
  t26 = Sin(var1[11]);
  t308 = t268*t253;
  t311 = -1.*t31*t278;
  t312 = t308 + t311;
  t18 = Cos(var1[12]);
  t400 = t82*t83*t94;
  t410 = -1.*t45*t95;
  t413 = t400 + t410;
  t375 = t45*t82;
  t386 = t83*t94*t95;
  t389 = t375 + t386;
  t474 = t77*t413;
  t495 = -1.*t389*t127;
  t502 = t474 + t495;
  t367 = t47*t64*t83;
  t390 = t77*t389;
  t414 = t413*t127;
  t441 = t390 + t414;
  t445 = t441*t141;
  t449 = t367 + t445;
  t456 = t43*t449;
  t503 = t502*t168;
  t505 = t456 + t503;
  t520 = t43*t502;
  t543 = -1.*t449*t168;
  t545 = t520 + t543;
  t515 = -1.*t42*t505;
  t549 = t211*t545;
  t564 = t515 + t549;
  t580 = t211*t505;
  t583 = t42*t545;
  t589 = t580 + t583;
  t343 = Sin(var1[12]);
  t575 = t31*t564;
  t603 = t268*t589;
  t623 = t575 + t603;
  t632 = t268*t564;
  t635 = -1.*t31*t589;
  t644 = t632 + t635;
  t734 = t47*t82*t77;
  t735 = -1.*t47*t95*t127;
  t744 = t734 + t735;
  t689 = -1.*t64*t94;
  t695 = t47*t77*t95;
  t705 = t47*t82*t127;
  t713 = t695 + t705;
  t718 = t713*t141;
  t726 = t689 + t718;
  t729 = t43*t726;
  t749 = t744*t168;
  t750 = t729 + t749;
  t783 = t43*t744;
  t784 = -1.*t726*t168;
  t796 = t783 + t784;
  t773 = -1.*t42*t750;
  t799 = t211*t796;
  t802 = t773 + t799;
  t829 = t211*t750;
  t836 = t42*t796;
  t838 = t829 + t836;
  t807 = t31*t802;
  t841 = t268*t838;
  t842 = t807 + t841;
  t847 = t268*t802;
  t849 = -1.*t31*t838;
  t856 = t847 + t849;
  t296 = -1.*t26*t288;
  t318 = t300*t312;
  t320 = t296 + t318;
  t346 = t300*t288;
  t347 = t26*t312;
  t351 = t346 + t347;
  t630 = -1.*t26*t623;
  t645 = t300*t644;
  t647 = t630 + t645;
  t660 = t300*t623;
  t668 = t26*t644;
  t670 = t660 + t668;
  t846 = -1.*t26*t842;
  t858 = t300*t856;
  t860 = t846 + t858;
  t863 = t300*t842;
  t883 = t26*t856;
  t885 = t863 + t883;
  t995 = -1.*t77;
  t997 = 1. + t995;
  t1062 = -1.*t64;
  t1072 = 1. + t1062;
  t1150 = -1.*t43;
  t1151 = 1. + t1150;
  t1223 = -1.*t211;
  t1232 = 1. + t1223;
  t1319 = -1.*t268;
  t1325 = 1. + t1319;
  t1370 = -1.*t300;
  t1378 = 1. + t1370;
  t1445 = -1.*t18;
  t1458 = 1. + t1445;
  t907 = t343*t320;
  t911 = t18*t351;
  t919 = t907 + t911;
  t1000 = 0.07996*t997;
  t1027 = -0.135*t127;
  t1036 = 0. + t1000 + t1027;
  t1044 = 0.135*t997;
  t1045 = 0.07996*t127;
  t1046 = 0. + t1044 + t1045;
  t1078 = 0.135*t1072;
  t1096 = 0.08055*t141;
  t1097 = 0. + t1078 + t1096;
  t1110 = -0.08055*t1072;
  t1113 = 0.135*t141;
  t1118 = 0. + t1110 + t1113;
  t1165 = -0.08055*t1151;
  t1172 = -0.01004*t168;
  t1192 = 0. + t1165 + t1172;
  t1195 = -0.01004*t1151;
  t1208 = 0.08055*t168;
  t1219 = 0. + t1195 + t1208;
  t1247 = -0.08055*t1232;
  t1253 = -0.13004*t42;
  t1267 = 0. + t1247 + t1253;
  t1292 = -0.13004*t1232;
  t1302 = 0.08055*t42;
  t1315 = 0. + t1292 + t1302;
  t1328 = -0.19074*t1325;
  t1337 = 0.03315*t31;
  t1341 = 0. + t1328 + t1337;
  t1352 = -0.03315*t1325;
  t1353 = -0.19074*t31;
  t1358 = 0. + t1352 + t1353;
  t1383 = -0.01315*t1378;
  t1386 = -0.62554*t26;
  t1391 = 0. + t1383 + t1386;
  t1401 = -0.62554*t1378;
  t1403 = 0.01315*t26;
  t1407 = 0. + t1401 + t1403;
  t1459 = -1.03354*t1458;
  t1468 = 0.05315*t343;
  t1471 = 0. + t1459 + t1468;
  t1487 = -0.05315*t1458;
  t1490 = -1.03354*t343;
  t1494 = 0. + t1487 + t1490;
  t921 = t343*t647;
  t922 = t18*t670;
  t924 = t921 + t922;
  t926 = t343*t860;
  t927 = t18*t885;
  t935 = t926 + t927;
  p_output1[0]=-1.*t18*t320 + t343*t351;
  p_output1[1]=-1.*t18*t647 + t343*t670;
  p_output1[2]=-1.*t18*t860 + t343*t885;
  p_output1[3]=0.;
  p_output1[4]=t919;
  p_output1[5]=t924;
  p_output1[6]=t935;
  p_output1[7]=0.;
  p_output1[8]=t141*t45*t47 - 1.*t136*t64;
  p_output1[9]=-1.*t441*t64 + t141*t47*t83;
  p_output1[10]=-1.*t64*t713 - 1.*t141*t94;
  p_output1[11]=0.;
  p_output1[12]=0. + t104*t1046 + t1036*t124 + t1097*t136 + t1192*t150 + t1219*t167 + t1267*t195 + t1315*t222 + t1341*t253 + t1358*t278 + t1391*t288 + t1407*t312 + t1471*t320 + t1494*t351 - 1.03824*(t18*t320 - 1.*t343*t351) + t1118*t45*t47 + 0.1306*(-1.*t141*t45*t47 + t136*t64) - 0.02565*t919 + var1[0];
  p_output1[13]=0. + t1046*t389 + t1036*t413 + t1097*t441 + t1192*t449 + t1219*t502 + t1267*t505 + t1315*t545 + t1341*t564 + t1358*t589 + t1391*t623 + t1407*t644 + t1471*t647 + t1494*t670 - 1.03824*(t18*t647 - 1.*t343*t670) + t1118*t47*t83 + 0.1306*(t441*t64 - 1.*t141*t47*t83) - 0.02565*t924 + var1[1];
  p_output1[14]=0. + t1097*t713 + t1192*t726 + t1219*t744 + t1267*t750 + t1315*t796 + t1341*t802 + t1036*t47*t82 + t1358*t838 + t1391*t842 + t1407*t856 + t1471*t860 + t1494*t885 - 1.03824*(t18*t860 - 1.*t343*t885) - 0.02565*t935 - 1.*t1118*t94 + 0.1306*(t64*t713 + t141*t94) + t1046*t47*t95 + var1[2];
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

#include "T_LeftToe_mex.hh"

namespace SymExpression
{

void T_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
