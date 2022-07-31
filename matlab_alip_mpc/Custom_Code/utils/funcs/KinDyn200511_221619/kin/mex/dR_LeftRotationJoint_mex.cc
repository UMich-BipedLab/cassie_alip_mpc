/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:54 GMT-04:00
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
  double t126;
  double t2090;
  double t4205;
  double t3606;
  double t4753;
  double t5111;
  double t5022;
  double t4841;
  double t5362;
  double t5370;
  double t5436;
  double t5445;
  double t5615;
  double t5621;
  double t5622;
  double t5695;
  double t5700;
  double t5701;
  double t5703;
  double t5526;
  double t5541;
  double t5549;
  double t5739;
  double t5748;
  double t5750;
  double t5031;
  double t5129;
  double t5170;
  double t5809;
  double t5814;
  double t5552;
  double t5568;
  double t5830;
  double t5577;
  double t5578;
  double t5579;
  double t5624;
  double t5883;
  double t5718;
  double t5719;
  double t5720;
  double t5722;
  double t5723;
  double t5916;
  double t5917;
  double t5918;
  double t5810;
  double t5812;
  double t5820;
  double t5823;
  double t5862;
  double t5863;
  double t5869;
  double t5895;
  double t5846;
  double t5850;
  double t5851;
  double t5909;
  double t5911;
  double t5912;
  double t5886;
  double t5888;
  double t5889;
  double t5901;
  double t5902;
  double t5903;
  double t5936;
  double t5938;
  double t5940;
  t126 = Cos(var1[3]);
  t2090 = Cos(var1[4]);
  t4205 = Cos(var1[6]);
  t3606 = Cos(var1[5]);
  t4753 = Sin(var1[5]);
  t5111 = Sin(var1[4]);
  t5022 = Sin(var1[3]);
  t4841 = Sin(var1[6]);
  t5362 = t126*t3606*t5111;
  t5370 = t5022*t4753;
  t5436 = t5362 + t5370;
  t5445 = t5436*t4841;
  t5615 = -1.*t126*t3606;
  t5621 = -1.*t5022*t5111*t4753;
  t5622 = t5615 + t5621;
  t5695 = t3606*t5022*t5111;
  t5700 = -1.*t126*t4753;
  t5701 = t5695 + t5700;
  t5703 = t5701*t4841;
  t5526 = -1.*t3606*t5022;
  t5541 = t126*t5111*t4753;
  t5549 = t5526 + t5541;
  t5739 = t2090*t4205*t4753;
  t5748 = t2090*t3606*t4841;
  t5750 = t5739 + t5748;
  t5031 = t3606*t5022;
  t5129 = -1.*t126*t5111*t4753;
  t5170 = t5031 + t5129;
  t5809 = t4205*t5436;
  t5814 = Sin(var1[7]);
  t5552 = t4205*t5549;
  t5568 = t5552 + t5445;
  t5830 = Cos(var1[7]);
  t5577 = -1.*t3606*t5022*t5111;
  t5578 = t126*t4753;
  t5579 = t5577 + t5578;
  t5624 = t5622*t4841;
  t5883 = t4205*t5701;
  t5718 = t126*t3606;
  t5719 = t5022*t5111*t4753;
  t5720 = t5718 + t5719;
  t5722 = t4205*t5720;
  t5723 = t5722 + t5703;
  t5916 = t2090*t3606*t4205;
  t5917 = -1.*t2090*t4753*t4841;
  t5918 = t5916 + t5917;
  t5810 = t5170*t4841;
  t5812 = t5809 + t5810;
  t5820 = -1.*t5549*t4841;
  t5823 = t5809 + t5820;
  t5862 = t4205*t5622;
  t5863 = t5579*t4841;
  t5869 = t5862 + t5863;
  t5895 = -1.*t2090*t5022*t5814;
  t5846 = t126*t2090*t4205*t4753;
  t5850 = t126*t2090*t3606*t4841;
  t5851 = t5846 + t5850;
  t5909 = t126*t2090*t5830;
  t5911 = t5568*t5814;
  t5912 = t5909 + t5911;
  t5886 = t5883 + t5624;
  t5888 = -1.*t5720*t4841;
  t5889 = t5883 + t5888;
  t5901 = t2090*t4205*t5022*t4753;
  t5902 = t2090*t3606*t5022*t4841;
  t5903 = t5901 + t5902;
  t5936 = -1.*t4205*t5111*t4753;
  t5938 = -1.*t3606*t5111*t4841;
  t5940 = t5936 + t5938;
  p_output1[0]=(-1.*t4205*t5579 + t5624)*var2[3] + (-1.*t126*t2090*t3606*t4205 + t126*t2090*t4753*t4841)*var2[4] + (-1.*t4205*t5170 + t5445)*var2[5] + t5568*var2[6];
  p_output1[1]=(-1.*t4205*t5436 + t4841*t5549)*var2[3] + (-1.*t2090*t3606*t4205*t5022 + t2090*t4753*t4841*t5022)*var2[4] + (-1.*t4205*t5622 + t5703)*var2[5] + t5723*var2[6];
  p_output1[2]=(t3606*t4205*t5111 - 1.*t4753*t4841*t5111)*var2[4] + t5750*var2[5] + t5750*var2[6];
  p_output1[3]=(-1.*t2090*t5022*t5830 + t5814*t5869)*var2[3] + (-1.*t126*t5111*t5830 + t5814*t5851)*var2[4] + t5812*t5814*var2[5] + t5814*t5823*var2[6] + (-1.*t126*t2090*t5814 + t5568*t5830)*var2[7];
  p_output1[4]=t5912*var2[3] + (-1.*t5022*t5111*t5830 + t5814*t5903)*var2[4] + t5814*t5886*var2[5] + t5814*t5889*var2[6] + (t5723*t5830 + t5895)*var2[7];
  p_output1[5]=(-1.*t2090*t5830 + t5814*t5940)*var2[4] + t5814*t5918*var2[5] + t5814*t5918*var2[6] + (t5111*t5814 + t5750*t5830)*var2[7];
  p_output1[6]=(-1.*t5830*t5869 + t5895)*var2[3] + (-1.*t126*t5111*t5814 - 1.*t5830*t5851)*var2[4] - 1.*t5812*t5830*var2[5] - 1.*t5823*t5830*var2[6] + t5912*var2[7];
  p_output1[7]=(t126*t2090*t5814 - 1.*t5568*t5830)*var2[3] + (-1.*t5022*t5111*t5814 - 1.*t5830*t5903)*var2[4] - 1.*t5830*t5886*var2[5] - 1.*t5830*t5889*var2[6] + (t5723*t5814 + t2090*t5022*t5830)*var2[7];
  p_output1[8]=(-1.*t2090*t5814 - 1.*t5830*t5940)*var2[4] - 1.*t5830*t5918*var2[5] - 1.*t5830*t5918*var2[6] + (t5750*t5814 - 1.*t5111*t5830)*var2[7];
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

#include "dR_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void dR_LeftRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
