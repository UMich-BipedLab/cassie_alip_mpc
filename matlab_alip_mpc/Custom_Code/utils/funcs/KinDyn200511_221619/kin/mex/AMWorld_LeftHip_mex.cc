/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:25 GMT-04:00
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
  double t1944;
  double t2943;
  double t1115;
  double t2795;
  double t3253;
  double t738;
  double t4931;
  double t5295;
  double t5323;
  double t5351;
  double t5229;
  double t5297;
  double t5300;
  double t5305;
  double t5312;
  double t3657;
  double t4298;
  double t4566;
  double t2860;
  double t3509;
  double t3532;
  double t5126;
  double t5157;
  double t5174;
  double t5221;
  double t5227;
  double t5252;
  double t5257;
  double t5258;
  double t5262;
  double t5283;
  double t5286;
  double t5289;
  double t5303;
  double t5318;
  double t5320;
  double t5321;
  double t5363;
  double t5370;
  double t5375;
  double t5398;
  double t5400;
  double t5421;
  double t5427;
  double t5436;
  double t5437;
  double t5441;
  double t5475;
  double t5483;
  double t5484;
  double t5542;
  double t5555;
  double t5559;
  double t5565;
  double t5567;
  double t5293;
  double t5442;
  double t5460;
  double t5687;
  double t5689;
  double t5693;
  double t5662;
  double t5677;
  double t5680;
  double t5508;
  double t5510;
  double t5513;
  double t5704;
  double t5715;
  double t5716;
  double t5550;
  double t5551;
  double t5560;
  double t5570;
  double t5571;
  double t5579;
  double t5585;
  double t5591;
  double t5612;
  double t5624;
  double t5627;
  double t5628;
  double t5629;
  double t5633;
  double t5636;
  double t5646;
  double t5774;
  double t5779;
  double t5780;
  t1944 = Cos(var1[5]);
  t2943 = Sin(var1[3]);
  t1115 = Cos(var1[3]);
  t2795 = Sin(var1[4]);
  t3253 = Sin(var1[5]);
  t738 = Cos(var1[6]);
  t4931 = Sin(var1[6]);
  t5295 = Cos(var1[7]);
  t5323 = Sin(var1[7]);
  t5351 = 0. + t5323;
  t5229 = Cos(var1[4]);
  t5297 = -1.*t738*t5295;
  t5300 = 0. + t5297;
  t5305 = -1.*t5295*t4931;
  t5312 = 0. + t5305;
  t3657 = -1.*t1944*t2943;
  t4298 = t1115*t2795*t3253;
  t4566 = t3657 + t4298;
  t2860 = t1115*t1944*t2795;
  t3509 = t2943*t3253;
  t3532 = t2860 + t3509;
  t5126 = -1.*var2[7];
  t5157 = t738*t3253;
  t5174 = t1944*t4931;
  t5221 = 0. + t5157 + t5174;
  t5227 = var2[4]*t5221;
  t5252 = -1.*t1944*t738;
  t5257 = t3253*t4931;
  t5258 = 0. + t5252 + t5257;
  t5262 = t5229*t5258;
  t5283 = 0. + t5262;
  t5286 = var2[3]*t5283;
  t5289 = 0. + t5126 + t5227 + t5286;
  t5303 = t1944*t5300;
  t5318 = -1.*t3253*t5312;
  t5320 = 0. + t5303 + t5318;
  t5321 = var2[4]*t5320;
  t5363 = var2[5]*t5351;
  t5370 = var2[6]*t5351;
  t5375 = t5300*t3253;
  t5398 = t1944*t5312;
  t5400 = 0. + t5375 + t5398;
  t5421 = t5229*t5400;
  t5427 = -1.*t2795*t5351;
  t5436 = 0. + t5421 + t5427;
  t5437 = var2[3]*t5436;
  t5441 = 0. + t5321 + t5363 + t5370 + t5437;
  t5475 = t738*t4566;
  t5483 = t3532*t4931;
  t5484 = t5475 + t5483;
  t5542 = 0. + t5295;
  t5555 = t738*t5323;
  t5559 = 0. + t5555;
  t5565 = t4931*t5323;
  t5567 = 0. + t5565;
  t5293 = 0.000842*t5289;
  t5442 = -1.e-6*t5441;
  t5460 = 0. + t5293 + t5442;
  t5687 = t1115*t1944;
  t5689 = t2943*t2795*t3253;
  t5693 = t5687 + t5689;
  t5662 = t1944*t2943*t2795;
  t5677 = -1.*t1115*t3253;
  t5680 = t5662 + t5677;
  t5508 = -1.e-6*t5289;
  t5510 = 0.00644*t5441;
  t5513 = 0. + t5508 + t5510;
  t5704 = t738*t5693;
  t5715 = t5680*t4931;
  t5716 = t5704 + t5715;
  t5550 = var2[5]*t5542;
  t5551 = var2[6]*t5542;
  t5560 = t1944*t5559;
  t5570 = -1.*t3253*t5567;
  t5571 = 0. + t5560 + t5570;
  t5579 = var2[4]*t5571;
  t5585 = -1.*t5542*t2795;
  t5591 = t3253*t5559;
  t5612 = t1944*t5567;
  t5624 = 0. + t5591 + t5612;
  t5627 = t5229*t5624;
  t5628 = 0. + t5585 + t5627;
  t5629 = var2[3]*t5628;
  t5633 = 0. + t5550 + t5551 + t5579 + t5629;
  t5636 = 0.00608*t5633;
  t5646 = 0. + t5636;
  t5774 = t5229*t738*t3253;
  t5779 = t5229*t1944*t4931;
  t5780 = t5774 + t5779;
  p_output1[0]=(t1115*t5229*t5323 - 1.*t5295*t5484)*t5513 + (t1115*t5229*t5295 + t5323*t5484)*t5646 + t5460*(t4566*t4931 - 1.*t3532*t738);
  p_output1[1]=t5513*(t2943*t5229*t5323 - 1.*t5295*t5716) + t5646*(t2943*t5229*t5295 + t5323*t5716) + t5460*(t4931*t5693 - 1.*t5680*t738);
  p_output1[2]=t5513*(-1.*t2795*t5323 - 1.*t5295*t5780) + t5646*(-1.*t2795*t5295 + t5323*t5780) + t5460*(t3253*t4931*t5229 - 1.*t1944*t5229*t738);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMWorld_LeftHip_mex.hh"

namespace SymExpression
{

void AMWorld_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
