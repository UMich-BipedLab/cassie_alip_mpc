/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:25 GMT-04:00
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
  double t493;
  double t423;
  double t534;
  double t437;
  double t864;
  double t289;
  double t4;
  double t4085;
  double t4233;
  double t1848;
  double t3459;
  double t5700;
  double t3399;
  double t4407;
  double t4687;
  double t4988;
  double t5231;
  double t6522;
  double t6633;
  double t6518;
  double t6705;
  double t6769;
  double t6874;
  double t6964;
  double t7040;
  double t7054;
  double t6601;
  double t6736;
  double t6742;
  double t7228;
  double t7309;
  double t7185;
  double t7310;
  double t7321;
  double t7363;
  double t7365;
  double t7393;
  double t7630;
  double t7632;
  double t7636;
  double t7658;
  double t7665;
  double t7743;
  double t7745;
  double t7697;
  double t7754;
  double t7759;
  double t7771;
  double t7793;
  double t7795;
  double t453;
  double t1014;
  double t1118;
  double t1424;
  double t1477;
  double t1537;
  double t1581;
  double t2612;
  double t2805;
  double t7910;
  double t7913;
  double t7914;
  double t7897;
  double t7898;
  double t7901;
  double t4712;
  double t5321;
  double t5373;
  double t5686;
  double t5731;
  double t6101;
  double t6122;
  double t6163;
  double t6170;
  double t6253;
  double t6342;
  double t6411;
  double t6417;
  double t6466;
  double t6747;
  double t7088;
  double t7174;
  double t7362;
  double t7399;
  double t7402;
  double t7437;
  double t7494;
  double t7534;
  double t7536;
  double t7537;
  double t7541;
  double t7561;
  double t7563;
  double t7566;
  double t7629;
  double t7676;
  double t7677;
  double t7765;
  double t7796;
  double t7797;
  double t7798;
  double t7800;
  double t7801;
  double t7809;
  double t7812;
  double t7856;
  double t7873;
  double t7874;
  double t7883;
  double t7908;
  double t7922;
  double t7925;
  double t7940;
  double t7945;
  double t7967;
  double t6482;
  double t7595;
  double t7884;
  double t7885;
  double t8126;
  double t8137;
  double t8139;
  double t8183;
  double t8185;
  double t8190;
  double t8203;
  double t8208;
  double t8212;
  double t8323;
  double t8326;
  double t8339;
  double t8280;
  double t8293;
  double t8306;
  double t8008;
  double t8021;
  double t8042;
  double t8044;
  double t8321;
  double t8340;
  double t8341;
  double t8388;
  double t8400;
  double t8418;
  double t8076;
  double t8081;
  double t8091;
  double t8104;
  double t8544;
  double t8547;
  double t8553;
  double t8588;
  double t8590;
  double t8594;
  double t8581;
  double t8582;
  double t8584;
  double t8585;
  double t8595;
  double t8602;
  double t8609;
  double t8611;
  double t8612;
  t493 = Cos(var1[3]);
  t423 = Cos(var1[5]);
  t534 = Sin(var1[4]);
  t437 = Sin(var1[3]);
  t864 = Sin(var1[5]);
  t289 = Cos(var1[6]);
  t4 = Cos(var1[7]);
  t4085 = -1.*t4;
  t4233 = 0. + t4085;
  t1848 = Sin(var1[6]);
  t3459 = Sin(var1[7]);
  t5700 = 0. + t3459;
  t3399 = Cos(var1[4]);
  t4407 = t289*t4233;
  t4687 = 0. + t4407;
  t4988 = t4233*t1848;
  t5231 = 0. + t4988;
  t6522 = Cos(var1[8]);
  t6633 = Sin(var1[9]);
  t6518 = Cos(var1[9]);
  t6705 = Sin(var1[8]);
  t6769 = t6522*t6633;
  t6874 = t6518*t6705;
  t6964 = 0. + t6769 + t6874;
  t7040 = t4*t6964;
  t7054 = 0. + t7040;
  t6601 = -1.*t6518*t6522;
  t6736 = t6633*t6705;
  t6742 = 0. + t6601 + t6736;
  t7228 = t3459*t6964;
  t7309 = 0. + t7228;
  t7185 = -1.*t1848*t6742;
  t7310 = t289*t7309;
  t7321 = 0. + t7185 + t7310;
  t7363 = t289*t6742;
  t7365 = t1848*t7309;
  t7393 = 0. + t7363 + t7365;
  t7630 = t6518*t6522;
  t7632 = -1.*t6633*t6705;
  t7636 = 0. + t7630 + t7632;
  t7658 = t4*t7636;
  t7665 = 0. + t7658;
  t7743 = t3459*t7636;
  t7745 = 0. + t7743;
  t7697 = -1.*t1848*t6964;
  t7754 = t289*t7745;
  t7759 = 0. + t7697 + t7754;
  t7771 = t289*t6964;
  t7793 = t1848*t7745;
  t7795 = 0. + t7771 + t7793;
  t453 = -1.*t423*t437;
  t1014 = t493*t534*t864;
  t1118 = t453 + t1014;
  t1424 = t289*t1118;
  t1477 = t493*t423*t534;
  t1537 = t437*t864;
  t1581 = t1477 + t1537;
  t2612 = t1581*t1848;
  t2805 = t1424 + t2612;
  t7910 = t289*t1581;
  t7913 = -1.*t1118*t1848;
  t7914 = t7910 + t7913;
  t7897 = t493*t3399*t4;
  t7898 = t2805*t3459;
  t7901 = t7897 + t7898;
  t4712 = t423*t4687;
  t5321 = -1.*t864*t5231;
  t5373 = 0. + t4712 + t5321;
  t5686 = var2[4]*t5373;
  t5731 = var2[5]*t5700;
  t6101 = var2[6]*t5700;
  t6122 = t4687*t864;
  t6163 = t423*t5231;
  t6170 = 0. + t6122 + t6163;
  t6253 = t3399*t6170;
  t6342 = -1.*t534*t5700;
  t6411 = 0. + t6253 + t6342;
  t6417 = var2[3]*t6411;
  t6466 = 0. + var2[9] + var2[8] + t5686 + t5731 + t6101 + t6417;
  t6747 = var2[7]*t6742;
  t7088 = var2[5]*t7054;
  t7174 = var2[6]*t7054;
  t7362 = t423*t7321;
  t7399 = -1.*t864*t7393;
  t7402 = 0. + t7362 + t7399;
  t7437 = var2[4]*t7402;
  t7494 = -1.*t534*t7054;
  t7534 = t864*t7321;
  t7536 = t423*t7393;
  t7537 = 0. + t7534 + t7536;
  t7541 = t3399*t7537;
  t7561 = 0. + t7494 + t7541;
  t7563 = var2[3]*t7561;
  t7566 = 0. + t6747 + t7088 + t7174 + t7437 + t7563;
  t7629 = var2[7]*t6964;
  t7676 = var2[5]*t7665;
  t7677 = var2[6]*t7665;
  t7765 = t423*t7759;
  t7796 = -1.*t864*t7795;
  t7797 = 0. + t7765 + t7796;
  t7798 = var2[4]*t7797;
  t7800 = -1.*t534*t7665;
  t7801 = t864*t7759;
  t7809 = t423*t7795;
  t7812 = 0. + t7801 + t7809;
  t7856 = t3399*t7812;
  t7873 = 0. + t7800 + t7856;
  t7874 = var2[3]*t7873;
  t7883 = 0. + t7629 + t7676 + t7677 + t7798 + t7874;
  t7908 = t6522*t7901;
  t7922 = t7914*t6705;
  t7925 = t7908 + t7922;
  t7940 = t6522*t7914;
  t7945 = -1.*t7901*t6705;
  t7967 = t7940 + t7945;
  t6482 = 0.00334*t6466;
  t7595 = 3.e-6*t7566;
  t7884 = 1.e-6*t7883;
  t7885 = t6482 + t7595 + t7884;
  t8126 = t493*t423;
  t8137 = t437*t534*t864;
  t8139 = t8126 + t8137;
  t8183 = t289*t8139;
  t8185 = t423*t437*t534;
  t8190 = -1.*t493*t864;
  t8203 = t8185 + t8190;
  t8208 = t8203*t1848;
  t8212 = t8183 + t8208;
  t8323 = t289*t8203;
  t8326 = -1.*t8139*t1848;
  t8339 = t8323 + t8326;
  t8280 = t3399*t4*t437;
  t8293 = t8212*t3459;
  t8306 = t8280 + t8293;
  t8008 = 3.e-6*t6466;
  t8021 = 0.00216*t7566;
  t8042 = 0.000956*t7883;
  t8044 = t8008 + t8021 + t8042;
  t8321 = t6522*t8306;
  t8340 = t8339*t6705;
  t8341 = t8321 + t8340;
  t8388 = t6522*t8339;
  t8400 = -1.*t8306*t6705;
  t8418 = t8388 + t8400;
  t8076 = 1.e-6*t6466;
  t8081 = 0.000956*t7566;
  t8091 = 0.00144*t7883;
  t8104 = t8076 + t8081 + t8091;
  t8544 = t3399*t289*t864;
  t8547 = t3399*t423*t1848;
  t8553 = t8544 + t8547;
  t8588 = t3399*t423*t289;
  t8590 = -1.*t3399*t864*t1848;
  t8594 = t8588 + t8590;
  t8581 = -1.*t4*t534;
  t8582 = t8553*t3459;
  t8584 = t8581 + t8582;
  t8585 = t6522*t8584;
  t8595 = t8594*t6705;
  t8602 = t8585 + t8595;
  t8609 = t6522*t8594;
  t8611 = -1.*t8584*t6705;
  t8612 = t8609 + t8611;
  p_output1[0]=(-1.*t2805*t4 + t3399*t3459*t493)*t7885 + (t6633*t7925 - 1.*t6518*t7967)*t8044 + (t6518*t7925 + t6633*t7967)*t8104;
  p_output1[1]=t7885*(t3399*t3459*t437 - 1.*t4*t8212) + t8044*(t6633*t8341 - 1.*t6518*t8418) + t8104*(t6518*t8341 + t6633*t8418);
  p_output1[2]=t7885*(-1.*t3459*t534 - 1.*t4*t8553) + t8044*(t6633*t8602 - 1.*t6518*t8612) + t8104*(t6518*t8602 + t6633*t8612);
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

#include "AMWorld_LeftKnee_mex.hh"

namespace SymExpression
{

void AMWorld_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
