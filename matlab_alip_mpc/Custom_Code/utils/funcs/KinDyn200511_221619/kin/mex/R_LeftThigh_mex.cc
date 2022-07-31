/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:45 GMT-04:00
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
  double t185;
  double t429;
  double t93;
  double t202;
  double t467;
  double t44;
  double t627;
  double t668;
  double t686;
  double t378;
  double t512;
  double t525;
  double t691;
  double t28;
  double t893;
  double t1087;
  double t1832;
  double t1876;
  double t1931;
  double t1631;
  double t1673;
  double t1694;
  double t1251;
  double t1404;
  double t1117;
  double t1153;
  double t1162;
  double t1214;
  double t1399;
  double t1401;
  double t592;
  double t773;
  double t785;
  double t1999;
  double t2014;
  double t2024;
  double t2060;
  double t2087;
  double t2104;
  double t1824;
  double t1950;
  double t1952;
  double t2162;
  double t2186;
  double t2192;
  double t2198;
  double t2210;
  double t2212;
  double t2116;
  double t2118;
  double t2121;
  t185 = Cos(var1[5]);
  t429 = Sin(var1[3]);
  t93 = Cos(var1[3]);
  t202 = Sin(var1[4]);
  t467 = Sin(var1[5]);
  t44 = Cos(var1[6]);
  t627 = -1.*t185*t429;
  t668 = t93*t202*t467;
  t686 = t627 + t668;
  t378 = t93*t185*t202;
  t512 = t429*t467;
  t525 = t378 + t512;
  t691 = Sin(var1[6]);
  t28 = Cos(var1[8]);
  t893 = Cos(var1[4]);
  t1087 = Cos(var1[7]);
  t1832 = t93*t185;
  t1876 = t429*t202*t467;
  t1931 = t1832 + t1876;
  t1631 = t185*t429*t202;
  t1673 = -1.*t93*t467;
  t1694 = t1631 + t1673;
  t1251 = Sin(var1[7]);
  t1404 = Sin(var1[8]);
  t1117 = t93*t893*t1087;
  t1153 = t44*t686;
  t1162 = t525*t691;
  t1214 = t1153 + t1162;
  t1399 = t1214*t1251;
  t1401 = t1117 + t1399;
  t592 = t44*t525;
  t773 = -1.*t686*t691;
  t785 = t592 + t773;
  t1999 = t893*t1087*t429;
  t2014 = t44*t1931;
  t2024 = t1694*t691;
  t2060 = t2014 + t2024;
  t2087 = t2060*t1251;
  t2104 = t1999 + t2087;
  t1824 = t44*t1694;
  t1950 = -1.*t1931*t691;
  t1952 = t1824 + t1950;
  t2162 = -1.*t1087*t202;
  t2186 = t893*t44*t467;
  t2192 = t893*t185*t691;
  t2198 = t2186 + t2192;
  t2210 = t2198*t1251;
  t2212 = t2162 + t2210;
  t2116 = t893*t185*t44;
  t2118 = -1.*t893*t467*t691;
  t2121 = t2116 + t2118;
  p_output1[0]=t1401*t1404 - 1.*t28*t785;
  p_output1[1]=t1404*t2104 - 1.*t1952*t28;
  p_output1[2]=t1404*t2212 - 1.*t2121*t28;
  p_output1[3]=t1401*t28 + t1404*t785;
  p_output1[4]=t1404*t1952 + t2104*t28;
  p_output1[5]=t1404*t2121 + t2212*t28;
  p_output1[6]=-1.*t1087*t1214 + t1251*t893*t93;
  p_output1[7]=-1.*t1087*t2060 + t1251*t429*t893;
  p_output1[8]=-1.*t1251*t202 - 1.*t1087*t2198;
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

#include "R_LeftThigh_mex.hh"

namespace SymExpression
{

void R_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
