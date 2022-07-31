/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:03 GMT-04:00
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
  double t172;
  double t426;
  double t69;
  double t341;
  double t481;
  double t35;
  double t757;
  double t1735;
  double t393;
  double t530;
  double t546;
  double t892;
  double t956;
  double t1226;
  double t2058;
  double t2108;
  double t1573;
  double t1590;
  double t1594;
  double t1625;
  double t1655;
  double t1661;
  double t2120;
  double t2146;
  double t2201;
  double t2218;
  double t2221;
  double t2226;
  double t2283;
  double t2358;
  double t2365;
  t172 = Cos(var1[5]);
  t426 = Sin(var1[3]);
  t69 = Cos(var1[3]);
  t341 = Sin(var1[4]);
  t481 = Sin(var1[5]);
  t35 = Cos(var1[13]);
  t757 = Sin(var1[13]);
  t1735 = Cos(var1[4]);
  t393 = t69*t172*t341;
  t530 = t426*t481;
  t546 = t393 + t530;
  t892 = -1.*t172*t426;
  t956 = t69*t341*t481;
  t1226 = t892 + t956;
  t2058 = Cos(var1[14]);
  t2108 = Sin(var1[14]);
  t1573 = t172*t426*t341;
  t1590 = -1.*t69*t481;
  t1594 = t1573 + t1590;
  t1625 = t69*t172;
  t1655 = t426*t341*t481;
  t1661 = t1625 + t1655;
  t2120 = t757*t546;
  t2146 = t35*t1226;
  t2201 = t2120 + t2146;
  t2218 = t757*t1594;
  t2221 = t35*t1661;
  t2226 = t2218 + t2221;
  t2283 = t1735*t172*t757;
  t2358 = t35*t1735*t481;
  t2365 = t2283 + t2358;
  p_output1[0]=-1.*t35*t546 + t1226*t757;
  p_output1[1]=-1.*t1594*t35 + t1661*t757;
  p_output1[2]=-1.*t172*t1735*t35 + t1735*t481*t757;
  p_output1[3]=t2108*t2201 + t1735*t2058*t69;
  p_output1[4]=t2108*t2226 + t1735*t2058*t426;
  p_output1[5]=t2108*t2365 - 1.*t2058*t341;
  p_output1[6]=-1.*t2058*t2201 + t1735*t2108*t69;
  p_output1[7]=-1.*t2058*t2226 + t1735*t2108*t426;
  p_output1[8]=-1.*t2058*t2365 - 1.*t2108*t341;
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

#include "R_RightHip_mex.hh"

namespace SymExpression
{

void R_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
