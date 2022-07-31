/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:27 GMT-04:00
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
  double t104;
  double t153;
  double t212;
  double t776;
  double t964;
  double t59;
  double t229;
  double t334;
  double t338;
  double t21;
  double t433;
  double t440;
  double t450;
  double t1846;
  double t1635;
  double t1672;
  double t1852;
  double t1928;
  double t1820;
  double t1873;
  double t1875;
  double t1540;
  double t1953;
  double t2029;
  double t2062;
  double t1499;
  double t2125;
  double t2140;
  double t2237;
  double t1893;
  double t2067;
  double t2071;
  double t2381;
  double t2695;
  double t2698;
  double t2764;
  double t2783;
  double t2804;
  double t2096;
  double t2412;
  double t2414;
  double t2917;
  double t2948;
  double t1290;
  double t1056;
  double t2852;
  double t2956;
  double t2979;
  double t3002;
  double t3024;
  double t3041;
  double t3783;
  double t3882;
  double t3908;
  double t4207;
  double t4213;
  double t3763;
  double t4069;
  double t4133;
  double t4346;
  double t4442;
  double t4505;
  double t4517;
  double t4534;
  double t4193;
  double t4245;
  double t4269;
  double t4804;
  double t4969;
  double t4790;
  double t5056;
  double t5321;
  double t5634;
  double t5678;
  double t5682;
  double t335;
  double t598;
  double t610;
  double t668;
  double t988;
  double t1039;
  double t1150;
  double t1256;
  double t1260;
  double t1266;
  double t1301;
  double t1336;
  double t1380;
  double t1469;
  double t2467;
  double t2808;
  double t2831;
  double t2998;
  double t3074;
  double t3121;
  double t3156;
  double t3165;
  double t3183;
  double t3185;
  double t3277;
  double t3379;
  double t3387;
  double t3467;
  double t3543;
  double t4272;
  double t4663;
  double t4789;
  double t5382;
  double t5707;
  double t5741;
  double t5867;
  double t5907;
  double t5947;
  double t6027;
  double t6050;
  double t6170;
  double t6213;
  double t6233;
  double t6234;
  t104 = Cos(var1[7]);
  t153 = -1.*t104;
  t212 = 0. + t153;
  t776 = Sin(var1[7]);
  t964 = 0. + t776;
  t59 = Cos(var1[6]);
  t229 = t59*t212;
  t334 = 0. + t229;
  t338 = Sin(var1[5]);
  t21 = Cos(var1[5]);
  t433 = Sin(var1[6]);
  t440 = t212*t433;
  t450 = 0. + t440;
  t1846 = Cos(var1[10]);
  t1635 = Cos(var1[11]);
  t1672 = Sin(var1[10]);
  t1852 = Sin(var1[11]);
  t1928 = Sin(var1[9]);
  t1820 = t1635*t1672;
  t1873 = t1846*t1852;
  t1875 = 0. + t1820 + t1873;
  t1540 = Cos(var1[9]);
  t1953 = t1846*t1635;
  t2029 = -1.*t1672*t1852;
  t2062 = 0. + t1953 + t2029;
  t1499 = Cos(var1[8]);
  t2125 = -1.*t1928*t1875;
  t2140 = t1540*t2062;
  t2237 = 0. + t2125 + t2140;
  t1893 = t1540*t1875;
  t2067 = t1928*t2062;
  t2071 = 0. + t1893 + t2067;
  t2381 = Sin(var1[8]);
  t2695 = t1499*t2237;
  t2698 = -1.*t2071*t2381;
  t2764 = 0. + t2695 + t2698;
  t2783 = t104*t2764;
  t2804 = 0. + t2783;
  t2096 = t1499*t2071;
  t2412 = t2237*t2381;
  t2414 = 0. + t2096 + t2412;
  t2917 = t776*t2764;
  t2948 = 0. + t2917;
  t1290 = Sin(var1[4]);
  t1056 = Cos(var1[4]);
  t2852 = -1.*t433*t2414;
  t2956 = t59*t2948;
  t2979 = 0. + t2852 + t2956;
  t3002 = t59*t2414;
  t3024 = t433*t2948;
  t3041 = 0. + t3002 + t3024;
  t3783 = -1.*t1846*t1635;
  t3882 = t1672*t1852;
  t3908 = 0. + t3783 + t3882;
  t4207 = -1.*t1928*t3908;
  t4213 = 0. + t1893 + t4207;
  t3763 = t1928*t1875;
  t4069 = t1540*t3908;
  t4133 = 0. + t3763 + t4069;
  t4346 = t1499*t4213;
  t4442 = -1.*t4133*t2381;
  t4505 = 0. + t4346 + t4442;
  t4517 = t104*t4505;
  t4534 = 0. + t4517;
  t4193 = t1499*t4133;
  t4245 = t4213*t2381;
  t4269 = 0. + t4193 + t4245;
  t4804 = t776*t4505;
  t4969 = 0. + t4804;
  t4790 = -1.*t433*t4269;
  t5056 = t59*t4969;
  t5321 = 0. + t4790 + t5056;
  t5634 = t59*t4269;
  t5678 = t433*t4969;
  t5682 = 0. + t5634 + t5678;
  t335 = t21*t334;
  t598 = -1.*t338*t450;
  t610 = 0. + t335 + t598;
  t668 = var2[4]*t610;
  t988 = var2[5]*t964;
  t1039 = var2[6]*t964;
  t1150 = t334*t338;
  t1256 = t21*t450;
  t1260 = 0. + t1150 + t1256;
  t1266 = t1056*t1260;
  t1301 = -1.*t1290*t964;
  t1336 = 0. + t1266 + t1301;
  t1380 = var2[3]*t1336;
  t1469 = 0. + var2[9] + var2[10] + var2[11] + var2[8] + t668 + t988 + t1039 + t1380;
  t2467 = var2[7]*t2414;
  t2808 = var2[5]*t2804;
  t2831 = var2[6]*t2804;
  t2998 = t21*t2979;
  t3074 = -1.*t338*t3041;
  t3121 = 0. + t2998 + t3074;
  t3156 = var2[4]*t3121;
  t3165 = -1.*t1290*t2804;
  t3183 = t338*t2979;
  t3185 = t21*t3041;
  t3277 = 0. + t3183 + t3185;
  t3379 = t1056*t3277;
  t3387 = 0. + t3165 + t3379;
  t3467 = var2[3]*t3387;
  t3543 = 0. + t2467 + t2808 + t2831 + t3156 + t3467;
  t4272 = var2[7]*t4269;
  t4663 = var2[5]*t4534;
  t4789 = var2[6]*t4534;
  t5382 = t21*t5321;
  t5707 = -1.*t338*t5682;
  t5741 = 0. + t5382 + t5707;
  t5867 = var2[4]*t5741;
  t5907 = -1.*t1290*t4534;
  t5947 = t338*t5321;
  t6027 = t21*t5682;
  t6050 = 0. + t5947 + t6027;
  t6170 = t1056*t6050;
  t6213 = 0. + t5907 + t6170;
  t6233 = var2[3]*t6213;
  t6234 = 0. + t4272 + t4663 + t4789 + t5867 + t6233;
  p_output1[0]=-0.000063*t1469 - 0.00288*t3543 + 0.00113*t6234;
  p_output1[1]=0.000036*t1469 + 0.0231*t3543 - 0.00288*t6234;
  p_output1[2]=0.0239*t1469 + 0.000036*t3543 - 0.000063*t6234;
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

#include "AMBody_LeftTarsus_mex.hh"

namespace SymExpression
{

void AMBody_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
