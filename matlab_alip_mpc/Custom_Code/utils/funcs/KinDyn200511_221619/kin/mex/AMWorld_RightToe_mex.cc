/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:10 GMT-04:00
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
  double t23;
  double t668;
  double t708;
  double t669;
  double t715;
  double t291;
  double t1494;
  double t918;
  double t417;
  double t1629;
  double t1883;
  double t652;
  double t262;
  double t2571;
  double t2609;
  double t2021;
  double t2032;
  double t5370;
  double t4994;
  double t5163;
  double t5373;
  double t6450;
  double t5246;
  double t5396;
  double t5485;
  double t4602;
  double t6940;
  double t6968;
  double t7064;
  double t7848;
  double t6431;
  double t7271;
  double t7529;
  double t4359;
  double t7851;
  double t7905;
  double t7940;
  double t8384;
  double t7734;
  double t7942;
  double t7974;
  double t4322;
  double t8466;
  double t8691;
  double t8696;
  double t8870;
  double t8872;
  double t8916;
  double t8929;
  double t9006;
  double t8366;
  double t8744;
  double t8837;
  double t9155;
  double t9161;
  double t9178;
  double t9179;
  double t9180;
  double t9090;
  double t9162;
  double t9163;
  double t9239;
  double t9240;
  double t9241;
  double t9230;
  double t9243;
  double t9245;
  double t9253;
  double t9254;
  double t9246;
  double t9256;
  double t9257;
  double t9260;
  double t9261;
  double t9262;
  double t9277;
  double t9280;
  double t9282;
  double t9283;
  double t9284;
  double t9259;
  double t9265;
  double t9274;
  double t9295;
  double t9299;
  double t9309;
  double t9311;
  double t9312;
  double t9292;
  double t9304;
  double t9307;
  double t8862;
  double t9013;
  double t9078;
  double t9167;
  double t9188;
  double t9189;
  double t9192;
  double t9193;
  double t9204;
  double t9205;
  double t9214;
  double t9215;
  double t9220;
  double t9221;
  double t9222;
  double t693;
  double t749;
  double t758;
  double t977;
  double t1027;
  double t1051;
  double t812;
  double t1110;
  double t1179;
  double t9355;
  double t9356;
  double t9357;
  double t9359;
  double t9360;
  double t9361;
  double t9358;
  double t9362;
  double t9370;
  double t9378;
  double t9379;
  double t9388;
  double t9371;
  double t9392;
  double t9395;
  double t9398;
  double t9399;
  double t9406;
  double t9396;
  double t9410;
  double t9412;
  double t9416;
  double t9418;
  double t9422;
  double t1513;
  double t1528;
  double t2063;
  double t2859;
  double t3351;
  double t3618;
  double t3804;
  double t3808;
  double t3878;
  double t3881;
  double t3911;
  double t3945;
  double t4199;
  double t4216;
  double t9276;
  double t9285;
  double t9286;
  double t9308;
  double t9315;
  double t9316;
  double t9318;
  double t9319;
  double t9320;
  double t9325;
  double t9336;
  double t9339;
  double t9340;
  double t9343;
  double t9346;
  double t9415;
  double t9425;
  double t9428;
  double t9431;
  double t9439;
  double t9440;
  double t4313;
  double t9223;
  double t9226;
  double t9347;
  double t9351;
  double t9352;
  double t9499;
  double t9500;
  double t9503;
  double t9512;
  double t9514;
  double t9516;
  double t9509;
  double t9517;
  double t9521;
  double t9536;
  double t9539;
  double t9541;
  double t9545;
  double t9551;
  double t9552;
  double t9544;
  double t9556;
  double t9557;
  double t9570;
  double t9574;
  double t9580;
  double t9559;
  double t9581;
  double t9583;
  double t9585;
  double t9591;
  double t9592;
  double t9584;
  double t9595;
  double t9600;
  double t9606;
  double t9607;
  double t9609;
  double t9459;
  double t9462;
  double t9463;
  double t9474;
  double t9601;
  double t9617;
  double t9622;
  double t9628;
  double t9631;
  double t9633;
  double t9658;
  double t9659;
  double t9660;
  double t9664;
  double t9675;
  double t9678;
  double t9680;
  double t9682;
  double t9683;
  double t9679;
  double t9686;
  double t9690;
  double t9697;
  double t9698;
  double t9700;
  double t9693;
  double t9703;
  double t9704;
  double t9707;
  double t9711;
  double t9712;
  double t9706;
  double t9714;
  double t9717;
  double t9719;
  double t9721;
  double t9723;
  double t9718;
  double t9724;
  double t9727;
  double t9731;
  double t9734;
  double t9735;
  t23 = Cos(var1[3]);
  t668 = Cos(var1[5]);
  t708 = Sin(var1[3]);
  t669 = Sin(var1[4]);
  t715 = Sin(var1[5]);
  t291 = Sin(var1[14]);
  t1494 = 0. + t291;
  t918 = Cos(var1[13]);
  t417 = Cos(var1[14]);
  t1629 = -1.*t417;
  t1883 = 0. + t1629;
  t652 = Sin(var1[13]);
  t262 = Cos(var1[4]);
  t2571 = t1883*t652;
  t2609 = 0. + t2571;
  t2021 = t918*t1883;
  t2032 = 0. + t2021;
  t5370 = Cos(var1[18]);
  t4994 = Cos(var1[19]);
  t5163 = Sin(var1[18]);
  t5373 = Sin(var1[19]);
  t6450 = Cos(var1[17]);
  t5246 = t4994*t5163;
  t5396 = t5370*t5373;
  t5485 = 0. + t5246 + t5396;
  t4602 = Sin(var1[17]);
  t6940 = -1.*t5370*t4994;
  t6968 = t5163*t5373;
  t7064 = 0. + t6940 + t6968;
  t7848 = Cos(var1[16]);
  t6431 = t4602*t5485;
  t7271 = t6450*t7064;
  t7529 = 0. + t6431 + t7271;
  t4359 = Sin(var1[16]);
  t7851 = t6450*t5485;
  t7905 = -1.*t4602*t7064;
  t7940 = 0. + t7851 + t7905;
  t8384 = Cos(var1[15]);
  t7734 = -1.*t4359*t7529;
  t7942 = t7848*t7940;
  t7974 = 0. + t7734 + t7942;
  t4322 = Sin(var1[15]);
  t8466 = t7848*t7529;
  t8691 = t4359*t7940;
  t8696 = 0. + t8466 + t8691;
  t8870 = t8384*t7974;
  t8872 = -1.*t4322*t8696;
  t8916 = 0. + t8870 + t8872;
  t8929 = t417*t8916;
  t9006 = 0. + t8929;
  t8366 = t4322*t7974;
  t8744 = t8384*t8696;
  t8837 = 0. + t8366 + t8744;
  t9155 = t291*t8916;
  t9161 = 0. + t9155;
  t9178 = t918*t8837;
  t9179 = t652*t9161;
  t9180 = 0. + t9178 + t9179;
  t9090 = -1.*t652*t8837;
  t9162 = t918*t9161;
  t9163 = 0. + t9090 + t9162;
  t9239 = t5370*t4994;
  t9240 = -1.*t5163*t5373;
  t9241 = 0. + t9239 + t9240;
  t9230 = -1.*t4602*t5485;
  t9243 = t6450*t9241;
  t9245 = 0. + t9230 + t9243;
  t9253 = t4602*t9241;
  t9254 = 0. + t7851 + t9253;
  t9246 = t4359*t9245;
  t9256 = t7848*t9254;
  t9257 = 0. + t9246 + t9256;
  t9260 = t7848*t9245;
  t9261 = -1.*t4359*t9254;
  t9262 = 0. + t9260 + t9261;
  t9277 = -1.*t4322*t9257;
  t9280 = t8384*t9262;
  t9282 = 0. + t9277 + t9280;
  t9283 = t417*t9282;
  t9284 = 0. + t9283;
  t9259 = t8384*t9257;
  t9265 = t4322*t9262;
  t9274 = 0. + t9259 + t9265;
  t9295 = t291*t9282;
  t9299 = 0. + t9295;
  t9309 = t918*t9274;
  t9311 = t652*t9299;
  t9312 = 0. + t9309 + t9311;
  t9292 = -1.*t652*t9274;
  t9304 = t918*t9299;
  t9307 = 0. + t9292 + t9304;
  t8862 = var2[14]*t8837;
  t9013 = var2[13]*t9006;
  t9078 = var2[5]*t9006;
  t9167 = t668*t9163;
  t9188 = -1.*t9180*t715;
  t9189 = 0. + t9167 + t9188;
  t9192 = var2[4]*t9189;
  t9193 = -1.*t9006*t669;
  t9204 = t668*t9180;
  t9205 = t9163*t715;
  t9214 = 0. + t9204 + t9205;
  t9215 = t262*t9214;
  t9220 = 0. + t9193 + t9215;
  t9221 = var2[3]*t9220;
  t9222 = 0. + t8862 + t9013 + t9078 + t9192 + t9221;
  t693 = t23*t668*t669;
  t749 = t708*t715;
  t758 = t693 + t749;
  t977 = -1.*t668*t708;
  t1027 = t23*t669*t715;
  t1051 = t977 + t1027;
  t812 = t652*t758;
  t1110 = t918*t1051;
  t1179 = t812 + t1110;
  t9355 = t918*t758;
  t9356 = -1.*t652*t1051;
  t9357 = t9355 + t9356;
  t9359 = t417*t23*t262;
  t9360 = t291*t1179;
  t9361 = t9359 + t9360;
  t9358 = t4322*t9357;
  t9362 = t8384*t9361;
  t9370 = t9358 + t9362;
  t9378 = t8384*t9357;
  t9379 = -1.*t4322*t9361;
  t9388 = t9378 + t9379;
  t9371 = -1.*t4359*t9370;
  t9392 = t7848*t9388;
  t9395 = t9371 + t9392;
  t9398 = t7848*t9370;
  t9399 = t4359*t9388;
  t9406 = t9398 + t9399;
  t9396 = t4602*t9395;
  t9410 = t6450*t9406;
  t9412 = t9396 + t9410;
  t9416 = t6450*t9395;
  t9418 = -1.*t4602*t9406;
  t9422 = t9416 + t9418;
  t1513 = var2[13]*t1494;
  t1528 = var2[5]*t1494;
  t2063 = t2032*t668;
  t2859 = -1.*t2609*t715;
  t3351 = 0. + t2063 + t2859;
  t3618 = var2[4]*t3351;
  t3804 = -1.*t1494*t669;
  t3808 = t668*t2609;
  t3878 = t2032*t715;
  t3881 = 0. + t3808 + t3878;
  t3911 = t262*t3881;
  t3945 = 0. + t3804 + t3911;
  t4199 = var2[3]*t3945;
  t4216 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + var2[19] + t1513 + t1528 + t3618 + t4199;
  t9276 = var2[14]*t9274;
  t9285 = var2[13]*t9284;
  t9286 = var2[5]*t9284;
  t9308 = t668*t9307;
  t9315 = -1.*t9312*t715;
  t9316 = 0. + t9308 + t9315;
  t9318 = var2[4]*t9316;
  t9319 = -1.*t9284*t669;
  t9320 = t668*t9312;
  t9325 = t9307*t715;
  t9336 = 0. + t9320 + t9325;
  t9339 = t262*t9336;
  t9340 = 0. + t9319 + t9339;
  t9343 = var2[3]*t9340;
  t9346 = 0. + t9276 + t9285 + t9286 + t9318 + t9343;
  t9415 = -1.*t5163*t9412;
  t9425 = t5370*t9422;
  t9428 = t9415 + t9425;
  t9431 = t5370*t9412;
  t9439 = t5163*t9422;
  t9440 = t9431 + t9439;
  t4313 = 0.000449*t4216;
  t9223 = 1.e-6*t9222;
  t9226 = 0. + t4313 + t9223;
  t9347 = 0.000171*t9346;
  t9351 = -0.000099*t9222;
  t9352 = 0. + t9347 + t9351;
  t9499 = t668*t708*t669;
  t9500 = -1.*t23*t715;
  t9503 = t9499 + t9500;
  t9512 = t23*t668;
  t9514 = t708*t669*t715;
  t9516 = t9512 + t9514;
  t9509 = t652*t9503;
  t9517 = t918*t9516;
  t9521 = t9509 + t9517;
  t9536 = t918*t9503;
  t9539 = -1.*t652*t9516;
  t9541 = t9536 + t9539;
  t9545 = t417*t262*t708;
  t9551 = t291*t9521;
  t9552 = t9545 + t9551;
  t9544 = t4322*t9541;
  t9556 = t8384*t9552;
  t9557 = t9544 + t9556;
  t9570 = t8384*t9541;
  t9574 = -1.*t4322*t9552;
  t9580 = t9570 + t9574;
  t9559 = -1.*t4359*t9557;
  t9581 = t7848*t9580;
  t9583 = t9559 + t9581;
  t9585 = t7848*t9557;
  t9591 = t4359*t9580;
  t9592 = t9585 + t9591;
  t9584 = t4602*t9583;
  t9595 = t6450*t9592;
  t9600 = t9584 + t9595;
  t9606 = t6450*t9583;
  t9607 = -1.*t4602*t9592;
  t9609 = t9606 + t9607;
  t9459 = 1.e-6*t4216;
  t9462 = -0.000099*t9346;
  t9463 = 0.000287*t9222;
  t9474 = t9459 + t9462 + t9463;
  t9601 = -1.*t5163*t9600;
  t9617 = t5370*t9609;
  t9622 = t9601 + t9617;
  t9628 = t5370*t9600;
  t9631 = t5163*t9609;
  t9633 = t9628 + t9631;
  t9658 = t262*t668*t652;
  t9659 = t918*t262*t715;
  t9660 = t9658 + t9659;
  t9664 = t918*t262*t668;
  t9675 = -1.*t262*t652*t715;
  t9678 = t9664 + t9675;
  t9680 = -1.*t417*t669;
  t9682 = t291*t9660;
  t9683 = t9680 + t9682;
  t9679 = t4322*t9678;
  t9686 = t8384*t9683;
  t9690 = t9679 + t9686;
  t9697 = t8384*t9678;
  t9698 = -1.*t4322*t9683;
  t9700 = t9697 + t9698;
  t9693 = -1.*t4359*t9690;
  t9703 = t7848*t9700;
  t9704 = t9693 + t9703;
  t9707 = t7848*t9690;
  t9711 = t4359*t9700;
  t9712 = t9707 + t9711;
  t9706 = t4602*t9704;
  t9714 = t6450*t9712;
  t9717 = t9706 + t9714;
  t9719 = t6450*t9704;
  t9721 = -1.*t4602*t9712;
  t9723 = t9719 + t9721;
  t9718 = -1.*t5163*t9717;
  t9724 = t5370*t9723;
  t9727 = t9718 + t9724;
  t9731 = t5370*t9717;
  t9734 = t5163*t9723;
  t9735 = t9731 + t9734;
  p_output1[0]=(t23*t262*t291 - 1.*t1179*t417)*t9226 + t9352*(t5373*t9428 + t4994*t9440) + (-1.*t4994*t9428 + t5373*t9440)*t9474;
  p_output1[1]=t9226*(t262*t291*t708 - 1.*t417*t9521) + t9352*(t5373*t9622 + t4994*t9633) + t9474*(-1.*t4994*t9622 + t5373*t9633);
  p_output1[2]=t9226*(-1.*t291*t669 - 1.*t417*t9660) + t9352*(t5373*t9727 + t4994*t9735) + t9474*(-1.*t4994*t9727 + t5373*t9735);
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

#include "AMWorld_RightToe_mex.hh"

namespace SymExpression
{

void AMWorld_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
