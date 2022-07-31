/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:33 GMT-04:00
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
  double t241;
  double t319;
  double t190;
  double t278;
  double t326;
  double t427;
  double t282;
  double t333;
  double t393;
  double t176;
  double t482;
  double t580;
  double t582;
  double t608;
  double t412;
  double t590;
  double t592;
  double t105;
  double t610;
  double t632;
  double t775;
  double t804;
  double t829;
  double t841;
  double t844;
  double t851;
  double t867;
  double t910;
  double t600;
  double t868;
  double t872;
  double t77;
  double t929;
  double t956;
  double t963;
  double t1021;
  double t903;
  double t998;
  double t1005;
  double t74;
  double t1030;
  double t1040;
  double t1053;
  double t51;
  double t1195;
  double t1203;
  double t1209;
  double t1243;
  double t1252;
  double t1279;
  double t1215;
  double t1288;
  double t1291;
  double t1305;
  double t1322;
  double t1373;
  double t1384;
  double t1391;
  double t1406;
  double t1293;
  double t1407;
  double t1408;
  double t1421;
  double t1423;
  double t1427;
  double t1117;
  double t1413;
  double t1440;
  double t1447;
  double t1496;
  double t1505;
  double t1539;
  double t1664;
  double t1677;
  double t1682;
  double t1731;
  double t1736;
  double t1745;
  double t1751;
  double t1783;
  double t1787;
  double t1688;
  double t1825;
  double t1830;
  double t1848;
  double t1886;
  double t1890;
  double t1847;
  double t1898;
  double t1900;
  double t1939;
  double t1951;
  double t1962;
  double t1008;
  double t1075;
  double t1086;
  double t1122;
  double t1127;
  double t1148;
  double t1477;
  double t1551;
  double t1577;
  double t1601;
  double t1625;
  double t1647;
  double t1915;
  double t1975;
  double t1979;
  double t2003;
  double t2016;
  double t2031;
  t241 = Cos(var1[5]);
  t319 = Sin(var1[3]);
  t190 = Cos(var1[3]);
  t278 = Sin(var1[4]);
  t326 = Sin(var1[5]);
  t427 = Sin(var1[13]);
  t282 = t190*t241*t278;
  t333 = t319*t326;
  t393 = t282 + t333;
  t176 = Cos(var1[13]);
  t482 = -1.*t241*t319;
  t580 = t190*t278*t326;
  t582 = t482 + t580;
  t608 = Cos(var1[15]);
  t412 = t176*t393;
  t590 = -1.*t427*t582;
  t592 = t412 + t590;
  t105 = Sin(var1[15]);
  t610 = Cos(var1[14]);
  t632 = Cos(var1[4]);
  t775 = t610*t190*t632;
  t804 = Sin(var1[14]);
  t829 = t427*t393;
  t841 = t176*t582;
  t844 = t829 + t841;
  t851 = t804*t844;
  t867 = t775 + t851;
  t910 = Cos(var1[16]);
  t600 = t105*t592;
  t868 = t608*t867;
  t872 = t600 + t868;
  t77 = Sin(var1[16]);
  t929 = t608*t592;
  t956 = -1.*t105*t867;
  t963 = t929 + t956;
  t1021 = Cos(var1[17]);
  t903 = -1.*t77*t872;
  t998 = t910*t963;
  t1005 = t903 + t998;
  t74 = Sin(var1[17]);
  t1030 = t910*t872;
  t1040 = t77*t963;
  t1053 = t1030 + t1040;
  t51 = Sin(var1[18]);
  t1195 = t241*t319*t278;
  t1203 = -1.*t190*t326;
  t1209 = t1195 + t1203;
  t1243 = t190*t241;
  t1252 = t319*t278*t326;
  t1279 = t1243 + t1252;
  t1215 = t176*t1209;
  t1288 = -1.*t427*t1279;
  t1291 = t1215 + t1288;
  t1305 = t610*t632*t319;
  t1322 = t427*t1209;
  t1373 = t176*t1279;
  t1384 = t1322 + t1373;
  t1391 = t804*t1384;
  t1406 = t1305 + t1391;
  t1293 = t105*t1291;
  t1407 = t608*t1406;
  t1408 = t1293 + t1407;
  t1421 = t608*t1291;
  t1423 = -1.*t105*t1406;
  t1427 = t1421 + t1423;
  t1117 = Cos(var1[18]);
  t1413 = -1.*t77*t1408;
  t1440 = t910*t1427;
  t1447 = t1413 + t1440;
  t1496 = t910*t1408;
  t1505 = t77*t1427;
  t1539 = t1496 + t1505;
  t1664 = t176*t632*t241;
  t1677 = -1.*t632*t427*t326;
  t1682 = t1664 + t1677;
  t1731 = -1.*t610*t278;
  t1736 = t632*t241*t427;
  t1745 = t176*t632*t326;
  t1751 = t1736 + t1745;
  t1783 = t804*t1751;
  t1787 = t1731 + t1783;
  t1688 = t105*t1682;
  t1825 = t608*t1787;
  t1830 = t1688 + t1825;
  t1848 = t608*t1682;
  t1886 = -1.*t105*t1787;
  t1890 = t1848 + t1886;
  t1847 = -1.*t77*t1830;
  t1898 = t910*t1890;
  t1900 = t1847 + t1898;
  t1939 = t910*t1830;
  t1951 = t77*t1890;
  t1962 = t1939 + t1951;
  t1008 = t74*t1005;
  t1075 = t1021*t1053;
  t1086 = t1008 + t1075;
  t1122 = t1021*t1005;
  t1127 = -1.*t74*t1053;
  t1148 = t1122 + t1127;
  t1477 = t74*t1447;
  t1551 = t1021*t1539;
  t1577 = t1477 + t1551;
  t1601 = t1021*t1447;
  t1625 = -1.*t74*t1539;
  t1647 = t1601 + t1625;
  t1915 = t74*t1900;
  t1975 = t1021*t1962;
  t1979 = t1915 + t1975;
  t2003 = t1021*t1900;
  t2016 = -1.*t74*t1962;
  t2031 = t2003 + t2016;
  p_output1[0]=-1.*t1117*t1148 + t1086*t51;
  p_output1[1]=-1.*t1117*t1647 + t1577*t51;
  p_output1[2]=-1.*t1117*t2031 + t1979*t51;
  p_output1[3]=t1086*t1117 + t1148*t51;
  p_output1[4]=t1117*t1577 + t1647*t51;
  p_output1[5]=t1117*t1979 + t2031*t51;
  p_output1[6]=t190*t632*t804 - 1.*t610*t844;
  p_output1[7]=-1.*t1384*t610 + t319*t632*t804;
  p_output1[8]=-1.*t1751*t610 - 1.*t278*t804;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void R_RightAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
