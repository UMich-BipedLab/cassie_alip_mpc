/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:32 GMT-04:00
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
  double t350;
  double t4552;
  double t5074;
  double t4803;
  double t5270;
  double t5736;
  double t5846;
  double t5919;
  double t6084;
  double t6350;
  double t6458;
  double t6535;
  double t4889;
  double t5398;
  double t5669;
  double t3402;
  double t5940;
  double t6318;
  double t6335;
  double t6898;
  double t6941;
  double t6975;
  double t8233;
  double t8291;
  double t8378;
  double t7946;
  double t8067;
  double t8106;
  t350 = Cos(var1[3]);
  t4552 = Cos(var1[5]);
  t5074 = Sin(var1[3]);
  t4803 = Sin(var1[4]);
  t5270 = Sin(var1[5]);
  t5736 = Cos(var1[6]);
  t5846 = -1.*t5736;
  t5919 = 1. + t5846;
  t6084 = Sin(var1[6]);
  t6350 = -1.*t4552*t5074;
  t6458 = t350*t4803*t5270;
  t6535 = t6350 + t6458;
  t4889 = t350*t4552*t4803;
  t5398 = t5074*t5270;
  t5669 = t4889 + t5398;
  t3402 = Cos(var1[4]);
  t5940 = 0.07996*t5919;
  t6318 = -0.135*t6084;
  t6335 = 0. + t5940 + t6318;
  t6898 = 0.135*t5919;
  t6941 = 0.07996*t6084;
  t6975 = 0. + t6898 + t6941;
  t8233 = t350*t4552;
  t8291 = t5074*t4803*t5270;
  t8378 = t8233 + t8291;
  t7946 = t4552*t5074*t4803;
  t8067 = -1.*t350*t5270;
  t8106 = t7946 + t8067;
  p_output1[0]=0. - 0.05485*t3402*t350 + t5669*t6335 + 0.1351*(t5669*t6084 + t5736*t6535) + 0.09786*(t5669*t5736 - 1.*t6084*t6535) + t6535*t6975 + var1[0];
  p_output1[1]=0. - 0.05485*t3402*t5074 + t6335*t8106 + t6975*t8378 + 0.1351*(t6084*t8106 + t5736*t8378) + 0.09786*(t5736*t8106 - 1.*t6084*t8378) + var1[1];
  p_output1[2]=0. + 0.05485*t4803 + 0.1351*(t3402*t5270*t5736 + t3402*t4552*t6084) + 0.09786*(t3402*t4552*t5736 - 1.*t3402*t5270*t6084) + t3402*t4552*t6335 + t3402*t5270*t6975 + var1[2];
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

#include "p_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void p_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
