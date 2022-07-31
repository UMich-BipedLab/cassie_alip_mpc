/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:39 GMT-04:00
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
  double t295;
  double t315;
  double t241;
  double t297;
  double t319;
  double t462;
  double t311;
  double t351;
  double t356;
  double t120;
  double t475;
  double t487;
  double t547;
  double t734;
  double t444;
  double t572;
  double t687;
  double t112;
  double t768;
  double t795;
  double t805;
  double t818;
  double t838;
  double t908;
  double t946;
  double t992;
  double t993;
  double t1077;
  double t732;
  double t1043;
  double t1050;
  double t104;
  double t1093;
  double t1131;
  double t1136;
  double t60;
  double t1404;
  double t1412;
  double t1415;
  double t1426;
  double t1430;
  double t1445;
  double t1421;
  double t1462;
  double t1472;
  double t1487;
  double t1497;
  double t1531;
  double t1589;
  double t1594;
  double t1601;
  double t1243;
  double t1481;
  double t1654;
  double t1660;
  double t1690;
  double t1711;
  double t1714;
  double t1914;
  double t1928;
  double t1955;
  double t1963;
  double t2001;
  double t2015;
  double t2020;
  double t2024;
  double t2056;
  double t1959;
  double t2062;
  double t2074;
  double t2174;
  double t2191;
  double t2204;
  double t1068;
  double t1179;
  double t1182;
  double t1263;
  double t1318;
  double t1320;
  double t1679;
  double t1730;
  double t1744;
  double t1773;
  double t1789;
  double t1829;
  double t2159;
  double t2216;
  double t2222;
  double t2280;
  double t2287;
  double t2319;
  t295 = Cos(var1[5]);
  t315 = Sin(var1[3]);
  t241 = Cos(var1[3]);
  t297 = Sin(var1[4]);
  t319 = Sin(var1[5]);
  t462 = Sin(var1[13]);
  t311 = t241*t295*t297;
  t351 = t315*t319;
  t356 = t311 + t351;
  t120 = Cos(var1[13]);
  t475 = -1.*t295*t315;
  t487 = t241*t297*t319;
  t547 = t475 + t487;
  t734 = Cos(var1[15]);
  t444 = t120*t356;
  t572 = -1.*t462*t547;
  t687 = t444 + t572;
  t112 = Sin(var1[15]);
  t768 = Cos(var1[14]);
  t795 = Cos(var1[4]);
  t805 = t768*t241*t795;
  t818 = Sin(var1[14]);
  t838 = t462*t356;
  t908 = t120*t547;
  t946 = t838 + t908;
  t992 = t818*t946;
  t993 = t805 + t992;
  t1077 = Cos(var1[16]);
  t732 = t112*t687;
  t1043 = t734*t993;
  t1050 = t732 + t1043;
  t104 = Sin(var1[16]);
  t1093 = t734*t687;
  t1131 = -1.*t112*t993;
  t1136 = t1093 + t1131;
  t60 = Cos(var1[17]);
  t1404 = t295*t315*t297;
  t1412 = -1.*t241*t319;
  t1415 = t1404 + t1412;
  t1426 = t241*t295;
  t1430 = t315*t297*t319;
  t1445 = t1426 + t1430;
  t1421 = t120*t1415;
  t1462 = -1.*t462*t1445;
  t1472 = t1421 + t1462;
  t1487 = t768*t795*t315;
  t1497 = t462*t1415;
  t1531 = t120*t1445;
  t1589 = t1497 + t1531;
  t1594 = t818*t1589;
  t1601 = t1487 + t1594;
  t1243 = Sin(var1[17]);
  t1481 = t112*t1472;
  t1654 = t734*t1601;
  t1660 = t1481 + t1654;
  t1690 = t734*t1472;
  t1711 = -1.*t112*t1601;
  t1714 = t1690 + t1711;
  t1914 = t120*t795*t295;
  t1928 = -1.*t795*t462*t319;
  t1955 = t1914 + t1928;
  t1963 = -1.*t768*t297;
  t2001 = t795*t295*t462;
  t2015 = t120*t795*t319;
  t2020 = t2001 + t2015;
  t2024 = t818*t2020;
  t2056 = t1963 + t2024;
  t1959 = t112*t1955;
  t2062 = t734*t2056;
  t2074 = t1959 + t2062;
  t2174 = t734*t1955;
  t2191 = -1.*t112*t2056;
  t2204 = t2174 + t2191;
  t1068 = -1.*t104*t1050;
  t1179 = t1077*t1136;
  t1182 = t1068 + t1179;
  t1263 = t1077*t1050;
  t1318 = t104*t1136;
  t1320 = t1263 + t1318;
  t1679 = -1.*t104*t1660;
  t1730 = t1077*t1714;
  t1744 = t1679 + t1730;
  t1773 = t1077*t1660;
  t1789 = t104*t1714;
  t1829 = t1773 + t1789;
  t2159 = -1.*t104*t2074;
  t2216 = t1077*t2204;
  t2222 = t2159 + t2216;
  t2280 = t1077*t2074;
  t2287 = t104*t2204;
  t2319 = t2280 + t2287;
  p_output1[0]=t1243*t1320 - 1.*t1182*t60;
  p_output1[1]=t1243*t1829 - 1.*t1744*t60;
  p_output1[2]=t1243*t2319 - 1.*t2222*t60;
  p_output1[3]=t1182*t1243 + t1320*t60;
  p_output1[4]=t1243*t1744 + t1829*t60;
  p_output1[5]=t1243*t2222 + t2319*t60;
  p_output1[6]=t241*t795*t818 - 1.*t768*t946;
  p_output1[7]=-1.*t1589*t768 + t315*t795*t818;
  p_output1[8]=-1.*t2020*t768 - 1.*t297*t818;
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

#include "R_RightShin_mex.hh"

namespace SymExpression
{

void R_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
