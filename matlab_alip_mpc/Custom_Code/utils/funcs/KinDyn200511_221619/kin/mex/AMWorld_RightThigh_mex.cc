/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:44 GMT-04:00
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
  double t61;
  double t2660;
  double t2972;
  double t2761;
  double t2994;
  double t1847;
  double t5855;
  double t3769;
  double t2381;
  double t2533;
  double t1446;
  double t7082;
  double t7089;
  double t6856;
  double t7054;
  double t7229;
  double t7230;
  double t7236;
  double t7269;
  double t7272;
  double t7282;
  double t7283;
  double t7318;
  double t7324;
  double t7327;
  double t7288;
  double t7300;
  double t7312;
  double t7428;
  double t7446;
  double t7416;
  double t7417;
  double t7471;
  double t7475;
  double t7491;
  double t7494;
  double t7496;
  double t7458;
  double t7478;
  double t7481;
  double t6177;
  double t6464;
  double t7063;
  double t7097;
  double t7098;
  double t7115;
  double t7161;
  double t7165;
  double t7181;
  double t7184;
  double t7205;
  double t7219;
  double t7221;
  double t7222;
  double t7241;
  double t7242;
  double t7277;
  double t7315;
  double t7329;
  double t7334;
  double t7343;
  double t7357;
  double t7365;
  double t7378;
  double t7382;
  double t7384;
  double t7394;
  double t7410;
  double t7411;
  double t7421;
  double t7454;
  double t7457;
  double t7487;
  double t7499;
  double t7500;
  double t7504;
  double t7505;
  double t7506;
  double t7509;
  double t7510;
  double t7514;
  double t7519;
  double t7539;
  double t7546;
  double t2969;
  double t3164;
  double t3515;
  double t3812;
  double t4423;
  double t4751;
  double t3520;
  double t4819;
  double t5016;
  double t7582;
  double t7586;
  double t7588;
  double t7590;
  double t7596;
  double t7608;
  double t7228;
  double t7413;
  double t7549;
  double t7550;
  double t7552;
  double t7553;
  double t7562;
  double t7573;
  double t7689;
  double t7690;
  double t7694;
  double t7698;
  double t7700;
  double t7702;
  double t7696;
  double t7719;
  double t7722;
  double t7620;
  double t7638;
  double t7639;
  double t7640;
  double t7740;
  double t7741;
  double t7747;
  double t7749;
  double t7753;
  double t7754;
  double t7804;
  double t7806;
  double t7812;
  double t7798;
  double t7799;
  double t7801;
  double t7803;
  double t7815;
  double t7821;
  t61 = Cos(var1[3]);
  t2660 = Cos(var1[5]);
  t2972 = Sin(var1[3]);
  t2761 = Sin(var1[4]);
  t2994 = Sin(var1[5]);
  t1847 = Sin(var1[14]);
  t5855 = 0. + t1847;
  t3769 = Cos(var1[13]);
  t2381 = Cos(var1[14]);
  t2533 = Sin(var1[13]);
  t1446 = Cos(var1[4]);
  t7082 = -1.*t2381*t2533;
  t7089 = 0. + t7082;
  t6856 = -1.*t3769*t2381;
  t7054 = 0. + t6856;
  t7229 = Cos(var1[15]);
  t7230 = t2381*t7229;
  t7236 = 0. + t7230;
  t7269 = Sin(var1[15]);
  t7272 = 0. + t7269;
  t7282 = t7229*t1847;
  t7283 = 0. + t7282;
  t7318 = t2533*t7283;
  t7324 = t3769*t7272;
  t7327 = 0. + t7318 + t7324;
  t7288 = t3769*t7283;
  t7300 = -1.*t2533*t7272;
  t7312 = 0. + t7288 + t7300;
  t7428 = t2381*t7269;
  t7446 = 0. + t7428;
  t7416 = -1.*t7229;
  t7417 = 0. + t7416;
  t7471 = t1847*t7269;
  t7475 = 0. + t7471;
  t7491 = t3769*t7417;
  t7494 = t2533*t7475;
  t7496 = 0. + t7491 + t7494;
  t7458 = -1.*t7417*t2533;
  t7478 = t3769*t7475;
  t7481 = 0. + t7458 + t7478;
  t6177 = var2[13]*t5855;
  t6464 = var2[5]*t5855;
  t7063 = t7054*t2660;
  t7097 = -1.*t7089*t2994;
  t7098 = 0. + t7063 + t7097;
  t7115 = var2[4]*t7098;
  t7161 = -1.*t5855*t2761;
  t7165 = t2660*t7089;
  t7181 = t7054*t2994;
  t7184 = 0. + t7165 + t7181;
  t7205 = t1446*t7184;
  t7219 = 0. + t7161 + t7205;
  t7221 = var2[3]*t7219;
  t7222 = 0. + var2[15] + t6177 + t6464 + t7115 + t7221;
  t7241 = var2[13]*t7236;
  t7242 = var2[5]*t7236;
  t7277 = var2[14]*t7272;
  t7315 = t2660*t7312;
  t7329 = -1.*t7327*t2994;
  t7334 = 0. + t7315 + t7329;
  t7343 = var2[4]*t7334;
  t7357 = -1.*t7236*t2761;
  t7365 = t2660*t7327;
  t7378 = t7312*t2994;
  t7382 = 0. + t7365 + t7378;
  t7384 = t1446*t7382;
  t7394 = 0. + t7357 + t7384;
  t7410 = var2[3]*t7394;
  t7411 = 0. + t7241 + t7242 + t7277 + t7343 + t7410;
  t7421 = var2[14]*t7417;
  t7454 = var2[13]*t7446;
  t7457 = var2[5]*t7446;
  t7487 = t2660*t7481;
  t7499 = -1.*t7496*t2994;
  t7500 = 0. + t7487 + t7499;
  t7504 = var2[4]*t7500;
  t7505 = -1.*t7446*t2761;
  t7506 = t2660*t7496;
  t7509 = t7481*t2994;
  t7510 = 0. + t7506 + t7509;
  t7514 = t1446*t7510;
  t7519 = 0. + t7505 + t7514;
  t7539 = var2[3]*t7519;
  t7546 = 0. + t7421 + t7454 + t7457 + t7504 + t7539;
  t2969 = t61*t2660*t2761;
  t3164 = t2972*t2994;
  t3515 = t2969 + t3164;
  t3812 = -1.*t2660*t2972;
  t4423 = t61*t2761*t2994;
  t4751 = t3812 + t4423;
  t3520 = t2533*t3515;
  t4819 = t3769*t4751;
  t5016 = t3520 + t4819;
  t7582 = t3769*t3515;
  t7586 = -1.*t2533*t4751;
  t7588 = t7582 + t7586;
  t7590 = t2381*t61*t1446;
  t7596 = t1847*t5016;
  t7608 = t7590 + t7596;
  t7228 = 0.0498*t7222;
  t7413 = 0.000019*t7411;
  t7549 = 0.0117*t7546;
  t7550 = t7228 + t7413 + t7549;
  t7552 = 0.000019*t7222;
  t7553 = 0.0563*t7411;
  t7562 = 0.000284*t7546;
  t7573 = t7552 + t7553 + t7562;
  t7689 = t2660*t2972*t2761;
  t7690 = -1.*t61*t2994;
  t7694 = t7689 + t7690;
  t7698 = t61*t2660;
  t7700 = t2972*t2761*t2994;
  t7702 = t7698 + t7700;
  t7696 = t2533*t7694;
  t7719 = t3769*t7702;
  t7722 = t7696 + t7719;
  t7620 = 0.0117*t7222;
  t7638 = 0.000284*t7411;
  t7639 = 0.018*t7546;
  t7640 = t7620 + t7638 + t7639;
  t7740 = t3769*t7694;
  t7741 = -1.*t2533*t7702;
  t7747 = t7740 + t7741;
  t7749 = t2381*t1446*t2972;
  t7753 = t1847*t7722;
  t7754 = t7749 + t7753;
  t7804 = t1446*t2660*t2533;
  t7806 = t3769*t1446*t2994;
  t7812 = t7804 + t7806;
  t7798 = t3769*t1446*t2660;
  t7799 = -1.*t1446*t2533*t2994;
  t7801 = t7798 + t7799;
  t7803 = -1.*t2381*t2761;
  t7815 = t1847*t7812;
  t7821 = t7803 + t7815;
  p_output1[0]=(-1.*t2381*t5016 + t1446*t1847*t61)*t7550 + t7573*(t7269*t7588 + t7229*t7608) + (-1.*t7229*t7588 + t7269*t7608)*t7640;
  p_output1[1]=t7550*(t1446*t1847*t2972 - 1.*t2381*t7722) + t7573*(t7269*t7747 + t7229*t7754) + t7640*(-1.*t7229*t7747 + t7269*t7754);
  p_output1[2]=t7550*(-1.*t1847*t2761 - 1.*t2381*t7812) + t7573*(t7269*t7801 + t7229*t7821) + t7640*(-1.*t7229*t7801 + t7269*t7821);
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

#include "AMWorld_RightThigh_mex.hh"

namespace SymExpression
{

void AMWorld_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
