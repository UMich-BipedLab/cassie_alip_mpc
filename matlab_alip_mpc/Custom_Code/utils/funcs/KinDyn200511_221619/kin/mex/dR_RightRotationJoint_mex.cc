/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:16 GMT-04:00
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
  double t603;
  double t896;
  double t2436;
  double t1285;
  double t2450;
  double t595;
  double t2878;
  double t2837;
  double t2854;
  double t2969;
  double t3144;
  double t3145;
  double t3431;
  double t3472;
  double t3475;
  double t3614;
  double t3621;
  double t3646;
  double t3946;
  double t3950;
  double t3959;
  double t3981;
  double t4262;
  double t4273;
  double t4275;
  double t4436;
  double t3175;
  double t3250;
  double t3262;
  double t4498;
  double t4364;
  double t3484;
  double t3486;
  double t3523;
  double t3532;
  double t3535;
  double t3670;
  double t4818;
  double t4016;
  double t4076;
  double t4080;
  double t4082;
  double t4147;
  double t4951;
  double t4953;
  double t4964;
  double t4459;
  double t4460;
  double t4469;
  double t4500;
  double t4510;
  double t4541;
  double t4543;
  double t4886;
  double t4899;
  double t4900;
  double t4916;
  double t4617;
  double t4620;
  double t4627;
  double t4743;
  double t4760;
  double t4761;
  double t4828;
  double t4851;
  double t4856;
  double t5109;
  double t5126;
  double t5140;
  t603 = Cos(var1[3]);
  t896 = Cos(var1[4]);
  t2436 = Sin(var1[13]);
  t1285 = Cos(var1[5]);
  t2450 = Sin(var1[5]);
  t595 = Cos(var1[13]);
  t2878 = Sin(var1[3]);
  t2837 = Sin(var1[4]);
  t2854 = t603*t1285*t2837;
  t2969 = t2878*t2450;
  t3144 = t2854 + t2969;
  t3145 = t2436*t3144;
  t3431 = -1.*t1285*t2878;
  t3472 = t603*t2837*t2450;
  t3475 = t3431 + t3472;
  t3614 = -1.*t603*t1285;
  t3621 = -1.*t2878*t2837*t2450;
  t3646 = t3614 + t3621;
  t3946 = t1285*t2878*t2837;
  t3950 = -1.*t603*t2450;
  t3959 = t3946 + t3950;
  t3981 = t2436*t3959;
  t4262 = t896*t1285*t2436;
  t4273 = t595*t896*t2450;
  t4275 = t4262 + t4273;
  t4436 = Sin(var1[14]);
  t3175 = t1285*t2878;
  t3250 = -1.*t603*t2837*t2450;
  t3262 = t3175 + t3250;
  t4498 = t595*t3144;
  t4364 = Cos(var1[14]);
  t3484 = t595*t3475;
  t3486 = t3145 + t3484;
  t3523 = -1.*t1285*t2878*t2837;
  t3532 = t603*t2450;
  t3535 = t3523 + t3532;
  t3670 = t2436*t3646;
  t4818 = t595*t3959;
  t4016 = t603*t1285;
  t4076 = t2878*t2837*t2450;
  t4080 = t4016 + t4076;
  t4082 = t595*t4080;
  t4147 = t3981 + t4082;
  t4951 = t595*t896*t1285;
  t4953 = -1.*t896*t2436*t2450;
  t4964 = t4951 + t4953;
  t4459 = t603*t896*t1285*t2436;
  t4460 = t595*t603*t896*t2450;
  t4469 = t4459 + t4460;
  t4500 = t2436*t3262;
  t4510 = t4498 + t4500;
  t4541 = -1.*t2436*t3475;
  t4543 = t4498 + t4541;
  t4886 = t4364*t603*t896;
  t4899 = t4436*t3486;
  t4900 = t4886 + t4899;
  t4916 = -1.*t896*t4436*t2878;
  t4617 = t2436*t3535;
  t4620 = t595*t3646;
  t4627 = t4617 + t4620;
  t4743 = t896*t1285*t2436*t2878;
  t4760 = t595*t896*t2878*t2450;
  t4761 = t4743 + t4760;
  t4828 = t4818 + t3670;
  t4851 = -1.*t2436*t4080;
  t4856 = t4818 + t4851;
  t5109 = -1.*t1285*t2436*t2837;
  t5126 = -1.*t595*t2837*t2450;
  t5140 = t5109 + t5126;
  p_output1[0]=(t3670 - 1.*t3535*t595)*var2[3] + (t2436*t2450*t603*t896 - 1.*t1285*t595*t603*t896)*var2[4] + (t3145 - 1.*t3262*t595)*var2[5] + t3486*var2[13];
  p_output1[1]=(t2436*t3475 - 1.*t3144*t595)*var2[3] + (t2436*t2450*t2878*t896 - 1.*t1285*t2878*t595*t896)*var2[4] + (t3981 - 1.*t3646*t595)*var2[5] + t4147*var2[13];
  p_output1[2]=(-1.*t2436*t2450*t2837 + t1285*t2837*t595)*var2[4] + t4275*var2[5] + t4275*var2[13];
  p_output1[3]=(t4436*t4627 - 1.*t2878*t4364*t896)*var2[3] + (t4436*t4469 - 1.*t2837*t4364*t603)*var2[4] + t4436*t4510*var2[5] + t4436*t4543*var2[13] + (t3486*t4364 - 1.*t4436*t603*t896)*var2[14];
  p_output1[4]=t4900*var2[3] + (-1.*t2837*t2878*t4364 + t4436*t4761)*var2[4] + t4436*t4828*var2[5] + t4436*t4856*var2[13] + (t4147*t4364 + t4916)*var2[14];
  p_output1[5]=(t4436*t5140 - 1.*t4364*t896)*var2[4] + t4436*t4964*var2[5] + t4436*t4964*var2[13] + (t4275*t4364 + t2837*t4436)*var2[14];
  p_output1[6]=(-1.*t4364*t4627 + t4916)*var2[3] + (-1.*t4364*t4469 - 1.*t2837*t4436*t603)*var2[4] - 1.*t4364*t4510*var2[5] - 1.*t4364*t4543*var2[13] + t4900*var2[14];
  p_output1[7]=(-1.*t3486*t4364 + t4436*t603*t896)*var2[3] + (-1.*t2837*t2878*t4436 - 1.*t4364*t4761)*var2[4] - 1.*t4364*t4828*var2[5] - 1.*t4364*t4856*var2[13] + (t4147*t4436 + t2878*t4364*t896)*var2[14];
  p_output1[8]=(-1.*t4364*t5140 - 1.*t4436*t896)*var2[4] - 1.*t4364*t4964*var2[5] - 1.*t4364*t4964*var2[13] + (-1.*t2837*t4364 + t4275*t4436)*var2[14];
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

#include "dR_RightRotationJoint_mex.hh"

namespace SymExpression
{

void dR_RightRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
