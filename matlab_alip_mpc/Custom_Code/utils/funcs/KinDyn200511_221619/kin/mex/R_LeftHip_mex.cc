/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:16 GMT-04:00
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
  double t204;
  double t543;
  double t160;
  double t206;
  double t786;
  double t117;
  double t991;
  double t1635;
  double t880;
  double t971;
  double t977;
  double t257;
  double t818;
  double t832;
  double t1753;
  double t1394;
  double t1441;
  double t1467;
  double t1195;
  double t1227;
  double t1291;
  double t2069;
  double t1777;
  double t1833;
  double t1928;
  double t2148;
  double t2184;
  double t2195;
  double t2268;
  double t2287;
  double t2292;
  t204 = Cos(var1[5]);
  t543 = Sin(var1[3]);
  t160 = Cos(var1[3]);
  t206 = Sin(var1[4]);
  t786 = Sin(var1[5]);
  t117 = Cos(var1[6]);
  t991 = Sin(var1[6]);
  t1635 = Cos(var1[4]);
  t880 = -1.*t204*t543;
  t971 = t160*t206*t786;
  t977 = t880 + t971;
  t257 = t160*t204*t206;
  t818 = t543*t786;
  t832 = t257 + t818;
  t1753 = Cos(var1[7]);
  t1394 = t160*t204;
  t1441 = t543*t206*t786;
  t1467 = t1394 + t1441;
  t1195 = t204*t543*t206;
  t1227 = -1.*t160*t786;
  t1291 = t1195 + t1227;
  t2069 = Sin(var1[7]);
  t1777 = t117*t977;
  t1833 = t832*t991;
  t1928 = t1777 + t1833;
  t2148 = t117*t1467;
  t2184 = t1291*t991;
  t2195 = t2148 + t2184;
  t2268 = t1635*t117*t786;
  t2287 = t1635*t204*t991;
  t2292 = t2268 + t2287;
  p_output1[0]=-1.*t117*t832 + t977*t991;
  p_output1[1]=-1.*t117*t1291 + t1467*t991;
  p_output1[2]=-1.*t117*t1635*t204 + t1635*t786*t991;
  p_output1[3]=t160*t1635*t1753 + t1928*t2069;
  p_output1[4]=t2069*t2195 + t1635*t1753*t543;
  p_output1[5]=-1.*t1753*t206 + t2069*t2292;
  p_output1[6]=-1.*t1753*t1928 + t160*t1635*t2069;
  p_output1[7]=-1.*t1753*t2195 + t1635*t2069*t543;
  p_output1[8]=-1.*t206*t2069 - 1.*t1753*t2292;
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

#include "R_LeftHip_mex.hh"

namespace SymExpression
{

void R_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
