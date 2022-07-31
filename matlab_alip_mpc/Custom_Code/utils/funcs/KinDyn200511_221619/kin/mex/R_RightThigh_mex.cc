/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:34 GMT-04:00
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
  double t256;
  double t978;
  double t170;
  double t337;
  double t1133;
  double t1330;
  double t722;
  double t1194;
  double t1220;
  double t167;
  double t1342;
  double t1349;
  double t1555;
  double t52;
  double t1680;
  double t1707;
  double t1713;
  double t1862;
  double t2240;
  double t2313;
  double t2323;
  double t2422;
  double t2451;
  double t2465;
  double t1308;
  double t1646;
  double t1647;
  double t1815;
  double t1916;
  double t1936;
  double t2036;
  double t2092;
  double t2184;
  double t2371;
  double t2485;
  double t2493;
  double t2548;
  double t2574;
  double t2643;
  double t2661;
  double t2767;
  double t2855;
  double t3067;
  double t3111;
  double t3135;
  double t3202;
  double t3206;
  double t3220;
  double t3223;
  double t3230;
  double t3259;
  t256 = Cos(var1[5]);
  t978 = Sin(var1[3]);
  t170 = Cos(var1[3]);
  t337 = Sin(var1[4]);
  t1133 = Sin(var1[5]);
  t1330 = Sin(var1[13]);
  t722 = t170*t256*t337;
  t1194 = t978*t1133;
  t1220 = t722 + t1194;
  t167 = Cos(var1[13]);
  t1342 = -1.*t256*t978;
  t1349 = t170*t337*t1133;
  t1555 = t1342 + t1349;
  t52 = Cos(var1[15]);
  t1680 = Sin(var1[15]);
  t1707 = Cos(var1[14]);
  t1713 = Cos(var1[4]);
  t1862 = Sin(var1[14]);
  t2240 = t256*t978*t337;
  t2313 = -1.*t170*t1133;
  t2323 = t2240 + t2313;
  t2422 = t170*t256;
  t2451 = t978*t337*t1133;
  t2465 = t2422 + t2451;
  t1308 = t167*t1220;
  t1646 = -1.*t1330*t1555;
  t1647 = t1308 + t1646;
  t1815 = t1707*t170*t1713;
  t1916 = t1330*t1220;
  t1936 = t167*t1555;
  t2036 = t1916 + t1936;
  t2092 = t1862*t2036;
  t2184 = t1815 + t2092;
  t2371 = t167*t2323;
  t2485 = -1.*t1330*t2465;
  t2493 = t2371 + t2485;
  t2548 = t1707*t1713*t978;
  t2574 = t1330*t2323;
  t2643 = t167*t2465;
  t2661 = t2574 + t2643;
  t2767 = t1862*t2661;
  t2855 = t2548 + t2767;
  t3067 = t167*t1713*t256;
  t3111 = -1.*t1713*t1330*t1133;
  t3135 = t3067 + t3111;
  t3202 = -1.*t1707*t337;
  t3206 = t1713*t256*t1330;
  t3220 = t167*t1713*t1133;
  t3223 = t3206 + t3220;
  t3230 = t1862*t3223;
  t3259 = t3202 + t3230;
  p_output1[0]=t1680*t2184 - 1.*t1647*t52;
  p_output1[1]=t1680*t2855 - 1.*t2493*t52;
  p_output1[2]=t1680*t3259 - 1.*t3135*t52;
  p_output1[3]=t1647*t1680 + t2184*t52;
  p_output1[4]=t1680*t2493 + t2855*t52;
  p_output1[5]=t1680*t3135 + t3259*t52;
  p_output1[6]=t170*t1713*t1862 - 1.*t1707*t2036;
  p_output1[7]=-1.*t1707*t2661 + t1713*t1862*t978;
  p_output1[8]=-1.*t1707*t3223 - 1.*t1862*t337;
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

#include "R_RightThigh_mex.hh"

namespace SymExpression
{

void R_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
