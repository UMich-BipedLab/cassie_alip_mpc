/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:24 GMT-04:00
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
  double t810;
  double t872;
  double t901;
  double t2341;
  double t1916;
  double t1957;
  double t2345;
  double t3057;
  double t2229;
  double t2510;
  double t2726;
  double t1777;
  double t3078;
  double t3130;
  double t3138;
  double t377;
  double t783;
  double t793;
  double t1338;
  double t3439;
  double t2783;
  double t3305;
  double t3306;
  double t1749;
  double t3701;
  double t3752;
  double t4091;
  double t921;
  double t321;
  double t3430;
  double t4108;
  double t4150;
  double t4566;
  double t4674;
  double t4685;
  double t4715;
  double t4813;
  double t1412;
  double t5509;
  double t5563;
  double t5670;
  double t5507;
  double t5671;
  double t5707;
  double t5850;
  double t5998;
  double t5709;
  double t6057;
  double t6084;
  double t6567;
  double t6686;
  double t6880;
  double t6955;
  double t7201;
  double t335;
  double t711;
  double t961;
  double t991;
  double t1192;
  double t1356;
  double t1391;
  double t1440;
  double t1652;
  double t1673;
  double t1675;
  double t4375;
  double t4377;
  double t4444;
  double t4688;
  double t4841;
  double t4927;
  double t4940;
  double t5002;
  double t5089;
  double t5178;
  double t5289;
  double t5307;
  double t5314;
  double t5386;
  double t6116;
  double t6137;
  double t6537;
  double t6911;
  double t7543;
  double t7587;
  double t7676;
  double t7771;
  double t7802;
  double t7807;
  double t7841;
  double t7851;
  double t7852;
  double t7854;
  double t8047;
  double t8058;
  double t8061;
  double t8097;
  double t8109;
  double t8110;
  double t8137;
  double t8146;
  double t8151;
  double t8182;
  double t8185;
  double t8186;
  double t8195;
  double t8198;
  double t8199;
  double t8203;
  double t8204;
  double t8205;
  double t8211;
  double t8212;
  double t8215;
  t810 = Cos(var1[14]);
  t872 = -1.*t810;
  t901 = 0. + t872;
  t2341 = Cos(var1[17]);
  t1916 = Cos(var1[18]);
  t1957 = Sin(var1[17]);
  t2345 = Sin(var1[18]);
  t3057 = Cos(var1[16]);
  t2229 = t1916*t1957;
  t2510 = t2341*t2345;
  t2726 = 0. + t2229 + t2510;
  t1777 = Sin(var1[16]);
  t3078 = t2341*t1916;
  t3130 = -1.*t1957*t2345;
  t3138 = 0. + t3078 + t3130;
  t377 = Sin(var1[4]);
  t783 = Cos(var1[4]);
  t793 = Cos(var1[5]);
  t1338 = Cos(var1[13]);
  t3439 = Sin(var1[15]);
  t2783 = -1.*t1777*t2726;
  t3305 = t3057*t3138;
  t3306 = 0. + t2783 + t3305;
  t1749 = Cos(var1[15]);
  t3701 = t3057*t2726;
  t3752 = t1777*t3138;
  t4091 = 0. + t3701 + t3752;
  t921 = Sin(var1[13]);
  t321 = Sin(var1[14]);
  t3430 = t1749*t3306;
  t4108 = -1.*t3439*t4091;
  t4150 = 0. + t3430 + t4108;
  t4566 = t3439*t3306;
  t4674 = t1749*t4091;
  t4685 = 0. + t4566 + t4674;
  t4715 = t321*t4150;
  t4813 = 0. + t4715;
  t1412 = Sin(var1[5]);
  t5509 = -1.*t2341*t1916;
  t5563 = t1957*t2345;
  t5670 = 0. + t5509 + t5563;
  t5507 = t1777*t2726;
  t5671 = t3057*t5670;
  t5707 = 0. + t5507 + t5671;
  t5850 = -1.*t1777*t5670;
  t5998 = 0. + t3701 + t5850;
  t5709 = -1.*t3439*t5707;
  t6057 = t1749*t5998;
  t6084 = 0. + t5709 + t6057;
  t6567 = t1749*t5707;
  t6686 = t3439*t5998;
  t6880 = 0. + t6567 + t6686;
  t6955 = t321*t6084;
  t7201 = 0. + t6955;
  t335 = 0. + t321;
  t711 = -1.*t335*t377;
  t961 = t901*t921;
  t991 = 0. + t961;
  t1192 = t793*t991;
  t1356 = t1338*t901;
  t1391 = 0. + t1356;
  t1440 = t1391*t1412;
  t1652 = 0. + t1192 + t1440;
  t1673 = t783*t1652;
  t1675 = 0. + t711 + t1673;
  t4375 = t810*t4150;
  t4377 = 0. + t4375;
  t4444 = -1.*t4377*t377;
  t4688 = t1338*t4685;
  t4841 = t921*t4813;
  t4927 = 0. + t4688 + t4841;
  t4940 = t793*t4927;
  t5002 = -1.*t921*t4685;
  t5089 = t1338*t4813;
  t5178 = 0. + t5002 + t5089;
  t5289 = t5178*t1412;
  t5307 = 0. + t4940 + t5289;
  t5314 = t783*t5307;
  t5386 = 0. + t4444 + t5314;
  t6116 = t810*t6084;
  t6137 = 0. + t6116;
  t6537 = -1.*t6137*t377;
  t6911 = t1338*t6880;
  t7543 = t921*t7201;
  t7587 = 0. + t6911 + t7543;
  t7676 = t793*t7587;
  t7771 = -1.*t921*t6880;
  t7802 = t1338*t7201;
  t7807 = 0. + t7771 + t7802;
  t7841 = t7807*t1412;
  t7851 = 0. + t7676 + t7841;
  t7852 = t783*t7851;
  t7854 = 0. + t6537 + t7852;
  t8047 = t1391*t793;
  t8058 = -1.*t991*t1412;
  t8061 = 0. + t8047 + t8058;
  t8097 = t793*t5178;
  t8109 = -1.*t4927*t1412;
  t8110 = 0. + t8097 + t8109;
  t8137 = t793*t7807;
  t8146 = -1.*t7587*t1412;
  t8151 = 0. + t8137 + t8146;
  t8182 = 0.000063*t335;
  t8185 = -0.00288*t4377;
  t8186 = 0.00113*t6137;
  t8195 = t8182 + t8185 + t8186;
  t8198 = -0.000036*t335;
  t8199 = 0.0231*t4377;
  t8203 = -0.00288*t6137;
  t8204 = t8198 + t8199 + t8203;
  t8205 = 0.0239*t335;
  t8211 = -0.000036*t4377;
  t8212 = 0.000063*t6137;
  t8215 = t8205 + t8211 + t8212;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000063*t1675 - 0.00288*t5386 + 0.00113*t7854;
  p_output1[10]=-0.000036*t1675 + 0.0231*t5386 - 0.00288*t7854;
  p_output1[11]=0.0239*t1675 - 0.000036*t5386 + 0.000063*t7854;
  p_output1[12]=0.000063*t8061 - 0.00288*t8110 + 0.00113*t8151;
  p_output1[13]=-0.000036*t8061 + 0.0231*t8110 - 0.00288*t8151;
  p_output1[14]=0.0239*t8061 - 0.000036*t8110 + 0.000063*t8151;
  p_output1[15]=t8195;
  p_output1[16]=t8204;
  p_output1[17]=t8215;
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
  p_output1[39]=t8195;
  p_output1[40]=t8204;
  p_output1[41]=t8215;
  p_output1[42]=-0.00288*t4685 + 0.00113*t6880;
  p_output1[43]=0.0231*t4685 - 0.00288*t6880;
  p_output1[44]=-0.000036*t4685 + 0.000063*t6880;
  p_output1[45]=0.000063;
  p_output1[46]=-0.000036;
  p_output1[47]=0.0239;
  p_output1[48]=0.000063;
  p_output1[49]=-0.000036;
  p_output1[50]=0.0239;
  p_output1[51]=0.000063;
  p_output1[52]=-0.000036;
  p_output1[53]=0.0239;
  p_output1[54]=0.000063;
  p_output1[55]=-0.000036;
  p_output1[56]=0.0239;
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

#include "Jdq_AMBody_RightTarsus_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
