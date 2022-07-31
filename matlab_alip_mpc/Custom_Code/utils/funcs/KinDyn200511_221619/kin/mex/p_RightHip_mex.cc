/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:48 GMT-04:00
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
  double t130;
  double t4081;
  double t4094;
  double t4590;
  double t4774;
  double t4848;
  double t4915;
  double t4890;
  double t4995;
  double t2632;
  double t3050;
  double t3071;
  double t3777;
  double t4891;
  double t5078;
  double t5082;
  double t5550;
  double t6155;
  double t6381;
  double t1220;
  double t6888;
  double t6892;
  double t6931;
  double t3203;
  double t3823;
  double t4033;
  double t4737;
  double t4789;
  double t4839;
  double t5245;
  double t5395;
  double t5513;
  double t6607;
  double t6643;
  double t6843;
  double t7691;
  double t7709;
  double t7749;
  double t7805;
  double t7823;
  double t7891;
  double t7924;
  double t7936;
  double t8015;
  double t8320;
  double t8335;
  double t8350;
  t130 = Cos(var1[3]);
  t4081 = Cos(var1[13]);
  t4094 = -1.*t4081;
  t4590 = 1. + t4094;
  t4774 = Sin(var1[13]);
  t4848 = Cos(var1[5]);
  t4915 = Sin(var1[3]);
  t4890 = Sin(var1[4]);
  t4995 = Sin(var1[5]);
  t2632 = Cos(var1[14]);
  t3050 = -1.*t2632;
  t3071 = 1. + t3050;
  t3777 = Sin(var1[14]);
  t4891 = t130*t4848*t4890;
  t5078 = t4915*t4995;
  t5082 = t4891 + t5078;
  t5550 = -1.*t4848*t4915;
  t6155 = t130*t4890*t4995;
  t6381 = t5550 + t6155;
  t1220 = Cos(var1[4]);
  t6888 = t4774*t5082;
  t6892 = t4081*t6381;
  t6931 = t6888 + t6892;
  t3203 = -0.08055*t3071;
  t3823 = -0.135*t3777;
  t4033 = 0. + t3203 + t3823;
  t4737 = 0.07996*t4590;
  t4789 = 0.135*t4774;
  t4839 = 0. + t4737 + t4789;
  t5245 = -0.135*t4590;
  t5395 = 0.07996*t4774;
  t5513 = 0. + t5245 + t5395;
  t6607 = -0.135*t3071;
  t6643 = 0.08055*t3777;
  t6843 = 0. + t6607 + t6643;
  t7691 = t4848*t4915*t4890;
  t7709 = -1.*t130*t4995;
  t7749 = t7691 + t7709;
  t7805 = t130*t4848;
  t7823 = t4915*t4890*t4995;
  t7891 = t7805 + t7823;
  t7924 = t4774*t7749;
  t7936 = t4081*t7891;
  t8015 = t7924 + t7936;
  t8320 = t1220*t4848*t4774;
  t8335 = t4081*t1220*t4995;
  t8350 = t8320 + t8335;
  p_output1[0]=0. + t1220*t130*t4033 + t4839*t5082 + t5513*t6381 + 0.04566*(t4081*t5082 - 1.*t4774*t6381) + t6843*t6931 - 0.135*(-1.*t1220*t130*t3777 + t2632*t6931) - 0.08055*(t1220*t130*t2632 + t3777*t6931) + var1[0];
  p_output1[1]=0. + t1220*t4033*t4915 + t4839*t7749 + t5513*t7891 + 0.04566*(t4081*t7749 - 1.*t4774*t7891) + t6843*t8015 - 0.135*(-1.*t1220*t3777*t4915 + t2632*t8015) - 0.08055*(t1220*t2632*t4915 + t3777*t8015) + var1[1];
  p_output1[2]=0. + t1220*t4839*t4848 - 1.*t4033*t4890 + 0.04566*(t1220*t4081*t4848 - 1.*t1220*t4774*t4995) + t1220*t4995*t5513 + t6843*t8350 - 0.135*(t3777*t4890 + t2632*t8350) - 0.08055*(-1.*t2632*t4890 + t3777*t8350) + var1[2];
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

#include "p_RightHip_mex.hh"

namespace SymExpression
{

void p_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
