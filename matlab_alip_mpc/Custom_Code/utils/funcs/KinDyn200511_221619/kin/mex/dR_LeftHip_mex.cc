/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:17 GMT-04:00
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
  double t902;
  double t2373;
  double t2477;
  double t2381;
  double t2827;
  double t3175;
  double t3149;
  double t2941;
  double t3468;
  double t3542;
  double t3543;
  double t3547;
  double t3898;
  double t3912;
  double t3938;
  double t4055;
  double t4060;
  double t4098;
  double t4122;
  double t3728;
  double t3737;
  double t3764;
  double t4276;
  double t4278;
  double t4281;
  double t3150;
  double t3194;
  double t3396;
  double t4343;
  double t4375;
  double t3768;
  double t3770;
  double t4418;
  double t3809;
  double t3814;
  double t3822;
  double t3943;
  double t4571;
  double t4145;
  double t4155;
  double t4163;
  double t4182;
  double t4190;
  double t4706;
  double t4708;
  double t4714;
  double t4352;
  double t4366;
  double t4383;
  double t4397;
  double t4506;
  double t4509;
  double t4522;
  double t4606;
  double t4459;
  double t4461;
  double t4484;
  double t4667;
  double t4669;
  double t4671;
  double t4572;
  double t4576;
  double t4580;
  double t4631;
  double t4636;
  double t4641;
  double t4748;
  double t4752;
  double t4782;
  t902 = Cos(var1[3]);
  t2373 = Cos(var1[4]);
  t2477 = Cos(var1[6]);
  t2381 = Cos(var1[5]);
  t2827 = Sin(var1[5]);
  t3175 = Sin(var1[4]);
  t3149 = Sin(var1[3]);
  t2941 = Sin(var1[6]);
  t3468 = t902*t2381*t3175;
  t3542 = t3149*t2827;
  t3543 = t3468 + t3542;
  t3547 = t3543*t2941;
  t3898 = -1.*t902*t2381;
  t3912 = -1.*t3149*t3175*t2827;
  t3938 = t3898 + t3912;
  t4055 = t2381*t3149*t3175;
  t4060 = -1.*t902*t2827;
  t4098 = t4055 + t4060;
  t4122 = t4098*t2941;
  t3728 = -1.*t2381*t3149;
  t3737 = t902*t3175*t2827;
  t3764 = t3728 + t3737;
  t4276 = t2373*t2477*t2827;
  t4278 = t2373*t2381*t2941;
  t4281 = t4276 + t4278;
  t3150 = t2381*t3149;
  t3194 = -1.*t902*t3175*t2827;
  t3396 = t3150 + t3194;
  t4343 = t2477*t3543;
  t4375 = Sin(var1[7]);
  t3768 = t2477*t3764;
  t3770 = t3768 + t3547;
  t4418 = Cos(var1[7]);
  t3809 = -1.*t2381*t3149*t3175;
  t3814 = t902*t2827;
  t3822 = t3809 + t3814;
  t3943 = t3938*t2941;
  t4571 = t2477*t4098;
  t4145 = t902*t2381;
  t4155 = t3149*t3175*t2827;
  t4163 = t4145 + t4155;
  t4182 = t2477*t4163;
  t4190 = t4182 + t4122;
  t4706 = t2373*t2381*t2477;
  t4708 = -1.*t2373*t2827*t2941;
  t4714 = t4706 + t4708;
  t4352 = t3396*t2941;
  t4366 = t4343 + t4352;
  t4383 = -1.*t3764*t2941;
  t4397 = t4343 + t4383;
  t4506 = t2477*t3938;
  t4509 = t3822*t2941;
  t4522 = t4506 + t4509;
  t4606 = -1.*t2373*t3149*t4375;
  t4459 = t902*t2373*t2477*t2827;
  t4461 = t902*t2373*t2381*t2941;
  t4484 = t4459 + t4461;
  t4667 = t902*t2373*t4418;
  t4669 = t3770*t4375;
  t4671 = t4667 + t4669;
  t4572 = t4571 + t3943;
  t4576 = -1.*t4163*t2941;
  t4580 = t4571 + t4576;
  t4631 = t2373*t2477*t3149*t2827;
  t4636 = t2373*t2381*t3149*t2941;
  t4641 = t4631 + t4636;
  t4748 = -1.*t2477*t3175*t2827;
  t4752 = -1.*t2381*t3175*t2941;
  t4782 = t4748 + t4752;
  p_output1[0]=(-1.*t2477*t3822 + t3943)*var2[3] + (-1.*t2373*t2381*t2477*t902 + t2373*t2827*t2941*t902)*var2[4] + (-1.*t2477*t3396 + t3547)*var2[5] + t3770*var2[6];
  p_output1[1]=(-1.*t2477*t3543 + t2941*t3764)*var2[3] + (-1.*t2373*t2381*t2477*t3149 + t2373*t2827*t2941*t3149)*var2[4] + (-1.*t2477*t3938 + t4122)*var2[5] + t4190*var2[6];
  p_output1[2]=(t2381*t2477*t3175 - 1.*t2827*t2941*t3175)*var2[4] + t4281*var2[5] + t4281*var2[6];
  p_output1[3]=(-1.*t2373*t3149*t4418 + t4375*t4522)*var2[3] + (t4375*t4484 - 1.*t3175*t4418*t902)*var2[4] + t4366*t4375*var2[5] + t4375*t4397*var2[6] + (t3770*t4418 - 1.*t2373*t4375*t902)*var2[7];
  p_output1[4]=t4671*var2[3] + (-1.*t3149*t3175*t4418 + t4375*t4641)*var2[4] + t4375*t4572*var2[5] + t4375*t4580*var2[6] + (t4190*t4418 + t4606)*var2[7];
  p_output1[5]=(-1.*t2373*t4418 + t4375*t4782)*var2[4] + t4375*t4714*var2[5] + t4375*t4714*var2[6] + (t3175*t4375 + t4281*t4418)*var2[7];
  p_output1[6]=(-1.*t4418*t4522 + t4606)*var2[3] + (-1.*t4418*t4484 - 1.*t3175*t4375*t902)*var2[4] - 1.*t4366*t4418*var2[5] - 1.*t4397*t4418*var2[6] + t4671*var2[7];
  p_output1[7]=(-1.*t3770*t4418 + t2373*t4375*t902)*var2[3] + (-1.*t3149*t3175*t4375 - 1.*t4418*t4641)*var2[4] - 1.*t4418*t4572*var2[5] - 1.*t4418*t4580*var2[6] + (t4190*t4375 + t2373*t3149*t4418)*var2[7];
  p_output1[8]=(-1.*t2373*t4375 - 1.*t4418*t4782)*var2[4] - 1.*t4418*t4714*var2[5] - 1.*t4418*t4714*var2[6] + (t4281*t4375 - 1.*t3175*t4418)*var2[7];
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

#include "dR_LeftHip_mex.hh"

namespace SymExpression
{

void dR_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
