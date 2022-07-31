/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:44 GMT-04:00
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
  double t921;
  double t930;
  double t987;
  double t1055;
  double t1158;
  double t1425;
  double t1364;
  double t1399;
  double t1589;
  double t1424;
  double t1622;
  double t1878;
  double t2139;
  double t2145;
  double t2154;
  double t576;
  double t1090;
  double t1208;
  double t1339;
  double t2087;
  double t2114;
  double t2118;
  double t2701;
  double t2754;
  double t2759;
  double t2792;
  double t2848;
  double t2921;
  double t5560;
  double t5710;
  double t5715;
  double t3282;
  double t6408;
  double t6526;
  double t6598;
  double t2310;
  double t5864;
  double t3331;
  double t3380;
  double t7730;
  double t7773;
  double t7789;
  double t7803;
  double t7807;
  double t7036;
  double t8061;
  double t8064;
  double t8070;
  double t7113;
  double t7619;
  double t7673;
  double t7674;
  double t7696;
  double t7703;
  double t7706;
  double t7717;
  double t7719;
  t921 = Sin(var1[3]);
  t930 = Cos(var1[13]);
  t987 = -1.*t930;
  t1055 = 1. + t987;
  t1158 = Sin(var1[13]);
  t1425 = Cos(var1[3]);
  t1364 = Cos(var1[5]);
  t1399 = Sin(var1[4]);
  t1589 = Sin(var1[5]);
  t1424 = -1.*t1364*t921*t1399;
  t1622 = t1425*t1589;
  t1878 = t1424 + t1622;
  t2139 = -1.*t1425*t1364;
  t2145 = -1.*t921*t1399*t1589;
  t2154 = t2139 + t2145;
  t576 = Cos(var1[4]);
  t1090 = 0.07996*t1055;
  t1208 = 0.135*t1158;
  t1339 = 0. + t1090 + t1208;
  t2087 = -0.135*t1055;
  t2114 = 0.07996*t1158;
  t2118 = 0. + t2087 + t2114;
  t2701 = t1425*t1364*t1399;
  t2754 = t921*t1589;
  t2759 = t2701 + t2754;
  t2792 = -1.*t1364*t921;
  t2848 = t1425*t1399*t1589;
  t2921 = t2792 + t2848;
  t5560 = t1364*t921;
  t5710 = -1.*t1425*t1399*t1589;
  t5715 = t5560 + t5710;
  t3282 = t930*t2759;
  t6408 = t1364*t921*t1399;
  t6526 = -1.*t1425*t1589;
  t6598 = t6408 + t6526;
  t2310 = t930*t2154;
  t5864 = -1.*t1158*t2759;
  t3331 = -1.*t1158*t2921;
  t3380 = t3282 + t3331;
  t7730 = 0.135*t930;
  t7773 = t7730 + t2114;
  t7789 = 0.07996*t930;
  t7803 = -0.135*t1158;
  t7807 = t7789 + t7803;
  t7036 = -1.*t1158*t6598;
  t8061 = t1425*t1364;
  t8064 = t921*t1399*t1589;
  t8070 = t8061 + t8064;
  t7113 = t930*t6598;
  t7619 = -1.*t576*t1364*t1158;
  t7673 = -1.*t930*t576*t1589;
  t7674 = t7619 + t7673;
  t7696 = 0.07996*t7674;
  t7703 = t930*t576*t1364;
  t7706 = -1.*t576*t1158*t1589;
  t7717 = t7703 + t7706;
  t7719 = -0.135*t7717;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1339*t1878 + t2118*t2154 - 0.135*(t1158*t1878 + t2310) + 0.08055*t576*t921 + 0.07996*(-1.*t1158*t2154 + t1878*t930);
  p_output1[10]=t1339*t2759 + t2118*t2921 + 0.07996*t3380 - 0.08055*t1425*t576 - 0.135*(t1158*t2759 + t2921*t930);
  p_output1[11]=0;
  p_output1[12]=0.08055*t1399*t1425 + t1339*t1364*t1425*t576 + t1425*t1589*t2118*t576 + 0.07996*(-1.*t1158*t1425*t1589*t576 + t1364*t1425*t576*t930) - 0.135*(t1158*t1364*t1425*t576 + t1425*t1589*t576*t930);
  p_output1[13]=0.08055*t1399*t921 + t1339*t1364*t576*t921 + t1589*t2118*t576*t921 + 0.07996*(-1.*t1158*t1589*t576*t921 + t1364*t576*t921*t930) - 0.135*(t1158*t1364*t576*t921 + t1589*t576*t921*t930);
  p_output1[14]=-1.*t1339*t1364*t1399 - 1.*t1399*t1589*t2118 + 0.08055*t576 + 0.07996*(t1158*t1399*t1589 - 1.*t1364*t1399*t930) - 0.135*(-1.*t1158*t1364*t1399 - 1.*t1399*t1589*t930);
  p_output1[15]=t2118*t2759 + t1339*t5715 - 0.135*(t3282 + t1158*t5715) + 0.07996*(t5864 + t5715*t930);
  p_output1[16]=t1339*t2154 + t2118*t6598 + 0.07996*(t2310 + t7036) - 0.135*(t1158*t2154 + t7113);
  p_output1[17]=-1.*t1339*t1589*t576 + t1364*t2118*t576 + t7696 + t7719;
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
  p_output1[39]=-0.135*t3380 + t2759*t7773 + t2921*t7807 + 0.07996*(t5864 - 1.*t2921*t930);
  p_output1[40]=t6598*t7773 + t7807*t8070 - 0.135*(t7113 - 1.*t1158*t8070) + 0.07996*(t7036 - 1.*t8070*t930);
  p_output1[41]=t7696 + t7719 + t1364*t576*t7773 + t1589*t576*t7807;
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

#include "Jp_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void Jp_RightAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
