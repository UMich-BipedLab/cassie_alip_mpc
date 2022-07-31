/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:28 GMT-04:00
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
  double t192;
  double t557;
  double t124;
  double t419;
  double t563;
  double t114;
  double t1266;
  double t1389;
  double t1799;
  double t1065;
  double t1108;
  double t1206;
  double t428;
  double t718;
  double t834;
  double t2244;
  double t1428;
  double t1432;
  double t1484;
  double t1614;
  double t1685;
  double t1800;
  double t1810;
  double t1815;
  double t1851;
  double t1881;
  double t2032;
  double t2038;
  double t2050;
  double t2347;
  double t2354;
  double t2376;
  double t2487;
  double t2488;
  double t2627;
  double t1692;
  double t2396;
  double t2439;
  double t4062;
  double t4100;
  double t4205;
  double t3922;
  double t3987;
  double t4007;
  double t3078;
  double t3082;
  double t3137;
  double t4508;
  double t4525;
  double t4526;
  double t3346;
  double t3358;
  double t3447;
  double t3527;
  double t3538;
  double t3677;
  double t3678;
  double t3679;
  double t3695;
  double t3724;
  double t3820;
  double t4830;
  double t4928;
  double t4934;
  double t840;
  double t1312;
  double t1324;
  double t5259;
  double t5262;
  double t5281;
  double t5283;
  double t5298;
  double t5349;
  double t2732;
  double t2741;
  double t3070;
  double t3234;
  double t3269;
  double t3335;
  double t4029;
  double t4249;
  double t4384;
  double t5282;
  double t5364;
  double t5430;
  double t5457;
  double t5504;
  double t5511;
  double t4538;
  double t4558;
  double t4568;
  double t4587;
  double t4589;
  double t4595;
  double t5546;
  double t5593;
  double t5628;
  double t4756;
  double t4773;
  double t4780;
  double t5031;
  double t5049;
  double t5126;
  double t5207;
  double t5209;
  double t5215;
  double t5756;
  double t5761;
  double t5779;
  double t5796;
  double t5812;
  double t5836;
  double t5843;
  double t5868;
  double t5875;
  double t5885;
  double t5889;
  double t5905;
  t192 = Cos(var1[5]);
  t557 = Sin(var1[3]);
  t124 = Cos(var1[3]);
  t419 = Sin(var1[4]);
  t563 = Sin(var1[5]);
  t114 = Cos(var1[6]);
  t1266 = Sin(var1[6]);
  t1389 = Cos(var1[4]);
  t1799 = Cos(var1[7]);
  t1065 = -1.*t192*t557;
  t1108 = t124*t419*t563;
  t1206 = t1065 + t1108;
  t428 = t124*t192*t419;
  t718 = t557*t563;
  t834 = t428 + t718;
  t2244 = Sin(var1[7]);
  t1428 = -1.*t192*t114;
  t1432 = t563*t1266;
  t1484 = 0. + t1428 + t1432;
  t1614 = t1389*t1484;
  t1685 = 0. + t1614;
  t1800 = -1.*t114*t1799;
  t1810 = 0. + t1800;
  t1815 = t1810*t563;
  t1851 = -1.*t1799*t1266;
  t1881 = 0. + t1851;
  t2032 = t192*t1881;
  t2038 = 0. + t1815 + t2032;
  t2050 = t1389*t2038;
  t2347 = 0. + t2244;
  t2354 = -1.*t419*t2347;
  t2376 = 0. + t2050 + t2354;
  t2487 = t114*t1206;
  t2488 = t834*t1266;
  t2627 = t2487 + t2488;
  t1692 = 0.000842*t1685;
  t2396 = -1.e-6*t2376;
  t2439 = t1692 + t2396;
  t4062 = t124*t192;
  t4100 = t557*t419*t563;
  t4205 = t4062 + t4100;
  t3922 = t192*t557*t419;
  t3987 = -1.*t124*t563;
  t4007 = t3922 + t3987;
  t3078 = -1.e-6*t1685;
  t3082 = 0.00644*t2376;
  t3137 = t3078 + t3082;
  t4508 = t114*t4205;
  t4525 = t4007*t1266;
  t4526 = t4508 + t4525;
  t3346 = 0. + t1799;
  t3358 = -1.*t3346*t419;
  t3447 = t114*t2244;
  t3527 = 0. + t3447;
  t3538 = t563*t3527;
  t3677 = t1266*t2244;
  t3678 = 0. + t3677;
  t3679 = t192*t3678;
  t3695 = 0. + t3538 + t3679;
  t3724 = t1389*t3695;
  t3820 = 0. + t3358 + t3724;
  t4830 = t1389*t114*t563;
  t4928 = t1389*t192*t1266;
  t4934 = t4830 + t4928;
  t840 = -1.*t114*t834;
  t1312 = t1206*t1266;
  t1324 = t840 + t1312;
  t5259 = t114*t563;
  t5262 = t192*t1266;
  t5281 = 0. + t5259 + t5262;
  t5283 = t192*t1810;
  t5298 = -1.*t563*t1881;
  t5349 = 0. + t5283 + t5298;
  t2732 = -1.*t1799*t2627;
  t2741 = t124*t1389*t2244;
  t3070 = t2732 + t2741;
  t3234 = t124*t1389*t1799;
  t3269 = t2627*t2244;
  t3335 = t3234 + t3269;
  t4029 = -1.*t114*t4007;
  t4249 = t4205*t1266;
  t4384 = t4029 + t4249;
  t5282 = 0.000842*t5281;
  t5364 = -1.e-6*t5349;
  t5430 = t5282 + t5364;
  t5457 = -1.e-6*t5281;
  t5504 = 0.00644*t5349;
  t5511 = t5457 + t5504;
  t4538 = -1.*t1799*t4526;
  t4558 = t1389*t557*t2244;
  t4568 = t4538 + t4558;
  t4587 = t1389*t1799*t557;
  t4589 = t4526*t2244;
  t4595 = t4587 + t4589;
  t5546 = t192*t3527;
  t5593 = -1.*t563*t3678;
  t5628 = 0. + t5546 + t5593;
  t4756 = -1.*t1389*t192*t114;
  t4773 = t1389*t563*t1266;
  t4780 = t4756 + t4773;
  t5031 = -1.*t1799*t4934;
  t5049 = -1.*t419*t2244;
  t5126 = t5031 + t5049;
  t5207 = -1.*t1799*t419;
  t5209 = t4934*t2244;
  t5215 = t5207 + t5209;
  t5756 = -1.e-6*t1324*t2347;
  t5761 = 0.00644*t2347*t3070;
  t5779 = 0.00608*t3346*t3335;
  t5796 = t5756 + t5761 + t5779;
  t5812 = -1.e-6*t4384*t2347;
  t5836 = 0.00644*t2347*t4568;
  t5843 = 0.00608*t3346*t4595;
  t5868 = t5812 + t5836 + t5843;
  t5875 = -1.e-6*t4780*t2347;
  t5885 = 0.00644*t2347*t5126;
  t5889 = 0.00608*t3346*t5215;
  t5905 = t5875 + t5885 + t5889;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1324*t2439 + t3070*t3137 + 0.00608*t3335*t3820;
  p_output1[10]=t2439*t4384 + t3137*t4568 + 0.00608*t3820*t4595;
  p_output1[11]=t2439*t4780 + t3137*t5126 + 0.00608*t3820*t5215;
  p_output1[12]=t1324*t5430 + t3070*t5511 + 0.00608*t3335*t5628;
  p_output1[13]=t4384*t5430 + t4568*t5511 + 0.00608*t4595*t5628;
  p_output1[14]=t4780*t5430 + t5126*t5511 + 0.00608*t5215*t5628;
  p_output1[15]=t5796;
  p_output1[16]=t5868;
  p_output1[17]=t5905;
  p_output1[18]=t5796;
  p_output1[19]=t5868;
  p_output1[20]=t5905;
  p_output1[21]=-0.000842*t1324 + 1.e-6*t3070;
  p_output1[22]=-0.000842*t4384 + 1.e-6*t4568;
  p_output1[23]=-0.000842*t4780 + 1.e-6*t5126;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMWorld_LeftHip_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
