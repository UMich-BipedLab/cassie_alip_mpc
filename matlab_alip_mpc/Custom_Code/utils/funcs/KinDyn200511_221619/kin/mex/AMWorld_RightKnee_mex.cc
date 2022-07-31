/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:16 GMT-04:00
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
  double t213;
  double t1606;
  double t2373;
  double t1775;
  double t2560;
  double t1288;
  double t5988;
  double t3541;
  double t1387;
  double t6490;
  double t6501;
  double t1418;
  double t897;
  double t6563;
  double t6569;
  double t6510;
  double t6518;
  double t6706;
  double t6727;
  double t6703;
  double t6730;
  double t6765;
  double t6767;
  double t6781;
  double t6786;
  double t6796;
  double t6724;
  double t6742;
  double t6753;
  double t6810;
  double t6811;
  double t6835;
  double t6839;
  double t6844;
  double t6805;
  double t6813;
  double t6828;
  double t6897;
  double t6898;
  double t6903;
  double t6905;
  double t6910;
  double t6924;
  double t6929;
  double t6950;
  double t6951;
  double t6957;
  double t6923;
  double t6930;
  double t6937;
  double t6197;
  double t6399;
  double t6530;
  double t6570;
  double t6590;
  double t6598;
  double t6605;
  double t6608;
  double t6611;
  double t6629;
  double t6634;
  double t6653;
  double t6680;
  double t6682;
  double t6760;
  double t6799;
  double t6803;
  double t6831;
  double t6845;
  double t6852;
  double t6854;
  double t6855;
  double t6857;
  double t6864;
  double t6866;
  double t6871;
  double t6874;
  double t6877;
  double t6878;
  double t6888;
  double t6914;
  double t6919;
  double t6945;
  double t6959;
  double t6962;
  double t6965;
  double t6971;
  double t6972;
  double t6975;
  double t6978;
  double t6986;
  double t6996;
  double t7000;
  double t7001;
  double t1875;
  double t2588;
  double t2837;
  double t3782;
  double t4291;
  double t4293;
  double t3223;
  double t4531;
  double t5054;
  double t7019;
  double t7021;
  double t7022;
  double t7027;
  double t7028;
  double t7030;
  double t7023;
  double t7031;
  double t7032;
  double t7034;
  double t7040;
  double t7041;
  double t6698;
  double t6879;
  double t7002;
  double t7007;
  double t7013;
  double t7014;
  double t7016;
  double t7018;
  double t7089;
  double t7092;
  double t7093;
  double t7097;
  double t7102;
  double t7105;
  double t7095;
  double t7108;
  double t7109;
  double t7119;
  double t7121;
  double t7126;
  double t7135;
  double t7136;
  double t7137;
  double t7059;
  double t7064;
  double t7065;
  double t7071;
  double t7129;
  double t7141;
  double t7142;
  double t7144;
  double t7153;
  double t7154;
  double t7177;
  double t7178;
  double t7179;
  double t7183;
  double t7185;
  double t7187;
  double t7189;
  double t7191;
  double t7192;
  double t7188;
  double t7193;
  double t7194;
  double t7196;
  double t7202;
  double t7203;
  t213 = Cos(var1[3]);
  t1606 = Cos(var1[5]);
  t2373 = Sin(var1[3]);
  t1775 = Sin(var1[4]);
  t2560 = Sin(var1[5]);
  t1288 = Sin(var1[14]);
  t5988 = 0. + t1288;
  t3541 = Cos(var1[13]);
  t1387 = Cos(var1[14]);
  t6490 = -1.*t1387;
  t6501 = 0. + t6490;
  t1418 = Sin(var1[13]);
  t897 = Cos(var1[4]);
  t6563 = t6501*t1418;
  t6569 = 0. + t6563;
  t6510 = t3541*t6501;
  t6518 = 0. + t6510;
  t6706 = Cos(var1[16]);
  t6727 = Sin(var1[15]);
  t6703 = Cos(var1[15]);
  t6730 = Sin(var1[16]);
  t6765 = t6706*t6727;
  t6767 = t6703*t6730;
  t6781 = 0. + t6765 + t6767;
  t6786 = t1387*t6781;
  t6796 = 0. + t6786;
  t6724 = -1.*t6703*t6706;
  t6742 = t6727*t6730;
  t6753 = 0. + t6724 + t6742;
  t6810 = t1288*t6781;
  t6811 = 0. + t6810;
  t6835 = t3541*t6753;
  t6839 = t1418*t6811;
  t6844 = 0. + t6835 + t6839;
  t6805 = -1.*t1418*t6753;
  t6813 = t3541*t6811;
  t6828 = 0. + t6805 + t6813;
  t6897 = t6703*t6706;
  t6898 = -1.*t6727*t6730;
  t6903 = 0. + t6897 + t6898;
  t6905 = t1387*t6903;
  t6910 = 0. + t6905;
  t6924 = t1288*t6903;
  t6929 = 0. + t6924;
  t6950 = t3541*t6781;
  t6951 = t1418*t6929;
  t6957 = 0. + t6950 + t6951;
  t6923 = -1.*t1418*t6781;
  t6930 = t3541*t6929;
  t6937 = 0. + t6923 + t6930;
  t6197 = var2[13]*t5988;
  t6399 = var2[5]*t5988;
  t6530 = t6518*t1606;
  t6570 = -1.*t6569*t2560;
  t6590 = 0. + t6530 + t6570;
  t6598 = var2[4]*t6590;
  t6605 = -1.*t5988*t1775;
  t6608 = t1606*t6569;
  t6611 = t6518*t2560;
  t6629 = 0. + t6608 + t6611;
  t6634 = t897*t6629;
  t6653 = 0. + t6605 + t6634;
  t6680 = var2[3]*t6653;
  t6682 = 0. + var2[15] + var2[16] + t6197 + t6399 + t6598 + t6680;
  t6760 = var2[14]*t6753;
  t6799 = var2[13]*t6796;
  t6803 = var2[5]*t6796;
  t6831 = t1606*t6828;
  t6845 = -1.*t6844*t2560;
  t6852 = 0. + t6831 + t6845;
  t6854 = var2[4]*t6852;
  t6855 = -1.*t6796*t1775;
  t6857 = t1606*t6844;
  t6864 = t6828*t2560;
  t6866 = 0. + t6857 + t6864;
  t6871 = t897*t6866;
  t6874 = 0. + t6855 + t6871;
  t6877 = var2[3]*t6874;
  t6878 = 0. + t6760 + t6799 + t6803 + t6854 + t6877;
  t6888 = var2[14]*t6781;
  t6914 = var2[13]*t6910;
  t6919 = var2[5]*t6910;
  t6945 = t1606*t6937;
  t6959 = -1.*t6957*t2560;
  t6962 = 0. + t6945 + t6959;
  t6965 = var2[4]*t6962;
  t6971 = -1.*t6910*t1775;
  t6972 = t1606*t6957;
  t6975 = t6937*t2560;
  t6978 = 0. + t6972 + t6975;
  t6986 = t897*t6978;
  t6996 = 0. + t6971 + t6986;
  t7000 = var2[3]*t6996;
  t7001 = 0. + t6888 + t6914 + t6919 + t6965 + t7000;
  t1875 = t213*t1606*t1775;
  t2588 = t2373*t2560;
  t2837 = t1875 + t2588;
  t3782 = -1.*t1606*t2373;
  t4291 = t213*t1775*t2560;
  t4293 = t3782 + t4291;
  t3223 = t1418*t2837;
  t4531 = t3541*t4293;
  t5054 = t3223 + t4531;
  t7019 = t3541*t2837;
  t7021 = -1.*t1418*t4293;
  t7022 = t7019 + t7021;
  t7027 = t1387*t213*t897;
  t7028 = t1288*t5054;
  t7030 = t7027 + t7028;
  t7023 = t6727*t7022;
  t7031 = t6703*t7030;
  t7032 = t7023 + t7031;
  t7034 = t6703*t7022;
  t7040 = -1.*t6727*t7030;
  t7041 = t7034 + t7040;
  t6698 = 0.00334*t6682;
  t6879 = -3.e-6*t6878;
  t7002 = -1.e-6*t7001;
  t7007 = t6698 + t6879 + t7002;
  t7013 = -3.e-6*t6682;
  t7014 = 0.00216*t6878;
  t7016 = 0.000956*t7001;
  t7018 = t7013 + t7014 + t7016;
  t7089 = t1606*t2373*t1775;
  t7092 = -1.*t213*t2560;
  t7093 = t7089 + t7092;
  t7097 = t213*t1606;
  t7102 = t2373*t1775*t2560;
  t7105 = t7097 + t7102;
  t7095 = t1418*t7093;
  t7108 = t3541*t7105;
  t7109 = t7095 + t7108;
  t7119 = t3541*t7093;
  t7121 = -1.*t1418*t7105;
  t7126 = t7119 + t7121;
  t7135 = t1387*t897*t2373;
  t7136 = t1288*t7109;
  t7137 = t7135 + t7136;
  t7059 = -1.e-6*t6682;
  t7064 = 0.000956*t6878;
  t7065 = 0.00144*t7001;
  t7071 = t7059 + t7064 + t7065;
  t7129 = t6727*t7126;
  t7141 = t6703*t7137;
  t7142 = t7129 + t7141;
  t7144 = t6703*t7126;
  t7153 = -1.*t6727*t7137;
  t7154 = t7144 + t7153;
  t7177 = t897*t1606*t1418;
  t7178 = t3541*t897*t2560;
  t7179 = t7177 + t7178;
  t7183 = t3541*t897*t1606;
  t7185 = -1.*t897*t1418*t2560;
  t7187 = t7183 + t7185;
  t7189 = -1.*t1387*t1775;
  t7191 = t1288*t7179;
  t7192 = t7189 + t7191;
  t7188 = t6727*t7187;
  t7193 = t6703*t7192;
  t7194 = t7188 + t7193;
  t7196 = t6703*t7187;
  t7202 = -1.*t6727*t7192;
  t7203 = t7196 + t7202;
  p_output1[0]=t7018*(t6730*t7032 - 1.*t6706*t7041) + (t6706*t7032 + t6730*t7041)*t7071 + t7007*(-1.*t1387*t5054 + t1288*t213*t897);
  p_output1[1]=t7018*(t6730*t7142 - 1.*t6706*t7154) + t7071*(t6706*t7142 + t6730*t7154) + t7007*(-1.*t1387*t7109 + t1288*t2373*t897);
  p_output1[2]=t7007*(-1.*t1288*t1775 - 1.*t1387*t7179) + t7018*(t6730*t7194 - 1.*t6706*t7203) + t7071*(t6706*t7194 + t6730*t7203);
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

#include "AMWorld_RightKnee_mex.hh"

namespace SymExpression
{

void AMWorld_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
