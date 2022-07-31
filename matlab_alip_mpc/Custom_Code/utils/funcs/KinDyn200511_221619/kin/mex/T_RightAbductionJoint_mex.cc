/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:53 GMT-04:00
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
  double t320;
  double t115;
  double t1118;
  double t940;
  double t1394;
  double t1523;
  double t1262;
  double t1939;
  double t1522;
  double t1615;
  double t1868;
  double t1964;
  double t1965;
  double t1972;
  double t2089;
  double t2160;
  double t3071;
  double t3260;
  double t3283;
  double t3349;
  double t4679;
  double t4703;
  double t1870;
  double t1983;
  double t2047;
  double t3791;
  double t3933;
  double t3968;
  double t4723;
  double t4886;
  double t4933;
  double t5032;
  double t5088;
  double t5102;
  double t3074;
  double t3422;
  double t3689;
  double t4000;
  double t4016;
  double t4025;
  double t3691;
  double t3723;
  double t3787;
  double t4064;
  double t4311;
  double t4330;
  t320 = Cos(var1[4]);
  t115 = Cos(var1[3]);
  t1118 = Sin(var1[4]);
  t940 = Sin(var1[3]);
  t1394 = Cos(var1[5]);
  t1523 = Sin(var1[5]);
  t1262 = Sin(var1[13]);
  t1939 = Cos(var1[13]);
  t1522 = t115*t1394*t1118;
  t1615 = t940*t1523;
  t1868 = t1522 + t1615;
  t1964 = -1.*t1394*t940;
  t1965 = t115*t1118*t1523;
  t1972 = t1964 + t1965;
  t2089 = t1394*t940*t1118;
  t2160 = -1.*t115*t1523;
  t3071 = t2089 + t2160;
  t3260 = t115*t1394;
  t3283 = t940*t1118*t1523;
  t3349 = t3260 + t3283;
  t4679 = -1.*t1939;
  t4703 = 1. + t4679;
  t1870 = t1262*t1868;
  t1983 = t1939*t1972;
  t2047 = t1870 + t1983;
  t3791 = t1939*t1868;
  t3933 = -1.*t1262*t1972;
  t3968 = t3791 + t3933;
  t4723 = 0.07996*t4703;
  t4886 = 0.135*t1262;
  t4933 = 0. + t4723 + t4886;
  t5032 = -0.135*t4703;
  t5088 = 0.07996*t1262;
  t5102 = 0. + t5032 + t5088;
  t3074 = t1262*t3071;
  t3422 = t1939*t3349;
  t3689 = t3074 + t3422;
  t4000 = t1939*t3071;
  t4016 = -1.*t1262*t3349;
  t4025 = t4000 + t4016;
  t3691 = t320*t1394*t1262;
  t3723 = t1939*t320*t1523;
  t3787 = t3691 + t3723;
  t4064 = t1939*t320*t1394;
  t4311 = -1.*t320*t1262*t1523;
  t4330 = t4064 + t4311;
  p_output1[0]=t115*t320;
  p_output1[1]=t320*t940;
  p_output1[2]=-1.*t1118;
  p_output1[3]=0.;
  p_output1[4]=t2047;
  p_output1[5]=t3689;
  p_output1[6]=t3787;
  p_output1[7]=0.;
  p_output1[8]=t3968;
  p_output1[9]=t4025;
  p_output1[10]=t4330;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t2047 - 0.08055*t115*t320 + 0.07996*t3968 + t1868*t4933 + t1972*t5102 + var1[0];
  p_output1[13]=0. - 0.135*t3689 + 0.07996*t4025 + t3071*t4933 + t3349*t5102 - 0.08055*t320*t940 + var1[1];
  p_output1[14]=0. + 0.08055*t1118 - 0.135*t3787 + 0.07996*t4330 + t1394*t320*t4933 + t1523*t320*t5102 + var1[2];
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

#include "T_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void T_RightAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
