/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:02 GMT-04:00
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
  double t163;
  double t218;
  double t152;
  double t166;
  double t236;
  double t263;
  double t183;
  double t241;
  double t248;
  double t56;
  double t282;
  double t299;
  double t313;
  double t335;
  double t254;
  double t317;
  double t324;
  double t24;
  double t344;
  double t349;
  double t374;
  double t375;
  double t385;
  double t387;
  double t407;
  double t458;
  double t460;
  double t23;
  double t627;
  double t633;
  double t650;
  double t688;
  double t690;
  double t701;
  double t567;
  double t682;
  double t709;
  double t716;
  double t750;
  double t786;
  double t835;
  double t854;
  double t865;
  double t869;
  double t1014;
  double t1018;
  double t1038;
  double t1055;
  double t1060;
  double t1061;
  double t1065;
  double t1081;
  double t1094;
  double t333;
  double t463;
  double t482;
  double t572;
  double t584;
  double t592;
  double t735;
  double t878;
  double t889;
  double t914;
  double t943;
  double t966;
  double t1052;
  double t1115;
  double t1137;
  double t1147;
  double t1158;
  double t1160;
  double t1439;
  double t1440;
  double t1412;
  double t1413;
  double t1563;
  double t1577;
  double t1744;
  double t1752;
  double t1207;
  double t1236;
  double t1243;
  double t1415;
  double t1417;
  double t1428;
  double t1461;
  double t1475;
  double t1479;
  double t1511;
  double t1518;
  double t1521;
  double t1539;
  double t1545;
  double t1548;
  double t1581;
  double t1604;
  double t1612;
  double t1687;
  double t1723;
  double t1724;
  double t1761;
  double t1762;
  double t1788;
  double t1819;
  double t1822;
  double t1825;
  double t1278;
  double t1287;
  double t1333;
  double t1334;
  double t1337;
  double t1338;
  t163 = Cos(var1[5]);
  t218 = Sin(var1[3]);
  t152 = Cos(var1[3]);
  t166 = Sin(var1[4]);
  t236 = Sin(var1[5]);
  t263 = Sin(var1[13]);
  t183 = t152*t163*t166;
  t241 = t218*t236;
  t248 = t183 + t241;
  t56 = Cos(var1[13]);
  t282 = -1.*t163*t218;
  t299 = t152*t166*t236;
  t313 = t282 + t299;
  t335 = Cos(var1[15]);
  t254 = t56*t248;
  t317 = -1.*t263*t313;
  t324 = t254 + t317;
  t24 = Sin(var1[15]);
  t344 = Cos(var1[14]);
  t349 = Cos(var1[4]);
  t374 = t344*t152*t349;
  t375 = Sin(var1[14]);
  t385 = t263*t248;
  t387 = t56*t313;
  t407 = t385 + t387;
  t458 = t375*t407;
  t460 = t374 + t458;
  t23 = Sin(var1[16]);
  t627 = t163*t218*t166;
  t633 = -1.*t152*t236;
  t650 = t627 + t633;
  t688 = t152*t163;
  t690 = t218*t166*t236;
  t701 = t688 + t690;
  t567 = Cos(var1[16]);
  t682 = t56*t650;
  t709 = -1.*t263*t701;
  t716 = t682 + t709;
  t750 = t344*t349*t218;
  t786 = t263*t650;
  t835 = t56*t701;
  t854 = t786 + t835;
  t865 = t375*t854;
  t869 = t750 + t865;
  t1014 = t56*t349*t163;
  t1018 = -1.*t349*t263*t236;
  t1038 = t1014 + t1018;
  t1055 = -1.*t344*t166;
  t1060 = t349*t163*t263;
  t1061 = t56*t349*t236;
  t1065 = t1060 + t1061;
  t1081 = t375*t1065;
  t1094 = t1055 + t1081;
  t333 = t24*t324;
  t463 = t335*t460;
  t482 = t333 + t463;
  t572 = t335*t324;
  t584 = -1.*t24*t460;
  t592 = t572 + t584;
  t735 = t24*t716;
  t878 = t335*t869;
  t889 = t735 + t878;
  t914 = t335*t716;
  t943 = -1.*t24*t869;
  t966 = t914 + t943;
  t1052 = t24*t1038;
  t1115 = t335*t1094;
  t1137 = t1052 + t1115;
  t1147 = t335*t1038;
  t1158 = -1.*t24*t1094;
  t1160 = t1147 + t1158;
  t1439 = -1.*t56;
  t1440 = 1. + t1439;
  t1412 = -1.*t344;
  t1413 = 1. + t1412;
  t1563 = -1.*t335;
  t1577 = 1. + t1563;
  t1744 = -1.*t567;
  t1752 = 1. + t1744;
  t1207 = t567*t482;
  t1236 = t23*t592;
  t1243 = t1207 + t1236;
  t1415 = -0.08055*t1413;
  t1417 = -0.135*t375;
  t1428 = 0. + t1415 + t1417;
  t1461 = 0.07996*t1440;
  t1475 = 0.135*t263;
  t1479 = 0. + t1461 + t1475;
  t1511 = -0.135*t1440;
  t1518 = 0.07996*t263;
  t1521 = 0. + t1511 + t1518;
  t1539 = -0.135*t1413;
  t1545 = 0.08055*t375;
  t1548 = 0. + t1539 + t1545;
  t1581 = -0.01004*t1577;
  t1604 = 0.08055*t24;
  t1612 = 0. + t1581 + t1604;
  t1687 = -0.08055*t1577;
  t1723 = -0.01004*t24;
  t1724 = 0. + t1687 + t1723;
  t1761 = -0.08055*t1752;
  t1762 = -0.13004*t23;
  t1788 = 0. + t1761 + t1762;
  t1819 = -0.13004*t1752;
  t1822 = 0.08055*t23;
  t1825 = 0. + t1819 + t1822;
  t1278 = t567*t889;
  t1287 = t23*t966;
  t1333 = t1278 + t1287;
  t1334 = t567*t1137;
  t1337 = t23*t1160;
  t1338 = t1334 + t1337;
  p_output1[0]=t23*t482 - 1.*t567*t592;
  p_output1[1]=t23*t889 - 1.*t567*t966;
  p_output1[2]=t1137*t23 - 1.*t1160*t567;
  p_output1[3]=0.;
  p_output1[4]=t1243;
  p_output1[5]=t1333;
  p_output1[6]=t1338;
  p_output1[7]=0.;
  p_output1[8]=t152*t349*t375 - 1.*t344*t407;
  p_output1[9]=t218*t349*t375 - 1.*t344*t854;
  p_output1[10]=-1.*t1065*t344 - 1.*t166*t375;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04845*t1243 + t1479*t248 + t1521*t313 + t1612*t324 + t1428*t152*t349 + t1548*t407 - 0.1327*(-1.*t152*t349*t375 + t344*t407) + t1724*t460 + t1788*t482 + t1825*t592 - 0.15304*(-1.*t23*t482 + t567*t592) + var1[0];
  p_output1[13]=0. - 0.04845*t1333 + t1428*t218*t349 + t1479*t650 + t1521*t701 + t1612*t716 + t1548*t854 - 0.1327*(-1.*t218*t349*t375 + t344*t854) + t1724*t869 + t1788*t889 + t1825*t966 - 0.15304*(-1.*t23*t889 + t567*t966) + var1[1];
  p_output1[14]=0. - 0.04845*t1338 + t1065*t1548 + t1038*t1612 - 1.*t1428*t166 + t1094*t1724 + t1137*t1788 + t1160*t1825 + t1479*t163*t349 + t1521*t236*t349 - 0.1327*(t1065*t344 + t166*t375) - 0.15304*(-1.*t1137*t23 + t1160*t567) + var1[2];
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

#include "T_RightKnee_mex.hh"

namespace SymExpression
{

void T_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
