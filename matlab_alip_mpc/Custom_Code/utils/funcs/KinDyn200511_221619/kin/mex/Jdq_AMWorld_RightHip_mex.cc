/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:16 GMT-04:00
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
  double t260;
  double t302;
  double t180;
  double t289;
  double t310;
  double t595;
  double t98;
  double t1017;
  double t1013;
  double t880;
  double t907;
  double t950;
  double t1076;
  double t1218;
  double t1258;
  double t1269;
  double t1381;
  double t1382;
  double t1498;
  double t1500;
  double t1515;
  double t1614;
  double t1628;
  double t1641;
  double t1642;
  double t1647;
  double t297;
  double t358;
  double t386;
  double t612;
  double t699;
  double t817;
  double t1797;
  double t1807;
  double t1838;
  double t1517;
  double t1660;
  double t1677;
  double t1713;
  double t1718;
  double t1749;
  double t2457;
  double t2459;
  double t2505;
  double t2524;
  double t2530;
  double t2531;
  double t1972;
  double t2002;
  double t2028;
  double t2086;
  double t2095;
  double t2117;
  double t2125;
  double t2156;
  double t2203;
  double t2225;
  double t2254;
  double t2610;
  double t2616;
  double t2634;
  double t3078;
  double t3084;
  double t3090;
  double t549;
  double t848;
  double t866;
  double t3413;
  double t3476;
  double t3575;
  double t3646;
  double t3647;
  double t3661;
  double t1769;
  double t1884;
  double t1898;
  double t2334;
  double t2343;
  double t2346;
  double t3631;
  double t3704;
  double t3707;
  double t2510;
  double t2548;
  double t2580;
  double t3745;
  double t3782;
  double t3876;
  double t2605;
  double t2650;
  double t2714;
  double t3894;
  double t3903;
  double t3926;
  double t2850;
  double t2907;
  double t2990;
  double t3062;
  double t3189;
  double t3217;
  double t3296;
  double t3325;
  double t3329;
  double t3260;
  double t3261;
  double t3273;
  double t4220;
  double t4226;
  double t4269;
  double t4282;
  double t4289;
  double t4358;
  double t4430;
  double t4531;
  double t4557;
  double t4561;
  double t4568;
  double t4592;
  t260 = Cos(var1[5]);
  t302 = Sin(var1[3]);
  t180 = Cos(var1[3]);
  t289 = Sin(var1[4]);
  t310 = Sin(var1[5]);
  t595 = Sin(var1[13]);
  t98 = Cos(var1[13]);
  t1017 = Cos(var1[14]);
  t1013 = Cos(var1[4]);
  t880 = Sin(var1[14]);
  t907 = 0. + t880;
  t950 = -1.*t907*t289;
  t1076 = -1.*t1017*t595;
  t1218 = 0. + t1076;
  t1258 = t260*t1218;
  t1269 = -1.*t98*t1017;
  t1381 = 0. + t1269;
  t1382 = t1381*t310;
  t1498 = 0. + t1258 + t1382;
  t1500 = t1013*t1498;
  t1515 = 0. + t950 + t1500;
  t1614 = -1.*t98*t260;
  t1628 = t595*t310;
  t1641 = 0. + t1614 + t1628;
  t1642 = t1013*t1641;
  t1647 = 0. + t1642;
  t297 = t180*t260*t289;
  t358 = t302*t310;
  t386 = t297 + t358;
  t612 = -1.*t260*t302;
  t699 = t180*t289*t310;
  t817 = t612 + t699;
  t1797 = t595*t386;
  t1807 = t98*t817;
  t1838 = t1797 + t1807;
  t1517 = -1.e-6*t1515;
  t1660 = 0.000842*t1647;
  t1677 = t1517 + t1660;
  t1713 = 0.00644*t1515;
  t1718 = -1.e-6*t1647;
  t1749 = t1713 + t1718;
  t2457 = t260*t302*t289;
  t2459 = -1.*t180*t310;
  t2505 = t2457 + t2459;
  t2524 = t180*t260;
  t2530 = t302*t289*t310;
  t2531 = t2524 + t2530;
  t1972 = 0. + t1017;
  t2002 = -1.*t1972*t289;
  t2028 = t595*t880;
  t2086 = 0. + t2028;
  t2095 = t260*t2086;
  t2117 = t98*t880;
  t2125 = 0. + t2117;
  t2156 = t2125*t310;
  t2203 = 0. + t2095 + t2156;
  t2225 = t1013*t2203;
  t2254 = 0. + t2002 + t2225;
  t2610 = t595*t2505;
  t2616 = t98*t2531;
  t2634 = t2610 + t2616;
  t3078 = t1013*t260*t595;
  t3084 = t98*t1013*t310;
  t3090 = t3078 + t3084;
  t549 = -1.*t98*t386;
  t848 = t595*t817;
  t866 = t549 + t848;
  t3413 = t260*t595;
  t3476 = t98*t310;
  t3575 = 0. + t3413 + t3476;
  t3646 = t1381*t260;
  t3647 = -1.*t1218*t310;
  t3661 = 0. + t3646 + t3647;
  t1769 = t180*t1013*t880;
  t1884 = -1.*t1017*t1838;
  t1898 = t1769 + t1884;
  t2334 = t1017*t180*t1013;
  t2343 = t880*t1838;
  t2346 = t2334 + t2343;
  t3631 = 0.000842*t3575;
  t3704 = -1.e-6*t3661;
  t3707 = t3631 + t3704;
  t2510 = -1.*t98*t2505;
  t2548 = t595*t2531;
  t2580 = t2510 + t2548;
  t3745 = -1.e-6*t3575;
  t3782 = 0.00644*t3661;
  t3876 = t3745 + t3782;
  t2605 = t1013*t880*t302;
  t2650 = -1.*t1017*t2634;
  t2714 = t2605 + t2650;
  t3894 = t260*t2125;
  t3903 = -1.*t2086*t310;
  t3926 = 0. + t3894 + t3903;
  t2850 = t1017*t1013*t302;
  t2907 = t880*t2634;
  t2990 = t2850 + t2907;
  t3062 = -1.*t1017*t289;
  t3189 = t880*t3090;
  t3217 = t3062 + t3189;
  t3296 = -1.*t98*t1013*t260;
  t3325 = t1013*t595*t310;
  t3329 = t3296 + t3325;
  t3260 = -1.*t880*t289;
  t3261 = -1.*t1017*t3090;
  t3273 = t3260 + t3261;
  t4220 = -1.e-6*t907*t866;
  t4226 = 0.00644*t907*t1898;
  t4269 = 0.00608*t1972*t2346;
  t4282 = t4220 + t4226 + t4269;
  t4289 = -1.e-6*t907*t2580;
  t4358 = 0.00644*t907*t2714;
  t4430 = 0.00608*t1972*t2990;
  t4531 = t4289 + t4358 + t4430;
  t4557 = -1.e-6*t907*t3329;
  t4561 = 0.00644*t907*t3273;
  t4568 = 0.00608*t1972*t3217;
  t4592 = t4557 + t4561 + t4568;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1749*t1898 + 0.00608*t2254*t2346 + t1677*t866;
  p_output1[10]=t1677*t2580 + t1749*t2714 + 0.00608*t2254*t2990;
  p_output1[11]=0.00608*t2254*t3217 + t1749*t3273 + t1677*t3329;
  p_output1[12]=t1898*t3876 + 0.00608*t2346*t3926 + t3707*t866;
  p_output1[13]=t2580*t3707 + t2714*t3876 + 0.00608*t2990*t3926;
  p_output1[14]=t3329*t3707 + t3273*t3876 + 0.00608*t3217*t3926;
  p_output1[15]=t4282;
  p_output1[16]=t4531;
  p_output1[17]=t4592;
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
  p_output1[39]=t4282;
  p_output1[40]=t4531;
  p_output1[41]=t4592;
  p_output1[42]=1.e-6*t1898 - 0.000842*t866;
  p_output1[43]=-0.000842*t2580 + 1.e-6*t2714;
  p_output1[44]=1.e-6*t3273 - 0.000842*t3329;
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

#include "Jdq_AMWorld_RightHip_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
