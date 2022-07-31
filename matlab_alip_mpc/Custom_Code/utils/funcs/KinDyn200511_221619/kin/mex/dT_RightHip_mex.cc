/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:01 GMT-04:00
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
  double t681;
  double t749;
  double t1006;
  double t750;
  double t1101;
  double t210;
  double t1320;
  double t1245;
  double t1302;
  double t1406;
  double t1463;
  double t1489;
  double t1697;
  double t1739;
  double t1779;
  double t2042;
  double t2064;
  double t2084;
  double t2358;
  double t2373;
  double t2374;
  double t2380;
  double t2586;
  double t2591;
  double t2611;
  double t2762;
  double t1538;
  double t1555;
  double t1566;
  double t2842;
  double t2746;
  double t1861;
  double t1865;
  double t1938;
  double t1947;
  double t1976;
  double t2091;
  double t3166;
  double t2475;
  double t2494;
  double t2501;
  double t2509;
  double t2512;
  double t3308;
  double t3310;
  double t3326;
  double t2798;
  double t2804;
  double t2807;
  double t2847;
  double t2851;
  double t2891;
  double t2892;
  double t3227;
  double t3229;
  double t3238;
  double t3243;
  double t2977;
  double t2983;
  double t2985;
  double t3044;
  double t3074;
  double t3101;
  double t3204;
  double t3207;
  double t3209;
  double t3414;
  double t3418;
  double t3433;
  double t3908;
  double t3915;
  double t4010;
  double t4011;
  double t2755;
  double t2816;
  double t2818;
  double t4115;
  double t4123;
  double t4124;
  double t3952;
  double t3967;
  double t3969;
  double t4133;
  double t4134;
  double t4141;
  double t4355;
  double t4066;
  double t2926;
  double t2930;
  double t2951;
  double t4040;
  double t4069;
  double t2976;
  double t2987;
  double t2988;
  double t3023;
  double t3104;
  double t3118;
  double t4458;
  double t4459;
  double t4472;
  double t4482;
  double t4483;
  double t5118;
  double t4594;
  double t4609;
  double t4647;
  double t4653;
  double t4655;
  double t3244;
  double t3284;
  double t5528;
  double t5535;
  double t5538;
  double t5564;
  double t5566;
  double t5573;
  double t5574;
  double t3380;
  double t3381;
  double t3385;
  double t3394;
  double t3440;
  double t3463;
  t681 = Cos(var1[3]);
  t749 = Cos(var1[4]);
  t1006 = Sin(var1[13]);
  t750 = Cos(var1[5]);
  t1101 = Sin(var1[5]);
  t210 = Cos(var1[13]);
  t1320 = Sin(var1[3]);
  t1245 = Sin(var1[4]);
  t1302 = t681*t750*t1245;
  t1406 = t1320*t1101;
  t1463 = t1302 + t1406;
  t1489 = t1006*t1463;
  t1697 = -1.*t750*t1320;
  t1739 = t681*t1245*t1101;
  t1779 = t1697 + t1739;
  t2042 = -1.*t681*t750;
  t2064 = -1.*t1320*t1245*t1101;
  t2084 = t2042 + t2064;
  t2358 = t750*t1320*t1245;
  t2373 = -1.*t681*t1101;
  t2374 = t2358 + t2373;
  t2380 = t1006*t2374;
  t2586 = t749*t750*t1006;
  t2591 = t210*t749*t1101;
  t2611 = t2586 + t2591;
  t2762 = Sin(var1[14]);
  t1538 = t750*t1320;
  t1555 = -1.*t681*t1245*t1101;
  t1566 = t1538 + t1555;
  t2842 = t210*t1463;
  t2746 = Cos(var1[14]);
  t1861 = t210*t1779;
  t1865 = t1489 + t1861;
  t1938 = -1.*t750*t1320*t1245;
  t1947 = t681*t1101;
  t1976 = t1938 + t1947;
  t2091 = t1006*t2084;
  t3166 = t210*t2374;
  t2475 = t681*t750;
  t2494 = t1320*t1245*t1101;
  t2501 = t2475 + t2494;
  t2509 = t210*t2501;
  t2512 = t2380 + t2509;
  t3308 = t210*t749*t750;
  t3310 = -1.*t749*t1006*t1101;
  t3326 = t3308 + t3310;
  t2798 = t681*t749*t750*t1006;
  t2804 = t210*t681*t749*t1101;
  t2807 = t2798 + t2804;
  t2847 = t1006*t1566;
  t2851 = t2842 + t2847;
  t2891 = -1.*t1006*t1779;
  t2892 = t2842 + t2891;
  t3227 = t2746*t681*t749;
  t3229 = t2762*t1865;
  t3238 = t3227 + t3229;
  t3243 = -1.*t749*t2762*t1320;
  t2977 = t1006*t1976;
  t2983 = t210*t2084;
  t2985 = t2977 + t2983;
  t3044 = t749*t750*t1006*t1320;
  t3074 = t210*t749*t1320*t1101;
  t3101 = t3044 + t3074;
  t3204 = t3166 + t2091;
  t3207 = -1.*t1006*t2501;
  t3209 = t3166 + t3207;
  t3414 = -1.*t750*t1006*t1245;
  t3418 = -1.*t210*t1245*t1101;
  t3433 = t3414 + t3418;
  t3908 = -1.*t210;
  t3915 = 1. + t3908;
  t4010 = -1.*t2746;
  t4011 = 1. + t4010;
  t2755 = -1.*t2746*t681*t1245;
  t2816 = t2762*t2807;
  t2818 = t2755 + t2816;
  t4115 = -0.135*t3915;
  t4123 = 0.07996*t1006;
  t4124 = 0. + t4115 + t4123;
  t3952 = 0.07996*t3915;
  t3967 = 0.135*t1006;
  t3969 = 0. + t3952 + t3967;
  t4133 = -0.135*t4011;
  t4134 = 0.08055*t2762;
  t4141 = 0. + t4133 + t4134;
  t4355 = -1.*t1006*t1463;
  t4066 = -0.135*t2762;
  t2926 = -1.*t681*t749*t2762;
  t2930 = t2746*t1865;
  t2951 = t2926 + t2930;
  t4040 = -0.08055*t4011;
  t4069 = 0. + t4040 + t4066;
  t2976 = -1.*t2746*t749*t1320;
  t2987 = t2762*t2985;
  t2988 = t2976 + t2987;
  t3023 = -1.*t2746*t1320*t1245;
  t3104 = t2762*t3101;
  t3118 = t3023 + t3104;
  t4458 = 0.135*t210;
  t4459 = t4458 + t4123;
  t4472 = 0.07996*t210;
  t4482 = -0.135*t1006;
  t4483 = t4472 + t4482;
  t5118 = -1.*t1006*t2374;
  t4594 = -0.135*t2746;
  t4609 = -0.08055*t2762;
  t4647 = t4594 + t4609;
  t4653 = 0.08055*t2746;
  t4655 = t4653 + t4066;
  t3244 = t2746*t2512;
  t3284 = t3243 + t3244;
  t5528 = -1.*t749*t750*t1006;
  t5535 = -1.*t210*t749*t1101;
  t5538 = t5528 + t5535;
  t5564 = 0.04566*t5538;
  t5566 = -0.135*t2746*t3326;
  t5573 = t4141*t3326;
  t5574 = -0.08055*t2762*t3326;
  t3380 = t2762*t1245;
  t3381 = t2746*t2611;
  t3385 = t3380 + t3381;
  t3394 = -1.*t2746*t749;
  t3440 = t2762*t3433;
  t3463 = t3394 + t3440;
  p_output1[0]=(t2091 - 1.*t1976*t210)*var2[3] + (t1006*t1101*t681*t749 - 1.*t210*t681*t749*t750)*var2[4] + (t1489 - 1.*t1566*t210)*var2[5] + t1865*var2[13];
  p_output1[1]=(t1006*t1779 - 1.*t1463*t210)*var2[3] + (t1006*t1101*t1320*t749 - 1.*t1320*t210*t749*t750)*var2[4] + (-1.*t2084*t210 + t2380)*var2[5] + t2512*var2[13];
  p_output1[2]=(-1.*t1006*t1101*t1245 + t1245*t210*t750)*var2[4] + t2611*var2[5] + t2611*var2[13];
  p_output1[3]=0;
  p_output1[4]=t2988*var2[3] + t2818*var2[4] + t2762*t2851*var2[5] + t2762*t2892*var2[13] + t2951*var2[14];
  p_output1[5]=t3238*var2[3] + t3118*var2[4] + t2762*t3204*var2[5] + t2762*t3209*var2[13] + t3284*var2[14];
  p_output1[6]=t3463*var2[4] + t2762*t3326*var2[5] + t2762*t3326*var2[13] + t3385*var2[14];
  p_output1[7]=0;
  p_output1[8]=(-1.*t2746*t2985 + t3243)*var2[3] + (-1.*t2746*t2807 - 1.*t1245*t2762*t681)*var2[4] - 1.*t2746*t2851*var2[5] - 1.*t2746*t2892*var2[13] + t3238*var2[14];
  p_output1[9]=(-1.*t1865*t2746 + t2762*t681*t749)*var2[3] + (-1.*t1245*t1320*t2762 - 1.*t2746*t3101)*var2[4] - 1.*t2746*t3204*var2[5] - 1.*t2746*t3209*var2[13] + (t2512*t2762 + t1320*t2746*t749)*var2[14];
  p_output1[10]=(-1.*t2746*t3433 - 1.*t2762*t749)*var2[4] - 1.*t2746*t3326*var2[5] - 1.*t2746*t3326*var2[13] + (-1.*t1245*t2746 + t2611*t2762)*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.04566*(-1.*t1006*t2084 + t1976*t210) - 0.08055*t2988 + t1976*t3969 + t2084*t4124 + t2985*t4141 - 1.*t1320*t4069*t749 - 0.135*(t2746*t2985 + t1320*t2762*t749))*var2[3] + (-0.08055*t2818 + t2807*t4141 - 1.*t1245*t4069*t681 - 0.135*(t2746*t2807 + t1245*t2762*t681) + t1101*t4124*t681*t749 + t3969*t681*t749*t750 + 0.04566*(-1.*t1006*t1101*t681*t749 + t210*t681*t749*t750))*var2[4] + (-0.135*t2746*t2851 - 0.08055*t2762*t2851 + t1566*t3969 + t1463*t4124 + t2851*t4141 + 0.04566*(t1566*t210 + t4355))*var2[5] + (-0.135*t2746*t2892 - 0.08055*t2762*t2892 + t2892*t4141 + 0.04566*(-1.*t1779*t210 + t4355) + t1463*t4459 + t1779*t4483)*var2[13] + (-0.08055*t2951 + t1865*t4655 + t4647*t681*t749 - 0.135*(-1.*t1865*t2762 - 1.*t2746*t681*t749))*var2[14];
  p_output1[13]=var2[1] + (0.04566*t2892 - 0.135*t2951 - 0.08055*t3238 + t1463*t3969 + t1779*t4124 + t1865*t4141 + t4069*t681*t749)*var2[3] + (-0.135*(t1245*t1320*t2762 + t2746*t3101) - 0.08055*t3118 - 1.*t1245*t1320*t4069 + t3101*t4141 + t1101*t1320*t4124*t749 + t1320*t3969*t749*t750 + 0.04566*(-1.*t1006*t1101*t1320*t749 + t1320*t210*t749*t750))*var2[4] + (-0.135*t2746*t3204 - 0.08055*t2762*t3204 + t2084*t3969 + t2374*t4124 + t3204*t4141 + 0.04566*(t2983 + t5118))*var2[5] + (-0.135*t2746*t3209 - 0.08055*t2762*t3209 + t3209*t4141 + t2374*t4459 + t2501*t4483 + 0.04566*(-1.*t210*t2501 + t5118))*var2[13] + (-0.135*(-1.*t2512*t2762 + t2976) - 0.08055*t3284 + t2512*t4655 + t1320*t4647*t749)*var2[14];
  p_output1[14]=var2[2] + (-0.08055*t3463 - 1.*t1101*t1245*t4124 + t3433*t4141 - 1.*t4069*t749 - 0.135*(t2746*t3433 + t2762*t749) - 1.*t1245*t3969*t750 + 0.04566*(t1006*t1101*t1245 - 1.*t1245*t210*t750))*var2[4] + (t5564 + t5566 + t5573 + t5574 - 1.*t1101*t3969*t749 + t4124*t749*t750)*var2[5] + (t5564 + t5566 + t5573 + t5574 + t1101*t4483*t749 + t4459*t749*t750)*var2[13] + (-0.135*(t1245*t2746 - 1.*t2611*t2762) - 0.08055*t3385 - 1.*t1245*t4647 + t2611*t4655)*var2[14];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightHip_mex.hh"

namespace SymExpression
{

void dT_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
