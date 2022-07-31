/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:55 GMT-04:00
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
  double t1082;
  double t193;
  double t644;
  double t1230;
  double t2528;
  double t1983;
  double t3205;
  double t2060;
  double t3787;
  double t3791;
  double t3906;
  double t3941;
  double t4348;
  double t4423;
  double t4933;
  double t5260;
  double t5263;
  double t5389;
  double t6629;
  double t6654;
  double t6694;
  double t6753;
  double t7342;
  double t7663;
  double t7707;
  double t3957;
  double t4008;
  double t4064;
  double t8304;
  double t5129;
  double t5176;
  double t5188;
  double t5032;
  double t5088;
  double t5452;
  double t8949;
  double t7084;
  double t7099;
  double t7117;
  double t9261;
  double t9262;
  double t9264;
  double t9312;
  double t9325;
  double t2295;
  double t3422;
  double t3587;
  double t8109;
  double t8114;
  double t8298;
  double t9347;
  double t9348;
  double t9354;
  double t9327;
  double t9330;
  double t9339;
  double t8339;
  double t8398;
  double t4212;
  double t4244;
  double t8604;
  double t8638;
  double t5212;
  double t5457;
  double t8690;
  double t8696;
  double t8702;
  double t5874;
  double t5881;
  double t5944;
  double t8797;
  double t8799;
  double t8837;
  double t6336;
  double t6398;
  double t6490;
  double t8997;
  double t6885;
  double t6945;
  double t9377;
  double t9379;
  double t9383;
  double t9385;
  double t9386;
  double t9018;
  double t9050;
  double t7180;
  double t7277;
  double t9474;
  double t9475;
  double t7867;
  double t7884;
  double t7913;
  double t9273;
  double t9275;
  double t9278;
  t1082 = Cos(var1[3]);
  t193 = Cos(var1[4]);
  t644 = Sin(var1[3]);
  t1230 = Sin(var1[4]);
  t2528 = Cos(var1[13]);
  t1983 = Cos(var1[5]);
  t3205 = Sin(var1[5]);
  t2060 = Sin(var1[13]);
  t3787 = t1082*t1983*t1230;
  t3791 = t644*t3205;
  t3906 = t3787 + t3791;
  t3941 = t2528*t3906;
  t4348 = -1.*t1983*t644;
  t4423 = t1082*t1230*t3205;
  t4933 = t4348 + t4423;
  t5260 = -1.*t1082*t1983;
  t5263 = -1.*t644*t1230*t3205;
  t5389 = t5260 + t5263;
  t6629 = t1983*t644*t1230;
  t6654 = -1.*t1082*t3205;
  t6694 = t6629 + t6654;
  t6753 = t2528*t6694;
  t7342 = t2528*t193*t1983;
  t7663 = -1.*t193*t2060*t3205;
  t7707 = t7342 + t7663;
  t3957 = t1983*t644;
  t4008 = -1.*t1082*t1230*t3205;
  t4064 = t3957 + t4008;
  t8304 = -1.*t2060*t3906;
  t5129 = -1.*t1983*t644*t1230;
  t5176 = t1082*t3205;
  t5188 = t5129 + t5176;
  t5032 = -1.*t2060*t4933;
  t5088 = t3941 + t5032;
  t5452 = t2528*t5389;
  t8949 = -1.*t2060*t6694;
  t7084 = t1082*t1983;
  t7099 = t644*t1230*t3205;
  t7117 = t7084 + t7099;
  t9261 = -1.*t193*t1983*t2060;
  t9262 = -1.*t2528*t193*t3205;
  t9264 = t9261 + t9262;
  t9312 = -1.*t2528;
  t9325 = 1. + t9312;
  t2295 = t1082*t193*t1983*t2060;
  t3422 = t2528*t1082*t193*t3205;
  t3587 = t2295 + t3422;
  t8109 = t2528*t1082*t193*t1983;
  t8114 = -1.*t1082*t193*t2060*t3205;
  t8298 = t8109 + t8114;
  t9347 = -0.135*t9325;
  t9348 = 0.07996*t2060;
  t9354 = 0. + t9347 + t9348;
  t9327 = 0.07996*t9325;
  t9330 = 0.135*t2060;
  t9339 = 0. + t9327 + t9330;
  t8339 = t2528*t4064;
  t8398 = t8304 + t8339;
  t4212 = t2060*t4064;
  t4244 = t3941 + t4212;
  t8604 = -1.*t2528*t4933;
  t8638 = t8304 + t8604;
  t5212 = t2060*t5188;
  t5457 = t5212 + t5452;
  t8690 = t2528*t5188;
  t8696 = -1.*t2060*t5389;
  t8702 = t8690 + t8696;
  t5874 = t193*t1983*t2060*t644;
  t5881 = t2528*t193*t644*t3205;
  t5944 = t5874 + t5881;
  t8797 = t2528*t193*t1983*t644;
  t8799 = -1.*t193*t2060*t644*t3205;
  t8837 = t8797 + t8799;
  t6336 = t2060*t3906;
  t6398 = t2528*t4933;
  t6490 = t6336 + t6398;
  t8997 = t8949 + t5452;
  t6885 = t2060*t5389;
  t6945 = t6753 + t6885;
  t9377 = 0.135*t2528;
  t9379 = t9377 + t9348;
  t9383 = 0.07996*t2528;
  t9385 = -0.135*t2060;
  t9386 = t9383 + t9385;
  t9018 = -1.*t2528*t7117;
  t9050 = t8949 + t9018;
  t7180 = -1.*t2060*t7117;
  t7277 = t6753 + t7180;
  t9474 = 0.07996*t9264;
  t9475 = -0.135*t7707;
  t7867 = -1.*t1983*t2060*t1230;
  t7884 = -1.*t2528*t1230*t3205;
  t7913 = t7867 + t7884;
  t9273 = -1.*t2528*t1983*t1230;
  t9275 = t2060*t1230*t3205;
  t9278 = t9273 + t9275;
  p_output1[0]=-1.*t193*t644*var2[3] - 1.*t1082*t1230*var2[4];
  p_output1[1]=t1082*t193*var2[3] - 1.*t1230*t644*var2[4];
  p_output1[2]=-1.*t193*var2[4];
  p_output1[3]=0;
  p_output1[4]=t5457*var2[3] + t3587*var2[4] + t4244*var2[5] + t5088*var2[13];
  p_output1[5]=t6490*var2[3] + t5944*var2[4] + t6945*var2[5] + t7277*var2[13];
  p_output1[6]=t7913*var2[4] + t7707*var2[5] + t7707*var2[13];
  p_output1[7]=0;
  p_output1[8]=t8702*var2[3] + t8298*var2[4] + t8398*var2[5] + t8638*var2[13];
  p_output1[9]=t5088*var2[3] + t8837*var2[4] + t8997*var2[5] + t9050*var2[13];
  p_output1[10]=t9278*var2[4] + t9264*var2[5] + t9264*var2[13];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.135*t5457 + 0.08055*t193*t644 + 0.07996*t8702 + t5188*t9339 + t5389*t9354)*var2[3] + (0.08055*t1082*t1230 - 0.135*t3587 + 0.07996*t8298 + t1082*t193*t1983*t9339 + t1082*t193*t3205*t9354)*var2[4] + (-0.135*t4244 + 0.07996*t8398 + t4064*t9339 + t3906*t9354)*var2[5] + (-0.135*t5088 + 0.07996*t8638 + t3906*t9379 + t4933*t9386)*var2[13];
  p_output1[13]=var2[1] + (-0.08055*t1082*t193 + 0.07996*t5088 - 0.135*t6490 + t3906*t9339 + t4933*t9354)*var2[3] + (-0.135*t5944 + 0.08055*t1230*t644 + 0.07996*t8837 + t193*t1983*t644*t9339 + t193*t3205*t644*t9354)*var2[4] + (-0.135*t6945 + 0.07996*t8997 + t5389*t9339 + t6694*t9354)*var2[5] + (-0.135*t7277 + 0.07996*t9050 + t6694*t9379 + t7117*t9386)*var2[13];
  p_output1[14]=var2[2] + (0.08055*t193 - 0.135*t7913 + 0.07996*t9278 - 1.*t1230*t1983*t9339 - 1.*t1230*t3205*t9354)*var2[4] + (-1.*t193*t3205*t9339 + t193*t1983*t9354 + t9474 + t9475)*var2[5] + (t193*t1983*t9379 + t193*t3205*t9386 + t9474 + t9475)*var2[13];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void dT_RightAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
