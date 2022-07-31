/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:42 GMT-04:00
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
  double t131;
  double t203;
  double t77;
  double t137;
  double t256;
  double t24;
  double t294;
  double t306;
  double t314;
  double t154;
  double t257;
  double t276;
  double t322;
  double t22;
  double t382;
  double t391;
  double t690;
  double t704;
  double t711;
  double t626;
  double t639;
  double t673;
  double t531;
  double t573;
  double t423;
  double t424;
  double t442;
  double t517;
  double t545;
  double t560;
  double t293;
  double t336;
  double t361;
  double t818;
  double t825;
  double t830;
  double t835;
  double t844;
  double t846;
  double t685;
  double t741;
  double t760;
  double t974;
  double t977;
  double t980;
  double t1038;
  double t1056;
  double t1061;
  double t882;
  double t918;
  double t949;
  double t1339;
  double t1357;
  double t1426;
  double t1441;
  double t1612;
  double t1628;
  double t1109;
  double t1150;
  double t1154;
  double t1369;
  double t1372;
  double t1391;
  double t1395;
  double t1409;
  double t1421;
  double t1455;
  double t1471;
  double t1480;
  double t1513;
  double t1532;
  double t1534;
  double t1662;
  double t1669;
  double t1694;
  double t1735;
  double t1761;
  double t1777;
  double t1155;
  double t1160;
  double t1195;
  double t1232;
  double t1271;
  double t1287;
  t131 = Cos(var1[5]);
  t203 = Sin(var1[3]);
  t77 = Cos(var1[3]);
  t137 = Sin(var1[4]);
  t256 = Sin(var1[5]);
  t24 = Cos(var1[6]);
  t294 = -1.*t131*t203;
  t306 = t77*t137*t256;
  t314 = t294 + t306;
  t154 = t77*t131*t137;
  t257 = t203*t256;
  t276 = t154 + t257;
  t322 = Sin(var1[6]);
  t22 = Cos(var1[8]);
  t382 = Cos(var1[4]);
  t391 = Cos(var1[7]);
  t690 = t77*t131;
  t704 = t203*t137*t256;
  t711 = t690 + t704;
  t626 = t131*t203*t137;
  t639 = -1.*t77*t256;
  t673 = t626 + t639;
  t531 = Sin(var1[7]);
  t573 = Sin(var1[8]);
  t423 = t77*t382*t391;
  t424 = t24*t314;
  t442 = t276*t322;
  t517 = t424 + t442;
  t545 = t517*t531;
  t560 = t423 + t545;
  t293 = t24*t276;
  t336 = -1.*t314*t322;
  t361 = t293 + t336;
  t818 = t382*t391*t203;
  t825 = t24*t711;
  t830 = t673*t322;
  t835 = t825 + t830;
  t844 = t835*t531;
  t846 = t818 + t844;
  t685 = t24*t673;
  t741 = -1.*t711*t322;
  t760 = t685 + t741;
  t974 = -1.*t391*t137;
  t977 = t382*t24*t256;
  t980 = t382*t131*t322;
  t1038 = t977 + t980;
  t1056 = t1038*t531;
  t1061 = t974 + t1056;
  t882 = t382*t131*t24;
  t918 = -1.*t382*t256*t322;
  t949 = t882 + t918;
  t1339 = -1.*t24;
  t1357 = 1. + t1339;
  t1426 = -1.*t391;
  t1441 = 1. + t1426;
  t1612 = -1.*t22;
  t1628 = 1. + t1612;
  t1109 = t22*t560;
  t1150 = t361*t573;
  t1154 = t1109 + t1150;
  t1369 = 0.07996*t1357;
  t1372 = -0.135*t322;
  t1391 = 0. + t1369 + t1372;
  t1395 = 0.135*t1357;
  t1409 = 0.07996*t322;
  t1421 = 0. + t1395 + t1409;
  t1455 = 0.135*t1441;
  t1471 = 0.08055*t531;
  t1480 = 0. + t1455 + t1471;
  t1513 = -0.08055*t1441;
  t1532 = 0.135*t531;
  t1534 = 0. + t1513 + t1532;
  t1662 = -0.08055*t1628;
  t1669 = -0.01004*t573;
  t1694 = 0. + t1662 + t1669;
  t1735 = -0.01004*t1628;
  t1761 = 0.08055*t573;
  t1777 = 0. + t1735 + t1761;
  t1155 = t22*t846;
  t1160 = t760*t573;
  t1195 = t1155 + t1160;
  t1232 = t22*t1061;
  t1271 = t949*t573;
  t1287 = t1232 + t1271;
  p_output1[0]=-1.*t22*t361 + t560*t573;
  p_output1[1]=-1.*t22*t760 + t573*t846;
  p_output1[2]=t1061*t573 - 1.*t22*t949;
  p_output1[3]=0.;
  p_output1[4]=t1154;
  p_output1[5]=t1195;
  p_output1[6]=t1287;
  p_output1[7]=0.;
  p_output1[8]=-1.*t391*t517 + t382*t531*t77;
  p_output1[9]=t203*t382*t531 - 1.*t391*t835;
  p_output1[10]=-1.*t1038*t391 - 1.*t137*t531;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08045*t1154 + t1391*t276 + t1421*t314 + t1777*t361 + t1480*t517 + t1694*t560 - 0.06984*(t22*t361 - 1.*t560*t573) + t1534*t382*t77 + 0.1708*(t391*t517 - 1.*t382*t531*t77) + var1[0];
  p_output1[13]=0. - 0.08045*t1195 + t1534*t203*t382 + t1391*t673 + t1421*t711 + t1777*t760 + t1480*t835 + 0.1708*(-1.*t203*t382*t531 + t391*t835) + t1694*t846 - 0.06984*(t22*t760 - 1.*t573*t846) + var1[1];
  p_output1[14]=0. - 0.08045*t1287 + t1038*t1480 - 1.*t137*t1534 + t1061*t1694 + t131*t1391*t382 + t1421*t256*t382 + 0.1708*(t1038*t391 + t137*t531) + t1777*t949 - 0.06984*(-1.*t1061*t573 + t22*t949) + var1[2];
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

#include "T_LeftThigh_mex.hh"

namespace SymExpression
{

void T_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
