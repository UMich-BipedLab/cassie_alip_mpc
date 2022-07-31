/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:47 GMT-04:00
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
  double t574;
  double t910;
  double t484;
  double t983;
  double t1028;
  double t1584;
  double t995;
  double t2400;
  double t1917;
  double t2110;
  double t2126;
  double t1419;
  double t1640;
  double t1645;
  double t3041;
  double t3301;
  double t3544;
  double t2629;
  double t2686;
  double t2770;
  t574 = Cos(var1[4]);
  t910 = Sin(var1[3]);
  t484 = Cos(var1[3]);
  t983 = Sin(var1[4]);
  t1028 = Cos(var1[5]);
  t1584 = Sin(var1[5]);
  t995 = Cos(var1[6]);
  t2400 = Sin(var1[6]);
  t1917 = t484*t1028*t983;
  t2110 = t910*t1584;
  t2126 = t1917 + t2110;
  t1419 = -1.*t1028*t910;
  t1640 = t484*t983*t1584;
  t1645 = t1419 + t1640;
  t3041 = t1028*t910*t983;
  t3301 = -1.*t484*t1584;
  t3544 = t3041 + t3301;
  t2629 = t484*t1028;
  t2686 = t910*t983*t1584;
  t2770 = t2629 + t2686;
  p_output1[0]=t484*t574;
  p_output1[1]=t574*t910;
  p_output1[2]=-1.*t983;
  p_output1[3]=t2126*t2400 + t1645*t995;
  p_output1[4]=t2400*t3544 + t2770*t995;
  p_output1[5]=t1028*t2400*t574 + t1584*t574*t995;
  p_output1[6]=-1.*t1645*t2400 + t2126*t995;
  p_output1[7]=-1.*t2400*t2770 + t3544*t995;
  p_output1[8]=-1.*t1584*t2400*t574 + t1028*t574*t995;
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

#include "R_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void R_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
