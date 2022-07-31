/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:10 GMT-04:00
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
  double t2081;
  double t510;
  double t2475;
  double t1534;
  double t2564;
  double t2610;
  double t2624;
  double t2659;
  double t2975;
  double t3066;
  double t3069;
  double t3124;
  double t4825;
  double t4902;
  double t4963;
  double t4965;
  double t4978;
  double t5106;
  double t5136;
  double t5335;
  double t5382;
  double t5890;
  double t5895;
  double t5973;
  double t6150;
  double t6170;
  double t6186;
  double t6228;
  double t6277;
  double t6285;
  double t6344;
  double t6350;
  double t6383;
  double t6792;
  double t7294;
  double t7338;
  double t7607;
  double t7992;
  double t8050;
  double t8102;
  double t7568;
  double t7572;
  double t7573;
  double t8144;
  double t8208;
  double t8265;
  double t8677;
  double t8678;
  double t8679;
  double t7471;
  double t4582;
  double t4584;
  double t4603;
  double t4615;
  double t4639;
  double t4721;
  double t4803;
  double t7490;
  t2081 = Cos(var1[3]);
  t510 = Cos(var1[4]);
  t2475 = Sin(var1[4]);
  t1534 = Sin(var1[3]);
  t2564 = Sin(var1[5]);
  t2610 = Cos(var1[5]);
  t2624 = t2081*t2610*t2475;
  t2659 = t1534*t2564;
  t2975 = t2624 + t2659;
  t3066 = -1.*t2081*t2610;
  t3069 = -1.*t1534*t2475*t2564;
  t3124 = t3066 + t3069;
  t4825 = 0.10836*t2610;
  t4902 = 0. + t4825;
  t4963 = t510*t4902;
  t4965 = -0.01915*t2475;
  t4978 = t4963 + t4965;
  t5106 = 0. + t4963 + t4965;
  t5136 = -0.01915*t510;
  t5335 = -1.*t4902*t2475;
  t5382 = t5136 + t5335;
  t5890 = 0.01915*t510;
  t5895 = t4902*t2475;
  t5973 = 0. + t5890 + t5895;
  t6150 = -0.10836*t2564;
  t6170 = 0. + t6150;
  t6186 = -1.*t2610*t6170;
  t6228 = -1.*t510*t5106*t2564;
  t6277 = -1.*t2475*t5973*t2564;
  t6285 = t6186 + t6228 + t6277;
  t6344 = t510*t2610*t5106;
  t6350 = t2610*t2475*t5973;
  t6383 = -1.*t6170*t2564;
  t6792 = t6344 + t6350 + t6383;
  t7294 = Power(t510,2);
  t7338 = Power(t2475,2);
  t7607 = Power(t2564,2);
  t7992 = -1.*t5106*t2475;
  t8050 = t510*t5973;
  t8102 = t7992 + t8050;
  t7568 = -1.*t510*t2610*t5106;
  t7572 = -1.*t2610*t2475*t5973;
  t7573 = t6170*t2564;
  t8144 = t2610*t6170;
  t8208 = t510*t5106*t2564;
  t8265 = t2475*t5973*t2564;
  t8677 = t5106*t2475;
  t8678 = -1.*t510*t5973;
  t8679 = t8677 + t8678;
  t7471 = Power(t2610,2);
  t4582 = -1.*var2[4]*t510;
  t4584 = var2[5]*t510*t2610;
  t4603 = -1.*var2[4]*t2475*t2564;
  t4615 = t4584 + t4603;
  t4639 = -1.*var2[4]*t2610*t2475;
  t4721 = -1.*var2[5]*t510*t2564;
  t4803 = t4639 + t4721;
  t7490 = 0.10836*t7471;
  p_output1[0]=-1.*t1534*t510*var2[3] - 1.*t2081*t2475*var2[4];
  p_output1[1]=t3124*var2[3] + t2081*t2564*t510*var2[4] + t2975*var2[5];
  p_output1[2]=(t2081*t2564 - 1.*t1534*t2475*t2610)*var2[3] + t2081*t2610*t510*var2[4] + (-1.*t2081*t2475*t2564 + t1534*t2610)*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2081*t510*var2[3] - 1.*t1534*t2475*var2[4];
  p_output1[7]=(t2081*t2475*t2564 - 1.*t1534*t2610)*var2[3] + t1534*t2564*t510*var2[4] + (-1.*t2081*t2564 + t1534*t2475*t2610)*var2[5];
  p_output1[8]=t2975*var2[3] + t1534*t2610*t510*var2[4] + t3124*var2[5];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4582;
  p_output1[13]=t4615;
  p_output1[14]=t4803;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t2610*t510*(-1.*t2475*t2564*t4978 + t2475*t2564*t5106 - 1.*t2564*t510*t5382 - 1.*t2564*t510*t5973) + t2564*t510*(t2475*t2610*t4978 - 1.*t2475*t2610*t5106 + t2610*t510*t5382 + t2610*t510*t5973) - 1.*t2475*t2610*t6285 - 1.*t2475*t2564*t6792)*var2[4] + (-1.*t2564*t510*t6285 + t2610*t510*t6792 + t2564*t510*(0.10836*t2564*t2610 + t6186 + t6228 + t6277 - 0.10836*t2564*t2610*t7294 - 0.10836*t2564*t2610*t7338) + t2610*t510*(t7490 + t7568 + t7572 + t7573 + 0.10836*t7294*t7607 + 0.10836*t7338*t7607))*var2[5];
  p_output1[19]=(t2610*t510*(t4978*t510 - 1.*t510*t5106 - 1.*t2475*t5382 - 1.*t2475*t5973) - 1.*t2475*(-1.*t2475*t2610*t4978 + t2475*t2610*t5106 - 1.*t2610*t510*t5382 - 1.*t2610*t510*t5973) - 1.*t510*(t7568 + t7572 + t7573) - 1.*t2475*t2610*t8102)*var2[4] + (0. - 1.*t2564*t510*t8102 - 1.*t2475*(-0.10836*t2564*t2610 + 0.10836*t2564*t2610*t7294 + 0.10836*t2564*t2610*t7338 + t8144 + t8208 + t8265))*var2[5];
  p_output1[20]=(t2564*t510*(-1.*t4978*t510 + t510*t5106 + t2475*t5382 + t2475*t5973) - 1.*t2475*(t2475*t2564*t4978 - 1.*t2475*t2564*t5106 + t2564*t510*t5382 + t2564*t510*t5973) - 1.*t510*(t8144 + t8208 + t8265) - 1.*t2475*t2564*t8679)*var2[4] + (0. - 1.*t2475*(t6344 + t6350 + t6383 - 0.10836*t7471 - 0.10836*t7294*t7607 - 0.10836*t7338*t7607) + t2610*t510*t8679)*var2[5];
  p_output1[21]=t4582;
  p_output1[22]=t4615;
  p_output1[23]=t4803;
  p_output1[24]=(-1.*t2564*(0. + t2610*t4902 + t6383) - 1.*t2564*(-1.*t2610*t4902 + t7490 + t7573 + 0.10836*t7607))*var2[5];
  p_output1[25]=-0.01915*t2610*var2[5];
  p_output1[26]=0.01915*t2564*var2[5];
  p_output1[27]=0;
  p_output1[28]=-1.*t2564*var2[5];
  p_output1[29]=-1.*t2610*var2[5];
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

#include "dJb_Pelvis_mex.hh"

namespace SymExpression
{

void dJb_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
