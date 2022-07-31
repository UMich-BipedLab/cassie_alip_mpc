/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:46 GMT-04:00
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
  double t710;
  double t1029;
  double t512;
  double t743;
  double t1622;
  double t185;
  double t2053;
  double t2625;
  double t2546;
  double t2595;
  double t2632;
  double t2666;
  double t2680;
  double t2699;
  double t3028;
  double t3071;
  double t3191;
  double t3195;
  double t3203;
  double t3237;
  double t982;
  double t1712;
  double t2024;
  double t2100;
  double t2102;
  double t2149;
  double t2615;
  double t3050;
  double t3684;
  double t3788;
  double t4033;
  double t4041;
  double t4382;
  double t4570;
  double t4915;
  double t4929;
  double t4932;
  double t4995;
  double t4996;
  double t5026;
  double t4839;
  double t4841;
  double t4848;
  double t4854;
  double t6244;
  double t6368;
  double t6371;
  double t2029;
  double t2187;
  double t2418;
  double t4789;
  double t4813;
  double t4838;
  double t6381;
  double t6385;
  double t6414;
  double t6536;
  double t6555;
  double t6585;
  double t4966;
  double t5048;
  double t5073;
  double t6607;
  double t6643;
  double t6738;
  double t5113;
  double t5132;
  double t5143;
  double t5550;
  double t5619;
  double t5745;
  double t5245;
  double t5395;
  double t5422;
  double t7135;
  double t7152;
  double t7176;
  double t7275;
  double t7334;
  double t7345;
  double t7367;
  double t7372;
  double t7490;
  double t7517;
  double t7519;
  double t7536;
  t710 = Cos(var1[5]);
  t1029 = Sin(var1[3]);
  t512 = Cos(var1[3]);
  t743 = Sin(var1[4]);
  t1622 = Sin(var1[5]);
  t185 = Sin(var1[13]);
  t2053 = Cos(var1[13]);
  t2625 = Cos(var1[4]);
  t2546 = -1.*t743;
  t2595 = 0. + t2546;
  t2632 = t710*t185;
  t2666 = t2053*t1622;
  t2680 = 0. + t2632 + t2666;
  t2699 = t2625*t2680;
  t3028 = 0. + t2699;
  t3071 = t2053*t710;
  t3191 = -1.*t185*t1622;
  t3195 = 0. + t3071 + t3191;
  t3203 = t2625*t3195;
  t3237 = 0. + t3203;
  t982 = t512*t710*t743;
  t1712 = t1029*t1622;
  t2024 = t982 + t1712;
  t2100 = -1.*t710*t1029;
  t2102 = t512*t743*t1622;
  t2149 = t2100 + t2102;
  t2615 = -1.e-6*t2595;
  t3050 = 0.00559*t3028;
  t3684 = -3.e-6*t3237;
  t3788 = t2615 + t3050 + t3684;
  t4033 = 0.00272*t2595;
  t4041 = -1.e-6*t3028;
  t4382 = 2.e-6*t3237;
  t4570 = t4033 + t4041 + t4382;
  t4915 = t710*t1029*t743;
  t4929 = -1.*t512*t1622;
  t4932 = t4915 + t4929;
  t4995 = t512*t710;
  t4996 = t1029*t743*t1622;
  t5026 = t4995 + t4996;
  t4839 = 2.e-6*t2595;
  t4841 = -3.e-6*t3028;
  t4848 = 0.00464*t3237;
  t4854 = t4839 + t4841 + t4848;
  t6244 = -1.*t710*t185;
  t6368 = -1.*t2053*t1622;
  t6371 = 0. + t6244 + t6368;
  t2029 = t185*t2024;
  t2187 = t2053*t2149;
  t2418 = t2029 + t2187;
  t4789 = t2053*t2024;
  t4813 = -1.*t185*t2149;
  t4838 = t4789 + t4813;
  t6381 = 2.e-6*t6371;
  t6385 = -1.e-6*t3195;
  t6414 = t6381 + t6385;
  t6536 = -3.e-6*t6371;
  t6555 = 0.00559*t3195;
  t6585 = t6536 + t6555;
  t4966 = t185*t4932;
  t5048 = t2053*t5026;
  t5073 = t4966 + t5048;
  t6607 = 0.00464*t6371;
  t6643 = -3.e-6*t3195;
  t6738 = t6607 + t6643;
  t5113 = t2053*t4932;
  t5132 = -1.*t185*t5026;
  t5143 = t5113 + t5132;
  t5550 = t2053*t2625*t710;
  t5619 = -1.*t2625*t185*t1622;
  t5745 = t5550 + t5619;
  t5245 = t2625*t710*t185;
  t5395 = t2053*t2625*t1622;
  t5422 = t5245 + t5395;
  t7135 = 0.00272*t512*t2625;
  t7152 = -1.e-6*t2418;
  t7176 = 2.e-6*t4838;
  t7275 = t7135 + t7152 + t7176;
  t7334 = 0.00272*t2625*t1029;
  t7345 = -1.e-6*t5073;
  t7367 = 2.e-6*t5143;
  t7372 = t7334 + t7345 + t7367;
  t7490 = -0.00272*t743;
  t7517 = -1.e-6*t5422;
  t7519 = 2.e-6*t5745;
  t7536 = t7490 + t7517 + t7519;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2418*t3788 + t4838*t4854 + t2625*t4570*t512;
  p_output1[10]=t1029*t2625*t4570 + t3788*t5073 + t4854*t5143;
  p_output1[11]=t3788*t5422 + t4854*t5745 - 1.*t4570*t743;
  p_output1[12]=t2625*t512*t6414 + t2418*t6585 + t4838*t6738;
  p_output1[13]=t1029*t2625*t6414 + t5073*t6585 + t5143*t6738;
  p_output1[14]=t5422*t6585 + t5745*t6738 - 1.*t6414*t743;
  p_output1[15]=t7275;
  p_output1[16]=t7372;
  p_output1[17]=t7536;
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
  p_output1[39]=t7275;
  p_output1[40]=t7372;
  p_output1[41]=t7536;
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

#include "Jdq_AMWorld_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
