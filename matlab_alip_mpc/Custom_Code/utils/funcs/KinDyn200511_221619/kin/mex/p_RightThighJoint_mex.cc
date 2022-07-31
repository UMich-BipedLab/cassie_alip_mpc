/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:18 GMT-04:00
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
  double t233;
  double t1247;
  double t1529;
  double t1734;
  double t2168;
  double t2903;
  double t3225;
  double t2958;
  double t3313;
  double t660;
  double t750;
  double t962;
  double t1127;
  double t3147;
  double t3333;
  double t3396;
  double t3817;
  double t3976;
  double t3982;
  double t637;
  double t4280;
  double t4283;
  double t4285;
  double t4389;
  double t4404;
  double t4467;
  double t4496;
  double t4549;
  double t4587;
  double t4594;
  double t5028;
  double t5035;
  double t5063;
  double t980;
  double t1139;
  double t1170;
  double t1990;
  double t2178;
  double t2830;
  double t3456;
  double t3510;
  double t3755;
  double t4166;
  double t4173;
  double t4196;
  double t5357;
  double t5404;
  double t5416;
  double t5424;
  double t5454;
  double t5456;
  double t4482;
  double t4502;
  double t4527;
  double t5474;
  double t5475;
  double t5503;
  double t4918;
  double t4923;
  double t5008;
  double t5513;
  double t5528;
  double t5531;
  double t5673;
  double t5676;
  double t5691;
  double t5817;
  double t5825;
  double t5826;
  double t5834;
  double t5844;
  double t5846;
  double t5867;
  double t5883;
  double t5884;
  t233 = Cos(var1[3]);
  t1247 = Cos(var1[13]);
  t1529 = -1.*t1247;
  t1734 = 1. + t1529;
  t2168 = Sin(var1[13]);
  t2903 = Cos(var1[5]);
  t3225 = Sin(var1[3]);
  t2958 = Sin(var1[4]);
  t3313 = Sin(var1[5]);
  t660 = Cos(var1[14]);
  t750 = -1.*t660;
  t962 = 1. + t750;
  t1127 = Sin(var1[14]);
  t3147 = t233*t2903*t2958;
  t3333 = t3225*t3313;
  t3396 = t3147 + t3333;
  t3817 = -1.*t2903*t3225;
  t3976 = t233*t2958*t3313;
  t3982 = t3817 + t3976;
  t637 = Cos(var1[4]);
  t4280 = t2168*t3396;
  t4283 = t1247*t3982;
  t4285 = t4280 + t4283;
  t4389 = Cos(var1[15]);
  t4404 = -1.*t4389;
  t4467 = 1. + t4404;
  t4496 = Sin(var1[15]);
  t4549 = t1247*t3396;
  t4587 = -1.*t2168*t3982;
  t4594 = t4549 + t4587;
  t5028 = t660*t233*t637;
  t5035 = t1127*t4285;
  t5063 = t5028 + t5035;
  t980 = -0.08055*t962;
  t1139 = -0.135*t1127;
  t1170 = 0. + t980 + t1139;
  t1990 = 0.07996*t1734;
  t2178 = 0.135*t2168;
  t2830 = 0. + t1990 + t2178;
  t3456 = -0.135*t1734;
  t3510 = 0.07996*t2168;
  t3755 = 0. + t3456 + t3510;
  t4166 = -0.135*t962;
  t4173 = 0.08055*t1127;
  t4196 = 0. + t4166 + t4173;
  t5357 = t2903*t3225*t2958;
  t5404 = -1.*t233*t3313;
  t5416 = t5357 + t5404;
  t5424 = t233*t2903;
  t5454 = t3225*t2958*t3313;
  t5456 = t5424 + t5454;
  t4482 = -0.01004*t4467;
  t4502 = 0.08055*t4496;
  t4527 = 0. + t4482 + t4502;
  t5474 = t2168*t5416;
  t5475 = t1247*t5456;
  t5503 = t5474 + t5475;
  t4918 = -0.08055*t4467;
  t4923 = -0.01004*t4496;
  t5008 = 0. + t4918 + t4923;
  t5513 = t1247*t5416;
  t5528 = -1.*t2168*t5456;
  t5531 = t5513 + t5528;
  t5673 = t660*t637*t3225;
  t5676 = t1127*t5503;
  t5691 = t5673 + t5676;
  t5817 = t637*t2903*t2168;
  t5825 = t1247*t637*t3313;
  t5826 = t5817 + t5825;
  t5834 = t1247*t637*t2903;
  t5844 = -1.*t637*t2168*t3313;
  t5846 = t5834 + t5844;
  t5867 = -1.*t660*t2958;
  t5883 = t1127*t5826;
  t5884 = t5867 + t5883;
  p_output1[0]=0. + t2830*t3396 + t3755*t3982 + t4196*t4285 + t4527*t4594 + t5008*t5063 - 0.08055*(t4496*t4594 + t4389*t5063) - 0.01004*(t4389*t4594 - 1.*t4496*t5063) + t1170*t233*t637 - 0.135*(-1.*t1127*t233*t637 + t4285*t660) + var1[0];
  p_output1[1]=0. + t2830*t5416 + t3755*t5456 + t4196*t5503 + t4527*t5531 + t5008*t5691 - 0.08055*(t4496*t5531 + t4389*t5691) - 0.01004*(t4389*t5531 - 1.*t4496*t5691) + t1170*t3225*t637 - 0.135*(-1.*t1127*t3225*t637 + t5503*t660) + var1[1];
  p_output1[2]=0. - 1.*t1170*t2958 + t4196*t5826 + t4527*t5846 + t5008*t5884 - 0.08055*(t4496*t5846 + t4389*t5884) - 0.01004*(t4389*t5846 - 1.*t4496*t5884) + t2830*t2903*t637 + t3313*t3755*t637 - 0.135*(t1127*t2958 + t5826*t660) + var1[2];
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

#include "p_RightThighJoint_mex.hh"

namespace SymExpression
{

void p_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
