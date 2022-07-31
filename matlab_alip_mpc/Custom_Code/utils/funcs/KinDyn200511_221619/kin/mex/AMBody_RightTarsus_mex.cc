/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:21 GMT-04:00
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
  double t49;
  double t56;
  double t450;
  double t470;
  double t483;
  double t579;
  double t620;
  double t661;
  double t683;
  double t181;
  double t533;
  double t550;
  double t707;
  double t1367;
  double t1221;
  double t1250;
  double t1407;
  double t1615;
  double t1287;
  double t1439;
  double t1482;
  double t1212;
  double t1643;
  double t1680;
  double t1687;
  double t1843;
  double t1609;
  double t1797;
  double t1808;
  double t1095;
  double t1845;
  double t1916;
  double t1952;
  double t2043;
  double t2133;
  double t2200;
  double t2221;
  double t2242;
  double t1819;
  double t2004;
  double t2013;
  double t2543;
  double t2558;
  double t851;
  double t973;
  double t2677;
  double t2683;
  double t2784;
  double t2507;
  double t2560;
  double t2583;
  double t3551;
  double t3605;
  double t3649;
  double t3510;
  double t3660;
  double t3672;
  double t3896;
  double t3959;
  double t4084;
  double t4091;
  double t4201;
  double t4273;
  double t4286;
  double t3752;
  double t4034;
  double t4036;
  double t4373;
  double t4429;
  double t4809;
  double t4842;
  double t4899;
  double t4331;
  double t4471;
  double t4771;
  double t69;
  double t121;
  double t616;
  double t740;
  double t745;
  double t788;
  double t911;
  double t978;
  double t981;
  double t984;
  double t985;
  double t1013;
  double t1023;
  double t1025;
  double t2035;
  double t2306;
  double t2428;
  double t2634;
  double t2831;
  double t2885;
  double t2912;
  double t2997;
  double t3204;
  double t3236;
  double t3273;
  double t3277;
  double t3324;
  double t3402;
  double t3403;
  double t4041;
  double t4304;
  double t4329;
  double t4778;
  double t4932;
  double t4982;
  double t5017;
  double t5043;
  double t5050;
  double t5130;
  double t5392;
  double t5495;
  double t5499;
  double t5621;
  double t5678;
  t49 = Sin(var1[14]);
  t56 = 0. + t49;
  t450 = Cos(var1[14]);
  t470 = -1.*t450;
  t483 = 0. + t470;
  t579 = Cos(var1[5]);
  t620 = Sin(var1[13]);
  t661 = t483*t620;
  t683 = 0. + t661;
  t181 = Cos(var1[13]);
  t533 = t181*t483;
  t550 = 0. + t533;
  t707 = Sin(var1[5]);
  t1367 = Cos(var1[17]);
  t1221 = Cos(var1[18]);
  t1250 = Sin(var1[17]);
  t1407 = Sin(var1[18]);
  t1615 = Cos(var1[16]);
  t1287 = t1221*t1250;
  t1439 = t1367*t1407;
  t1482 = 0. + t1287 + t1439;
  t1212 = Sin(var1[16]);
  t1643 = t1367*t1221;
  t1680 = -1.*t1250*t1407;
  t1687 = 0. + t1643 + t1680;
  t1843 = Cos(var1[15]);
  t1609 = -1.*t1212*t1482;
  t1797 = t1615*t1687;
  t1808 = 0. + t1609 + t1797;
  t1095 = Sin(var1[15]);
  t1845 = t1615*t1482;
  t1916 = t1212*t1687;
  t1952 = 0. + t1845 + t1916;
  t2043 = t1843*t1808;
  t2133 = -1.*t1095*t1952;
  t2200 = 0. + t2043 + t2133;
  t2221 = t450*t2200;
  t2242 = 0. + t2221;
  t1819 = t1095*t1808;
  t2004 = t1843*t1952;
  t2013 = 0. + t1819 + t2004;
  t2543 = t49*t2200;
  t2558 = 0. + t2543;
  t851 = Sin(var1[4]);
  t973 = Cos(var1[4]);
  t2677 = t181*t2013;
  t2683 = t620*t2558;
  t2784 = 0. + t2677 + t2683;
  t2507 = -1.*t620*t2013;
  t2560 = t181*t2558;
  t2583 = 0. + t2507 + t2560;
  t3551 = -1.*t1367*t1221;
  t3605 = t1250*t1407;
  t3649 = 0. + t3551 + t3605;
  t3510 = t1212*t1482;
  t3660 = t1615*t3649;
  t3672 = 0. + t3510 + t3660;
  t3896 = -1.*t1212*t3649;
  t3959 = 0. + t1845 + t3896;
  t4084 = -1.*t1095*t3672;
  t4091 = t1843*t3959;
  t4201 = 0. + t4084 + t4091;
  t4273 = t450*t4201;
  t4286 = 0. + t4273;
  t3752 = t1843*t3672;
  t4034 = t1095*t3959;
  t4036 = 0. + t3752 + t4034;
  t4373 = t49*t4201;
  t4429 = 0. + t4373;
  t4809 = t181*t4036;
  t4842 = t620*t4429;
  t4899 = 0. + t4809 + t4842;
  t4331 = -1.*t620*t4036;
  t4471 = t181*t4429;
  t4771 = 0. + t4331 + t4471;
  t69 = var2[13]*t56;
  t121 = var2[5]*t56;
  t616 = t550*t579;
  t740 = -1.*t683*t707;
  t745 = 0. + t616 + t740;
  t788 = var2[4]*t745;
  t911 = -1.*t56*t851;
  t978 = t579*t683;
  t981 = t550*t707;
  t984 = 0. + t978 + t981;
  t985 = t973*t984;
  t1013 = 0. + t911 + t985;
  t1023 = var2[3]*t1013;
  t1025 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + t69 + t121 + t788 + t1023;
  t2035 = var2[14]*t2013;
  t2306 = var2[13]*t2242;
  t2428 = var2[5]*t2242;
  t2634 = t579*t2583;
  t2831 = -1.*t2784*t707;
  t2885 = 0. + t2634 + t2831;
  t2912 = var2[4]*t2885;
  t2997 = -1.*t2242*t851;
  t3204 = t579*t2784;
  t3236 = t2583*t707;
  t3273 = 0. + t3204 + t3236;
  t3277 = t973*t3273;
  t3324 = 0. + t2997 + t3277;
  t3402 = var2[3]*t3324;
  t3403 = 0. + t2035 + t2306 + t2428 + t2912 + t3402;
  t4041 = var2[14]*t4036;
  t4304 = var2[13]*t4286;
  t4329 = var2[5]*t4286;
  t4778 = t579*t4771;
  t4932 = -1.*t4899*t707;
  t4982 = 0. + t4778 + t4932;
  t5017 = var2[4]*t4982;
  t5043 = -1.*t4286*t851;
  t5050 = t579*t4899;
  t5130 = t4771*t707;
  t5392 = 0. + t5050 + t5130;
  t5495 = t973*t5392;
  t5499 = 0. + t5043 + t5495;
  t5621 = var2[3]*t5499;
  t5678 = 0. + t4041 + t4304 + t4329 + t5017 + t5621;
  p_output1[0]=0.000063*t1025 - 0.00288*t3403 + 0.00113*t5678;
  p_output1[1]=-0.000036*t1025 + 0.0231*t3403 - 0.00288*t5678;
  p_output1[2]=0.0239*t1025 - 0.000036*t3403 + 0.000063*t5678;
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

#include "AMBody_RightTarsus_mex.hh"

namespace SymExpression
{

void AMBody_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
