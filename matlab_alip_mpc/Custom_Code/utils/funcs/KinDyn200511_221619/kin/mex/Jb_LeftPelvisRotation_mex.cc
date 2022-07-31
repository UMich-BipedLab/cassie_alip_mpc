/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:37 GMT-04:00
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
  double t3;
  double t851;
  double t1063;
  double t593;
  double t1333;
  double t518;
  double t1775;
  double t1020;
  double t1398;
  double t1418;
  double t5;
  double t32;
  double t1982;
  double t2095;
  double t2098;
  double t2176;
  double t2261;
  double t2592;
  double t2616;
  double t2623;
  double t2826;
  double t3109;
  double t4746;
  double t4754;
  double t4759;
  double t4920;
  double t5053;
  double t5152;
  double t5159;
  double t5171;
  double t5413;
  double t5456;
  double t5495;
  double t5584;
  double t4170;
  double t4503;
  double t5920;
  double t5935;
  double t5990;
  double t5407;
  double t5594;
  double t5604;
  double t5686;
  double t6016;
  double t6176;
  double t6254;
  double t6260;
  double t6317;
  double t3987;
  double t4005;
  double t6529;
  double t5605;
  t3 = Cos(var1[3]);
  t851 = Cos(var1[6]);
  t1063 = Sin(var1[5]);
  t593 = Cos(var1[5]);
  t1333 = Sin(var1[6]);
  t518 = Sin(var1[3]);
  t1775 = Sin(var1[4]);
  t1020 = t593*t851;
  t1398 = -1.*t1063*t1333;
  t1418 = 0. + t1020 + t1398;
  t5 = Cos(var1[4]);
  t32 = 0. + t5;
  t1982 = t851*t1063;
  t2095 = t593*t1333;
  t2098 = 0. + t1982 + t2095;
  t2176 = t1775*t2098;
  t2261 = 0. + t2176;
  t2592 = -1.*t851*t1063;
  t2616 = -1.*t593*t1333;
  t2623 = 0. + t2592 + t2616;
  t2826 = t1775*t1418;
  t3109 = 0. + t2826;
  t4746 = t5*t1418;
  t4754 = 0. + t4746;
  t4759 = -1.*t851;
  t4920 = 1. + t4759;
  t5053 = 0.135*t4920;
  t5152 = 0.1351*t851;
  t5159 = -0.0179*t1333;
  t5171 = 0. + t5053 + t5152 + t5159;
  t5413 = 0.07996*t4920;
  t5456 = 0.09786*t851;
  t5495 = 0.00009999999999998899*t1333;
  t5584 = 0. + t5413 + t5456 + t5495;
  t4170 = t5*t2098;
  t4503 = 0. + t4170;
  t5920 = t1063*t5171;
  t5935 = t593*t5584;
  t5990 = 0. + t5920 + t5935;
  t5407 = t593*t5171;
  t5594 = -1.*t1063*t5584;
  t5604 = 0. + t5407 + t5594;
  t5686 = 0.05485*t1775;
  t6016 = t5*t5990;
  t6176 = 0. + t5686 + t6016;
  t6254 = -0.05485*t5;
  t6260 = t1775*t5990;
  t6317 = 0. + t6254 + t6260;
  t3987 = -1.*t1775;
  t4005 = 0. + t3987;
  t6529 = t5604*t2623;
  t5605 = -1.*t5604*t1418;
  p_output1[0]=0. + t3*t32;
  p_output1[1]=0. + t2261*t3 - 1.*t1418*t518;
  p_output1[2]=0. + t3*t3109 - 1.*t2623*t518;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t32*t518;
  p_output1[7]=0. + t1418*t3 + t2261*t518;
  p_output1[8]=0. + t2623*t3 + t3109*t518;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4005;
  p_output1[13]=t4503;
  p_output1[14]=t4754;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t4754*(t5605 - 1.*t4503*t6176 - 1.*t2261*t6317) + t4503*(t4754*t6176 + t3109*t6317 + t6529);
  p_output1[19]=t4005*(-1.*t2623*t5604 - 1.*t4754*t6176 - 1.*t3109*t6317) + t4754*(0. + t4005*t6176 + t32*t6317);
  p_output1[20]=t4005*(t1418*t5604 + t4503*t6176 + t2261*t6317) + t4503*(0. - 1.*t4005*t6176 - 1.*t32*t6317);
  p_output1[21]=t4005;
  p_output1[22]=t4503;
  p_output1[23]=t4754;
  p_output1[24]=0. + t2623*(0. + t5605 - 1.*t2098*t5990) + t1418*(0. + t1418*t5990 + t6529);
  p_output1[25]=0. - 0.05485*t2623;
  p_output1[26]=0. + 0.05485*t1418;
  p_output1[27]=0.;
  p_output1[28]=t1418;
  p_output1[29]=t2623;
  p_output1[30]=0.;
  p_output1[31]=0. + t1333*t5171 - 1.*t5584*t851;
  p_output1[32]=0. + t1333*t5584 + t5171*t851;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=-0.0179;
  p_output1[38]=0.00009999999999998899;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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

#include "Jb_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void Jb_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
