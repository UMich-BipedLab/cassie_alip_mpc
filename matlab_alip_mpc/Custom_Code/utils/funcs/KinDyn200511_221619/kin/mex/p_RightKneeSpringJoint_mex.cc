/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:55 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t222;
  double t1909;
  double t2152;
  double t2302;
  double t2396;
  double t2815;
  double t2842;
  double t2825;
  double t2851;
  double t544;
  double t641;
  double t669;
  double t1192;
  double t2829;
  double t2881;
  double t2897;
  double t3172;
  double t3173;
  double t3174;
  double t367;
  double t3333;
  double t3388;
  double t3394;
  double t3455;
  double t3483;
  double t3504;
  double t3824;
  double t3878;
  double t3879;
  double t3883;
  double t4220;
  double t4233;
  double t4267;
  double t4332;
  double t4379;
  double t4394;
  double t4482;
  double t4705;
  double t4733;
  double t4887;
  double t5295;
  double t5329;
  double t5374;
  double t5447;
  double t5448;
  double t5459;
  double t5478;
  double t5487;
  double t5494;
  double t5513;
  double t5636;
  double t5671;
  double t5688;
  double t994;
  double t1384;
  double t1438;
  double t2357;
  double t2401;
  double t2440;
  double t3106;
  double t3164;
  double t3165;
  double t3233;
  double t3292;
  double t3309;
  double t6133;
  double t6172;
  double t6186;
  double t6197;
  double t6199;
  double t6203;
  double t3686;
  double t3874;
  double t3876;
  double t6207;
  double t6227;
  double t6243;
  double t4200;
  double t4206;
  double t4210;
  double t4443;
  double t4534;
  double t4681;
  double t6285;
  double t6304;
  double t6305;
  double t6362;
  double t6366;
  double t6367;
  double t5085;
  double t5210;
  double t5247;
  double t5463;
  double t5482;
  double t5485;
  double t6490;
  double t6505;
  double t6511;
  double t6564;
  double t6590;
  double t6595;
  double t5525;
  double t5533;
  double t5536;
  double t6639;
  double t6641;
  double t6693;
  double t6734;
  double t6736;
  double t6743;
  double t6796;
  double t6805;
  double t6806;
  double t6824;
  double t6838;
  double t6840;
  double t6858;
  double t6859;
  double t6860;
  double t6878;
  double t6886;
  double t6901;
  double t6912;
  double t6931;
  double t6933;
  double t6941;
  double t6943;
  double t6944;
  double t6947;
  double t6948;
  double t6950;
  t222 = Cos(var1[3]);
  t1909 = Cos(var1[13]);
  t2152 = -1.*t1909;
  t2302 = 1. + t2152;
  t2396 = Sin(var1[13]);
  t2815 = Cos(var1[5]);
  t2842 = Sin(var1[3]);
  t2825 = Sin(var1[4]);
  t2851 = Sin(var1[5]);
  t544 = Cos(var1[14]);
  t641 = -1.*t544;
  t669 = 1. + t641;
  t1192 = Sin(var1[14]);
  t2829 = t222*t2815*t2825;
  t2881 = t2842*t2851;
  t2897 = t2829 + t2881;
  t3172 = -1.*t2815*t2842;
  t3173 = t222*t2825*t2851;
  t3174 = t3172 + t3173;
  t367 = Cos(var1[4]);
  t3333 = t2396*t2897;
  t3388 = t1909*t3174;
  t3394 = t3333 + t3388;
  t3455 = Cos(var1[15]);
  t3483 = -1.*t3455;
  t3504 = 1. + t3483;
  t3824 = Sin(var1[15]);
  t3878 = t1909*t2897;
  t3879 = -1.*t2396*t3174;
  t3883 = t3878 + t3879;
  t4220 = t544*t222*t367;
  t4233 = t1192*t3394;
  t4267 = t4220 + t4233;
  t4332 = Cos(var1[16]);
  t4379 = -1.*t4332;
  t4394 = 1. + t4379;
  t4482 = Sin(var1[16]);
  t4705 = t3824*t3883;
  t4733 = t3455*t4267;
  t4887 = t4705 + t4733;
  t5295 = t3455*t3883;
  t5329 = -1.*t3824*t4267;
  t5374 = t5295 + t5329;
  t5447 = Cos(var1[17]);
  t5448 = -1.*t5447;
  t5459 = 1. + t5448;
  t5478 = Sin(var1[17]);
  t5487 = -1.*t4482*t4887;
  t5494 = t4332*t5374;
  t5513 = t5487 + t5494;
  t5636 = t4332*t4887;
  t5671 = t4482*t5374;
  t5688 = t5636 + t5671;
  t994 = -0.08055*t669;
  t1384 = -0.135*t1192;
  t1438 = 0. + t994 + t1384;
  t2357 = 0.07996*t2302;
  t2401 = 0.135*t2396;
  t2440 = 0. + t2357 + t2401;
  t3106 = -0.135*t2302;
  t3164 = 0.07996*t2396;
  t3165 = 0. + t3106 + t3164;
  t3233 = -0.135*t669;
  t3292 = 0.08055*t1192;
  t3309 = 0. + t3233 + t3292;
  t6133 = t2815*t2842*t2825;
  t6172 = -1.*t222*t2851;
  t6186 = t6133 + t6172;
  t6197 = t222*t2815;
  t6199 = t2842*t2825*t2851;
  t6203 = t6197 + t6199;
  t3686 = -0.01004*t3504;
  t3874 = 0.08055*t3824;
  t3876 = 0. + t3686 + t3874;
  t6207 = t2396*t6186;
  t6227 = t1909*t6203;
  t6243 = t6207 + t6227;
  t4200 = -0.08055*t3504;
  t4206 = -0.01004*t3824;
  t4210 = 0. + t4200 + t4206;
  t4443 = -0.08055*t4394;
  t4534 = -0.13004*t4482;
  t4681 = 0. + t4443 + t4534;
  t6285 = t1909*t6186;
  t6304 = -1.*t2396*t6203;
  t6305 = t6285 + t6304;
  t6362 = t544*t367*t2842;
  t6366 = t1192*t6243;
  t6367 = t6362 + t6366;
  t5085 = -0.13004*t4394;
  t5210 = 0.08055*t4482;
  t5247 = 0. + t5085 + t5210;
  t5463 = -0.19074*t5459;
  t5482 = 0.03315*t5478;
  t5485 = 0. + t5463 + t5482;
  t6490 = t3824*t6305;
  t6505 = t3455*t6367;
  t6511 = t6490 + t6505;
  t6564 = t3455*t6305;
  t6590 = -1.*t3824*t6367;
  t6595 = t6564 + t6590;
  t5525 = -0.03315*t5459;
  t5533 = -0.19074*t5478;
  t5536 = 0. + t5525 + t5533;
  t6639 = -1.*t4482*t6511;
  t6641 = t4332*t6595;
  t6693 = t6639 + t6641;
  t6734 = t4332*t6511;
  t6736 = t4482*t6595;
  t6743 = t6734 + t6736;
  t6796 = t367*t2815*t2396;
  t6805 = t1909*t367*t2851;
  t6806 = t6796 + t6805;
  t6824 = t1909*t367*t2815;
  t6838 = -1.*t367*t2396*t2851;
  t6840 = t6824 + t6838;
  t6858 = -1.*t544*t2825;
  t6859 = t1192*t6806;
  t6860 = t6858 + t6859;
  t6878 = t3824*t6840;
  t6886 = t3455*t6860;
  t6901 = t6878 + t6886;
  t6912 = t3455*t6840;
  t6931 = -1.*t3824*t6860;
  t6933 = t6912 + t6931;
  t6941 = -1.*t4482*t6901;
  t6943 = t4332*t6933;
  t6944 = t6941 + t6943;
  t6947 = t4332*t6901;
  t6948 = t4482*t6933;
  t6950 = t6947 + t6948;
  p_output1[0]=0. + t2440*t2897 + t3165*t3174 + t3309*t3394 + t1438*t222*t367 + t3876*t3883 + t4210*t4267 + t4681*t4887 + t5247*t5374 - 0.1305*(-1.*t1192*t222*t367 + t3394*t544) + t5485*t5513 + t5536*t5688 - 0.03315*(t5478*t5513 + t5447*t5688) - 0.19074*(t5447*t5513 - 1.*t5478*t5688) + var1[0];
  p_output1[1]=0. + t1438*t2842*t367 + t2440*t6186 + t3165*t6203 + t3309*t6243 - 0.1305*(-1.*t1192*t2842*t367 + t544*t6243) + t3876*t6305 + t4210*t6367 + t4681*t6511 + t5247*t6595 + t5485*t6693 + t5536*t6743 - 0.03315*(t5478*t6693 + t5447*t6743) - 0.19074*(t5447*t6693 - 1.*t5478*t6743) + var1[1];
  p_output1[2]=0. - 1.*t1438*t2825 + t2440*t2815*t367 + t2851*t3165*t367 + t3309*t6806 - 0.1305*(t1192*t2825 + t544*t6806) + t3876*t6840 + t4210*t6860 + t4681*t6901 + t5247*t6933 + t5485*t6944 + t5536*t6950 - 0.03315*(t5478*t6944 + t5447*t6950) - 0.19074*(t5447*t6944 - 1.*t5478*t6950) + var1[2];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void p_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
