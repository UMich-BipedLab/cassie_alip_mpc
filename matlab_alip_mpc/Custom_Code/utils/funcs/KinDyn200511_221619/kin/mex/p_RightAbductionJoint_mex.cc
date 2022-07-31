/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:43 GMT-04:00
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
  double t92;
  double t101;
  double t233;
  double t271;
  double t345;
  double t407;
  double t370;
  double t444;
  double t386;
  double t471;
  double t568;
  double t802;
  double t887;
  double t889;
  double t71;
  double t245;
  double t332;
  double t334;
  double t625;
  double t716;
  double t773;
  double t1083;
  double t1086;
  double t1089;
  double t1146;
  double t1158;
  double t1193;
  t37 = Cos(var1[3]);
  t92 = Cos(var1[13]);
  t101 = -1.*t92;
  t233 = 1. + t101;
  t271 = Sin(var1[13]);
  t345 = Cos(var1[5]);
  t407 = Sin(var1[3]);
  t370 = Sin(var1[4]);
  t444 = Sin(var1[5]);
  t386 = t37*t345*t370;
  t471 = t407*t444;
  t568 = t386 + t471;
  t802 = -1.*t345*t407;
  t887 = t37*t370*t444;
  t889 = t802 + t887;
  t71 = Cos(var1[4]);
  t245 = 0.07996*t233;
  t332 = 0.135*t271;
  t334 = 0. + t245 + t332;
  t625 = -0.135*t233;
  t716 = 0.07996*t271;
  t773 = 0. + t625 + t716;
  t1083 = t345*t407*t370;
  t1086 = -1.*t37*t444;
  t1089 = t1083 + t1086;
  t1146 = t37*t345;
  t1158 = t407*t370*t444;
  t1193 = t1146 + t1158;
  p_output1[0]=0. + t334*t568 - 0.08055*t37*t71 + t773*t889 + 0.07996*(-1.*t271*t889 + t568*t92) - 0.135*(t271*t568 + t889*t92) + var1[0];
  p_output1[1]=0. + t1089*t334 - 0.08055*t407*t71 + t1193*t773 + 0.07996*(-1.*t1193*t271 + t1089*t92) - 0.135*(t1089*t271 + t1193*t92) + var1[1];
  p_output1[2]=0. + 0.08055*t370 + t334*t345*t71 + t444*t71*t773 + 0.07996*(-1.*t271*t444*t71 + t345*t71*t92) - 0.135*(t271*t345*t71 + t444*t71*t92) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void p_RightAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
