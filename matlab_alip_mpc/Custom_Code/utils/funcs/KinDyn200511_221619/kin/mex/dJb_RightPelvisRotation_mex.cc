/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:25 GMT-04:00
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
  double t575;
  double t51;
  double t240;
  double t2339;
  double t2430;
  double t2677;
  double t2759;
  double t580;
  double t3021;
  double t3258;
  double t3303;
  double t3343;
  double t3541;
  double t3542;
  double t3547;
  double t3562;
  double t3587;
  double t2674;
  double t2829;
  double t2931;
  double t3672;
  double t4487;
  double t4489;
  double t4501;
  double t4582;
  double t4601;
  double t4637;
  double t114;
  double t5350;
  double t5362;
  double t5372;
  double t3906;
  double t4044;
  double t5520;
  double t5546;
  double t5556;
  double t4859;
  double t4981;
  double t5057;
  double t5801;
  double t5803;
  double t5776;
  double t5818;
  double t5819;
  double t5820;
  double t5829;
  double t5854;
  double t5856;
  double t5861;
  double t5862;
  double t5866;
  double t5878;
  double t5905;
  double t5912;
  double t5925;
  double t5926;
  double t5920;
  double t5983;
  double t5986;
  double t6006;
  double t5933;
  double t5957;
  double t5959;
  double t5756;
  double t5765;
  double t5914;
  double t6041;
  double t6043;
  double t6049;
  double t6297;
  double t6050;
  double t6060;
  double t6061;
  double t6062;
  double t6215;
  double t6255;
  double t6263;
  double t6160;
  double t6168;
  double t6171;
  double t6174;
  double t6210;
  double t6602;
  double t6691;
  double t6529;
  double t6559;
  double t6564;
  double t6790;
  double t6792;
  double t6797;
  double t6328;
  double t6337;
  double t6403;
  double t6597;
  double t6707;
  double t6712;
  double t6407;
  double t6437;
  double t6441;
  double t6505;
  double t6963;
  double t6964;
  double t7054;
  double t7057;
  double t7117;
  double t7122;
  double t7149;
  double t7151;
  double t7173;
  double t7806;
  double t7809;
  double t7810;
  double t7816;
  double t7817;
  double t7825;
  double t7837;
  double t5696;
  double t5697;
  double t5716;
  double t5717;
  double t5721;
  double t5724;
  double t5744;
  double t5747;
  double t5749;
  double t6293;
  double t6404;
  double t8852;
  double t8870;
  double t8901;
  double t8797;
  double t6789;
  double t8905;
  double t8909;
  double t8914;
  double t8917;
  double t6850;
  t575 = Cos(var1[3]);
  t51 = Cos(var1[4]);
  t240 = Sin(var1[3]);
  t2339 = Cos(var1[5]);
  t2430 = Sin(var1[13]);
  t2677 = Cos(var1[13]);
  t2759 = Sin(var1[5]);
  t580 = Sin(var1[4]);
  t3021 = -1.*t2339*t2430;
  t3258 = -1.*t2677*t2759;
  t3303 = t3021 + t3258;
  t3343 = -1.*t240*t3303;
  t3541 = t2677*t2339;
  t3542 = -1.*t2430*t2759;
  t3547 = t3541 + t3542;
  t3562 = t575*t580*t3547;
  t3587 = t3343 + t3562;
  t2674 = t2339*t2430;
  t2829 = t2677*t2759;
  t2931 = 0. + t2674 + t2829;
  t3672 = 0. + t3541 + t3542;
  t4487 = t575*t580*t3303;
  t4489 = -1.*t2677*t2339;
  t4501 = t2430*t2759;
  t4582 = t4489 + t4501;
  t4601 = -1.*t240*t4582;
  t4637 = t4487 + t4601;
  t114 = 0. + t51;
  t5350 = t575*t3303;
  t5362 = t240*t580*t3547;
  t5372 = t5350 + t5362;
  t3906 = t580*t2931;
  t4044 = 0. + t3906;
  t5520 = t240*t580*t3303;
  t5546 = t575*t4582;
  t5556 = t5520 + t5546;
  t4859 = 0. + t3021 + t3258;
  t4981 = t580*t3672;
  t5057 = 0. + t4981;
  t5801 = -1.*t2677;
  t5803 = 1. + t5801;
  t5776 = 0.05485*t580;
  t5818 = 0.07996*t5803;
  t5819 = 0.09786*t2677;
  t5820 = -0.00009999999999998899*t2430;
  t5829 = 0. + t5818 + t5819 + t5820;
  t5854 = t2339*t5829;
  t5856 = -0.135*t5803;
  t5861 = -0.1351*t2677;
  t5862 = -0.0179*t2430;
  t5866 = 0. + t5856 + t5861 + t5862;
  t5878 = t5866*t2759;
  t5905 = 0. + t5854 + t5878;
  t5912 = t51*t5905;
  t5925 = t51*t2931;
  t5926 = 0. + t5925;
  t5920 = 0. + t5776 + t5912;
  t5983 = -0.05485*t51;
  t5986 = t580*t5905;
  t6006 = 0. + t5983 + t5986;
  t5933 = 0.05485*t51;
  t5957 = -1.*t580*t5905;
  t5959 = t5933 + t5957;
  t5756 = t51*t3672;
  t5765 = 0. + t5756;
  t5914 = t5776 + t5912;
  t6041 = t2339*t5866;
  t6043 = -1.*t5829*t2759;
  t6049 = 0. + t6041 + t6043;
  t6297 = t6041 + t6043;
  t6050 = -1.*t6049*t3672;
  t6060 = -1.*t5926*t5920;
  t6061 = -1.*t4044*t6006;
  t6062 = t6050 + t6060 + t6061;
  t6215 = -1.*t2339*t5829;
  t6255 = -1.*t5866*t2759;
  t6263 = t6215 + t6255;
  t6160 = t4859*t6049;
  t6168 = t5920*t5765;
  t6171 = t6006*t5057;
  t6174 = t6160 + t6168 + t6171;
  t6210 = -1.*t3303*t6049;
  t6602 = -0.00009999999999998899*t2677;
  t6691 = t6602 + t5862;
  t6529 = -0.0179*t2677;
  t6559 = 0.00009999999999998899*t2430;
  t6564 = t6529 + t6559;
  t6790 = t2339*t6691;
  t6792 = t6564*t2759;
  t6797 = t6790 + t6792;
  t6328 = -1.*t51*t3547*t5920;
  t6337 = -1.*t580*t3547*t6006;
  t6403 = t51*t3303*t6062;
  t6597 = t2339*t6564;
  t6707 = -1.*t6691*t2759;
  t6712 = t6597 + t6707;
  t6407 = t6049*t4582;
  t6437 = t51*t3303*t5920;
  t6441 = t580*t3303*t6006;
  t6505 = t51*t3547*t6174;
  t6963 = -1.*t580;
  t6964 = 0. + t6963;
  t7054 = t6964*t5920;
  t7057 = t114*t6006;
  t7117 = 0. + t7054 + t7057;
  t7122 = t51*t3303*t7117;
  t7149 = -1.*t6049*t4582;
  t7151 = -1.*t51*t3303*t5920;
  t7173 = -1.*t580*t3303*t6006;
  t7806 = -1.*t6964*t5920;
  t7809 = -1.*t114*t6006;
  t7810 = 0. + t7806 + t7809;
  t7816 = t51*t3547*t7810;
  t7817 = t3303*t6049;
  t7825 = t51*t3547*t5920;
  t7837 = t580*t3547*t6006;
  t5696 = -1.*var2[4]*t51;
  t5697 = -1.*var2[4]*t580*t2931;
  t5716 = var2[13]*t51*t3547;
  t5717 = var2[5]*t51*t3547;
  t5721 = t5697 + t5716 + t5717;
  t5724 = var2[13]*t51*t3303;
  t5744 = var2[5]*t51*t3303;
  t5747 = -1.*var2[4]*t580*t3672;
  t5749 = t5724 + t5744 + t5747;
  t6293 = -1.*t6263*t3672;
  t6404 = t4859*t6263;
  t8852 = t5905*t3672;
  t8870 = 0. + t6160 + t8852;
  t8901 = t3303*t8870;
  t8797 = -1.*t5905*t3547;
  t6789 = -1.*t6712*t3672;
  t8905 = -1.*t2931*t5905;
  t8909 = 0. + t8905 + t6050;
  t8914 = t4582*t8909;
  t8917 = t3303*t5905;
  t6850 = t4859*t6712;
  p_output1[0]=-1.*t114*t240*var2[3] - 1.*t575*t580*var2[4];
  p_output1[1]=(-1.*t240*t4044 - 1.*t3672*t575)*var2[3] + t2931*t51*t575*var2[4] + t3587*var2[5] + t3587*var2[13];
  p_output1[2]=(-1.*t240*t5057 - 1.*t4859*t575)*var2[3] + t3672*t51*t575*var2[4] + t4637*var2[5] + t4637*var2[13];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t114*t575*var2[3] - 1.*t240*t580*var2[4];
  p_output1[7]=(-1.*t240*t3672 + t4044*t575)*var2[3] + t240*t2931*t51*var2[4] + t5372*var2[5] + t5372*var2[13];
  p_output1[8]=(-1.*t240*t4859 + t5057*t575)*var2[3] + t240*t3672*t51*var2[4] + t5556*var2[5] + t5556*var2[13];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5696;
  p_output1[13]=t5721;
  p_output1[14]=t5749;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t5765*(-1.*t4044*t5914 + t2931*t580*t5920 - 1.*t5926*t5959 - 1.*t2931*t51*t6006) + t5926*(t5057*t5914 - 1.*t3672*t580*t5920 + t5765*t5959 + t3672*t51*t6006) - 1.*t3672*t580*t6062 - 1.*t2931*t580*t6174)*var2[4] + (t5765*(t6210 + t6293 - 1.*t4044*t580*t6297 - 1.*t51*t5926*t6297 + t6328 + t6337) + t6403 + t5926*(t51*t5765*t6297 + t5057*t580*t6297 + t6404 + t6407 + t6437 + t6441) + t6505)*var2[5] + (t6403 + t6505 + t5765*(t6210 + t6328 + t6337 + t6789 - 1.*t4044*t580*t6797 - 1.*t51*t5926*t6797) + t5926*(t6407 + t6437 + t6441 + t51*t5765*t6797 + t5057*t580*t6797 + t6850))*var2[13];
  p_output1[19]=(-1.*t51*(-1.*t5765*t5920 - 1.*t5057*t6006 - 1.*t4859*t6049) + (-1.*t5057*t5914 + t3672*t580*t5920 - 1.*t5765*t5959 - 1.*t3672*t51*t6006)*t6964 + t5765*(t114*t5914 - 1.*t51*t5920 - 1.*t580*t6006 + t5959*t6964) - 1.*t3672*t580*t7117)*var2[4] + (t5765*(t114*t580*t6297 + t51*t6297*t6964) + t7122 + t6964*(-1.*t4859*t6263 - 1.*t51*t5765*t6297 - 1.*t5057*t580*t6297 + t7149 + t7151 + t7173))*var2[5] + (t5765*(t114*t580*t6797 + t51*t6797*t6964) + t7122 + t6964*(-1.*t4859*t6712 - 1.*t51*t5765*t6797 - 1.*t5057*t580*t6797 + t7149 + t7151 + t7173))*var2[13];
  p_output1[20]=(-1.*t51*(t5920*t5926 + t4044*t6006 + t3672*t6049) + (t4044*t5914 - 1.*t2931*t580*t5920 + t5926*t5959 + t2931*t51*t6006)*t6964 + t5926*(-1.*t114*t5914 + t51*t5920 + t580*t6006 - 1.*t5959*t6964) - 1.*t2931*t580*t7810)*var2[4] + (t5926*(-1.*t114*t580*t6297 - 1.*t51*t6297*t6964) + t7816 + t6964*(t3672*t6263 + t4044*t580*t6297 + t51*t5926*t6297 + t7817 + t7825 + t7837))*var2[5] + (t5926*(-1.*t114*t580*t6797 - 1.*t51*t6797*t6964) + t7816 + t6964*(t3672*t6712 + t4044*t580*t6797 + t51*t5926*t6797 + t7817 + t7825 + t7837))*var2[13];
  p_output1[21]=t5696;
  p_output1[22]=t5721;
  p_output1[23]=t5749;
  p_output1[24]=(t4859*(t6210 + t6293 - 1.*t2931*t6297 + t8797) + t8901 + t8914 + t3672*(t3672*t6297 + t6404 + t6407 + t8917))*var2[5] + (t4859*(t6210 + t6789 - 1.*t2931*t6797 + t8797) + t8901 + t8914 + t3672*(t6407 + t3672*t6797 + t6850 + t8917))*var2[13];
  p_output1[25]=-0.05485*t4582*var2[5] - 0.05485*t4582*var2[13];
  p_output1[26]=0.05485*t3303*var2[5] + 0.05485*t3303*var2[13];
  p_output1[27]=0;
  p_output1[28]=t3303*var2[5] + t3303*var2[13];
  p_output1[29]=t4582*var2[5] + t4582*var2[13];
  p_output1[30]=0;
  p_output1[31]=(t2430*t5829 + t2677*t5866 + t2430*t6564 - 1.*t2677*t6691)*var2[13];
  p_output1[32]=(t2677*t5829 - 1.*t2430*t5866 + t2677*t6564 + t2430*t6691)*var2[13];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void dJb_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
