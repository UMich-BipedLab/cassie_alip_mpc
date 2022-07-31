/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:46 GMT-04:00
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
  double t37;
  double t70;
  double t99;
  double t78;
  double t106;
  double t57;
  double t162;
  double t163;
  double t170;
  double t82;
  double t112;
  double t123;
  double t174;
  double t29;
  double t233;
  double t239;
  double t249;
  double t47;
  double t49;
  double t50;
  double t151;
  double t179;
  double t194;
  double t199;
  double t211;
  double t221;
  double t252;
  double t319;
  double t222;
  double t262;
  double t266;
  double t27;
  double t337;
  double t350;
  double t357;
  double t6;
  double t501;
  double t504;
  double t519;
  double t445;
  double t455;
  double t456;
  double t597;
  double t605;
  double t615;
  double t433;
  double t488;
  double t541;
  double t548;
  double t553;
  double t571;
  double t386;
  double t584;
  double t621;
  double t632;
  double t641;
  double t642;
  double t647;
  double t885;
  double t889;
  double t890;
  double t785;
  double t801;
  double t802;
  double t827;
  double t874;
  double t878;
  double t880;
  double t897;
  double t898;
  double t925;
  double t933;
  double t967;
  double t313;
  double t368;
  double t372;
  double t394;
  double t411;
  double t419;
  double t640;
  double t688;
  double t691;
  double t715;
  double t724;
  double t732;
  double t911;
  double t979;
  double t981;
  double t992;
  double t994;
  double t996;
  double t1150;
  double t1163;
  double t1219;
  double t1223;
  double t1271;
  double t1285;
  double t1361;
  double t1362;
  double t1435;
  double t1436;
  double t1007;
  double t1009;
  double t1010;
  double t1166;
  double t1169;
  double t1174;
  double t1189;
  double t1203;
  double t1205;
  double t1225;
  double t1234;
  double t1237;
  double t1239;
  double t1248;
  double t1251;
  double t1295;
  double t1309;
  double t1318;
  double t1343;
  double t1348;
  double t1352;
  double t1363;
  double t1372;
  double t1376;
  double t1414;
  double t1425;
  double t1427;
  double t1451;
  double t1452;
  double t1453;
  double t1462;
  double t1467;
  double t1483;
  double t1021;
  double t1029;
  double t1030;
  double t1040;
  double t1053;
  double t1058;
  t37 = Cos(var1[3]);
  t70 = Cos(var1[5]);
  t99 = Sin(var1[4]);
  t78 = Sin(var1[3]);
  t106 = Sin(var1[5]);
  t57 = Cos(var1[6]);
  t162 = t37*t70*t99;
  t163 = t78*t106;
  t170 = t162 + t163;
  t82 = -1.*t70*t78;
  t112 = t37*t99*t106;
  t123 = t82 + t112;
  t174 = Sin(var1[6]);
  t29 = Cos(var1[8]);
  t233 = t57*t170;
  t239 = -1.*t123*t174;
  t249 = t233 + t239;
  t47 = Cos(var1[4]);
  t49 = Cos(var1[7]);
  t50 = t37*t47*t49;
  t151 = t57*t123;
  t179 = t170*t174;
  t194 = t151 + t179;
  t199 = Sin(var1[7]);
  t211 = t194*t199;
  t221 = t50 + t211;
  t252 = Sin(var1[8]);
  t319 = Cos(var1[9]);
  t222 = t29*t221;
  t262 = t249*t252;
  t266 = t222 + t262;
  t27 = Sin(var1[9]);
  t337 = t29*t249;
  t350 = -1.*t221*t252;
  t357 = t337 + t350;
  t6 = Cos(var1[10]);
  t501 = t70*t78*t99;
  t504 = -1.*t37*t106;
  t519 = t501 + t504;
  t445 = t37*t70;
  t455 = t78*t99*t106;
  t456 = t445 + t455;
  t597 = t57*t519;
  t605 = -1.*t456*t174;
  t615 = t597 + t605;
  t433 = t47*t49*t78;
  t488 = t57*t456;
  t541 = t519*t174;
  t548 = t488 + t541;
  t553 = t548*t199;
  t571 = t433 + t553;
  t386 = Sin(var1[10]);
  t584 = t29*t571;
  t621 = t615*t252;
  t632 = t584 + t621;
  t641 = t29*t615;
  t642 = -1.*t571*t252;
  t647 = t641 + t642;
  t885 = t47*t70*t57;
  t889 = -1.*t47*t106*t174;
  t890 = t885 + t889;
  t785 = -1.*t49*t99;
  t801 = t47*t57*t106;
  t802 = t47*t70*t174;
  t827 = t801 + t802;
  t874 = t827*t199;
  t878 = t785 + t874;
  t880 = t29*t878;
  t897 = t890*t252;
  t898 = t880 + t897;
  t925 = t29*t890;
  t933 = -1.*t878*t252;
  t967 = t925 + t933;
  t313 = -1.*t27*t266;
  t368 = t319*t357;
  t372 = t313 + t368;
  t394 = t319*t266;
  t411 = t27*t357;
  t419 = t394 + t411;
  t640 = -1.*t27*t632;
  t688 = t319*t647;
  t691 = t640 + t688;
  t715 = t319*t632;
  t724 = t27*t647;
  t732 = t715 + t724;
  t911 = -1.*t27*t898;
  t979 = t319*t967;
  t981 = t911 + t979;
  t992 = t319*t898;
  t994 = t27*t967;
  t996 = t992 + t994;
  t1150 = -1.*t57;
  t1163 = 1. + t1150;
  t1219 = -1.*t49;
  t1223 = 1. + t1219;
  t1271 = -1.*t29;
  t1285 = 1. + t1271;
  t1361 = -1.*t319;
  t1362 = 1. + t1361;
  t1435 = -1.*t6;
  t1436 = 1. + t1435;
  t1007 = t386*t372;
  t1009 = t6*t419;
  t1010 = t1007 + t1009;
  t1166 = 0.07996*t1163;
  t1169 = -0.135*t174;
  t1174 = 0. + t1166 + t1169;
  t1189 = 0.135*t1163;
  t1203 = 0.07996*t174;
  t1205 = 0. + t1189 + t1203;
  t1225 = 0.135*t1223;
  t1234 = 0.08055*t199;
  t1237 = 0. + t1225 + t1234;
  t1239 = -0.08055*t1223;
  t1248 = 0.135*t199;
  t1251 = 0. + t1239 + t1248;
  t1295 = -0.08055*t1285;
  t1309 = -0.01004*t252;
  t1318 = 0. + t1295 + t1309;
  t1343 = -0.01004*t1285;
  t1348 = 0.08055*t252;
  t1352 = 0. + t1343 + t1348;
  t1363 = -0.08055*t1362;
  t1372 = -0.13004*t27;
  t1376 = 0. + t1363 + t1372;
  t1414 = -0.13004*t1362;
  t1425 = 0.08055*t27;
  t1427 = 0. + t1414 + t1425;
  t1451 = -0.19074*t1436;
  t1452 = 0.03315*t386;
  t1453 = 0. + t1451 + t1452;
  t1462 = -0.03315*t1436;
  t1467 = -0.19074*t386;
  t1483 = 0. + t1462 + t1467;
  t1021 = t386*t691;
  t1029 = t6*t732;
  t1030 = t1021 + t1029;
  t1040 = t386*t981;
  t1053 = t6*t996;
  t1058 = t1040 + t1053;
  p_output1[0]=t386*t419 - 1.*t372*t6;
  p_output1[1]=-1.*t6*t691 + t386*t732;
  p_output1[2]=-1.*t6*t981 + t386*t996;
  p_output1[3]=0.;
  p_output1[4]=t1010;
  p_output1[5]=t1030;
  p_output1[6]=t1058;
  p_output1[7]=0.;
  p_output1[8]=t199*t37*t47 - 1.*t194*t49;
  p_output1[9]=-1.*t49*t548 + t199*t47*t78;
  p_output1[10]=-1.*t49*t827 - 1.*t199*t99;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03315*t1010 + t1205*t123 + t1174*t170 + t1237*t194 + t1318*t221 + t1352*t249 + t1376*t266 + t1427*t357 + t1453*t372 + t1483*t419 + t1251*t37*t47 + 0.1305*(-1.*t199*t37*t47 + t194*t49) - 0.19074*(-1.*t386*t419 + t372*t6) + var1[0];
  p_output1[13]=0. - 0.03315*t1030 + t1205*t456 + t1174*t519 + t1237*t548 + t1318*t571 + t1352*t615 + t1376*t632 + t1427*t647 + t1453*t691 + t1483*t732 - 0.19074*(t6*t691 - 1.*t386*t732) + t1251*t47*t78 + 0.1305*(t49*t548 - 1.*t199*t47*t78) + var1[1];
  p_output1[14]=0. - 0.03315*t1058 + t106*t1205*t47 + t1174*t47*t70 + t1237*t827 + t1318*t878 + t1352*t890 + t1376*t898 + t1427*t967 + t1453*t981 - 1.*t1251*t99 + 0.1305*(t49*t827 + t199*t99) + t1483*t996 - 0.19074*(t6*t981 - 1.*t386*t996) + var1[2];
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

#include "T_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void T_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
