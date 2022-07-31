/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:47 GMT-04:00
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
  double t2923;
  double t2744;
  double t2985;
  double t2788;
  double t3033;
  double t3136;
  double t1387;
  double t1390;
  double t2790;
  double t3038;
  double t3059;
  double t3097;
  double t3103;
  double t3108;
  double t3110;
  double t3111;
  double t3112;
  double t3114;
  double t3138;
  double t3152;
  double t3168;
  double t3192;
  double t3223;
  double t3224;
  double t3236;
  double t3258;
  double t3193;
  double t3197;
  double t3640;
  double t3681;
  double t3685;
  double t3545;
  double t3573;
  double t3595;
  double t3818;
  double t3828;
  double t3830;
  double t3831;
  double t3836;
  double t3858;
  double t3861;
  double t3867;
  double t3888;
  double t3727;
  double t3993;
  double t4056;
  double t3999;
  double t4014;
  double t3169;
  double t3170;
  double t3179;
  double t4489;
  double t4494;
  double t4505;
  double t4618;
  double t4621;
  double t4625;
  double t4643;
  double t4645;
  double t4653;
  double t4676;
  double t4677;
  double t4680;
  double t3124;
  double t3142;
  double t3144;
  double t3388;
  double t3390;
  double t3409;
  double t3426;
  double t3434;
  double t3443;
  double t3349;
  double t3357;
  double t3365;
  double t3279;
  double t3302;
  double t3249;
  double t3266;
  double t3309;
  double t3314;
  double t3725;
  double t3729;
  double t3738;
  double t3776;
  double t3781;
  double t3610;
  double t3705;
  double t3711;
  double t3889;
  double t3890;
  double t3913;
  double t4315;
  double t4320;
  double t4325;
  double t4326;
  double t4331;
  double t4335;
  double t4301;
  double t4302;
  double t4306;
  double t4079;
  double t4087;
  double t4059;
  double t4209;
  double t4245;
  double t3183;
  double t3199;
  double t3208;
  double t3931;
  double t3971;
  double t3984;
  double t4539;
  double t4542;
  double t4559;
  double t5111;
  double t5117;
  double t5119;
  double t4767;
  double t4768;
  double t4772;
  double t4777;
  double t4798;
  double t4808;
  double t4707;
  double t4730;
  double t4745;
  double t4590;
  double t4602;
  double t4610;
  t2923 = Cos(var1[3]);
  t2744 = Cos(var1[5]);
  t2985 = Sin(var1[4]);
  t2788 = Sin(var1[3]);
  t3033 = Sin(var1[5]);
  t3136 = Cos(var1[4]);
  t1387 = Cos(var1[7]);
  t1390 = Cos(var1[6]);
  t2790 = -1.*t2744*t2788;
  t3038 = t2923*t2985*t3033;
  t3059 = t2790 + t3038;
  t3097 = t1390*t3059;
  t3103 = t2923*t2744*t2985;
  t3108 = t2788*t3033;
  t3110 = t3103 + t3108;
  t3111 = Sin(var1[6]);
  t3112 = t3110*t3111;
  t3114 = t3097 + t3112;
  t3138 = Sin(var1[7]);
  t3152 = Sin(var1[8]);
  t3168 = Cos(var1[8]);
  t3192 = t1390*t3110;
  t3223 = t2744*t2788;
  t3224 = -1.*t2923*t2985*t3033;
  t3236 = t3223 + t3224;
  t3258 = -1.*t3110*t3111;
  t3193 = -1.*t3059*t3111;
  t3197 = t3192 + t3193;
  t3640 = -1.*t2923*t2744;
  t3681 = -1.*t2788*t2985*t3033;
  t3685 = t3640 + t3681;
  t3545 = -1.*t2744*t2788*t2985;
  t3573 = t2923*t3033;
  t3595 = t3545 + t3573;
  t3818 = t2923*t2744;
  t3828 = t2788*t2985*t3033;
  t3830 = t3818 + t3828;
  t3831 = t1390*t3830;
  t3836 = t2744*t2788*t2985;
  t3858 = -1.*t2923*t3033;
  t3861 = t3836 + t3858;
  t3867 = t3861*t3111;
  t3888 = t3831 + t3867;
  t3727 = t1390*t3685;
  t3993 = t1390*t3861;
  t4056 = -1.*t3861*t3111;
  t3999 = -1.*t3830*t3111;
  t4014 = t3993 + t3999;
  t3169 = t2923*t3136*t1387;
  t3170 = t3114*t3138;
  t3179 = t3169 + t3170;
  t4489 = t3136*t1390*t3033;
  t4494 = t3136*t2744*t3111;
  t4505 = t4489 + t4494;
  t4618 = t3136*t2744*t1390;
  t4621 = -1.*t3136*t3033*t3111;
  t4625 = t4618 + t4621;
  t4643 = -1.*t3136*t1390*t3033;
  t4645 = -1.*t3136*t2744*t3111;
  t4653 = t4643 + t4645;
  t4676 = -1.*t3168*t4653;
  t4677 = t4625*t3138*t3152;
  t4680 = t4676 + t4677;
  t3124 = t1387*t3114;
  t3142 = -1.*t2923*t3136*t3138;
  t3144 = t3124 + t3142;
  t3388 = -1.*t2923*t1387*t2985;
  t3390 = t2923*t3136*t1390*t3033;
  t3409 = t2923*t3136*t2744*t3111;
  t3426 = t3390 + t3409;
  t3434 = t3426*t3138;
  t3443 = t3388 + t3434;
  t3349 = t2923*t3136*t2744*t1390;
  t3357 = -1.*t2923*t3136*t3033*t3111;
  t3365 = t3349 + t3357;
  t3279 = t3236*t3111;
  t3302 = t3192 + t3279;
  t3249 = t1390*t3236;
  t3266 = t3249 + t3258;
  t3309 = -1.*t1390*t3059;
  t3314 = t3309 + t3258;
  t3725 = -1.*t3136*t1387*t2788;
  t3729 = t3595*t3111;
  t3738 = t3727 + t3729;
  t3776 = t3738*t3138;
  t3781 = t3725 + t3776;
  t3610 = t1390*t3595;
  t3705 = -1.*t3685*t3111;
  t3711 = t3610 + t3705;
  t3889 = t1387*t3888;
  t3890 = -1.*t3136*t2788*t3138;
  t3913 = t3889 + t3890;
  t4315 = -1.*t1387*t2788*t2985;
  t4320 = t3136*t1390*t2788*t3033;
  t4325 = t3136*t2744*t2788*t3111;
  t4326 = t4320 + t4325;
  t4331 = t4326*t3138;
  t4335 = t4315 + t4331;
  t4301 = t3136*t2744*t1390*t2788;
  t4302 = -1.*t3136*t2788*t3033*t3111;
  t4306 = t4301 + t4302;
  t4079 = t3685*t3111;
  t4087 = t3993 + t4079;
  t4059 = t3727 + t4056;
  t4209 = -1.*t1390*t3830;
  t4245 = t4209 + t4056;
  t3183 = t3168*t3179;
  t3199 = t3197*t3152;
  t3208 = t3183 + t3199;
  t3931 = t3136*t1387*t2788;
  t3971 = t3888*t3138;
  t3984 = t3931 + t3971;
  t4539 = t1387*t4505;
  t4542 = t2985*t3138;
  t4559 = t4539 + t4542;
  t5111 = t3168*t4625*t3138;
  t5117 = t4653*t3152;
  t5119 = t5111 + t5117;
  t4767 = -1.*t3136*t1387;
  t4768 = -1.*t1390*t2985*t3033;
  t4772 = -1.*t2744*t2985*t3111;
  t4777 = t4768 + t4772;
  t4798 = t4777*t3138;
  t4808 = t4767 + t4798;
  t4707 = -1.*t2744*t1390*t2985;
  t4730 = t2985*t3033*t3111;
  t4745 = t4707 + t4730;
  t4590 = -1.*t1387*t2985;
  t4602 = t4505*t3138;
  t4610 = t4590 + t4602;
  p_output1[0]=(-1.*t3168*t3711 + t3152*t3781)*var2[3] + (-1.*t3168*t3365 + t3152*t3443)*var2[4] + (-1.*t3168*t3266 + t3138*t3152*t3302)*var2[5] + (t3138*t3152*t3197 - 1.*t3168*t3314)*var2[6] + t3144*t3152*var2[7] + t3208*var2[8];
  p_output1[1]=(t3152*t3179 - 1.*t3168*t3197)*var2[3] + (-1.*t3168*t4306 + t3152*t4335)*var2[4] + (-1.*t3168*t4059 + t3138*t3152*t4087)*var2[5] + (t3138*t3152*t4014 - 1.*t3168*t4245)*var2[6] + t3152*t3913*var2[7] + (t3168*t3984 + t3152*t4014)*var2[8];
  p_output1[2]=(-1.*t3168*t4745 + t3152*t4808)*var2[4] + t4680*var2[5] + t4680*var2[6] + t3152*t4559*var2[7] + (t3168*t4610 + t3152*t4625)*var2[8];
  p_output1[3]=(t3152*t3711 + t3168*t3781)*var2[3] + (t3152*t3365 + t3168*t3443)*var2[4] + (t3152*t3266 + t3138*t3168*t3302)*var2[5] + (t3138*t3168*t3197 + t3152*t3314)*var2[6] + t3144*t3168*var2[7] + (-1.*t3152*t3179 + t3168*t3197)*var2[8];
  p_output1[4]=t3208*var2[3] + (t3152*t4306 + t3168*t4335)*var2[4] + (t3152*t4059 + t3138*t3168*t4087)*var2[5] + (t3138*t3168*t4014 + t3152*t4245)*var2[6] + t3168*t3913*var2[7] + (-1.*t3152*t3984 + t3168*t4014)*var2[8];
  p_output1[5]=(t3152*t4745 + t3168*t4808)*var2[4] + t5119*var2[5] + t5119*var2[6] + t3168*t4559*var2[7] + (-1.*t3152*t4610 + t3168*t4625)*var2[8];
  p_output1[6]=(-1.*t1387*t3738 + t3890)*var2[3] + (-1.*t2923*t2985*t3138 - 1.*t1387*t3426)*var2[4] - 1.*t1387*t3302*var2[5] - 1.*t1387*t3197*var2[6] + t3179*var2[7];
  p_output1[7]=(-1.*t1387*t3114 + t2923*t3136*t3138)*var2[3] + (-1.*t2788*t2985*t3138 - 1.*t1387*t4326)*var2[4] - 1.*t1387*t4087*var2[5] - 1.*t1387*t4014*var2[6] + t3984*var2[7];
  p_output1[8]=(-1.*t3136*t3138 - 1.*t1387*t4777)*var2[4] - 1.*t1387*t4625*var2[5] - 1.*t1387*t4625*var2[6] + t4610*var2[7];
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

#include "dR_LeftThigh_mex.hh"

namespace SymExpression
{

void dR_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
