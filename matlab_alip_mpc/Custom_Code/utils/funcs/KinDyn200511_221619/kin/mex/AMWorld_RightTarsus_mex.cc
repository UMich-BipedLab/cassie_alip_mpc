/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:26 GMT-04:00
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
  double t117;
  double t1356;
  double t1675;
  double t1652;
  double t1749;
  double t872;
  double t3589;
  double t2533;
  double t951;
  double t4375;
  double t4674;
  double t961;
  double t858;
  double t4841;
  double t5075;
  double t4697;
  double t4721;
  double t7802;
  double t7575;
  double t7584;
  double t7841;
  double t7919;
  double t7676;
  double t7855;
  double t7895;
  double t7374;
  double t7926;
  double t7936;
  double t7970;
  double t8156;
  double t7896;
  double t8047;
  double t8085;
  double t6911;
  double t8157;
  double t8164;
  double t8165;
  double t8185;
  double t8195;
  double t8198;
  double t8204;
  double t8211;
  double t8110;
  double t8175;
  double t8179;
  double t8220;
  double t8221;
  double t8244;
  double t8245;
  double t8246;
  double t8218;
  double t8228;
  double t8235;
  double t8292;
  double t8294;
  double t8295;
  double t8291;
  double t8297;
  double t8299;
  double t8301;
  double t8302;
  double t8317;
  double t8320;
  double t8321;
  double t8325;
  double t8326;
  double t8300;
  double t8303;
  double t8311;
  double t8331;
  double t8332;
  double t8348;
  double t8352;
  double t8356;
  double t8330;
  double t8333;
  double t8338;
  double t4016;
  double t4053;
  double t4734;
  double t5170;
  double t5178;
  double t5307;
  double t5314;
  double t5430;
  double t5507;
  double t5574;
  double t5752;
  double t5780;
  double t6057;
  double t6084;
  double t8182;
  double t8212;
  double t8215;
  double t8236;
  double t8248;
  double t8251;
  double t8255;
  double t8256;
  double t8257;
  double t8267;
  double t8268;
  double t8278;
  double t8280;
  double t8282;
  double t8287;
  double t8315;
  double t8328;
  double t8329;
  double t8345;
  double t8362;
  double t8363;
  double t8365;
  double t8366;
  double t8368;
  double t8369;
  double t8373;
  double t8377;
  double t8385;
  double t8387;
  double t8390;
  double t1673;
  double t1855;
  double t2229;
  double t2619;
  double t2641;
  double t2697;
  double t2510;
  double t2927;
  double t3057;
  double t8416;
  double t8421;
  double t8422;
  double t8427;
  double t8433;
  double t8435;
  double t8426;
  double t8438;
  double t8440;
  double t8453;
  double t8456;
  double t8458;
  double t8442;
  double t8461;
  double t8466;
  double t8478;
  double t8479;
  double t8484;
  double t8472;
  double t8485;
  double t8493;
  double t8500;
  double t8502;
  double t8507;
  double t6608;
  double t8289;
  double t8391;
  double t8392;
  double t8406;
  double t8409;
  double t8413;
  double t8415;
  double t8586;
  double t8593;
  double t8597;
  double t8605;
  double t8607;
  double t8608;
  double t8602;
  double t8609;
  double t8610;
  double t8617;
  double t8618;
  double t8619;
  double t8631;
  double t8633;
  double t8642;
  double t8620;
  double t8643;
  double t8646;
  double t8649;
  double t8652;
  double t8656;
  double t8647;
  double t8657;
  double t8658;
  double t8666;
  double t8667;
  double t8669;
  double t8528;
  double t8541;
  double t8546;
  double t8553;
  double t8659;
  double t8670;
  double t8671;
  double t8674;
  double t8679;
  double t8681;
  double t8714;
  double t8715;
  double t8716;
  double t8723;
  double t8724;
  double t8725;
  double t8727;
  double t8728;
  double t8729;
  double t8726;
  double t8730;
  double t8731;
  double t8733;
  double t8734;
  double t8735;
  double t8732;
  double t8736;
  double t8737;
  double t8744;
  double t8747;
  double t8749;
  double t8743;
  double t8751;
  double t8753;
  double t8757;
  double t8758;
  double t8759;
  t117 = Cos(var1[3]);
  t1356 = Cos(var1[5]);
  t1675 = Sin(var1[3]);
  t1652 = Sin(var1[4]);
  t1749 = Sin(var1[5]);
  t872 = Sin(var1[14]);
  t3589 = 0. + t872;
  t2533 = Cos(var1[13]);
  t951 = Cos(var1[14]);
  t4375 = -1.*t951;
  t4674 = 0. + t4375;
  t961 = Sin(var1[13]);
  t858 = Cos(var1[4]);
  t4841 = t4674*t961;
  t5075 = 0. + t4841;
  t4697 = t2533*t4674;
  t4721 = 0. + t4697;
  t7802 = Cos(var1[17]);
  t7575 = Cos(var1[18]);
  t7584 = Sin(var1[17]);
  t7841 = Sin(var1[18]);
  t7919 = Cos(var1[16]);
  t7676 = t7575*t7584;
  t7855 = t7802*t7841;
  t7895 = 0. + t7676 + t7855;
  t7374 = Sin(var1[16]);
  t7926 = t7802*t7575;
  t7936 = -1.*t7584*t7841;
  t7970 = 0. + t7926 + t7936;
  t8156 = Cos(var1[15]);
  t7896 = -1.*t7374*t7895;
  t8047 = t7919*t7970;
  t8085 = 0. + t7896 + t8047;
  t6911 = Sin(var1[15]);
  t8157 = t7919*t7895;
  t8164 = t7374*t7970;
  t8165 = 0. + t8157 + t8164;
  t8185 = t8156*t8085;
  t8195 = -1.*t6911*t8165;
  t8198 = 0. + t8185 + t8195;
  t8204 = t951*t8198;
  t8211 = 0. + t8204;
  t8110 = t6911*t8085;
  t8175 = t8156*t8165;
  t8179 = 0. + t8110 + t8175;
  t8220 = t872*t8198;
  t8221 = 0. + t8220;
  t8244 = t2533*t8179;
  t8245 = t961*t8221;
  t8246 = 0. + t8244 + t8245;
  t8218 = -1.*t961*t8179;
  t8228 = t2533*t8221;
  t8235 = 0. + t8218 + t8228;
  t8292 = -1.*t7802*t7575;
  t8294 = t7584*t7841;
  t8295 = 0. + t8292 + t8294;
  t8291 = t7374*t7895;
  t8297 = t7919*t8295;
  t8299 = 0. + t8291 + t8297;
  t8301 = -1.*t7374*t8295;
  t8302 = 0. + t8157 + t8301;
  t8317 = -1.*t6911*t8299;
  t8320 = t8156*t8302;
  t8321 = 0. + t8317 + t8320;
  t8325 = t951*t8321;
  t8326 = 0. + t8325;
  t8300 = t8156*t8299;
  t8303 = t6911*t8302;
  t8311 = 0. + t8300 + t8303;
  t8331 = t872*t8321;
  t8332 = 0. + t8331;
  t8348 = t2533*t8311;
  t8352 = t961*t8332;
  t8356 = 0. + t8348 + t8352;
  t8330 = -1.*t961*t8311;
  t8333 = t2533*t8332;
  t8338 = 0. + t8330 + t8333;
  t4016 = var2[13]*t3589;
  t4053 = var2[5]*t3589;
  t4734 = t4721*t1356;
  t5170 = -1.*t5075*t1749;
  t5178 = 0. + t4734 + t5170;
  t5307 = var2[4]*t5178;
  t5314 = -1.*t3589*t1652;
  t5430 = t1356*t5075;
  t5507 = t4721*t1749;
  t5574 = 0. + t5430 + t5507;
  t5752 = t858*t5574;
  t5780 = 0. + t5314 + t5752;
  t6057 = var2[3]*t5780;
  t6084 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + t4016 + t4053 + t5307 + t6057;
  t8182 = var2[14]*t8179;
  t8212 = var2[13]*t8211;
  t8215 = var2[5]*t8211;
  t8236 = t1356*t8235;
  t8248 = -1.*t8246*t1749;
  t8251 = 0. + t8236 + t8248;
  t8255 = var2[4]*t8251;
  t8256 = -1.*t8211*t1652;
  t8257 = t1356*t8246;
  t8267 = t8235*t1749;
  t8268 = 0. + t8257 + t8267;
  t8278 = t858*t8268;
  t8280 = 0. + t8256 + t8278;
  t8282 = var2[3]*t8280;
  t8287 = 0. + t8182 + t8212 + t8215 + t8255 + t8282;
  t8315 = var2[14]*t8311;
  t8328 = var2[13]*t8326;
  t8329 = var2[5]*t8326;
  t8345 = t1356*t8338;
  t8362 = -1.*t8356*t1749;
  t8363 = 0. + t8345 + t8362;
  t8365 = var2[4]*t8363;
  t8366 = -1.*t8326*t1652;
  t8368 = t1356*t8356;
  t8369 = t8338*t1749;
  t8373 = 0. + t8368 + t8369;
  t8377 = t858*t8373;
  t8385 = 0. + t8366 + t8377;
  t8387 = var2[3]*t8385;
  t8390 = 0. + t8315 + t8328 + t8329 + t8365 + t8387;
  t1673 = t117*t1356*t1652;
  t1855 = t1675*t1749;
  t2229 = t1673 + t1855;
  t2619 = -1.*t1356*t1675;
  t2641 = t117*t1652*t1749;
  t2697 = t2619 + t2641;
  t2510 = t961*t2229;
  t2927 = t2533*t2697;
  t3057 = t2510 + t2927;
  t8416 = t2533*t2229;
  t8421 = -1.*t961*t2697;
  t8422 = t8416 + t8421;
  t8427 = t951*t117*t858;
  t8433 = t872*t3057;
  t8435 = t8427 + t8433;
  t8426 = t6911*t8422;
  t8438 = t8156*t8435;
  t8440 = t8426 + t8438;
  t8453 = t8156*t8422;
  t8456 = -1.*t6911*t8435;
  t8458 = t8453 + t8456;
  t8442 = -1.*t7374*t8440;
  t8461 = t7919*t8458;
  t8466 = t8442 + t8461;
  t8478 = t7919*t8440;
  t8479 = t7374*t8458;
  t8484 = t8478 + t8479;
  t8472 = t7584*t8466;
  t8485 = t7802*t8484;
  t8493 = t8472 + t8485;
  t8500 = t7802*t8466;
  t8502 = -1.*t7584*t8484;
  t8507 = t8500 + t8502;
  t6608 = 0.0239*t6084;
  t8289 = -0.000036*t8287;
  t8391 = 0.000063*t8390;
  t8392 = t6608 + t8289 + t8391;
  t8406 = 0.000063*t6084;
  t8409 = -0.00288*t8287;
  t8413 = 0.00113*t8390;
  t8415 = t8406 + t8409 + t8413;
  t8586 = t1356*t1675*t1652;
  t8593 = -1.*t117*t1749;
  t8597 = t8586 + t8593;
  t8605 = t117*t1356;
  t8607 = t1675*t1652*t1749;
  t8608 = t8605 + t8607;
  t8602 = t961*t8597;
  t8609 = t2533*t8608;
  t8610 = t8602 + t8609;
  t8617 = t2533*t8597;
  t8618 = -1.*t961*t8608;
  t8619 = t8617 + t8618;
  t8631 = t951*t858*t1675;
  t8633 = t872*t8610;
  t8642 = t8631 + t8633;
  t8620 = t6911*t8619;
  t8643 = t8156*t8642;
  t8646 = t8620 + t8643;
  t8649 = t8156*t8619;
  t8652 = -1.*t6911*t8642;
  t8656 = t8649 + t8652;
  t8647 = -1.*t7374*t8646;
  t8657 = t7919*t8656;
  t8658 = t8647 + t8657;
  t8666 = t7919*t8646;
  t8667 = t7374*t8656;
  t8669 = t8666 + t8667;
  t8528 = -0.000036*t6084;
  t8541 = 0.0231*t8287;
  t8546 = -0.00288*t8390;
  t8553 = t8528 + t8541 + t8546;
  t8659 = t7584*t8658;
  t8670 = t7802*t8669;
  t8671 = t8659 + t8670;
  t8674 = t7802*t8658;
  t8679 = -1.*t7584*t8669;
  t8681 = t8674 + t8679;
  t8714 = t858*t1356*t961;
  t8715 = t2533*t858*t1749;
  t8716 = t8714 + t8715;
  t8723 = t2533*t858*t1356;
  t8724 = -1.*t858*t961*t1749;
  t8725 = t8723 + t8724;
  t8727 = -1.*t951*t1652;
  t8728 = t872*t8716;
  t8729 = t8727 + t8728;
  t8726 = t6911*t8725;
  t8730 = t8156*t8729;
  t8731 = t8726 + t8730;
  t8733 = t8156*t8725;
  t8734 = -1.*t6911*t8729;
  t8735 = t8733 + t8734;
  t8732 = -1.*t7374*t8731;
  t8736 = t7919*t8735;
  t8737 = t8732 + t8736;
  t8744 = t7919*t8731;
  t8747 = t7374*t8735;
  t8749 = t8744 + t8747;
  t8743 = t7584*t8737;
  t8751 = t7802*t8749;
  t8753 = t8743 + t8751;
  t8757 = t7802*t8737;
  t8758 = -1.*t7584*t8749;
  t8759 = t8757 + t8758;
  p_output1[0]=t8415*(t7841*t8493 - 1.*t7575*t8507) + (t7575*t8493 + t7841*t8507)*t8553 + t8392*(t117*t858*t872 - 1.*t3057*t951);
  p_output1[1]=t8415*(t7841*t8671 - 1.*t7575*t8681) + t8553*(t7575*t8671 + t7841*t8681) + t8392*(t1675*t858*t872 - 1.*t8610*t951);
  p_output1[2]=t8415*(t7841*t8753 - 1.*t7575*t8759) + t8553*(t7575*t8753 + t7841*t8759) + t8392*(-1.*t1652*t872 - 1.*t8716*t951);
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

#include "AMWorld_RightTarsus_mex.hh"

namespace SymExpression
{

void AMWorld_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
