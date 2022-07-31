/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:50 GMT-04:00
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
  double t599;
  double t1791;
  double t1904;
  double t530;
  double t649;
  double t769;
  double t943;
  double t326;
  double t1250;
  double t1470;
  double t1512;
  double t2983;
  double t3013;
  double t3355;
  double t3596;
  double t3760;
  double t4076;
  double t4192;
  double t2412;
  double t1981;
  double t4200;
  double t4206;
  double t4216;
  double t4250;
  double t4340;
  double t4362;
  double t5190;
  double t5231;
  double t5098;
  double t5138;
  double t5385;
  double t5421;
  double t5251;
  double t5541;
  double t5553;
  double t5568;
  double t5569;
  double t5573;
  double t815;
  double t1656;
  double t1661;
  double t1728;
  double t1908;
  double t1945;
  double t2009;
  double t2114;
  double t2179;
  double t2222;
  double t2723;
  double t2742;
  double t2749;
  double t2753;
  double t3477;
  double t3579;
  double t4040;
  double t4224;
  double t4379;
  double t4386;
  double t4405;
  double t4615;
  double t4675;
  double t4750;
  double t4755;
  double t4932;
  double t4998;
  double t5039;
  double t5041;
  double t5172;
  double t5232;
  double t5239;
  double t5567;
  double t5577;
  double t5578;
  double t5587;
  double t5598;
  double t5602;
  double t5611;
  double t5612;
  double t5638;
  double t5677;
  double t5678;
  double t5685;
  t599 = Cos(var1[7]);
  t1791 = Sin(var1[7]);
  t1904 = 0. + t1791;
  t530 = Cos(var1[6]);
  t649 = -1.*t530*t599;
  t769 = 0. + t649;
  t943 = Sin(var1[5]);
  t326 = Cos(var1[5]);
  t1250 = Sin(var1[6]);
  t1470 = -1.*t599*t1250;
  t1512 = 0. + t1470;
  t2983 = Cos(var1[8]);
  t3013 = t599*t2983;
  t3355 = 0. + t3013;
  t3596 = Sin(var1[8]);
  t3760 = 0. + t3596;
  t4076 = t2983*t1791;
  t4192 = 0. + t4076;
  t2412 = Sin(var1[4]);
  t1981 = Cos(var1[4]);
  t4200 = t1250*t4192;
  t4206 = t530*t3760;
  t4216 = 0. + t4200 + t4206;
  t4250 = t530*t4192;
  t4340 = -1.*t1250*t3760;
  t4362 = 0. + t4250 + t4340;
  t5190 = t599*t3596;
  t5231 = 0. + t5190;
  t5098 = -1.*t2983;
  t5138 = 0. + t5098;
  t5385 = t1791*t3596;
  t5421 = 0. + t5385;
  t5251 = -1.*t5138*t1250;
  t5541 = t530*t5421;
  t5553 = 0. + t5251 + t5541;
  t5568 = t530*t5138;
  t5569 = t1250*t5421;
  t5573 = 0. + t5568 + t5569;
  t815 = t326*t769;
  t1656 = -1.*t943*t1512;
  t1661 = 0. + t815 + t1656;
  t1728 = var2[4]*t1661;
  t1908 = var2[5]*t1904;
  t1945 = var2[6]*t1904;
  t2009 = t769*t943;
  t2114 = t326*t1512;
  t2179 = 0. + t2009 + t2114;
  t2222 = t1981*t2179;
  t2723 = -1.*t2412*t1904;
  t2742 = 0. + t2222 + t2723;
  t2749 = var2[3]*t2742;
  t2753 = 0. + var2[8] + t1728 + t1908 + t1945 + t2749;
  t3477 = var2[5]*t3355;
  t3579 = var2[6]*t3355;
  t4040 = var2[7]*t3760;
  t4224 = -1.*t943*t4216;
  t4379 = t326*t4362;
  t4386 = 0. + t4224 + t4379;
  t4405 = var2[4]*t4386;
  t4615 = -1.*t3355*t2412;
  t4675 = t326*t4216;
  t4750 = t943*t4362;
  t4755 = 0. + t4675 + t4750;
  t4932 = t1981*t4755;
  t4998 = 0. + t4615 + t4932;
  t5039 = var2[3]*t4998;
  t5041 = 0. + t3477 + t3579 + t4040 + t4405 + t5039;
  t5172 = var2[7]*t5138;
  t5232 = var2[5]*t5231;
  t5239 = var2[6]*t5231;
  t5567 = t326*t5553;
  t5577 = -1.*t943*t5573;
  t5578 = 0. + t5567 + t5577;
  t5587 = var2[4]*t5578;
  t5598 = -1.*t2412*t5231;
  t5602 = t943*t5553;
  t5611 = t326*t5573;
  t5612 = 0. + t5602 + t5611;
  t5638 = t1981*t5612;
  t5677 = 0. + t5598 + t5638;
  t5678 = var2[3]*t5677;
  t5685 = 0. + t5172 + t5232 + t5239 + t5587 + t5678;
  p_output1[0]=-0.0117*t2753 + 0.000284*t5041 + 0.018*t5685;
  p_output1[1]=-0.000019*t2753 + 0.0563*t5041 + 0.000284*t5685;
  p_output1[2]=0.0498*t2753 - 0.000019*t5041 - 0.0117*t5685;
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

#include "AMBody_LeftThigh_mex.hh"

namespace SymExpression
{

void AMBody_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
