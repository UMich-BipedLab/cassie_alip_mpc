/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:48 GMT-04:00
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
  double t74;
  double t132;
  double t73;
  double t105;
  double t134;
  double t163;
  double t125;
  double t142;
  double t149;
  double t55;
  double t173;
  double t186;
  double t202;
  double t228;
  double t154;
  double t219;
  double t221;
  double t41;
  double t233;
  double t241;
  double t257;
  double t269;
  double t270;
  double t288;
  double t321;
  double t330;
  double t397;
  double t3;
  double t525;
  double t526;
  double t542;
  double t574;
  double t575;
  double t592;
  double t458;
  double t569;
  double t609;
  double t611;
  double t635;
  double t642;
  double t661;
  double t667;
  double t706;
  double t710;
  double t824;
  double t829;
  double t832;
  double t870;
  double t872;
  double t892;
  double t901;
  double t910;
  double t917;
  double t225;
  double t417;
  double t419;
  double t467;
  double t473;
  double t491;
  double t622;
  double t728;
  double t736;
  double t763;
  double t771;
  double t801;
  double t842;
  double t972;
  double t981;
  double t1003;
  double t1023;
  double t1034;
  double t1287;
  double t1304;
  double t1263;
  double t1272;
  double t1440;
  double t1450;
  double t1596;
  double t1600;
  double t1087;
  double t1096;
  double t1131;
  double t1275;
  double t1276;
  double t1278;
  double t1336;
  double t1351;
  double t1355;
  double t1386;
  double t1387;
  double t1411;
  double t1426;
  double t1428;
  double t1434;
  double t1451;
  double t1454;
  double t1462;
  double t1543;
  double t1555;
  double t1561;
  double t1605;
  double t1619;
  double t1634;
  double t1651;
  double t1655;
  double t1662;
  double t1153;
  double t1156;
  double t1158;
  double t1165;
  double t1189;
  double t1196;
  t74 = Cos(var1[5]);
  t132 = Sin(var1[3]);
  t73 = Cos(var1[3]);
  t105 = Sin(var1[4]);
  t134 = Sin(var1[5]);
  t163 = Sin(var1[13]);
  t125 = t73*t74*t105;
  t142 = t132*t134;
  t149 = t125 + t142;
  t55 = Cos(var1[13]);
  t173 = -1.*t74*t132;
  t186 = t73*t105*t134;
  t202 = t173 + t186;
  t228 = Cos(var1[15]);
  t154 = t55*t149;
  t219 = -1.*t163*t202;
  t221 = t154 + t219;
  t41 = Sin(var1[15]);
  t233 = Cos(var1[14]);
  t241 = Cos(var1[4]);
  t257 = t233*t73*t241;
  t269 = Sin(var1[14]);
  t270 = t163*t149;
  t288 = t55*t202;
  t321 = t270 + t288;
  t330 = t269*t321;
  t397 = t257 + t330;
  t3 = Sin(var1[16]);
  t525 = t74*t132*t105;
  t526 = -1.*t73*t134;
  t542 = t525 + t526;
  t574 = t73*t74;
  t575 = t132*t105*t134;
  t592 = t574 + t575;
  t458 = Cos(var1[16]);
  t569 = t55*t542;
  t609 = -1.*t163*t592;
  t611 = t569 + t609;
  t635 = t233*t241*t132;
  t642 = t163*t542;
  t661 = t55*t592;
  t667 = t642 + t661;
  t706 = t269*t667;
  t710 = t635 + t706;
  t824 = t55*t241*t74;
  t829 = -1.*t241*t163*t134;
  t832 = t824 + t829;
  t870 = -1.*t233*t105;
  t872 = t241*t74*t163;
  t892 = t55*t241*t134;
  t901 = t872 + t892;
  t910 = t269*t901;
  t917 = t870 + t910;
  t225 = t41*t221;
  t417 = t228*t397;
  t419 = t225 + t417;
  t467 = t228*t221;
  t473 = -1.*t41*t397;
  t491 = t467 + t473;
  t622 = t41*t611;
  t728 = t228*t710;
  t736 = t622 + t728;
  t763 = t228*t611;
  t771 = -1.*t41*t710;
  t801 = t763 + t771;
  t842 = t41*t832;
  t972 = t228*t917;
  t981 = t842 + t972;
  t1003 = t228*t832;
  t1023 = -1.*t41*t917;
  t1034 = t1003 + t1023;
  t1287 = -1.*t55;
  t1304 = 1. + t1287;
  t1263 = -1.*t233;
  t1272 = 1. + t1263;
  t1440 = -1.*t228;
  t1450 = 1. + t1440;
  t1596 = -1.*t458;
  t1600 = 1. + t1596;
  t1087 = t458*t419;
  t1096 = t3*t491;
  t1131 = t1087 + t1096;
  t1275 = -0.08055*t1272;
  t1276 = -0.135*t269;
  t1278 = 0. + t1275 + t1276;
  t1336 = 0.07996*t1304;
  t1351 = 0.135*t163;
  t1355 = 0. + t1336 + t1351;
  t1386 = -0.135*t1304;
  t1387 = 0.07996*t163;
  t1411 = 0. + t1386 + t1387;
  t1426 = -0.135*t1272;
  t1428 = 0.08055*t269;
  t1434 = 0. + t1426 + t1428;
  t1451 = -0.01004*t1450;
  t1454 = 0.08055*t41;
  t1462 = 0. + t1451 + t1454;
  t1543 = -0.08055*t1450;
  t1555 = -0.01004*t41;
  t1561 = 0. + t1543 + t1555;
  t1605 = -0.08055*t1600;
  t1619 = -0.13004*t3;
  t1634 = 0. + t1605 + t1619;
  t1651 = -0.13004*t1600;
  t1655 = 0.08055*t3;
  t1662 = 0. + t1651 + t1655;
  t1153 = t458*t736;
  t1156 = t3*t801;
  t1158 = t1153 + t1156;
  t1165 = t458*t981;
  t1189 = t3*t1034;
  t1196 = t1165 + t1189;
  p_output1[0]=t3*t419 - 1.*t458*t491;
  p_output1[1]=t3*t736 - 1.*t458*t801;
  p_output1[2]=-1.*t1034*t458 + t3*t981;
  p_output1[3]=0.;
  p_output1[4]=t1131;
  p_output1[5]=t1158;
  p_output1[6]=t1196;
  p_output1[7]=0.;
  p_output1[8]=-1.*t233*t321 + t241*t269*t73;
  p_output1[9]=t132*t241*t269 - 1.*t233*t667;
  p_output1[10]=-1.*t105*t269 - 1.*t233*t901;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1131 + t1355*t149 + t1411*t202 + t1462*t221 + t1434*t321 + t1561*t397 + t1634*t419 + t1662*t491 - 0.13004*(-1.*t3*t419 + t458*t491) + t1278*t241*t73 - 0.1305*(t233*t321 - 1.*t241*t269*t73) + var1[0];
  p_output1[13]=0. - 0.08055*t1158 + t1278*t132*t241 + t1355*t542 + t1411*t592 + t1462*t611 + t1434*t667 - 0.1305*(-1.*t132*t241*t269 + t233*t667) + t1561*t710 + t1634*t736 + t1662*t801 - 0.13004*(-1.*t3*t736 + t458*t801) + var1[1];
  p_output1[14]=0. - 0.08055*t1196 - 1.*t105*t1278 + t1034*t1662 + t134*t1411*t241 + t1355*t241*t74 + t1462*t832 + t1434*t901 - 0.1305*(t105*t269 + t233*t901) + t1561*t917 + t1634*t981 - 0.13004*(t1034*t458 - 1.*t3*t981) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightKneeJoint_mex.hh"

namespace SymExpression
{

void T_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
