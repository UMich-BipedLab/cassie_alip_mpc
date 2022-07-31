/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:34 GMT-04:00
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
  double t198;
  double t515;
  double t93;
  double t207;
  double t656;
  double t979;
  double t1017;
  double t1110;
  double t1464;
  double t1579;
  double t1973;
  double t2121;
  double t445;
  double t665;
  double t748;
  double t2724;
  double t2886;
  double t2891;
  double t2936;
  double t2615;
  double t2623;
  double t2665;
  double t3047;
  double t4089;
  double t4113;
  double t4117;
  double t4346;
  double t3957;
  double t3965;
  double t3977;
  double t4606;
  double t4630;
  double t4730;
  double t5285;
  double t5286;
  double t5327;
  double t5513;
  double t5629;
  double t5679;
  double t5803;
  double t6151;
  double t6265;
  double t6349;
  double t6446;
  double t6467;
  double t6482;
  double t6598;
  double t6760;
  double t6794;
  double t6821;
  double t6948;
  double t6953;
  double t6958;
  double t1335;
  double t1484;
  double t1551;
  double t2162;
  double t2224;
  double t2227;
  double t7147;
  double t7164;
  double t7184;
  double t7120;
  double t7126;
  double t7128;
  double t2934;
  double t2991;
  double t2992;
  double t3214;
  double t3224;
  double t3226;
  double t7196;
  double t7203;
  double t7206;
  double t4231;
  double t4442;
  double t4515;
  double t4940;
  double t5051;
  double t5261;
  double t5343;
  double t5522;
  double t5575;
  double t7224;
  double t7267;
  double t7269;
  double t7279;
  double t7308;
  double t7337;
  double t5946;
  double t6122;
  double t6128;
  double t6545;
  double t6609;
  double t6737;
  double t7366;
  double t7376;
  double t7379;
  double t7392;
  double t7393;
  double t7395;
  double t6943;
  double t6944;
  double t6946;
  double t7455;
  double t7459;
  double t7471;
  double t7481;
  double t7485;
  double t7487;
  double t7523;
  double t7524;
  double t7525;
  double t7562;
  double t7564;
  double t7565;
  double t7568;
  double t7570;
  double t7571;
  double t7573;
  double t7585;
  double t7595;
  double t7602;
  double t7605;
  double t7606;
  double t7614;
  double t7615;
  double t7616;
  double t7618;
  double t7622;
  double t7635;
  t198 = Cos(var1[5]);
  t515 = Sin(var1[3]);
  t93 = Cos(var1[3]);
  t207 = Sin(var1[4]);
  t656 = Sin(var1[5]);
  t979 = Cos(var1[6]);
  t1017 = -1.*t979;
  t1110 = 1. + t1017;
  t1464 = Sin(var1[6]);
  t1579 = -1.*t198*t515;
  t1973 = t93*t207*t656;
  t2121 = t1579 + t1973;
  t445 = t93*t198*t207;
  t665 = t515*t656;
  t748 = t445 + t665;
  t2724 = Cos(var1[7]);
  t2886 = -1.*t2724;
  t2891 = 1. + t2886;
  t2936 = Sin(var1[7]);
  t2615 = t979*t2121;
  t2623 = t748*t1464;
  t2665 = t2615 + t2623;
  t3047 = Cos(var1[4]);
  t4089 = Cos(var1[8]);
  t4113 = -1.*t4089;
  t4117 = 1. + t4113;
  t4346 = Sin(var1[8]);
  t3957 = t93*t3047*t2724;
  t3965 = t2665*t2936;
  t3977 = t3957 + t3965;
  t4606 = t979*t748;
  t4630 = -1.*t2121*t1464;
  t4730 = t4606 + t4630;
  t5285 = Cos(var1[9]);
  t5286 = -1.*t5285;
  t5327 = 1. + t5286;
  t5513 = Sin(var1[9]);
  t5629 = t4089*t3977;
  t5679 = t4730*t4346;
  t5803 = t5629 + t5679;
  t6151 = t4089*t4730;
  t6265 = -1.*t3977*t4346;
  t6349 = t6151 + t6265;
  t6446 = Cos(var1[10]);
  t6467 = -1.*t6446;
  t6482 = 1. + t6467;
  t6598 = Sin(var1[10]);
  t6760 = -1.*t5513*t5803;
  t6794 = t5285*t6349;
  t6821 = t6760 + t6794;
  t6948 = t5285*t5803;
  t6953 = t5513*t6349;
  t6958 = t6948 + t6953;
  t1335 = 0.07996*t1110;
  t1484 = -0.135*t1464;
  t1551 = 0. + t1335 + t1484;
  t2162 = 0.135*t1110;
  t2224 = 0.07996*t1464;
  t2227 = 0. + t2162 + t2224;
  t7147 = t93*t198;
  t7164 = t515*t207*t656;
  t7184 = t7147 + t7164;
  t7120 = t198*t515*t207;
  t7126 = -1.*t93*t656;
  t7128 = t7120 + t7126;
  t2934 = 0.135*t2891;
  t2991 = 0.08055*t2936;
  t2992 = 0. + t2934 + t2991;
  t3214 = -0.08055*t2891;
  t3224 = 0.135*t2936;
  t3226 = 0. + t3214 + t3224;
  t7196 = t979*t7184;
  t7203 = t7128*t1464;
  t7206 = t7196 + t7203;
  t4231 = -0.08055*t4117;
  t4442 = -0.01004*t4346;
  t4515 = 0. + t4231 + t4442;
  t4940 = -0.01004*t4117;
  t5051 = 0.08055*t4346;
  t5261 = 0. + t4940 + t5051;
  t5343 = -0.08055*t5327;
  t5522 = -0.13004*t5513;
  t5575 = 0. + t5343 + t5522;
  t7224 = t3047*t2724*t515;
  t7267 = t7206*t2936;
  t7269 = t7224 + t7267;
  t7279 = t979*t7128;
  t7308 = -1.*t7184*t1464;
  t7337 = t7279 + t7308;
  t5946 = -0.13004*t5327;
  t6122 = 0.08055*t5513;
  t6128 = 0. + t5946 + t6122;
  t6545 = -0.19074*t6482;
  t6609 = 0.03315*t6598;
  t6737 = 0. + t6545 + t6609;
  t7366 = t4089*t7269;
  t7376 = t7337*t4346;
  t7379 = t7366 + t7376;
  t7392 = t4089*t7337;
  t7393 = -1.*t7269*t4346;
  t7395 = t7392 + t7393;
  t6943 = -0.03315*t6482;
  t6944 = -0.19074*t6598;
  t6946 = 0. + t6943 + t6944;
  t7455 = -1.*t5513*t7379;
  t7459 = t5285*t7395;
  t7471 = t7455 + t7459;
  t7481 = t5285*t7379;
  t7485 = t5513*t7395;
  t7487 = t7481 + t7485;
  t7523 = t3047*t979*t656;
  t7524 = t3047*t198*t1464;
  t7525 = t7523 + t7524;
  t7562 = -1.*t2724*t207;
  t7564 = t7525*t2936;
  t7565 = t7562 + t7564;
  t7568 = t3047*t198*t979;
  t7570 = -1.*t3047*t656*t1464;
  t7571 = t7568 + t7570;
  t7573 = t4089*t7565;
  t7585 = t7571*t4346;
  t7595 = t7573 + t7585;
  t7602 = t4089*t7571;
  t7605 = -1.*t7565*t4346;
  t7606 = t7602 + t7605;
  t7614 = -1.*t5513*t7595;
  t7615 = t5285*t7606;
  t7616 = t7614 + t7615;
  t7618 = t5285*t7595;
  t7622 = t5513*t7606;
  t7635 = t7618 + t7622;
  p_output1[0]=0. + t2121*t2227 + t2665*t2992 + t3977*t4515 + t4730*t5261 + t5575*t5803 + t6128*t6349 + t6737*t6821 + t6946*t6958 - 0.03315*(t6598*t6821 + t6446*t6958) - 0.19074*(t6446*t6821 - 1.*t6598*t6958) + t1551*t748 + t3047*t3226*t93 + 0.1305*(t2665*t2724 - 1.*t2936*t3047*t93) + var1[0];
  p_output1[1]=0. + t3047*t3226*t515 + t1551*t7128 + t2227*t7184 + t2992*t7206 + 0.1305*(-1.*t2936*t3047*t515 + t2724*t7206) + t4515*t7269 + t5261*t7337 + t5575*t7379 + t6128*t7395 + t6737*t7471 + t6946*t7487 - 0.03315*(t6598*t7471 + t6446*t7487) - 0.19074*(t6446*t7471 - 1.*t6598*t7487) + var1[1];
  p_output1[2]=0. + t1551*t198*t3047 - 1.*t207*t3226 + t2227*t3047*t656 + t2992*t7525 + 0.1305*(t207*t2936 + t2724*t7525) + t4515*t7565 + t5261*t7571 + t5575*t7595 + t6128*t7606 + t6737*t7616 + t6946*t7635 - 0.03315*(t6598*t7616 + t6446*t7635) - 0.19074*(t6446*t7616 - 1.*t6598*t7635) + var1[2];
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

#include "p_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void p_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
