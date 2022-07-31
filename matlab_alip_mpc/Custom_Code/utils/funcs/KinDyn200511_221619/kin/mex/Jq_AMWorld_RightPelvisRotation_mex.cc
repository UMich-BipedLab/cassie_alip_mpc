/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:44 GMT-04:00
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
  double t3301;
  double t1882;
  double t2057;
  double t2148;
  double t3832;
  double t5389;
  double t1826;
  double t6754;
  double t6607;
  double t6615;
  double t6643;
  double t6517;
  double t6542;
  double t6585;
  double t6588;
  double t6738;
  double t6841;
  double t6863;
  double t6892;
  double t6906;
  double t6931;
  double t7057;
  double t7058;
  double t7113;
  double t7116;
  double t7127;
  double t7152;
  double t7159;
  double t7176;
  double t7180;
  double t7181;
  double t2398;
  double t4095;
  double t4158;
  double t6131;
  double t6292;
  double t6304;
  double t6589;
  double t7070;
  double t7265;
  double t7267;
  double t7334;
  double t7335;
  double t7337;
  double t7340;
  double t7475;
  double t7490;
  double t7499;
  double t7514;
  double t7517;
  double t7518;
  double t7368;
  double t7372;
  double t7418;
  double t7419;
  double t7510;
  double t7519;
  double t7522;
  double t7538;
  double t7539;
  double t7554;
  double t7586;
  double t7596;
  double t7601;
  double t7603;
  double t7626;
  double t7643;
  double t7660;
  double t7661;
  double t7689;
  double t7690;
  double t7691;
  double t7692;
  double t7789;
  double t7797;
  double t7799;
  double t7801;
  double t7805;
  double t7818;
  double t8245;
  double t8246;
  double t8276;
  double t8296;
  double t8303;
  double t8309;
  double t8310;
  double t8316;
  double t8319;
  double t8320;
  double t8321;
  double t8338;
  double t8340;
  double t8343;
  double t7800;
  double t7823;
  double t7824;
  double t8304;
  double t8322;
  double t8323;
  double t8326;
  double t8331;
  double t8332;
  double t7842;
  double t7862;
  double t7889;
  double t8334;
  double t8335;
  double t8336;
  double t6321;
  double t8157;
  double t8159;
  double t8160;
  double t8111;
  double t8112;
  double t8123;
  double t8324;
  double t8333;
  double t8337;
  double t8361;
  double t8500;
  double t8507;
  double t8552;
  double t8574;
  double t8617;
  double t8640;
  double t8644;
  double t8687;
  double t8688;
  double t8689;
  double t8705;
  double t8709;
  double t8710;
  t3301 = Cos(var1[3]);
  t1882 = Cos(var1[5]);
  t2057 = Sin(var1[3]);
  t2148 = Sin(var1[4]);
  t3832 = Sin(var1[5]);
  t5389 = Cos(var1[13]);
  t1826 = Sin(var1[13]);
  t6754 = Cos(var1[4]);
  t6607 = t5389*t1882;
  t6615 = -1.*t1826*t3832;
  t6643 = 0. + t6607 + t6615;
  t6517 = -1.*t2148;
  t6542 = 0. + t6517;
  t6585 = var2[3]*t6542;
  t6588 = 0. + var2[13] + var2[5] + t6585;
  t6738 = var2[4]*t6643;
  t6841 = t1882*t1826;
  t6863 = t5389*t3832;
  t6892 = 0. + t6841 + t6863;
  t6906 = t6754*t6892;
  t6931 = 0. + t6906;
  t7057 = var2[3]*t6931;
  t7058 = 0. + t6738 + t7057;
  t7113 = -1.*t1882*t1826;
  t7116 = -1.*t5389*t3832;
  t7127 = 0. + t7113 + t7116;
  t7152 = var2[4]*t7127;
  t7159 = t6754*t6643;
  t7176 = 0. + t7159;
  t7180 = var2[3]*t7176;
  t7181 = 0. + t7152 + t7180;
  t2398 = -1.*t1882*t2057*t2148;
  t4095 = t3301*t3832;
  t4158 = t2398 + t4095;
  t6131 = -1.*t3301*t1882;
  t6292 = -1.*t2057*t2148*t3832;
  t6304 = t6131 + t6292;
  t6589 = -1.e-6*t6588;
  t7070 = 0.00559*t7058;
  t7265 = -3.e-6*t7181;
  t7267 = t6589 + t7070 + t7265;
  t7334 = 0.00272*t6588;
  t7335 = -1.e-6*t7058;
  t7337 = 2.e-6*t7181;
  t7340 = t7334 + t7335 + t7337;
  t7475 = t3301*t1882*t2148;
  t7490 = t2057*t3832;
  t7499 = t7475 + t7490;
  t7514 = -1.*t1882*t2057;
  t7517 = t3301*t2148*t3832;
  t7518 = t7514 + t7517;
  t7368 = 2.e-6*t6588;
  t7372 = -3.e-6*t7058;
  t7418 = 0.00464*t7181;
  t7419 = t7368 + t7372 + t7418;
  t7510 = t1826*t7499;
  t7519 = t5389*t7518;
  t7522 = t7510 + t7519;
  t7538 = t5389*t7499;
  t7539 = -1.*t1826*t7518;
  t7554 = t7538 + t7539;
  t7586 = -0.00272*var2[3]*t6754;
  t7596 = 1.e-6*var2[3]*t2148*t6892;
  t7601 = -2.e-6*var2[3]*t2148*t6643;
  t7603 = t7586 + t7596 + t7601;
  t7626 = 1.e-6*var2[3]*t6754;
  t7643 = -0.00559*var2[3]*t2148*t6892;
  t7660 = 3.e-6*var2[3]*t2148*t6643;
  t7661 = t7626 + t7643 + t7660;
  t7689 = -2.e-6*var2[3]*t6754;
  t7690 = 3.e-6*var2[3]*t2148*t6892;
  t7691 = -0.00464*var2[3]*t2148*t6643;
  t7692 = t7689 + t7690 + t7691;
  t7789 = t1882*t2057*t2148;
  t7797 = -1.*t3301*t3832;
  t7799 = t7789 + t7797;
  t7801 = t3301*t1882;
  t7805 = t2057*t2148*t3832;
  t7818 = t7801 + t7805;
  t8245 = t7113 + t7116;
  t8246 = var2[4]*t8245;
  t8276 = t6607 + t6615;
  t8296 = var2[3]*t6754*t8276;
  t8303 = t8246 + t8296;
  t8309 = var2[3]*t6754*t8245;
  t8310 = -1.*t5389*t1882;
  t8316 = t1826*t3832;
  t8319 = t8310 + t8316;
  t8320 = var2[4]*t8319;
  t8321 = t8309 + t8320;
  t8338 = t1882*t2057;
  t8340 = -1.*t3301*t2148*t3832;
  t8343 = t8338 + t8340;
  t7800 = t1826*t7799;
  t7823 = t5389*t7818;
  t7824 = t7800 + t7823;
  t8304 = 0.00559*t8303;
  t8322 = -3.e-6*t8321;
  t8323 = t8304 + t8322;
  t8326 = -1.e-6*t8303;
  t8331 = 2.e-6*t8321;
  t8332 = t8326 + t8331;
  t7842 = t5389*t7799;
  t7862 = -1.*t1826*t7818;
  t7889 = t7842 + t7862;
  t8334 = -3.e-6*t8303;
  t8335 = 0.00464*t8321;
  t8336 = t8334 + t8335;
  t6321 = t5389*t6304;
  t8157 = t6754*t1882*t1826;
  t8159 = t5389*t6754*t3832;
  t8160 = t8157 + t8159;
  t8111 = t5389*t6754*t1882;
  t8112 = -1.*t6754*t1826*t3832;
  t8123 = t8111 + t8112;
  t8324 = t7522*t8323;
  t8333 = t3301*t6754*t8332;
  t8337 = t7554*t8336;
  t8361 = -1.*t1826*t7499;
  t8500 = t7824*t8323;
  t8507 = t6754*t2057*t8332;
  t8552 = t7889*t8336;
  t8574 = -1.*t1826*t7799;
  t8617 = t8160*t8323;
  t8640 = -1.*t2148*t8332;
  t8644 = t8123*t8336;
  t8687 = t8123*t7267;
  t8688 = -1.*t6754*t1882*t1826;
  t8689 = -1.*t5389*t6754*t3832;
  t8705 = t8688 + t8689;
  t8709 = t8705*t7419;
  t8710 = t8617 + t8640 + t8644 + t8687 + t8709;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1826*t4158 + t6321)*t7267 - 1.*t2057*t6754*t7340 + (t4158*t5389 - 1.*t1826*t6304)*t7419;
  p_output1[10]=t3301*t6754*t7340 + t7267*t7522 + t7419*t7554;
  p_output1[11]=0;
  p_output1[12]=(t1826*t1882*t3301*t6754 + t3301*t3832*t5389*t6754)*t7267 - 1.*t2148*t3301*t7340 + (-1.*t1826*t3301*t3832*t6754 + t1882*t3301*t5389*t6754)*t7419 + t3301*t6754*t7603 + t7522*t7661 + t7554*t7692;
  p_output1[13]=(t1826*t1882*t2057*t6754 + t2057*t3832*t5389*t6754)*t7267 - 1.*t2057*t2148*t7340 + (-1.*t1826*t2057*t3832*t6754 + t1882*t2057*t5389*t6754)*t7419 + t2057*t6754*t7603 + t7661*t7824 + t7692*t7889;
  p_output1[14]=(-1.*t1826*t1882*t2148 - 1.*t2148*t3832*t5389)*t7267 - 1.*t6754*t7340 + (t1826*t2148*t3832 - 1.*t1882*t2148*t5389)*t7419 - 1.*t2148*t7603 + t7692*t8123 + t7661*t8160;
  p_output1[15]=t8324 + t8333 + t8337 + t7267*(t7538 + t1826*t8343) + t7419*(t5389*t8343 + t8361);
  p_output1[16]=t7267*(t1826*t6304 + t7842) + t8500 + t8507 + t8552 + t7419*(t6321 + t8574);
  p_output1[17]=t8710;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t7267*t7554 + t8324 + t8333 + t8337 + t7419*(-1.*t5389*t7518 + t8361);
  p_output1[40]=t7267*t7889 + t8500 + t8507 + t8552 + t7419*(-1.*t5389*t7818 + t8574);
  p_output1[41]=t8710;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMWorld_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
