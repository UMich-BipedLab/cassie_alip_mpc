/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:13 GMT-04:00
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
  double t412;
  double t4152;
  double t4274;
  double t4153;
  double t4335;
  double t1577;
  double t4520;
  double t4454;
  double t4131;
  double t4148;
  double t1002;
  double t4613;
  double t4655;
  double t4574;
  double t4579;
  double t4220;
  double t4359;
  double t4372;
  double t4469;
  double t4472;
  double t4482;
  double t4549;
  double t4553;
  double t4610;
  double t4676;
  double t4681;
  double t4684;
  double t4701;
  double t4712;
  double t4715;
  double t4719;
  double t4732;
  double t4738;
  double t4749;
  double t4777;
  double t4788;
  double t4798;
  double t4803;
  double t4857;
  double t4863;
  double t4871;
  double t4872;
  double t4875;
  double t4880;
  double t4884;
  double t4886;
  double t4905;
  double t4447;
  double t4483;
  double t4494;
  double t4994;
  double t5033;
  double t5040;
  double t5008;
  double t5021;
  double t4784;
  double t4906;
  double t4917;
  double t5222;
  double t5227;
  double t5229;
  double t5237;
  double t5242;
  double t5257;
  double t4956;
  double t4960;
  double t4978;
  double t5233;
  double t5260;
  double t5269;
  double t5002;
  double t5007;
  double t5022;
  double t5043;
  double t5053;
  double t5068;
  double t5072;
  double t5089;
  double t5090;
  double t5094;
  double t5106;
  double t5120;
  double t5124;
  double t5125;
  double t5130;
  double t5148;
  double t5394;
  double t5404;
  double t5410;
  t412 = Cos(var1[3]);
  t4152 = Cos(var1[5]);
  t4274 = Sin(var1[3]);
  t4153 = Sin(var1[4]);
  t4335 = Sin(var1[5]);
  t1577 = Sin(var1[14]);
  t4520 = 0. + t1577;
  t4454 = Cos(var1[13]);
  t4131 = Cos(var1[14]);
  t4148 = Sin(var1[13]);
  t1002 = Cos(var1[4]);
  t4613 = -1.*t4131*t4148;
  t4655 = 0. + t4613;
  t4574 = -1.*t4454*t4131;
  t4579 = 0. + t4574;
  t4220 = t412*t4152*t4153;
  t4359 = t4274*t4335;
  t4372 = t4220 + t4359;
  t4469 = -1.*t4152*t4274;
  t4472 = t412*t4153*t4335;
  t4482 = t4469 + t4472;
  t4549 = var2[13]*t4520;
  t4553 = var2[5]*t4520;
  t4610 = t4579*t4152;
  t4676 = -1.*t4655*t4335;
  t4681 = 0. + t4610 + t4676;
  t4684 = var2[4]*t4681;
  t4701 = -1.*t4520*t4153;
  t4712 = t4152*t4655;
  t4715 = t4579*t4335;
  t4719 = 0. + t4712 + t4715;
  t4732 = t1002*t4719;
  t4738 = 0. + t4701 + t4732;
  t4749 = var2[3]*t4738;
  t4777 = 0. + t4549 + t4553 + t4684 + t4749;
  t4788 = -1.*var2[14];
  t4798 = t4152*t4148;
  t4803 = t4454*t4335;
  t4857 = 0. + t4798 + t4803;
  t4863 = var2[4]*t4857;
  t4871 = -1.*t4454*t4152;
  t4872 = t4148*t4335;
  t4875 = 0. + t4871 + t4872;
  t4880 = t1002*t4875;
  t4884 = 0. + t4880;
  t4886 = var2[3]*t4884;
  t4905 = 0. + t4788 + t4863 + t4886;
  t4447 = t4148*t4372;
  t4483 = t4454*t4482;
  t4494 = t4447 + t4483;
  t4994 = 0. + t4131;
  t5033 = t4148*t1577;
  t5040 = 0. + t5033;
  t5008 = t4454*t1577;
  t5021 = 0. + t5008;
  t4784 = 0.00644*t4777;
  t4906 = -1.e-6*t4905;
  t4917 = 0. + t4784 + t4906;
  t5222 = t4152*t4274*t4153;
  t5227 = -1.*t412*t4335;
  t5229 = t5222 + t5227;
  t5237 = t412*t4152;
  t5242 = t4274*t4153*t4335;
  t5257 = t5237 + t5242;
  t4956 = -1.e-6*t4777;
  t4960 = 0.000842*t4905;
  t4978 = 0. + t4956 + t4960;
  t5233 = t4148*t5229;
  t5260 = t4454*t5257;
  t5269 = t5233 + t5260;
  t5002 = var2[13]*t4994;
  t5007 = var2[5]*t4994;
  t5022 = t4152*t5021;
  t5043 = -1.*t5040*t4335;
  t5053 = 0. + t5022 + t5043;
  t5068 = var2[4]*t5053;
  t5072 = -1.*t4994*t4153;
  t5089 = t4152*t5040;
  t5090 = t5021*t4335;
  t5094 = 0. + t5089 + t5090;
  t5106 = t1002*t5094;
  t5120 = 0. + t5072 + t5106;
  t5124 = var2[3]*t5120;
  t5125 = 0. + t5002 + t5007 + t5068 + t5124;
  t5130 = 0.00608*t5125;
  t5148 = 0. + t5130;
  t5394 = t1002*t4152*t4148;
  t5404 = t4454*t1002*t4335;
  t5410 = t5394 + t5404;
  p_output1[0]=(t1002*t1577*t412 - 1.*t4131*t4494)*t4917 + (-1.*t4372*t4454 + t4148*t4482)*t4978 + (t1002*t412*t4131 + t1577*t4494)*t5148;
  p_output1[1]=t4978*(-1.*t4454*t5229 + t4148*t5257) + t5148*(t1002*t4131*t4274 + t1577*t5269) + t4917*(t1002*t1577*t4274 - 1.*t4131*t5269);
  p_output1[2]=(t1002*t4148*t4335 - 1.*t1002*t4152*t4454)*t4978 + t5148*(-1.*t4131*t4153 + t1577*t5410) + t4917*(-1.*t1577*t4153 - 1.*t4131*t5410);
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

#include "AMWorld_RightHip_mex.hh"

namespace SymExpression
{

void AMWorld_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
