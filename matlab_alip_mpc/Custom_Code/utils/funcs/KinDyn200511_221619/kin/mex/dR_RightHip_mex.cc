/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:04 GMT-04:00
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
  double t1963;
  double t2415;
  double t2816;
  double t2701;
  double t2958;
  double t717;
  double t3166;
  double t3060;
  double t3080;
  double t3254;
  double t3264;
  double t3269;
  double t3380;
  double t3391;
  double t3415;
  double t3461;
  double t3463;
  double t3472;
  double t3558;
  double t3561;
  double t3565;
  double t3567;
  double t3617;
  double t3618;
  double t3638;
  double t3706;
  double t3304;
  double t3307;
  double t3308;
  double t3738;
  double t3699;
  double t3417;
  double t3425;
  double t3435;
  double t3441;
  double t3451;
  double t3486;
  double t3855;
  double t3586;
  double t3592;
  double t3593;
  double t3598;
  double t3599;
  double t3931;
  double t3933;
  double t3936;
  double t3712;
  double t3715;
  double t3718;
  double t3749;
  double t3753;
  double t3758;
  double t3762;
  double t3889;
  double t3902;
  double t3904;
  double t3909;
  double t3805;
  double t3810;
  double t3811;
  double t3837;
  double t3838;
  double t3846;
  double t3857;
  double t3882;
  double t3885;
  double t4008;
  double t4009;
  double t4014;
  t1963 = Cos(var1[3]);
  t2415 = Cos(var1[4]);
  t2816 = Sin(var1[13]);
  t2701 = Cos(var1[5]);
  t2958 = Sin(var1[5]);
  t717 = Cos(var1[13]);
  t3166 = Sin(var1[3]);
  t3060 = Sin(var1[4]);
  t3080 = t1963*t2701*t3060;
  t3254 = t3166*t2958;
  t3264 = t3080 + t3254;
  t3269 = t2816*t3264;
  t3380 = -1.*t2701*t3166;
  t3391 = t1963*t3060*t2958;
  t3415 = t3380 + t3391;
  t3461 = -1.*t1963*t2701;
  t3463 = -1.*t3166*t3060*t2958;
  t3472 = t3461 + t3463;
  t3558 = t2701*t3166*t3060;
  t3561 = -1.*t1963*t2958;
  t3565 = t3558 + t3561;
  t3567 = t2816*t3565;
  t3617 = t2415*t2701*t2816;
  t3618 = t717*t2415*t2958;
  t3638 = t3617 + t3618;
  t3706 = Sin(var1[14]);
  t3304 = t2701*t3166;
  t3307 = -1.*t1963*t3060*t2958;
  t3308 = t3304 + t3307;
  t3738 = t717*t3264;
  t3699 = Cos(var1[14]);
  t3417 = t717*t3415;
  t3425 = t3269 + t3417;
  t3435 = -1.*t2701*t3166*t3060;
  t3441 = t1963*t2958;
  t3451 = t3435 + t3441;
  t3486 = t2816*t3472;
  t3855 = t717*t3565;
  t3586 = t1963*t2701;
  t3592 = t3166*t3060*t2958;
  t3593 = t3586 + t3592;
  t3598 = t717*t3593;
  t3599 = t3567 + t3598;
  t3931 = t717*t2415*t2701;
  t3933 = -1.*t2415*t2816*t2958;
  t3936 = t3931 + t3933;
  t3712 = t1963*t2415*t2701*t2816;
  t3715 = t717*t1963*t2415*t2958;
  t3718 = t3712 + t3715;
  t3749 = t2816*t3308;
  t3753 = t3738 + t3749;
  t3758 = -1.*t2816*t3415;
  t3762 = t3738 + t3758;
  t3889 = t3699*t1963*t2415;
  t3902 = t3706*t3425;
  t3904 = t3889 + t3902;
  t3909 = -1.*t2415*t3706*t3166;
  t3805 = t2816*t3451;
  t3810 = t717*t3472;
  t3811 = t3805 + t3810;
  t3837 = t2415*t2701*t2816*t3166;
  t3838 = t717*t2415*t3166*t2958;
  t3846 = t3837 + t3838;
  t3857 = t3855 + t3486;
  t3882 = -1.*t2816*t3593;
  t3885 = t3855 + t3882;
  t4008 = -1.*t2701*t2816*t3060;
  t4009 = -1.*t717*t3060*t2958;
  t4014 = t4008 + t4009;
  p_output1[0]=(t3486 - 1.*t3451*t717)*var2[3] + (t1963*t2415*t2816*t2958 - 1.*t1963*t2415*t2701*t717)*var2[4] + (t3269 - 1.*t3308*t717)*var2[5] + t3425*var2[13];
  p_output1[1]=(t2816*t3415 - 1.*t3264*t717)*var2[3] + (t2415*t2816*t2958*t3166 - 1.*t2415*t2701*t3166*t717)*var2[4] + (t3567 - 1.*t3472*t717)*var2[5] + t3599*var2[13];
  p_output1[2]=(-1.*t2816*t2958*t3060 + t2701*t3060*t717)*var2[4] + t3638*var2[5] + t3638*var2[13];
  p_output1[3]=(-1.*t2415*t3166*t3699 + t3706*t3811)*var2[3] + (-1.*t1963*t3060*t3699 + t3706*t3718)*var2[4] + t3706*t3753*var2[5] + t3706*t3762*var2[13] + (t3425*t3699 - 1.*t1963*t2415*t3706)*var2[14];
  p_output1[4]=t3904*var2[3] + (-1.*t3060*t3166*t3699 + t3706*t3846)*var2[4] + t3706*t3857*var2[5] + t3706*t3885*var2[13] + (t3599*t3699 + t3909)*var2[14];
  p_output1[5]=(-1.*t2415*t3699 + t3706*t4014)*var2[4] + t3706*t3936*var2[5] + t3706*t3936*var2[13] + (t3638*t3699 + t3060*t3706)*var2[14];
  p_output1[6]=(-1.*t3699*t3811 + t3909)*var2[3] + (-1.*t1963*t3060*t3706 - 1.*t3699*t3718)*var2[4] - 1.*t3699*t3753*var2[5] - 1.*t3699*t3762*var2[13] + t3904*var2[14];
  p_output1[7]=(-1.*t3425*t3699 + t1963*t2415*t3706)*var2[3] + (-1.*t3060*t3166*t3706 - 1.*t3699*t3846)*var2[4] - 1.*t3699*t3857*var2[5] - 1.*t3699*t3885*var2[13] + (t2415*t3166*t3699 + t3599*t3706)*var2[14];
  p_output1[8]=(-1.*t2415*t3706 - 1.*t3699*t4014)*var2[4] - 1.*t3699*t3936*var2[5] - 1.*t3699*t3936*var2[13] + (-1.*t3060*t3699 + t3638*t3706)*var2[14];
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

#include "dR_RightHip_mex.hh"

namespace SymExpression
{

void dR_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
