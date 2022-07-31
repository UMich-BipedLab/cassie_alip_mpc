/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:49 GMT-04:00
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
  double t326;
  double t1574;
  double t2603;
  double t1726;
  double t2645;
  double t671;
  double t5484;
  double t3489;
  double t1317;
  double t5719;
  double t6097;
  double t1480;
  double t510;
  double t6464;
  double t6577;
  double t6411;
  double t6439;
  double t7292;
  double t7250;
  double t7251;
  double t7297;
  double t7342;
  double t7284;
  double t7312;
  double t7318;
  double t7244;
  double t7347;
  double t7352;
  double t7353;
  double t7376;
  double t7378;
  double t7384;
  double t7390;
  double t7394;
  double t7339;
  double t7358;
  double t7362;
  double t7403;
  double t7404;
  double t7411;
  double t7415;
  double t7420;
  double t7401;
  double t7405;
  double t7406;
  double t7460;
  double t7463;
  double t7466;
  double t7472;
  double t7473;
  double t7477;
  double t7482;
  double t7456;
  double t7467;
  double t7469;
  double t7497;
  double t7498;
  double t7507;
  double t7509;
  double t7510;
  double t7496;
  double t7500;
  double t7502;
  double t2242;
  double t3370;
  double t3446;
  double t3495;
  double t3705;
  double t3713;
  double t3453;
  double t4562;
  double t5057;
  double t7550;
  double t7558;
  double t7560;
  double t7574;
  double t7575;
  double t7577;
  double t7568;
  double t7584;
  double t7595;
  double t7601;
  double t7602;
  double t7606;
  double t7374;
  double t7396;
  double t7399;
  double t7409;
  double t7421;
  double t7422;
  double t7423;
  double t7425;
  double t7426;
  double t7431;
  double t7432;
  double t7433;
  double t7434;
  double t7436;
  double t7444;
  double t7471;
  double t7489;
  double t7495;
  double t7506;
  double t7512;
  double t7513;
  double t7514;
  double t7515;
  double t7526;
  double t7527;
  double t7533;
  double t7539;
  double t7540;
  double t7545;
  double t7546;
  double t7597;
  double t7607;
  double t7612;
  double t7619;
  double t7626;
  double t7628;
  double t5495;
  double t5611;
  double t6457;
  double t6626;
  double t6717;
  double t6721;
  double t6945;
  double t6953;
  double t7019;
  double t7030;
  double t7034;
  double t7099;
  double t7142;
  double t7154;
  double t7222;
  double t7224;
  double t7454;
  double t7547;
  double t7548;
  double t7663;
  double t7664;
  double t7665;
  double t7676;
  double t7679;
  double t7680;
  double t7673;
  double t7682;
  double t7683;
  double t7691;
  double t7695;
  double t7698;
  double t7700;
  double t7714;
  double t7715;
  double t7699;
  double t7717;
  double t7725;
  double t7734;
  double t7735;
  double t7737;
  double t7632;
  double t7633;
  double t7634;
  double t7726;
  double t7739;
  double t7743;
  double t7745;
  double t7750;
  double t7751;
  double t7775;
  double t7777;
  double t7778;
  double t7788;
  double t7789;
  double t7790;
  double t7796;
  double t7798;
  double t7800;
  double t7795;
  double t7804;
  double t7805;
  double t7807;
  double t7808;
  double t7809;
  double t7806;
  double t7810;
  double t7812;
  double t7815;
  double t7817;
  double t7818;
  t326 = Cos(var1[3]);
  t1574 = Cos(var1[5]);
  t2603 = Sin(var1[3]);
  t1726 = Sin(var1[4]);
  t2645 = Sin(var1[5]);
  t671 = Sin(var1[14]);
  t5484 = 0. + t671;
  t3489 = Cos(var1[13]);
  t1317 = Cos(var1[14]);
  t5719 = -1.*t1317;
  t6097 = 0. + t5719;
  t1480 = Sin(var1[13]);
  t510 = Cos(var1[4]);
  t6464 = t6097*t1480;
  t6577 = 0. + t6464;
  t6411 = t3489*t6097;
  t6439 = 0. + t6411;
  t7292 = Cos(var1[16]);
  t7250 = Cos(var1[17]);
  t7251 = Sin(var1[16]);
  t7297 = Sin(var1[17]);
  t7342 = Sin(var1[15]);
  t7284 = t7250*t7251;
  t7312 = t7292*t7297;
  t7318 = 0. + t7284 + t7312;
  t7244 = Cos(var1[15]);
  t7347 = t7292*t7250;
  t7352 = -1.*t7251*t7297;
  t7353 = 0. + t7347 + t7352;
  t7376 = -1.*t7342*t7318;
  t7378 = t7244*t7353;
  t7384 = 0. + t7376 + t7378;
  t7390 = t1317*t7384;
  t7394 = 0. + t7390;
  t7339 = t7244*t7318;
  t7358 = t7342*t7353;
  t7362 = 0. + t7339 + t7358;
  t7403 = t671*t7384;
  t7404 = 0. + t7403;
  t7411 = t3489*t7362;
  t7415 = t1480*t7404;
  t7420 = 0. + t7411 + t7415;
  t7401 = -1.*t1480*t7362;
  t7405 = t3489*t7404;
  t7406 = 0. + t7401 + t7405;
  t7460 = -1.*t7292*t7250;
  t7463 = t7251*t7297;
  t7466 = 0. + t7460 + t7463;
  t7472 = -1.*t7342*t7466;
  t7473 = 0. + t7339 + t7472;
  t7477 = t1317*t7473;
  t7482 = 0. + t7477;
  t7456 = t7342*t7318;
  t7467 = t7244*t7466;
  t7469 = 0. + t7456 + t7467;
  t7497 = t671*t7473;
  t7498 = 0. + t7497;
  t7507 = t3489*t7469;
  t7509 = t1480*t7498;
  t7510 = 0. + t7507 + t7509;
  t7496 = -1.*t1480*t7469;
  t7500 = t3489*t7498;
  t7502 = 0. + t7496 + t7500;
  t2242 = t326*t1574*t1726;
  t3370 = t2603*t2645;
  t3446 = t2242 + t3370;
  t3495 = -1.*t1574*t2603;
  t3705 = t326*t1726*t2645;
  t3713 = t3495 + t3705;
  t3453 = t1480*t3446;
  t4562 = t3489*t3713;
  t5057 = t3453 + t4562;
  t7550 = t3489*t3446;
  t7558 = -1.*t1480*t3713;
  t7560 = t7550 + t7558;
  t7574 = t1317*t326*t510;
  t7575 = t671*t5057;
  t7577 = t7574 + t7575;
  t7568 = t7342*t7560;
  t7584 = t7244*t7577;
  t7595 = t7568 + t7584;
  t7601 = t7244*t7560;
  t7602 = -1.*t7342*t7577;
  t7606 = t7601 + t7602;
  t7374 = var2[14]*t7362;
  t7396 = var2[13]*t7394;
  t7399 = var2[5]*t7394;
  t7409 = t1574*t7406;
  t7421 = -1.*t7420*t2645;
  t7422 = 0. + t7409 + t7421;
  t7423 = var2[4]*t7422;
  t7425 = -1.*t7394*t1726;
  t7426 = t1574*t7420;
  t7431 = t7406*t2645;
  t7432 = 0. + t7426 + t7431;
  t7433 = t510*t7432;
  t7434 = 0. + t7425 + t7433;
  t7436 = var2[3]*t7434;
  t7444 = 0. + t7374 + t7396 + t7399 + t7423 + t7436;
  t7471 = var2[14]*t7469;
  t7489 = var2[13]*t7482;
  t7495 = var2[5]*t7482;
  t7506 = t1574*t7502;
  t7512 = -1.*t7510*t2645;
  t7513 = 0. + t7506 + t7512;
  t7514 = var2[4]*t7513;
  t7515 = -1.*t7482*t1726;
  t7526 = t1574*t7510;
  t7527 = t7502*t2645;
  t7533 = 0. + t7526 + t7527;
  t7539 = t510*t7533;
  t7540 = 0. + t7515 + t7539;
  t7545 = var2[3]*t7540;
  t7546 = 0. + t7471 + t7489 + t7495 + t7514 + t7545;
  t7597 = -1.*t7251*t7595;
  t7607 = t7292*t7606;
  t7612 = t7597 + t7607;
  t7619 = t7292*t7595;
  t7626 = t7251*t7606;
  t7628 = t7619 + t7626;
  t5495 = var2[13]*t5484;
  t5611 = var2[5]*t5484;
  t6457 = t6439*t1574;
  t6626 = -1.*t6577*t2645;
  t6717 = 0. + t6457 + t6626;
  t6721 = var2[4]*t6717;
  t6945 = -1.*t5484*t1726;
  t6953 = t1574*t6577;
  t7019 = t6439*t2645;
  t7030 = 0. + t6953 + t7019;
  t7034 = t510*t7030;
  t7099 = 0. + t6945 + t7034;
  t7142 = var2[3]*t7099;
  t7154 = 0. + var2[15] + var2[16] + var2[17] + t5495 + t5611 + t6721 + t7142;
  t7222 = 0.0341*t7154;
  t7224 = 0. + t7222;
  t7454 = 0.0341*t7444;
  t7547 = 0.000334*t7546;
  t7548 = 0. + t7454 + t7547;
  t7663 = t1574*t2603*t1726;
  t7664 = -1.*t326*t2645;
  t7665 = t7663 + t7664;
  t7676 = t326*t1574;
  t7679 = t2603*t1726*t2645;
  t7680 = t7676 + t7679;
  t7673 = t1480*t7665;
  t7682 = t3489*t7680;
  t7683 = t7673 + t7682;
  t7691 = t3489*t7665;
  t7695 = -1.*t1480*t7680;
  t7698 = t7691 + t7695;
  t7700 = t1317*t510*t2603;
  t7714 = t671*t7683;
  t7715 = t7700 + t7714;
  t7699 = t7342*t7698;
  t7717 = t7244*t7715;
  t7725 = t7699 + t7717;
  t7734 = t7244*t7698;
  t7735 = -1.*t7342*t7715;
  t7737 = t7734 + t7735;
  t7632 = 0.000334*t7444;
  t7633 = 0.00036*t7546;
  t7634 = 0. + t7632 + t7633;
  t7726 = -1.*t7251*t7725;
  t7739 = t7292*t7737;
  t7743 = t7726 + t7739;
  t7745 = t7292*t7725;
  t7750 = t7251*t7737;
  t7751 = t7745 + t7750;
  t7775 = t510*t1574*t1480;
  t7777 = t3489*t510*t2645;
  t7778 = t7775 + t7777;
  t7788 = t3489*t510*t1574;
  t7789 = -1.*t510*t1480*t2645;
  t7790 = t7788 + t7789;
  t7796 = -1.*t1317*t1726;
  t7798 = t671*t7778;
  t7800 = t7796 + t7798;
  t7795 = t7342*t7790;
  t7804 = t7244*t7800;
  t7805 = t7795 + t7804;
  t7807 = t7244*t7790;
  t7808 = -1.*t7342*t7800;
  t7809 = t7807 + t7808;
  t7806 = -1.*t7251*t7805;
  t7810 = t7292*t7809;
  t7812 = t7806 + t7810;
  t7815 = t7292*t7805;
  t7817 = t7251*t7809;
  t7818 = t7815 + t7817;
  p_output1[0]=(-1.*t1317*t5057 + t326*t510*t671)*t7224 + t7548*(t7297*t7612 + t7250*t7628) + (-1.*t7250*t7612 + t7297*t7628)*t7634;
  p_output1[1]=t7224*(t2603*t510*t671 - 1.*t1317*t7683) + t7548*(t7297*t7743 + t7250*t7751) + t7634*(-1.*t7250*t7743 + t7297*t7751);
  p_output1[2]=t7224*(-1.*t1726*t671 - 1.*t1317*t7778) + t7548*(t7297*t7812 + t7250*t7818) + t7634*(-1.*t7250*t7812 + t7297*t7818);
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

#include "AMWorld_RightShin_mex.hh"

namespace SymExpression
{

void AMWorld_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
