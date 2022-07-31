/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:33 GMT-04:00
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
  double t1152;
  double t694;
  double t1509;
  double t1339;
  double t1784;
  double t1824;
  double t1772;
  double t2118;
  double t1798;
  double t1921;
  double t1936;
  double t2342;
  double t2603;
  double t2708;
  double t3019;
  double t3156;
  double t3480;
  double t3578;
  double t3667;
  double t3685;
  t1152 = Cos(var1[4]);
  t694 = Cos(var1[3]);
  t1509 = Sin(var1[4]);
  t1339 = Sin(var1[3]);
  t1784 = Cos(var1[5]);
  t1824 = Sin(var1[5]);
  t1772 = Sin(var1[13]);
  t2118 = Cos(var1[13]);
  t1798 = t694*t1784*t1509;
  t1921 = t1339*t1824;
  t1936 = t1798 + t1921;
  t2342 = -1.*t1784*t1339;
  t2603 = t694*t1509*t1824;
  t2708 = t2342 + t2603;
  t3019 = t1784*t1339*t1509;
  t3156 = -1.*t694*t1824;
  t3480 = t3019 + t3156;
  t3578 = t694*t1784;
  t3667 = t1339*t1509*t1824;
  t3685 = t3578 + t3667;
  p_output1[0]=t1152*t694;
  p_output1[1]=t1152*t1339;
  p_output1[2]=-1.*t1509;
  p_output1[3]=t1772*t1936 + t2118*t2708;
  p_output1[4]=t1772*t3480 + t2118*t3685;
  p_output1[5]=t1152*t1772*t1784 + t1152*t1824*t2118;
  p_output1[6]=t1936*t2118 - 1.*t1772*t2708;
  p_output1[7]=t2118*t3480 - 1.*t1772*t3685;
  p_output1[8]=-1.*t1152*t1772*t1824 + t1152*t1784*t2118;
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

#include "R_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void R_RightPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
