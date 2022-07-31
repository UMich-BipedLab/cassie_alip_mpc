/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:56 GMT-04:00
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
  double t607;
  double t290;
  double t920;
  double t862;
  double t971;
  double t1566;
  double t960;
  double t1930;
  double t1382;
  double t1615;
  double t1631;
  double t2295;
  double t2508;
  double t2558;
  double t3065;
  double t3066;
  double t3276;
  double t3292;
  double t3473;
  double t3587;
  t607 = Cos(var1[4]);
  t290 = Cos(var1[3]);
  t920 = Sin(var1[4]);
  t862 = Sin(var1[3]);
  t971 = Cos(var1[5]);
  t1566 = Sin(var1[5]);
  t960 = Sin(var1[13]);
  t1930 = Cos(var1[13]);
  t1382 = t290*t971*t920;
  t1615 = t862*t1566;
  t1631 = t1382 + t1615;
  t2295 = -1.*t971*t862;
  t2508 = t290*t920*t1566;
  t2558 = t2295 + t2508;
  t3065 = t971*t862*t920;
  t3066 = -1.*t290*t1566;
  t3276 = t3065 + t3066;
  t3292 = t290*t971;
  t3473 = t862*t920*t1566;
  t3587 = t3292 + t3473;
  p_output1[0]=t290*t607;
  p_output1[1]=t607*t862;
  p_output1[2]=-1.*t920;
  p_output1[3]=t1930*t2558 + t1631*t960;
  p_output1[4]=t1930*t3587 + t3276*t960;
  p_output1[5]=t1566*t1930*t607 + t607*t960*t971;
  p_output1[6]=t1631*t1930 - 1.*t2558*t960;
  p_output1[7]=t1930*t3276 - 1.*t3587*t960;
  p_output1[8]=-1.*t1566*t607*t960 + t1930*t607*t971;
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

#include "R_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void R_RightAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
