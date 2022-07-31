/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:18 GMT-04:00
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
  double t53;
  double t674;
  double t707;
  double t773;
  double t943;
  double t1065;
  double t1199;
  double t1124;
  double t1207;
  double t1181;
  double t1268;
  double t1278;
  double t1397;
  double t1516;
  double t1521;
  double t482;
  double t928;
  double t997;
  double t1028;
  double t1321;
  double t1349;
  double t1351;
  double t1914;
  double t2050;
  double t2061;
  double t2085;
  double t2089;
  double t2134;
  t53 = Cos(var1[3]);
  t674 = Cos(var1[13]);
  t707 = -1.*t674;
  t773 = 1. + t707;
  t943 = Sin(var1[13]);
  t1065 = Cos(var1[5]);
  t1199 = Sin(var1[3]);
  t1124 = Sin(var1[4]);
  t1207 = Sin(var1[5]);
  t1181 = t53*t1065*t1124;
  t1268 = t1199*t1207;
  t1278 = t1181 + t1268;
  t1397 = -1.*t1065*t1199;
  t1516 = t53*t1124*t1207;
  t1521 = t1397 + t1516;
  t482 = Cos(var1[4]);
  t928 = 0.07996*t773;
  t997 = 0.135*t943;
  t1028 = 0. + t928 + t997;
  t1321 = -0.135*t773;
  t1349 = 0.07996*t943;
  t1351 = 0. + t1321 + t1349;
  t1914 = t1065*t1199*t1124;
  t2050 = -1.*t53*t1207;
  t2061 = t1914 + t2050;
  t2085 = t53*t1065;
  t2089 = t1199*t1124*t1207;
  t2134 = t2085 + t2089;
  p_output1[0]=0. + t1028*t1278 + t1351*t1521 - 0.05485*t482*t53 - 0.1351*(t1521*t674 + t1278*t943) + 0.09786*(t1278*t674 - 1.*t1521*t943) + var1[0];
  p_output1[1]=0. + t1028*t2061 + t1351*t2134 - 0.05485*t1199*t482 - 0.1351*(t2134*t674 + t2061*t943) + 0.09786*(t2061*t674 - 1.*t2134*t943) + var1[1];
  p_output1[2]=0. + 0.05485*t1124 + t1028*t1065*t482 + t1207*t1351*t482 - 0.1351*(t1207*t482*t674 + t1065*t482*t943) + 0.09786*(t1065*t482*t674 - 1.*t1207*t482*t943) + var1[2];
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

#include "p_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void p_RightPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
