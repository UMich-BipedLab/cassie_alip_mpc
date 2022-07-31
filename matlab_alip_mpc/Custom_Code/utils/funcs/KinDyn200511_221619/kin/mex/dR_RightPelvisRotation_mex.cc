/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t231;
  double t11;
  double t208;
  double t388;
  double t3522;
  double t1684;
  double t3559;
  double t2048;
  double t4241;
  double t4438;
  double t4522;
  double t4545;
  double t4887;
  double t4889;
  double t4963;
  double t5331;
  double t5334;
  double t5373;
  double t5670;
  double t5671;
  double t5712;
  double t5744;
  double t5931;
  double t5949;
  double t5950;
  double t4623;
  double t4725;
  double t4795;
  double t6109;
  double t5192;
  double t5215;
  double t5262;
  double t5019;
  double t5097;
  double t5380;
  double t6425;
  double t5817;
  double t5844;
  double t5855;
  double t6519;
  double t6526;
  double t6527;
  t231 = Cos(var1[3]);
  t11 = Cos(var1[4]);
  t208 = Sin(var1[3]);
  t388 = Sin(var1[4]);
  t3522 = Cos(var1[13]);
  t1684 = Cos(var1[5]);
  t3559 = Sin(var1[5]);
  t2048 = Sin(var1[13]);
  t4241 = t231*t1684*t388;
  t4438 = t208*t3559;
  t4522 = t4241 + t4438;
  t4545 = t3522*t4522;
  t4887 = -1.*t1684*t208;
  t4889 = t231*t388*t3559;
  t4963 = t4887 + t4889;
  t5331 = -1.*t231*t1684;
  t5334 = -1.*t208*t388*t3559;
  t5373 = t5331 + t5334;
  t5670 = t1684*t208*t388;
  t5671 = -1.*t231*t3559;
  t5712 = t5670 + t5671;
  t5744 = t3522*t5712;
  t5931 = t3522*t11*t1684;
  t5949 = -1.*t11*t2048*t3559;
  t5950 = t5931 + t5949;
  t4623 = t1684*t208;
  t4725 = -1.*t231*t388*t3559;
  t4795 = t4623 + t4725;
  t6109 = -1.*t2048*t4522;
  t5192 = -1.*t1684*t208*t388;
  t5215 = t231*t3559;
  t5262 = t5192 + t5215;
  t5019 = -1.*t2048*t4963;
  t5097 = t4545 + t5019;
  t5380 = t3522*t5373;
  t6425 = -1.*t2048*t5712;
  t5817 = t231*t1684;
  t5844 = t208*t388*t3559;
  t5855 = t5817 + t5844;
  t6519 = -1.*t11*t1684*t2048;
  t6526 = -1.*t3522*t11*t3559;
  t6527 = t6519 + t6526;
  p_output1[0]=-1.*t11*t208*var2[3] - 1.*t231*t388*var2[4];
  p_output1[1]=t11*t231*var2[3] - 1.*t208*t388*var2[4];
  p_output1[2]=-1.*t11*var2[4];
  p_output1[3]=(t2048*t5262 + t5380)*var2[3] + (t11*t1684*t2048*t231 + t11*t231*t3522*t3559)*var2[4] + (t4545 + t2048*t4795)*var2[5] + t5097*var2[13];
  p_output1[4]=(t2048*t4522 + t3522*t4963)*var2[3] + (t11*t1684*t2048*t208 + t11*t208*t3522*t3559)*var2[4] + (t2048*t5373 + t5744)*var2[5] + (t5744 - 1.*t2048*t5855)*var2[13];
  p_output1[5]=(-1.*t1684*t2048*t388 - 1.*t3522*t3559*t388)*var2[4] + t5950*var2[5] + t5950*var2[13];
  p_output1[6]=(t3522*t5262 - 1.*t2048*t5373)*var2[3] + (t11*t1684*t231*t3522 - 1.*t11*t2048*t231*t3559)*var2[4] + (t3522*t4795 + t6109)*var2[5] + (-1.*t3522*t4963 + t6109)*var2[13];
  p_output1[7]=t5097*var2[3] + (t11*t1684*t208*t3522 - 1.*t11*t2048*t208*t3559)*var2[4] + (t5380 + t6425)*var2[5] + (-1.*t3522*t5855 + t6425)*var2[13];
  p_output1[8]=(-1.*t1684*t3522*t388 + t2048*t3559*t388)*var2[4] + t6527*var2[5] + t6527*var2[13];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void dR_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
