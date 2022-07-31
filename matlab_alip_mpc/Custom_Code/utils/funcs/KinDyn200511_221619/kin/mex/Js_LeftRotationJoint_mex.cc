/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:46 GMT-04:00
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
  double t14;
  double t176;
  double t523;
  double t628;
  double t561;
  double t648;
  double t998;
  double t1182;
  double t667;
  double t680;
  double t759;
  double t776;
  double t885;
  double t895;
  double t928;
  double t1562;
  double t1564;
  double t1641;
  double t1719;
  double t1749;
  double t1774;
  double t1923;
  double t1959;
  double t2012;
  double t2023;
  double t1236;
  double t1340;
  double t1433;
  double t1162;
  double t1183;
  double t1188;
  double t2018;
  double t2095;
  double t2099;
  double t2138;
  double t2231;
  double t2289;
  double t13;
  double t2531;
  double t2585;
  double t2656;
  double t4049;
  double t4147;
  double t4179;
  double t3362;
  double t3423;
  double t3425;
  t14 = Cos(var1[3]);
  t176 = Sin(var1[3]);
  t523 = Cos(var1[4]);
  t628 = Sin(var1[4]);
  t561 = -1.*var1[2]*t523*t176;
  t648 = -1.*var1[1]*t628;
  t998 = Cos(var1[5]);
  t1182 = Sin(var1[5]);
  t667 = var1[2]*t14*t523;
  t680 = var1[0]*t628;
  t759 = -1.*var1[1]*t14*t523;
  t776 = var1[0]*t523*t176;
  t885 = t14*t523;
  t895 = t523*t176;
  t928 = -1.*t628;
  t1562 = t998*t176*t628;
  t1564 = -1.*t14*t1182;
  t1641 = t1562 + t1564;
  t1719 = t14*t998;
  t1749 = t176*t628*t1182;
  t1774 = t1719 + t1749;
  t1923 = Cos(var1[6]);
  t1959 = -1.*t1923;
  t2012 = 1. + t1959;
  t2023 = Sin(var1[6]);
  t1236 = -1.*t998*t176;
  t1340 = t14*t628*t1182;
  t1433 = t1236 + t1340;
  t1162 = t14*t998*t628;
  t1183 = t176*t1182;
  t1188 = t1162 + t1183;
  t2018 = 0.07996*t2012;
  t2095 = -0.135*t2023;
  t2099 = 0. + t2018 + t2095;
  t2138 = 0.135*t2012;
  t2231 = 0.07996*t2023;
  t2289 = 0. + t2138 + t2231;
  t13 = -1.*var1[0];
  t2531 = t523*t998*t1923;
  t2585 = -1.*t523*t1182*t2023;
  t2656 = t2531 + t2585;
  t4049 = t1923*t1188;
  t4147 = -1.*t1433*t2023;
  t4179 = t4049 + t4147;
  t3362 = t1923*t1641;
  t3423 = -1.*t1774*t2023;
  t3425 = t3362 + t3423;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t13;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t14*var1[2];
  p_output1[25]=-1.*t176*var1[2];
  p_output1[26]=t14*var1[0] + t176*var1[1];
  p_output1[27]=-1.*t176;
  p_output1[28]=t14;
  p_output1[29]=0;
  p_output1[30]=t561 + t648;
  p_output1[31]=t667 + t680;
  p_output1[32]=t759 + t776;
  p_output1[33]=t885;
  p_output1[34]=t895;
  p_output1[35]=t928;
  p_output1[36]=-0.135*t1188 + 0.07996*t1433 + t561 + t648;
  p_output1[37]=-0.135*t1641 + 0.07996*t1774 + t667 + t680;
  p_output1[38]=0.07996*t1182*t523 + t759 + t776 - 0.135*t523*t998;
  p_output1[39]=0. + t885;
  p_output1[40]=0. + t895;
  p_output1[41]=0. + t928;
  p_output1[42]=0.08055*(t1433*t1923 + t1188*t2023) + 0.135*t14*t523 + t2656*(0. + t1641*t2099 + t1774*t2289 + var1[1]) + t3425*(0. - 1.*t1182*t2289*t523 - 1.*t2099*t523*t998 - 1.*var1[2]);
  p_output1[43]=0.08055*(t1774*t1923 + t1641*t2023) + (0. + t13 - 1.*t1188*t2099 - 1.*t1433*t2289)*t2656 + 0.135*t176*t523 + t4179*(0. + t1182*t2289*t523 + t2099*t523*t998 + var1[2]);
  p_output1[44]=-0.135*t628 + 0.08055*(t1182*t1923*t523 + t2023*t523*t998) + t3425*(0. + t1188*t2099 + t1433*t2289 + var1[0]) + t4179*(0. - 1.*t1641*t2099 - 1.*t1774*t2289 - 1.*var1[1]);
  p_output1[45]=0. + t4049 + t4147;
  p_output1[46]=0. + t3362 + t3423;
  p_output1[47]=0. + t2531 + t2585;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void Js_LeftRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
