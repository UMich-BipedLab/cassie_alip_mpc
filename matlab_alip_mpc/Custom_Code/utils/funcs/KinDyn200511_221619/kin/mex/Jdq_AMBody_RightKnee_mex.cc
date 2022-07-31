/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:14 GMT-04:00
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
  double t1351;
  double t1418;
  double t1606;
  double t872;
  double t1180;
  double t1305;
  double t2014;
  double t3383;
  double t3092;
  double t3215;
  double t3411;
  double t1620;
  double t213;
  double t3223;
  double t3541;
  double t3680;
  double t3979;
  double t4280;
  double t4305;
  double t4531;
  double t4856;
  double t2528;
  double t5920;
  double t6121;
  double t6170;
  double t6399;
  double t6424;
  double t760;
  double t1179;
  double t1648;
  double t1813;
  double t1875;
  double t2267;
  double t2373;
  double t2560;
  double t2588;
  double t2812;
  double t2837;
  double t3782;
  double t3816;
  double t3969;
  double t4342;
  double t4872;
  double t5057;
  double t5252;
  double t5424;
  double t5471;
  double t5481;
  double t5593;
  double t5614;
  double t5665;
  double t5669;
  double t6197;
  double t6206;
  double t6251;
  double t6276;
  double t6450;
  double t6465;
  double t6469;
  double t6482;
  double t6489;
  double t6490;
  double t6491;
  double t6501;
  double t6510;
  double t6518;
  double t6590;
  double t6591;
  double t6593;
  double t6605;
  double t6606;
  double t6608;
  double t6629;
  double t6630;
  double t6633;
  double t6716;
  double t6717;
  double t6724;
  double t6727;
  double t6730;
  double t6736;
  double t6742;
  double t6753;
  double t6760;
  double t6762;
  double t6765;
  double t6767;
  t1351 = Cos(var1[14]);
  t1418 = -1.*t1351;
  t1606 = 0. + t1418;
  t872 = Sin(var1[4]);
  t1180 = Cos(var1[4]);
  t1305 = Cos(var1[5]);
  t2014 = Cos(var1[13]);
  t3383 = Cos(var1[15]);
  t3092 = Cos(var1[16]);
  t3215 = Sin(var1[15]);
  t3411 = Sin(var1[16]);
  t1620 = Sin(var1[13]);
  t213 = Sin(var1[14]);
  t3223 = t3092*t3215;
  t3541 = t3383*t3411;
  t3680 = 0. + t3223 + t3541;
  t3979 = -1.*t3383*t3092;
  t4280 = t3215*t3411;
  t4305 = 0. + t3979 + t4280;
  t4531 = t213*t3680;
  t4856 = 0. + t4531;
  t2528 = Sin(var1[5]);
  t5920 = t3383*t3092;
  t6121 = -1.*t3215*t3411;
  t6170 = 0. + t5920 + t6121;
  t6399 = t213*t6170;
  t6424 = 0. + t6399;
  t760 = 0. + t213;
  t1179 = -1.*t760*t872;
  t1648 = t1606*t1620;
  t1813 = 0. + t1648;
  t1875 = t1305*t1813;
  t2267 = t2014*t1606;
  t2373 = 0. + t2267;
  t2560 = t2373*t2528;
  t2588 = 0. + t1875 + t2560;
  t2812 = t1180*t2588;
  t2837 = 0. + t1179 + t2812;
  t3782 = t1351*t3680;
  t3816 = 0. + t3782;
  t3969 = -1.*t3816*t872;
  t4342 = t2014*t4305;
  t4872 = t1620*t4856;
  t5057 = 0. + t4342 + t4872;
  t5252 = t1305*t5057;
  t5424 = -1.*t1620*t4305;
  t5471 = t2014*t4856;
  t5481 = 0. + t5424 + t5471;
  t5593 = t5481*t2528;
  t5614 = 0. + t5252 + t5593;
  t5665 = t1180*t5614;
  t5669 = 0. + t3969 + t5665;
  t6197 = t1351*t6170;
  t6206 = 0. + t6197;
  t6251 = -1.*t6206*t872;
  t6276 = t2014*t3680;
  t6450 = t1620*t6424;
  t6465 = 0. + t6276 + t6450;
  t6469 = t1305*t6465;
  t6482 = -1.*t1620*t3680;
  t6489 = t2014*t6424;
  t6490 = 0. + t6482 + t6489;
  t6491 = t6490*t2528;
  t6501 = 0. + t6469 + t6491;
  t6510 = t1180*t6501;
  t6518 = 0. + t6251 + t6510;
  t6590 = t2373*t1305;
  t6591 = -1.*t1813*t2528;
  t6593 = 0. + t6590 + t6591;
  t6605 = t1305*t5481;
  t6606 = -1.*t5057*t2528;
  t6608 = 0. + t6605 + t6606;
  t6629 = t1305*t6490;
  t6630 = -1.*t6465*t2528;
  t6633 = 0. + t6629 + t6630;
  t6716 = -3.e-6*t760;
  t6717 = 0.00216*t3816;
  t6724 = 0.000956*t6206;
  t6727 = t6716 + t6717 + t6724;
  t6730 = -1.e-6*t760;
  t6736 = 0.000956*t3816;
  t6742 = 0.00144*t6206;
  t6753 = t6730 + t6736 + t6742;
  t6760 = 0.00334*t760;
  t6762 = -3.e-6*t3816;
  t6765 = -1.e-6*t6206;
  t6767 = t6760 + t6762 + t6765;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-3.e-6*t2837 + 0.00216*t5669 + 0.000956*t6518;
  p_output1[10]=-1.e-6*t2837 + 0.000956*t5669 + 0.00144*t6518;
  p_output1[11]=0.00334*t2837 - 3.e-6*t5669 - 1.e-6*t6518;
  p_output1[12]=-3.e-6*t6593 + 0.00216*t6608 + 0.000956*t6633;
  p_output1[13]=-1.e-6*t6593 + 0.000956*t6608 + 0.00144*t6633;
  p_output1[14]=0.00334*t6593 - 3.e-6*t6608 - 1.e-6*t6633;
  p_output1[15]=t6727;
  p_output1[16]=t6753;
  p_output1[17]=t6767;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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
  p_output1[39]=t6727;
  p_output1[40]=t6753;
  p_output1[41]=t6767;
  p_output1[42]=0.000956*t3680 + 0.00216*t4305;
  p_output1[43]=0.00144*t3680 + 0.000956*t4305;
  p_output1[44]=-1.e-6*t3680 - 3.e-6*t4305;
  p_output1[45]=-3.e-6;
  p_output1[46]=-1.e-6;
  p_output1[47]=0.00334;
  p_output1[48]=-3.e-6;
  p_output1[49]=-1.e-6;
  p_output1[50]=0.00334;
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

#include "Jdq_AMBody_RightKnee_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
