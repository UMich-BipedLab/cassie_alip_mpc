/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:34 GMT-04:00
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
  double t2635;
  double t4280;
  double t2889;
  double t3696;
  double t4399;
  double t5487;
  double t6241;
  double t6813;
  double t6975;
  double t7189;
  double t7332;
  double t7405;
  double t3697;
  double t4841;
  double t5479;
  double t2112;
  double t6815;
  double t6990;
  double t6994;
  double t7418;
  double t7817;
  double t7851;
  double t8706;
  double t8712;
  double t8721;
  double t8623;
  double t8630;
  double t8632;
  double t9023;
  double t9030;
  double t9038;
  double t8761;
  double t7946;
  double t9102;
  double t9106;
  double t9107;
  double t9054;
  double t8762;
  double t8791;
  double t9135;
  double t9136;
  double t9138;
  double t9139;
  double t9140;
  double t9149;
  double t9150;
  double t9151;
  double t9109;
  double t9112;
  double t9123;
  double t9124;
  double t9127;
  double t9128;
  double t9129;
  double t9130;
  double t9131;
  double t9133;
  t2635 = Sin(var1[3]);
  t4280 = Cos(var1[3]);
  t2889 = Cos(var1[5]);
  t3696 = Sin(var1[4]);
  t4399 = Sin(var1[5]);
  t5487 = Cos(var1[6]);
  t6241 = -1.*t5487;
  t6813 = 1. + t6241;
  t6975 = Sin(var1[6]);
  t7189 = -1.*t4280*t2889;
  t7332 = -1.*t2635*t3696*t4399;
  t7405 = t7189 + t7332;
  t3697 = -1.*t2889*t2635*t3696;
  t4841 = t4280*t4399;
  t5479 = t3697 + t4841;
  t2112 = Cos(var1[4]);
  t6815 = 0.07996*t6813;
  t6990 = -0.135*t6975;
  t6994 = 0. + t6815 + t6990;
  t7418 = 0.135*t6813;
  t7817 = 0.07996*t6975;
  t7851 = 0. + t7418 + t7817;
  t8706 = -1.*t2889*t2635;
  t8712 = t4280*t3696*t4399;
  t8721 = t8706 + t8712;
  t8623 = t4280*t2889*t3696;
  t8630 = t2635*t4399;
  t8632 = t8623 + t8630;
  t9023 = t2889*t2635;
  t9030 = -1.*t4280*t3696*t4399;
  t9038 = t9023 + t9030;
  t8761 = t5487*t8632;
  t7946 = t5487*t7405;
  t9102 = t2889*t2635*t3696;
  t9106 = -1.*t4280*t4399;
  t9107 = t9102 + t9106;
  t9054 = -1.*t8632*t6975;
  t8762 = -1.*t8721*t6975;
  t8791 = t8761 + t8762;
  t9135 = -0.135*t5487;
  t9136 = t9135 + t7817;
  t9138 = 0.07996*t5487;
  t9139 = 0.135*t6975;
  t9140 = t9138 + t9139;
  t9149 = t4280*t2889;
  t9150 = t2635*t3696*t4399;
  t9151 = t9149 + t9150;
  t9109 = -1.*t9107*t6975;
  t9112 = t5487*t9107;
  t9123 = -1.*t2112*t5487*t4399;
  t9124 = -1.*t2112*t2889*t6975;
  t9127 = t9123 + t9124;
  t9128 = 0.09786*t9127;
  t9129 = t2112*t2889*t5487;
  t9130 = -1.*t2112*t4399*t6975;
  t9131 = t9129 + t9130;
  t9133 = 0.1351*t9131;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.05485*t2112*t2635 + t5479*t6994 + 0.09786*(t5479*t5487 - 1.*t6975*t7405) + t7405*t7851 + 0.1351*(t5479*t6975 + t7946);
  p_output1[10]=-0.05485*t2112*t4280 + t6994*t8632 + t7851*t8721 + 0.1351*(t6975*t8632 + t5487*t8721) + 0.09786*t8791;
  p_output1[11]=0;
  p_output1[12]=0.05485*t3696*t4280 + 0.1351*(t2112*t4280*t4399*t5487 + t2112*t2889*t4280*t6975) + 0.09786*(t2112*t2889*t4280*t5487 - 1.*t2112*t4280*t4399*t6975) + t2112*t2889*t4280*t6994 + t2112*t4280*t4399*t7851;
  p_output1[13]=0.05485*t2635*t3696 + 0.1351*(t2112*t2635*t4399*t5487 + t2112*t2635*t2889*t6975) + 0.09786*(t2112*t2635*t2889*t5487 - 1.*t2112*t2635*t4399*t6975) + t2112*t2635*t2889*t6994 + t2112*t2635*t4399*t7851;
  p_output1[14]=0.05485*t2112 + 0.1351*(-1.*t3696*t4399*t5487 - 1.*t2889*t3696*t6975) + 0.09786*(-1.*t2889*t3696*t5487 + t3696*t4399*t6975) - 1.*t2889*t3696*t6994 - 1.*t3696*t4399*t7851;
  p_output1[15]=t7851*t8632 + t6994*t9038 + 0.1351*(t8761 + t6975*t9038) + 0.09786*(t5487*t9038 + t9054);
  p_output1[16]=t6994*t7405 + t7851*t9107 + 0.09786*(t7946 + t9109) + 0.1351*(t6975*t7405 + t9112);
  p_output1[17]=-1.*t2112*t4399*t6994 + t2112*t2889*t7851 + t9128 + t9133;
  p_output1[18]=0.1351*t8791 + 0.09786*(-1.*t5487*t8721 + t9054) + t8632*t9136 + t8721*t9140;
  p_output1[19]=t9107*t9136 + t9140*t9151 + 0.09786*(t9109 - 1.*t5487*t9151) + 0.1351*(t9112 - 1.*t6975*t9151);
  p_output1[20]=t9128 + t9133 + t2112*t2889*t9136 + t2112*t4399*t9140;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void Jp_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
