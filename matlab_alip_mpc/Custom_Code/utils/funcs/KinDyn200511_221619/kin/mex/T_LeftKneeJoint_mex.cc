/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:26 GMT-04:00
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
  double t27;
  double t168;
  double t226;
  double t184;
  double t241;
  double t155;
  double t306;
  double t307;
  double t315;
  double t206;
  double t256;
  double t262;
  double t317;
  double t26;
  double t350;
  double t368;
  double t407;
  double t66;
  double t74;
  double t83;
  double t289;
  double t321;
  double t324;
  double t339;
  double t340;
  double t341;
  double t416;
  double t6;
  double t537;
  double t540;
  double t545;
  double t489;
  double t495;
  double t507;
  double t433;
  double t591;
  double t597;
  double t606;
  double t483;
  double t511;
  double t553;
  double t569;
  double t570;
  double t571;
  double t776;
  double t778;
  double t799;
  double t664;
  double t676;
  double t678;
  double t732;
  double t739;
  double t743;
  double t346;
  double t421;
  double t427;
  double t434;
  double t450;
  double t456;
  double t583;
  double t612;
  double t615;
  double t639;
  double t640;
  double t641;
  double t771;
  double t800;
  double t804;
  double t818;
  double t847;
  double t883;
  double t1063;
  double t1094;
  double t1233;
  double t1246;
  double t1412;
  double t1417;
  double t1488;
  double t1505;
  double t928;
  double t929;
  double t938;
  double t1100;
  double t1112;
  double t1151;
  double t1162;
  double t1208;
  double t1211;
  double t1254;
  double t1262;
  double t1291;
  double t1308;
  double t1310;
  double t1314;
  double t1422;
  double t1435;
  double t1449;
  double t1451;
  double t1455;
  double t1462;
  double t1537;
  double t1556;
  double t1562;
  double t1575;
  double t1591;
  double t1601;
  double t941;
  double t958;
  double t964;
  double t969;
  double t983;
  double t986;
  t27 = Cos(var1[3]);
  t168 = Cos(var1[5]);
  t226 = Sin(var1[4]);
  t184 = Sin(var1[3]);
  t241 = Sin(var1[5]);
  t155 = Cos(var1[6]);
  t306 = t27*t168*t226;
  t307 = t184*t241;
  t315 = t306 + t307;
  t206 = -1.*t168*t184;
  t256 = t27*t226*t241;
  t262 = t206 + t256;
  t317 = Sin(var1[6]);
  t26 = Cos(var1[8]);
  t350 = t155*t315;
  t368 = -1.*t262*t317;
  t407 = t350 + t368;
  t66 = Cos(var1[4]);
  t74 = Cos(var1[7]);
  t83 = t27*t66*t74;
  t289 = t155*t262;
  t321 = t315*t317;
  t324 = t289 + t321;
  t339 = Sin(var1[7]);
  t340 = t324*t339;
  t341 = t83 + t340;
  t416 = Sin(var1[8]);
  t6 = Sin(var1[9]);
  t537 = t168*t184*t226;
  t540 = -1.*t27*t241;
  t545 = t537 + t540;
  t489 = t27*t168;
  t495 = t184*t226*t241;
  t507 = t489 + t495;
  t433 = Cos(var1[9]);
  t591 = t155*t545;
  t597 = -1.*t507*t317;
  t606 = t591 + t597;
  t483 = t66*t74*t184;
  t511 = t155*t507;
  t553 = t545*t317;
  t569 = t511 + t553;
  t570 = t569*t339;
  t571 = t483 + t570;
  t776 = t66*t168*t155;
  t778 = -1.*t66*t241*t317;
  t799 = t776 + t778;
  t664 = -1.*t74*t226;
  t676 = t66*t155*t241;
  t678 = t66*t168*t317;
  t732 = t676 + t678;
  t739 = t732*t339;
  t743 = t664 + t739;
  t346 = t26*t341;
  t421 = t407*t416;
  t427 = t346 + t421;
  t434 = t26*t407;
  t450 = -1.*t341*t416;
  t456 = t434 + t450;
  t583 = t26*t571;
  t612 = t606*t416;
  t615 = t583 + t612;
  t639 = t26*t606;
  t640 = -1.*t571*t416;
  t641 = t639 + t640;
  t771 = t26*t743;
  t800 = t799*t416;
  t804 = t771 + t800;
  t818 = t26*t799;
  t847 = -1.*t743*t416;
  t883 = t818 + t847;
  t1063 = -1.*t155;
  t1094 = 1. + t1063;
  t1233 = -1.*t74;
  t1246 = 1. + t1233;
  t1412 = -1.*t26;
  t1417 = 1. + t1412;
  t1488 = -1.*t433;
  t1505 = 1. + t1488;
  t928 = t433*t427;
  t929 = t6*t456;
  t938 = t928 + t929;
  t1100 = 0.07996*t1094;
  t1112 = -0.135*t317;
  t1151 = 0. + t1100 + t1112;
  t1162 = 0.135*t1094;
  t1208 = 0.07996*t317;
  t1211 = 0. + t1162 + t1208;
  t1254 = 0.135*t1246;
  t1262 = 0.08055*t339;
  t1291 = 0. + t1254 + t1262;
  t1308 = -0.08055*t1246;
  t1310 = 0.135*t339;
  t1314 = 0. + t1308 + t1310;
  t1422 = -0.08055*t1417;
  t1435 = -0.01004*t416;
  t1449 = 0. + t1422 + t1435;
  t1451 = -0.01004*t1417;
  t1455 = 0.08055*t416;
  t1462 = 0. + t1451 + t1455;
  t1537 = -0.08055*t1505;
  t1556 = -0.13004*t6;
  t1562 = 0. + t1537 + t1556;
  t1575 = -0.13004*t1505;
  t1591 = 0.08055*t6;
  t1601 = 0. + t1575 + t1591;
  t941 = t433*t615;
  t958 = t6*t641;
  t964 = t941 + t958;
  t969 = t433*t804;
  t983 = t6*t883;
  t986 = t969 + t983;
  p_output1[0]=-1.*t433*t456 + t427*t6;
  p_output1[1]=t6*t615 - 1.*t433*t641;
  p_output1[2]=t6*t804 - 1.*t433*t883;
  p_output1[3]=0.;
  p_output1[4]=t938;
  p_output1[5]=t964;
  p_output1[6]=t986;
  p_output1[7]=0.;
  p_output1[8]=t27*t339*t66 - 1.*t324*t74;
  p_output1[9]=t184*t339*t66 - 1.*t569*t74;
  p_output1[10]=-1.*t226*t339 - 1.*t732*t74;
  p_output1[11]=0.;
  p_output1[12]=0. + t1211*t262 + t1151*t315 + t1291*t324 + t1449*t341 + t1462*t407 + t1562*t427 + t1601*t456 - 0.13004*(t433*t456 - 1.*t427*t6) + t1314*t27*t66 + 0.1305*(-1.*t27*t339*t66 + t324*t74) - 0.08055*t938 + var1[0];
  p_output1[13]=0. + t1211*t507 + t1151*t545 + t1291*t569 + t1449*t571 + t1462*t606 + t1562*t615 + t1601*t641 - 0.13004*(-1.*t6*t615 + t433*t641) + t1314*t184*t66 + 0.1305*(-1.*t184*t339*t66 + t569*t74) - 0.08055*t964 + var1[1];
  p_output1[14]=0. - 1.*t1314*t226 + t1151*t168*t66 + t1211*t241*t66 + t1291*t732 + 0.1305*(t226*t339 + t732*t74) + t1449*t743 + t1462*t799 + t1562*t804 + t1601*t883 - 0.13004*(-1.*t6*t804 + t433*t883) - 0.08055*t986 + var1[2];
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

#include "T_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void T_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
