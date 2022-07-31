/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:53 GMT-04:00
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
  double t623;
  double t2826;
  double t230;
  double t1732;
  double t2175;
  double t3824;
  double t3058;
  double t567;
  double t1389;
  double t4442;
  double t4578;
  double t4799;
  double t4837;
  double t5969;
  double t5980;
  double t6002;
  double t6017;
  double t1006;
  double t1206;
  double t1724;
  double t2292;
  double t2339;
  double t2340;
  double t2342;
  double t2399;
  double t3242;
  double t3259;
  double t3265;
  double t3915;
  double t4007;
  double t4029;
  double t4756;
  double t5035;
  double t5037;
  double t5132;
  double t5282;
  double t5320;
  double t5611;
  double t5711;
  double t5788;
  double t5795;
  double t5815;
  double t5877;
  double t5880;
  double t5968;
  double t5992;
  double t6022;
  double t6025;
  double t6034;
  double t6038;
  double t6040;
  double t6050;
  double t6098;
  double t6117;
  double t6125;
  double t6138;
  double t6230;
  double t6240;
  double t6242;
  double t6252;
  double t6257;
  double t6259;
  double t6262;
  double t6275;
  double t6279;
  double t6364;
  double t6366;
  double t6390;
  double t6395;
  double t6397;
  double t6398;
  double t6428;
  double t6429;
  double t6438;
  double t6440;
  double t6445;
  double t6459;
  t623 = Cos(var1[7]);
  t2826 = Sin(var1[4]);
  t230 = Cos(var1[4]);
  t1732 = Cos(var1[5]);
  t2175 = Sin(var1[6]);
  t3824 = Cos(var1[8]);
  t3058 = Sin(var1[7]);
  t567 = Cos(var1[6]);
  t1389 = Sin(var1[5]);
  t4442 = t3824*t3058;
  t4578 = 0. + t4442;
  t4799 = Sin(var1[8]);
  t4837 = 0. + t4799;
  t5969 = -1.*t3824;
  t5980 = 0. + t5969;
  t6002 = t3058*t4799;
  t6017 = 0. + t6002;
  t1006 = -1.*t567*t623;
  t1206 = 0. + t1006;
  t1724 = t1206*t1389;
  t2292 = -1.*t623*t2175;
  t2339 = 0. + t2292;
  t2340 = t1732*t2339;
  t2342 = 0. + t1724 + t2340;
  t2399 = t230*t2342;
  t3242 = 0. + t3058;
  t3259 = -1.*t2826*t3242;
  t3265 = 0. + t2399 + t3259;
  t3915 = t623*t3824;
  t4007 = 0. + t3915;
  t4029 = -1.*t4007*t2826;
  t4756 = t2175*t4578;
  t5035 = t567*t4837;
  t5037 = 0. + t4756 + t5035;
  t5132 = t1732*t5037;
  t5282 = t567*t4578;
  t5320 = -1.*t2175*t4837;
  t5611 = 0. + t5282 + t5320;
  t5711 = t1389*t5611;
  t5788 = 0. + t5132 + t5711;
  t5795 = t230*t5788;
  t5815 = 0. + t4029 + t5795;
  t5877 = t623*t4799;
  t5880 = 0. + t5877;
  t5968 = -1.*t2826*t5880;
  t5992 = -1.*t5980*t2175;
  t6022 = t567*t6017;
  t6025 = 0. + t5992 + t6022;
  t6034 = t1389*t6025;
  t6038 = t567*t5980;
  t6040 = t2175*t6017;
  t6050 = 0. + t6038 + t6040;
  t6098 = t1732*t6050;
  t6117 = 0. + t6034 + t6098;
  t6125 = t230*t6117;
  t6138 = 0. + t5968 + t6125;
  t6230 = t1732*t1206;
  t6240 = -1.*t1389*t2339;
  t6242 = 0. + t6230 + t6240;
  t6252 = -1.*t1389*t5037;
  t6257 = t1732*t5611;
  t6259 = 0. + t6252 + t6257;
  t6262 = t1732*t6025;
  t6275 = -1.*t1389*t6050;
  t6279 = 0. + t6262 + t6275;
  t6364 = 0.000284*t4007;
  t6366 = -0.0117*t3242;
  t6390 = 0.018*t5880;
  t6395 = t6364 + t6366 + t6390;
  t6397 = 0.0563*t4007;
  t6398 = -0.000019*t3242;
  t6428 = 0.000284*t5880;
  t6429 = t6397 + t6398 + t6428;
  t6438 = -0.000019*t4007;
  t6440 = 0.0498*t3242;
  t6445 = -0.0117*t5880;
  t6459 = t6438 + t6440 + t6445;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.0117*t3265 + 0.000284*t5815 + 0.018*t6138;
  p_output1[10]=-0.000019*t3265 + 0.0563*t5815 + 0.000284*t6138;
  p_output1[11]=0.0498*t3265 - 0.000019*t5815 - 0.0117*t6138;
  p_output1[12]=-0.0117*t6242 + 0.000284*t6259 + 0.018*t6279;
  p_output1[13]=-0.000019*t6242 + 0.0563*t6259 + 0.000284*t6279;
  p_output1[14]=0.0498*t6242 - 0.000019*t6259 - 0.0117*t6279;
  p_output1[15]=t6395;
  p_output1[16]=t6429;
  p_output1[17]=t6459;
  p_output1[18]=t6395;
  p_output1[19]=t6429;
  p_output1[20]=t6459;
  p_output1[21]=0.000284*t4837 + 0.018*t5980;
  p_output1[22]=0.0563*t4837 + 0.000284*t5980;
  p_output1[23]=-0.000019*t4837 - 0.0117*t5980;
  p_output1[24]=-0.0117;
  p_output1[25]=-0.000019;
  p_output1[26]=0.0498;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMBody_LeftThigh_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
