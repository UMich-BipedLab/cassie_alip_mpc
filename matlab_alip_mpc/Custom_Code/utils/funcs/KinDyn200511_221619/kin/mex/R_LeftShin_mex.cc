/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:47 GMT-04:00
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
  double t139;
  double t535;
  double t607;
  double t582;
  double t613;
  double t442;
  double t693;
  double t700;
  double t725;
  double t604;
  double t615;
  double t651;
  double t727;
  double t138;
  double t923;
  double t925;
  double t928;
  double t184;
  double t249;
  double t278;
  double t690;
  double t760;
  double t828;
  double t841;
  double t869;
  double t872;
  double t937;
  double t1134;
  double t904;
  double t955;
  double t969;
  double t101;
  double t1172;
  double t1197;
  double t1261;
  double t38;
  double t1542;
  double t1552;
  double t1559;
  double t1484;
  double t1489;
  double t1508;
  double t1768;
  double t1803;
  double t1806;
  double t1471;
  double t1531;
  double t1568;
  double t1607;
  double t1610;
  double t1675;
  double t1352;
  double t1694;
  double t1835;
  double t1836;
  double t1845;
  double t1869;
  double t1887;
  double t2133;
  double t2156;
  double t2164;
  double t2045;
  double t2058;
  double t2065;
  double t2088;
  double t2097;
  double t2104;
  double t2107;
  double t2182;
  double t2201;
  double t2281;
  double t2283;
  double t2292;
  double t1034;
  double t1278;
  double t1294;
  double t1388;
  double t1391;
  double t1445;
  double t1843;
  double t1891;
  double t1904;
  double t1928;
  double t1963;
  double t1986;
  double t2273;
  double t2326;
  double t2352;
  double t2373;
  double t2389;
  double t2393;
  t139 = Cos(var1[3]);
  t535 = Cos(var1[5]);
  t607 = Sin(var1[4]);
  t582 = Sin(var1[3]);
  t613 = Sin(var1[5]);
  t442 = Cos(var1[6]);
  t693 = t139*t535*t607;
  t700 = t582*t613;
  t725 = t693 + t700;
  t604 = -1.*t535*t582;
  t615 = t139*t607*t613;
  t651 = t604 + t615;
  t727 = Sin(var1[6]);
  t138 = Cos(var1[8]);
  t923 = t442*t725;
  t925 = -1.*t651*t727;
  t928 = t923 + t925;
  t184 = Cos(var1[4]);
  t249 = Cos(var1[7]);
  t278 = t139*t184*t249;
  t690 = t442*t651;
  t760 = t725*t727;
  t828 = t690 + t760;
  t841 = Sin(var1[7]);
  t869 = t828*t841;
  t872 = t278 + t869;
  t937 = Sin(var1[8]);
  t1134 = Cos(var1[9]);
  t904 = t138*t872;
  t955 = t928*t937;
  t969 = t904 + t955;
  t101 = Sin(var1[9]);
  t1172 = t138*t928;
  t1197 = -1.*t872*t937;
  t1261 = t1172 + t1197;
  t38 = Cos(var1[10]);
  t1542 = t535*t582*t607;
  t1552 = -1.*t139*t613;
  t1559 = t1542 + t1552;
  t1484 = t139*t535;
  t1489 = t582*t607*t613;
  t1508 = t1484 + t1489;
  t1768 = t442*t1559;
  t1803 = -1.*t1508*t727;
  t1806 = t1768 + t1803;
  t1471 = t184*t249*t582;
  t1531 = t442*t1508;
  t1568 = t1559*t727;
  t1607 = t1531 + t1568;
  t1610 = t1607*t841;
  t1675 = t1471 + t1610;
  t1352 = Sin(var1[10]);
  t1694 = t138*t1675;
  t1835 = t1806*t937;
  t1836 = t1694 + t1835;
  t1845 = t138*t1806;
  t1869 = -1.*t1675*t937;
  t1887 = t1845 + t1869;
  t2133 = t184*t535*t442;
  t2156 = -1.*t184*t613*t727;
  t2164 = t2133 + t2156;
  t2045 = -1.*t249*t607;
  t2058 = t184*t442*t613;
  t2065 = t184*t535*t727;
  t2088 = t2058 + t2065;
  t2097 = t2088*t841;
  t2104 = t2045 + t2097;
  t2107 = t138*t2104;
  t2182 = t2164*t937;
  t2201 = t2107 + t2182;
  t2281 = t138*t2164;
  t2283 = -1.*t2104*t937;
  t2292 = t2281 + t2283;
  t1034 = -1.*t101*t969;
  t1278 = t1134*t1261;
  t1294 = t1034 + t1278;
  t1388 = t1134*t969;
  t1391 = t101*t1261;
  t1445 = t1388 + t1391;
  t1843 = -1.*t101*t1836;
  t1891 = t1134*t1887;
  t1904 = t1843 + t1891;
  t1928 = t1134*t1836;
  t1963 = t101*t1887;
  t1986 = t1928 + t1963;
  t2273 = -1.*t101*t2201;
  t2326 = t1134*t2292;
  t2352 = t2273 + t2326;
  t2373 = t1134*t2201;
  t2389 = t101*t2292;
  t2393 = t2373 + t2389;
  p_output1[0]=t1352*t1445 - 1.*t1294*t38;
  p_output1[1]=t1352*t1986 - 1.*t1904*t38;
  p_output1[2]=t1352*t2393 - 1.*t2352*t38;
  p_output1[3]=t1294*t1352 + t1445*t38;
  p_output1[4]=t1352*t1904 + t1986*t38;
  p_output1[5]=t1352*t2352 + t2393*t38;
  p_output1[6]=-1.*t249*t828 + t139*t184*t841;
  p_output1[7]=-1.*t1607*t249 + t184*t582*t841;
  p_output1[8]=-1.*t2088*t249 - 1.*t607*t841;
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

#include "R_LeftShin_mex.hh"

namespace SymExpression
{

void R_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
