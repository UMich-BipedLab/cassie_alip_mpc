/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:14 GMT-04:00
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
  double t396;
  double t995;
  double t60;
  double t440;
  double t1037;
  double t1152;
  double t1504;
  double t1542;
  double t1705;
  double t1967;
  double t2143;
  double t2232;
  double t972;
  double t1064;
  double t1099;
  double t2722;
  double t2752;
  double t2795;
  double t2836;
  double t2616;
  double t2629;
  double t2670;
  double t3071;
  double t4045;
  double t4052;
  double t4062;
  double t4308;
  double t3960;
  double t3970;
  double t3974;
  double t4581;
  double t4621;
  double t4641;
  double t4990;
  double t4992;
  double t4995;
  double t5037;
  double t5209;
  double t5263;
  double t5295;
  double t5384;
  double t5391;
  double t5410;
  double t1636;
  double t1755;
  double t1779;
  double t2309;
  double t2349;
  double t2581;
  double t5675;
  double t5686;
  double t5772;
  double t5589;
  double t5609;
  double t5614;
  double t2820;
  double t2929;
  double t2954;
  double t3497;
  double t3584;
  double t3618;
  double t5815;
  double t5831;
  double t5910;
  double t4111;
  double t4549;
  double t4564;
  double t4703;
  double t4784;
  double t4903;
  double t4996;
  double t5153;
  double t5155;
  double t6013;
  double t6036;
  double t6038;
  double t6072;
  double t6078;
  double t6085;
  double t5308;
  double t5331;
  double t5363;
  double t6088;
  double t6092;
  double t6111;
  double t6117;
  double t6125;
  double t6127;
  double t6164;
  double t6173;
  double t6174;
  double t6207;
  double t6219;
  double t6222;
  double t6232;
  double t6238;
  double t6242;
  double t6269;
  double t6276;
  double t6277;
  double t6286;
  double t6288;
  double t6290;
  t396 = Cos(var1[5]);
  t995 = Sin(var1[3]);
  t60 = Cos(var1[3]);
  t440 = Sin(var1[4]);
  t1037 = Sin(var1[5]);
  t1152 = Cos(var1[6]);
  t1504 = -1.*t1152;
  t1542 = 1. + t1504;
  t1705 = Sin(var1[6]);
  t1967 = -1.*t396*t995;
  t2143 = t60*t440*t1037;
  t2232 = t1967 + t2143;
  t972 = t60*t396*t440;
  t1064 = t995*t1037;
  t1099 = t972 + t1064;
  t2722 = Cos(var1[7]);
  t2752 = -1.*t2722;
  t2795 = 1. + t2752;
  t2836 = Sin(var1[7]);
  t2616 = t1152*t2232;
  t2629 = t1099*t1705;
  t2670 = t2616 + t2629;
  t3071 = Cos(var1[4]);
  t4045 = Cos(var1[8]);
  t4052 = -1.*t4045;
  t4062 = 1. + t4052;
  t4308 = Sin(var1[8]);
  t3960 = t60*t3071*t2722;
  t3970 = t2670*t2836;
  t3974 = t3960 + t3970;
  t4581 = t1152*t1099;
  t4621 = -1.*t2232*t1705;
  t4641 = t4581 + t4621;
  t4990 = Cos(var1[9]);
  t4992 = -1.*t4990;
  t4995 = 1. + t4992;
  t5037 = Sin(var1[9]);
  t5209 = t4045*t3974;
  t5263 = t4641*t4308;
  t5295 = t5209 + t5263;
  t5384 = t4045*t4641;
  t5391 = -1.*t3974*t4308;
  t5410 = t5384 + t5391;
  t1636 = 0.07996*t1542;
  t1755 = -0.135*t1705;
  t1779 = 0. + t1636 + t1755;
  t2309 = 0.135*t1542;
  t2349 = 0.07996*t1705;
  t2581 = 0. + t2309 + t2349;
  t5675 = t60*t396;
  t5686 = t995*t440*t1037;
  t5772 = t5675 + t5686;
  t5589 = t396*t995*t440;
  t5609 = -1.*t60*t1037;
  t5614 = t5589 + t5609;
  t2820 = 0.135*t2795;
  t2929 = 0.08055*t2836;
  t2954 = 0. + t2820 + t2929;
  t3497 = -0.08055*t2795;
  t3584 = 0.135*t2836;
  t3618 = 0. + t3497 + t3584;
  t5815 = t1152*t5772;
  t5831 = t5614*t1705;
  t5910 = t5815 + t5831;
  t4111 = -0.08055*t4062;
  t4549 = -0.01004*t4308;
  t4564 = 0. + t4111 + t4549;
  t4703 = -0.01004*t4062;
  t4784 = 0.08055*t4308;
  t4903 = 0. + t4703 + t4784;
  t4996 = -0.08055*t4995;
  t5153 = -0.13004*t5037;
  t5155 = 0. + t4996 + t5153;
  t6013 = t3071*t2722*t995;
  t6036 = t5910*t2836;
  t6038 = t6013 + t6036;
  t6072 = t1152*t5614;
  t6078 = -1.*t5772*t1705;
  t6085 = t6072 + t6078;
  t5308 = -0.13004*t4995;
  t5331 = 0.08055*t5037;
  t5363 = 0. + t5308 + t5331;
  t6088 = t4045*t6038;
  t6092 = t6085*t4308;
  t6111 = t6088 + t6092;
  t6117 = t4045*t6085;
  t6125 = -1.*t6038*t4308;
  t6127 = t6117 + t6125;
  t6164 = t3071*t1152*t1037;
  t6173 = t3071*t396*t1705;
  t6174 = t6164 + t6173;
  t6207 = -1.*t2722*t440;
  t6219 = t6174*t2836;
  t6222 = t6207 + t6219;
  t6232 = t3071*t396*t1152;
  t6238 = -1.*t3071*t1037*t1705;
  t6242 = t6232 + t6238;
  t6269 = t4045*t6222;
  t6276 = t6242*t4308;
  t6277 = t6269 + t6276;
  t6286 = t4045*t6242;
  t6288 = -1.*t6222*t4308;
  t6290 = t6286 + t6288;
  p_output1[0]=0. + t1099*t1779 + t2232*t2581 + t2670*t2954 + t3974*t4564 + t4641*t4903 + t5155*t5295 + t5363*t5410 - 0.13004*(-1.*t5037*t5295 + t4990*t5410) - 0.08055*(t4990*t5295 + t5037*t5410) + t3071*t3618*t60 + 0.1305*(t2670*t2722 - 1.*t2836*t3071*t60) + var1[0];
  p_output1[1]=0. + t1779*t5614 + t2581*t5772 + t2954*t5910 + t4564*t6038 + t4903*t6085 + t5155*t6111 + t5363*t6127 - 0.13004*(-1.*t5037*t6111 + t4990*t6127) - 0.08055*(t4990*t6111 + t5037*t6127) + t3071*t3618*t995 + 0.1305*(t2722*t5910 - 1.*t2836*t3071*t995) + var1[1];
  p_output1[2]=0. + t1037*t2581*t3071 + t1779*t3071*t396 - 1.*t3618*t440 + t2954*t6174 + 0.1305*(t2836*t440 + t2722*t6174) + t4564*t6222 + t4903*t6242 + t5155*t6277 + t5363*t6290 - 0.13004*(-1.*t5037*t6277 + t4990*t6290) - 0.08055*(t4990*t6277 + t5037*t6290) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void p_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
