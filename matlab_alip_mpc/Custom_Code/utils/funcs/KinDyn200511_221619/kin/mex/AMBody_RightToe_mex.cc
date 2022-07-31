/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:04 GMT-04:00
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
  double t175;
  double t196;
  double t312;
  double t315;
  double t319;
  double t332;
  double t439;
  double t478;
  double t549;
  double t305;
  double t320;
  double t322;
  double t553;
  double t1967;
  double t1891;
  double t1915;
  double t2029;
  double t2168;
  double t1916;
  double t2095;
  double t2114;
  double t1877;
  double t2171;
  double t2236;
  double t2329;
  double t2493;
  double t2160;
  double t2341;
  double t2433;
  double t1849;
  double t2518;
  double t2545;
  double t2553;
  double t2716;
  double t2472;
  double t2587;
  double t2703;
  double t1835;
  double t2763;
  double t2915;
  double t2965;
  double t3170;
  double t3258;
  double t3325;
  double t3335;
  double t3360;
  double t2707;
  double t2981;
  double t3080;
  double t3536;
  double t3544;
  double t860;
  double t1033;
  double t3639;
  double t3658;
  double t3710;
  double t3519;
  double t3547;
  double t3548;
  double t4916;
  double t5075;
  double t5094;
  double t4906;
  double t5100;
  double t5120;
  double t5170;
  double t5195;
  double t5133;
  double t5331;
  double t5400;
  double t5480;
  double t5487;
  double t5491;
  double t6433;
  double t6561;
  double t6575;
  double t6646;
  double t6717;
  double t5447;
  double t5944;
  double t5963;
  double t7067;
  double t7179;
  double t7573;
  double t7585;
  double t7594;
  double t6962;
  double t7196;
  double t7378;
  double t3129;
  double t3385;
  double t3397;
  double t3550;
  double t3852;
  double t3862;
  double t3934;
  double t4041;
  double t4051;
  double t4052;
  double t4122;
  double t4370;
  double t4751;
  double t4761;
  double t4777;
  double t6108;
  double t6788;
  double t6811;
  double t7555;
  double t7595;
  double t7681;
  double t7692;
  double t7723;
  double t7747;
  double t7754;
  double t7776;
  double t7779;
  double t7781;
  double t7783;
  double t7793;
  double t218;
  double t239;
  double t361;
  double t583;
  double t601;
  double t628;
  double t933;
  double t1122;
  double t1292;
  double t1349;
  double t1451;
  double t1527;
  double t1610;
  double t1733;
  t175 = Sin(var1[14]);
  t196 = 0. + t175;
  t312 = Cos(var1[14]);
  t315 = -1.*t312;
  t319 = 0. + t315;
  t332 = Cos(var1[5]);
  t439 = Sin(var1[13]);
  t478 = t319*t439;
  t549 = 0. + t478;
  t305 = Cos(var1[13]);
  t320 = t305*t319;
  t322 = 0. + t320;
  t553 = Sin(var1[5]);
  t1967 = Cos(var1[18]);
  t1891 = Cos(var1[19]);
  t1915 = Sin(var1[18]);
  t2029 = Sin(var1[19]);
  t2168 = Cos(var1[17]);
  t1916 = t1891*t1915;
  t2095 = t1967*t2029;
  t2114 = 0. + t1916 + t2095;
  t1877 = Sin(var1[17]);
  t2171 = t1967*t1891;
  t2236 = -1.*t1915*t2029;
  t2329 = 0. + t2171 + t2236;
  t2493 = Cos(var1[16]);
  t2160 = -1.*t1877*t2114;
  t2341 = t2168*t2329;
  t2433 = 0. + t2160 + t2341;
  t1849 = Sin(var1[16]);
  t2518 = t2168*t2114;
  t2545 = t1877*t2329;
  t2553 = 0. + t2518 + t2545;
  t2716 = Sin(var1[15]);
  t2472 = t1849*t2433;
  t2587 = t2493*t2553;
  t2703 = 0. + t2472 + t2587;
  t1835 = Cos(var1[15]);
  t2763 = t2493*t2433;
  t2915 = -1.*t1849*t2553;
  t2965 = 0. + t2763 + t2915;
  t3170 = -1.*t2716*t2703;
  t3258 = t1835*t2965;
  t3325 = 0. + t3170 + t3258;
  t3335 = t312*t3325;
  t3360 = 0. + t3335;
  t2707 = t1835*t2703;
  t2981 = t2716*t2965;
  t3080 = 0. + t2707 + t2981;
  t3536 = t175*t3325;
  t3544 = 0. + t3536;
  t860 = Sin(var1[4]);
  t1033 = Cos(var1[4]);
  t3639 = t305*t3080;
  t3658 = t439*t3544;
  t3710 = 0. + t3639 + t3658;
  t3519 = -1.*t439*t3080;
  t3547 = t305*t3544;
  t3548 = 0. + t3519 + t3547;
  t4916 = -1.*t1967*t1891;
  t5075 = t1915*t2029;
  t5094 = 0. + t4916 + t5075;
  t4906 = t1877*t2114;
  t5100 = t2168*t5094;
  t5120 = 0. + t4906 + t5100;
  t5170 = -1.*t1877*t5094;
  t5195 = 0. + t2518 + t5170;
  t5133 = -1.*t1849*t5120;
  t5331 = t2493*t5195;
  t5400 = 0. + t5133 + t5331;
  t5480 = t2493*t5120;
  t5487 = t1849*t5195;
  t5491 = 0. + t5480 + t5487;
  t6433 = t1835*t5400;
  t6561 = -1.*t2716*t5491;
  t6575 = 0. + t6433 + t6561;
  t6646 = t312*t6575;
  t6717 = 0. + t6646;
  t5447 = t2716*t5400;
  t5944 = t1835*t5491;
  t5963 = 0. + t5447 + t5944;
  t7067 = t175*t6575;
  t7179 = 0. + t7067;
  t7573 = t305*t5963;
  t7585 = t439*t7179;
  t7594 = 0. + t7573 + t7585;
  t6962 = -1.*t439*t5963;
  t7196 = t305*t7179;
  t7378 = 0. + t6962 + t7196;
  t3129 = var2[14]*t3080;
  t3385 = var2[13]*t3360;
  t3397 = var2[5]*t3360;
  t3550 = t332*t3548;
  t3852 = -1.*t3710*t553;
  t3862 = 0. + t3550 + t3852;
  t3934 = var2[4]*t3862;
  t4041 = -1.*t3360*t860;
  t4051 = t332*t3710;
  t4052 = t3548*t553;
  t4122 = 0. + t4051 + t4052;
  t4370 = t1033*t4122;
  t4751 = 0. + t4041 + t4370;
  t4761 = var2[3]*t4751;
  t4777 = 0. + t3129 + t3385 + t3397 + t3934 + t4761;
  t6108 = var2[14]*t5963;
  t6788 = var2[13]*t6717;
  t6811 = var2[5]*t6717;
  t7555 = t332*t7378;
  t7595 = -1.*t7594*t553;
  t7681 = 0. + t7555 + t7595;
  t7692 = var2[4]*t7681;
  t7723 = -1.*t6717*t860;
  t7747 = t332*t7594;
  t7754 = t7378*t553;
  t7776 = 0. + t7747 + t7754;
  t7779 = t1033*t7776;
  t7781 = 0. + t7723 + t7779;
  t7783 = var2[3]*t7781;
  t7793 = 0. + t6108 + t6788 + t6811 + t7692 + t7783;
  t218 = var2[13]*t196;
  t239 = var2[5]*t196;
  t361 = t322*t332;
  t583 = -1.*t549*t553;
  t601 = 0. + t361 + t583;
  t628 = var2[4]*t601;
  t933 = -1.*t196*t860;
  t1122 = t332*t549;
  t1292 = t322*t553;
  t1349 = 0. + t1122 + t1292;
  t1451 = t1033*t1349;
  t1527 = 0. + t933 + t1451;
  t1610 = var2[3]*t1527;
  t1733 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + var2[19] + t218 + t239 + t628 + t1610;
  p_output1[0]=1.e-6*t1733 - 0.000099*t4777 + 0.000287*t7793;
  p_output1[1]=0. + 0.000171*t4777 - 0.000099*t7793;
  p_output1[2]=0. + 0.000449*t1733 + 1.e-6*t7793;
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

#include "AMBody_RightToe_mex.hh"

namespace SymExpression
{

void AMBody_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
