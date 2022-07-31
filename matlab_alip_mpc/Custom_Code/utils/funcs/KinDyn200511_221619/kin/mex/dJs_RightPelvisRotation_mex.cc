/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:28 GMT-04:00
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
  double t220;
  double t346;
  double t2030;
  double t2140;
  double t2135;
  double t2189;
  double t2205;
  double t2270;
  double t3410;
  double t3562;
  double t2337;
  double t2369;
  double t2438;
  double t2450;
  double t3668;
  double t3671;
  double t3674;
  double t3969;
  double t4072;
  double t4078;
  double t2592;
  double t2606;
  double t2638;
  double t2674;
  double t2678;
  double t2692;
  double t2894;
  double t3013;
  double t3072;
  double t3115;
  double t3212;
  double t3255;
  double t3265;
  double t3276;
  double t3341;
  t220 = Cos(var1[3]);
  t346 = Sin(var1[3]);
  t2030 = Cos(var1[4]);
  t2140 = Sin(var1[4]);
  t2135 = -1.*var2[2]*t2030*t346;
  t2189 = -1.*var2[1]*t2140;
  t2205 = -1.*var1[1]*t2030;
  t2270 = var1[2]*t346*t2140;
  t3410 = Cos(var1[5]);
  t3562 = Sin(var1[5]);
  t2337 = var2[2]*t220*t2030;
  t2369 = var2[0]*t2140;
  t2438 = var1[0]*t2030;
  t2450 = -1.*var1[2]*t220*t2140;
  t3668 = t220*t3410*t2140;
  t3671 = t346*t3562;
  t3674 = t3668 + t3671;
  t3969 = -1.*t220*t3410;
  t4072 = -1.*t346*t2140*t3562;
  t4078 = t3969 + t4072;
  t2592 = -1.*var2[1]*t220*t2030;
  t2606 = var2[0]*t2030*t346;
  t2638 = var1[0]*t220*t2030;
  t2674 = var1[1]*t2030*t346;
  t2678 = t2638 + t2674;
  t2692 = var2[3]*t2678;
  t2894 = var1[1]*t220*t2140;
  t3013 = -1.*var1[0]*t346*t2140;
  t3072 = -1.*var2[3]*t2030*t346;
  t3115 = -1.*var2[4]*t220*t2140;
  t3212 = t3072 + t3115;
  t3255 = var2[3]*t220*t2030;
  t3265 = -1.*var2[4]*t346*t2140;
  t3276 = t3255 + t3265;
  t3341 = -1.*var2[4]*t2030;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t220*var2[2] + t346*var1[2]*var2[3];
  p_output1[25]=-1.*t346*var2[2] - 1.*t220*var1[2]*var2[3];
  p_output1[26]=t220*var2[0] + t346*var2[1] + (-1.*t346*var1[0] + t220*var1[1])*var2[3];
  p_output1[27]=-1.*t220*var2[3];
  p_output1[28]=-1.*t346*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2135 + t2189 - 1.*t2030*t220*var1[2]*var2[3] + (t2205 + t2270)*var2[4];
  p_output1[31]=t2337 + t2369 - 1.*t2030*t346*var1[2]*var2[3] + (t2438 + t2450)*var2[4];
  p_output1[32]=t2592 + t2606 + t2692 + (t2894 + t3013)*var2[4];
  p_output1[33]=t3212;
  p_output1[34]=t3276;
  p_output1[35]=t3341;
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
  p_output1[78]=t2135 + t2189 + (0.135*(-1.*t2140*t3410*t346 + t220*t3562) + 0.07996*t4078 - 1.*t2030*t220*var1[2])*var2[3] + (t2205 + t2270 + 0.135*t2030*t220*t3410 + 0.07996*t2030*t220*t3562)*var2[4] + (0.135*(t3410*t346 - 1.*t2140*t220*t3562) + 0.07996*t3674)*var2[5];
  p_output1[79]=t2337 + t2369 + (0.07996*(-1.*t3410*t346 + t2140*t220*t3562) + 0.135*t3674 - 1.*t2030*t346*var1[2])*var2[3] + (t2438 + t2450 + 0.135*t2030*t3410*t346 + 0.07996*t2030*t346*t3562)*var2[4] + (0.07996*(t2140*t3410*t346 - 1.*t220*t3562) + 0.135*t4078)*var2[5];
  p_output1[80]=t2592 + t2606 + t2692 + (t2894 + t3013 - 0.135*t2140*t3410 - 0.07996*t2140*t3562)*var2[4] + (0.07996*t2030*t3410 - 0.135*t2030*t3562)*var2[5];
  p_output1[81]=t3212;
  p_output1[82]=t3276;
  p_output1[83]=t3341;
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

#include "dJs_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void dJs_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
