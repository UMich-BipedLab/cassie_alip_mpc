/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:07 GMT-04:00
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
  double t31;
  double t62;
  double t28;
  double t43;
  double t74;
  double t105;
  double t61;
  double t86;
  double t98;
  double t24;
  double t107;
  double t109;
  double t116;
  double t167;
  double t102;
  double t124;
  double t133;
  double t20;
  double t172;
  double t182;
  double t183;
  double t185;
  double t195;
  double t200;
  double t202;
  double t204;
  double t205;
  double t227;
  double t143;
  double t214;
  double t216;
  double t17;
  double t228;
  double t229;
  double t246;
  double t9;
  double t368;
  double t397;
  double t409;
  double t420;
  double t431;
  double t432;
  double t416;
  double t433;
  double t440;
  double t456;
  double t459;
  double t469;
  double t472;
  double t473;
  double t479;
  double t267;
  double t455;
  double t518;
  double t519;
  double t522;
  double t525;
  double t539;
  double t602;
  double t608;
  double t616;
  double t632;
  double t651;
  double t652;
  double t658;
  double t669;
  double t670;
  double t621;
  double t678;
  double t679;
  double t705;
  double t715;
  double t722;
  double t225;
  double t252;
  double t254;
  double t286;
  double t331;
  double t333;
  double t521;
  double t546;
  double t554;
  double t571;
  double t577;
  double t582;
  double t697;
  double t730;
  double t734;
  double t753;
  double t755;
  double t764;
  double t957;
  double t964;
  double t900;
  double t901;
  double t1022;
  double t1026;
  double t1138;
  double t1149;
  double t1211;
  double t1225;
  double t807;
  double t808;
  double t811;
  double t909;
  double t914;
  double t925;
  double t965;
  double t966;
  double t973;
  double t978;
  double t985;
  double t989;
  double t1005;
  double t1006;
  double t1017;
  double t1038;
  double t1039;
  double t1065;
  double t1091;
  double t1092;
  double t1093;
  double t1159;
  double t1168;
  double t1185;
  double t1195;
  double t1203;
  double t1206;
  double t1228;
  double t1231;
  double t1233;
  double t1242;
  double t1244;
  double t1253;
  double t827;
  double t835;
  double t841;
  double t844;
  double t845;
  double t846;
  t31 = Cos(var1[5]);
  t62 = Sin(var1[3]);
  t28 = Cos(var1[3]);
  t43 = Sin(var1[4]);
  t74 = Sin(var1[5]);
  t105 = Sin(var1[13]);
  t61 = t28*t31*t43;
  t86 = t62*t74;
  t98 = t61 + t86;
  t24 = Cos(var1[13]);
  t107 = -1.*t31*t62;
  t109 = t28*t43*t74;
  t116 = t107 + t109;
  t167 = Cos(var1[15]);
  t102 = t24*t98;
  t124 = -1.*t105*t116;
  t133 = t102 + t124;
  t20 = Sin(var1[15]);
  t172 = Cos(var1[14]);
  t182 = Cos(var1[4]);
  t183 = t172*t28*t182;
  t185 = Sin(var1[14]);
  t195 = t105*t98;
  t200 = t24*t116;
  t202 = t195 + t200;
  t204 = t185*t202;
  t205 = t183 + t204;
  t227 = Cos(var1[16]);
  t143 = t20*t133;
  t214 = t167*t205;
  t216 = t143 + t214;
  t17 = Sin(var1[16]);
  t228 = t167*t133;
  t229 = -1.*t20*t205;
  t246 = t228 + t229;
  t9 = Cos(var1[17]);
  t368 = t31*t62*t43;
  t397 = -1.*t28*t74;
  t409 = t368 + t397;
  t420 = t28*t31;
  t431 = t62*t43*t74;
  t432 = t420 + t431;
  t416 = t24*t409;
  t433 = -1.*t105*t432;
  t440 = t416 + t433;
  t456 = t172*t182*t62;
  t459 = t105*t409;
  t469 = t24*t432;
  t472 = t459 + t469;
  t473 = t185*t472;
  t479 = t456 + t473;
  t267 = Sin(var1[17]);
  t455 = t20*t440;
  t518 = t167*t479;
  t519 = t455 + t518;
  t522 = t167*t440;
  t525 = -1.*t20*t479;
  t539 = t522 + t525;
  t602 = t24*t182*t31;
  t608 = -1.*t182*t105*t74;
  t616 = t602 + t608;
  t632 = -1.*t172*t43;
  t651 = t182*t31*t105;
  t652 = t24*t182*t74;
  t658 = t651 + t652;
  t669 = t185*t658;
  t670 = t632 + t669;
  t621 = t20*t616;
  t678 = t167*t670;
  t679 = t621 + t678;
  t705 = t167*t616;
  t715 = -1.*t20*t670;
  t722 = t705 + t715;
  t225 = -1.*t17*t216;
  t252 = t227*t246;
  t254 = t225 + t252;
  t286 = t227*t216;
  t331 = t17*t246;
  t333 = t286 + t331;
  t521 = -1.*t17*t519;
  t546 = t227*t539;
  t554 = t521 + t546;
  t571 = t227*t519;
  t577 = t17*t539;
  t582 = t571 + t577;
  t697 = -1.*t17*t679;
  t730 = t227*t722;
  t734 = t697 + t730;
  t753 = t227*t679;
  t755 = t17*t722;
  t764 = t753 + t755;
  t957 = -1.*t24;
  t964 = 1. + t957;
  t900 = -1.*t172;
  t901 = 1. + t900;
  t1022 = -1.*t167;
  t1026 = 1. + t1022;
  t1138 = -1.*t227;
  t1149 = 1. + t1138;
  t1211 = -1.*t9;
  t1225 = 1. + t1211;
  t807 = t267*t254;
  t808 = t9*t333;
  t811 = t807 + t808;
  t909 = -0.08055*t901;
  t914 = -0.135*t185;
  t925 = 0. + t909 + t914;
  t965 = 0.07996*t964;
  t966 = 0.135*t105;
  t973 = 0. + t965 + t966;
  t978 = -0.135*t964;
  t985 = 0.07996*t105;
  t989 = 0. + t978 + t985;
  t1005 = -0.135*t901;
  t1006 = 0.08055*t185;
  t1017 = 0. + t1005 + t1006;
  t1038 = -0.01004*t1026;
  t1039 = 0.08055*t20;
  t1065 = 0. + t1038 + t1039;
  t1091 = -0.08055*t1026;
  t1092 = -0.01004*t20;
  t1093 = 0. + t1091 + t1092;
  t1159 = -0.08055*t1149;
  t1168 = -0.13004*t17;
  t1185 = 0. + t1159 + t1168;
  t1195 = -0.13004*t1149;
  t1203 = 0.08055*t17;
  t1206 = 0. + t1195 + t1203;
  t1228 = -0.19074*t1225;
  t1231 = 0.03315*t267;
  t1233 = 0. + t1228 + t1231;
  t1242 = -0.03315*t1225;
  t1244 = -0.19074*t267;
  t1253 = 0. + t1242 + t1244;
  t827 = t267*t554;
  t835 = t9*t582;
  t841 = t827 + t835;
  t844 = t267*t734;
  t845 = t9*t764;
  t846 = t844 + t845;
  p_output1[0]=t267*t333 - 1.*t254*t9;
  p_output1[1]=t267*t582 - 1.*t554*t9;
  p_output1[2]=t267*t764 - 1.*t734*t9;
  p_output1[3]=0.;
  p_output1[4]=t811;
  p_output1[5]=t841;
  p_output1[6]=t846;
  p_output1[7]=0.;
  p_output1[8]=-1.*t172*t202 + t182*t185*t28;
  p_output1[9]=-1.*t172*t472 + t182*t185*t62;
  p_output1[10]=-1.*t185*t43 - 1.*t172*t658;
  p_output1[11]=0.;
  p_output1[12]=0. + t1065*t133 + t1017*t202 + t1093*t205 + t1185*t216 + t1206*t246 + t1233*t254 - 0.1305*(t172*t202 - 1.*t182*t185*t28) + t1253*t333 - 0.03315*t811 - 0.19074*(-1.*t267*t333 + t254*t9) + t182*t28*t925 + t973*t98 + t116*t989 + var1[0];
  p_output1[13]=0. + t1065*t440 + t1017*t472 + t1093*t479 + t1185*t519 + t1206*t539 + t1233*t554 + t1253*t582 - 0.1305*(t172*t472 - 1.*t182*t185*t62) - 0.03315*t841 - 0.19074*(-1.*t267*t582 + t554*t9) + t182*t62*t925 + t409*t973 + t432*t989 + var1[1];
  p_output1[14]=0. + t1065*t616 + t1017*t658 - 0.1305*(t185*t43 + t172*t658) + t1093*t670 + t1185*t679 + t1206*t722 + t1233*t734 + t1253*t764 - 0.03315*t846 - 0.19074*(-1.*t267*t764 + t734*t9) - 1.*t43*t925 + t182*t31*t973 + t182*t74*t989 + var1[2];
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

#include "T_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void T_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
