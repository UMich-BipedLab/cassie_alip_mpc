/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:33 GMT-04:00
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
  double t2470;
  double t1136;
  double t1141;
  double t2636;
  double t3145;
  double t3154;
  double t3149;
  double t3160;
  double t3215;
  double t3221;
  double t3224;
  double t3229;
  double t3244;
  double t3245;
  double t3246;
  double t3175;
  double t3181;
  double t3182;
  double t3285;
  double t3286;
  double t3289;
  double t3299;
  double t3348;
  double t3351;
  double t3353;
  double t3230;
  double t3233;
  double t3235;
  double t3373;
  double t3184;
  double t3187;
  double t3190;
  double t3183;
  double t3306;
  double t3311;
  double t3313;
  double t3410;
  double t3247;
  double t3251;
  double t3429;
  double t3431;
  double t3433;
  double t3472;
  double t3473;
  double t3150;
  double t3166;
  double t3171;
  double t3361;
  double t3363;
  double t3364;
  double t3479;
  double t3480;
  double t3481;
  double t3484;
  double t3487;
  double t3496;
  double t3372;
  double t3375;
  double t3236;
  double t3239;
  double t3380;
  double t3382;
  double t3195;
  double t3196;
  double t3385;
  double t3388;
  double t3390;
  double t3262;
  double t3265;
  double t3266;
  double t3400;
  double t3404;
  double t3406;
  double t3273;
  double t3279;
  double t3280;
  double t3411;
  double t3301;
  double t3302;
  double t3522;
  double t3523;
  double t3527;
  double t3529;
  double t3530;
  double t3413;
  double t3421;
  double t3316;
  double t3323;
  double t3639;
  double t3640;
  double t3332;
  double t3339;
  double t3340;
  double t3442;
  double t3450;
  double t3460;
  t2470 = Cos(var1[3]);
  t1136 = Cos(var1[4]);
  t1141 = Sin(var1[3]);
  t2636 = Sin(var1[4]);
  t3145 = Cos(var1[6]);
  t3154 = Cos(var1[5]);
  t3149 = Sin(var1[5]);
  t3160 = Sin(var1[6]);
  t3215 = t2470*t3154*t2636;
  t3221 = t1141*t3149;
  t3224 = t3215 + t3221;
  t3229 = t3145*t3224;
  t3244 = -1.*t3154*t1141;
  t3245 = t2470*t2636*t3149;
  t3246 = t3244 + t3245;
  t3175 = -1.*t2470*t3154;
  t3181 = -1.*t1141*t2636*t3149;
  t3182 = t3175 + t3181;
  t3285 = t3154*t1141*t2636;
  t3286 = -1.*t2470*t3149;
  t3289 = t3285 + t3286;
  t3299 = t3145*t3289;
  t3348 = t1136*t3154*t3145;
  t3351 = -1.*t1136*t3149*t3160;
  t3353 = t3348 + t3351;
  t3230 = t3154*t1141;
  t3233 = -1.*t2470*t2636*t3149;
  t3235 = t3230 + t3233;
  t3373 = -1.*t3224*t3160;
  t3184 = -1.*t3154*t1141*t2636;
  t3187 = t2470*t3149;
  t3190 = t3184 + t3187;
  t3183 = t3145*t3182;
  t3306 = t2470*t3154;
  t3311 = t1141*t2636*t3149;
  t3313 = t3306 + t3311;
  t3410 = -1.*t3289*t3160;
  t3247 = -1.*t3246*t3160;
  t3251 = t3229 + t3247;
  t3429 = -1.*t1136*t3145*t3149;
  t3431 = -1.*t1136*t3154*t3160;
  t3433 = t3429 + t3431;
  t3472 = -1.*t3145;
  t3473 = 1. + t3472;
  t3150 = t2470*t1136*t3145*t3149;
  t3166 = t2470*t1136*t3154*t3160;
  t3171 = t3150 + t3166;
  t3361 = t2470*t1136*t3154*t3145;
  t3363 = -1.*t2470*t1136*t3149*t3160;
  t3364 = t3361 + t3363;
  t3479 = 0.07996*t3473;
  t3480 = -0.135*t3160;
  t3481 = 0. + t3479 + t3480;
  t3484 = 0.135*t3473;
  t3487 = 0.07996*t3160;
  t3496 = 0. + t3484 + t3487;
  t3372 = t3145*t3235;
  t3375 = t3372 + t3373;
  t3236 = t3235*t3160;
  t3239 = t3229 + t3236;
  t3380 = -1.*t3145*t3246;
  t3382 = t3380 + t3373;
  t3195 = t3190*t3160;
  t3196 = t3183 + t3195;
  t3385 = t3145*t3190;
  t3388 = -1.*t3182*t3160;
  t3390 = t3385 + t3388;
  t3262 = t1136*t3145*t1141*t3149;
  t3265 = t1136*t3154*t1141*t3160;
  t3266 = t3262 + t3265;
  t3400 = t1136*t3154*t3145*t1141;
  t3404 = -1.*t1136*t1141*t3149*t3160;
  t3406 = t3400 + t3404;
  t3273 = t3145*t3246;
  t3279 = t3224*t3160;
  t3280 = t3273 + t3279;
  t3411 = t3183 + t3410;
  t3301 = t3182*t3160;
  t3302 = t3299 + t3301;
  t3522 = -0.135*t3145;
  t3523 = t3522 + t3487;
  t3527 = 0.07996*t3145;
  t3529 = 0.135*t3160;
  t3530 = t3527 + t3529;
  t3413 = -1.*t3145*t3313;
  t3421 = t3413 + t3410;
  t3316 = -1.*t3313*t3160;
  t3323 = t3299 + t3316;
  t3639 = 0.07996*t3433;
  t3640 = 0.135*t3353;
  t3332 = -1.*t3145*t2636*t3149;
  t3339 = -1.*t3154*t2636*t3160;
  t3340 = t3332 + t3339;
  t3442 = -1.*t3154*t3145*t2636;
  t3450 = t2636*t3149*t3160;
  t3460 = t3442 + t3450;
  p_output1[0]=-1.*t1136*t1141*var2[3] - 1.*t2470*t2636*var2[4];
  p_output1[1]=t1136*t2470*var2[3] - 1.*t1141*t2636*var2[4];
  p_output1[2]=-1.*t1136*var2[4];
  p_output1[3]=0;
  p_output1[4]=t3196*var2[3] + t3171*var2[4] + t3239*var2[5] + t3251*var2[6];
  p_output1[5]=t3280*var2[3] + t3266*var2[4] + t3302*var2[5] + t3323*var2[6];
  p_output1[6]=t3340*var2[4] + t3353*var2[5] + t3353*var2[6];
  p_output1[7]=0;
  p_output1[8]=t3390*var2[3] + t3364*var2[4] + t3375*var2[5] + t3382*var2[6];
  p_output1[9]=t3251*var2[3] + t3406*var2[4] + t3411*var2[5] + t3421*var2[6];
  p_output1[10]=t3460*var2[4] + t3433*var2[5] + t3433*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.08055*t1136*t1141 + 0.135*t3196 + 0.07996*t3390 + t3190*t3481 + t3182*t3496)*var2[3] + (0.08055*t2470*t2636 + 0.135*t3171 + 0.07996*t3364 + t1136*t2470*t3154*t3481 + t1136*t2470*t3149*t3496)*var2[4] + (0.135*t3239 + 0.07996*t3375 + t3235*t3481 + t3224*t3496)*var2[5] + (0.135*t3251 + 0.07996*t3382 + t3224*t3523 + t3246*t3530)*var2[6];
  p_output1[13]=var2[1] + (-0.08055*t1136*t2470 + 0.07996*t3251 + 0.135*t3280 + t3224*t3481 + t3246*t3496)*var2[3] + (0.08055*t1141*t2636 + 0.135*t3266 + 0.07996*t3406 + t1136*t1141*t3154*t3481 + t1136*t1141*t3149*t3496)*var2[4] + (0.135*t3302 + 0.07996*t3411 + t3182*t3481 + t3289*t3496)*var2[5] + (0.135*t3323 + 0.07996*t3421 + t3289*t3523 + t3313*t3530)*var2[6];
  p_output1[14]=var2[2] + (0.08055*t1136 + 0.135*t3340 + 0.07996*t3460 - 1.*t2636*t3154*t3481 - 1.*t2636*t3149*t3496)*var2[4] + (-1.*t1136*t3149*t3481 + t1136*t3154*t3496 + t3639 + t3640)*var2[5] + (t1136*t3154*t3523 + t1136*t3149*t3530 + t3639 + t3640)*var2[6];
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

#include "dT_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void dT_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
