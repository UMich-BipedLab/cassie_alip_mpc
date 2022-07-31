/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:22 GMT-04:00
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
  double t37;
  double t233;
  double t15;
  double t106;
  double t256;
  double t371;
  double t372;
  double t391;
  double t406;
  double t444;
  double t459;
  double t460;
  double t209;
  double t345;
  double t362;
  double t1101;
  double t1153;
  double t1325;
  double t1416;
  double t666;
  double t816;
  double t927;
  double t1847;
  double t2382;
  double t2427;
  double t2469;
  double t2571;
  double t2268;
  double t2294;
  double t2324;
  double t2788;
  double t2790;
  double t2925;
  double t3230;
  double t3232;
  double t3233;
  double t3312;
  double t3333;
  double t3365;
  double t3427;
  double t4001;
  double t4046;
  double t4063;
  double t4172;
  double t4220;
  double t4278;
  double t4295;
  double t4494;
  double t4533;
  double t4668;
  double t4811;
  double t4866;
  double t5011;
  double t5085;
  double t5091;
  double t5228;
  double t5268;
  double t5470;
  double t5473;
  double t5478;
  double t5971;
  double t6028;
  double t6262;
  double t6324;
  double t6328;
  double t6333;
  double t6376;
  double t6568;
  double t6621;
  double t6642;
  double t6848;
  double t6887;
  double t6900;
  double t405;
  double t407;
  double t419;
  double t504;
  double t595;
  double t645;
  double t7155;
  double t7216;
  double t7225;
  double t7093;
  double t7144;
  double t7150;
  double t1399;
  double t1541;
  double t1670;
  double t1871;
  double t1929;
  double t1935;
  double t7229;
  double t7299;
  double t7305;
  double t2495;
  double t2610;
  double t2710;
  double t2986;
  double t3056;
  double t3173;
  double t3266;
  double t3317;
  double t3323;
  double t7376;
  double t7399;
  double t7406;
  double t7409;
  double t7429;
  double t7435;
  double t3465;
  double t3551;
  double t3967;
  double t4279;
  double t4400;
  double t4485;
  double t7449;
  double t7451;
  double t7457;
  double t7465;
  double t7466;
  double t7471;
  double t4708;
  double t4807;
  double t4809;
  double t5232;
  double t5340;
  double t5422;
  double t7508;
  double t7517;
  double t7523;
  double t7544;
  double t7548;
  double t7554;
  double t5506;
  double t5556;
  double t5748;
  double t6342;
  double t6503;
  double t6559;
  double t7611;
  double t7644;
  double t7651;
  double t7654;
  double t7671;
  double t7676;
  double t6644;
  double t6722;
  double t6802;
  double t7680;
  double t7691;
  double t7698;
  double t7707;
  double t7709;
  double t7711;
  double t7780;
  double t7782;
  double t7783;
  double t7800;
  double t7803;
  double t7804;
  double t7808;
  double t7809;
  double t7811;
  double t7816;
  double t7817;
  double t7819;
  double t7822;
  double t7824;
  double t7827;
  double t7831;
  double t7832;
  double t7833;
  double t7837;
  double t7839;
  double t7842;
  double t7844;
  double t7846;
  double t7847;
  double t7850;
  double t7853;
  double t7856;
  double t7858;
  double t7859;
  double t7864;
  double t7868;
  double t7871;
  double t7872;
  t37 = Cos(var1[5]);
  t233 = Sin(var1[3]);
  t15 = Cos(var1[3]);
  t106 = Sin(var1[4]);
  t256 = Sin(var1[5]);
  t371 = Cos(var1[6]);
  t372 = -1.*t371;
  t391 = 1. + t372;
  t406 = Sin(var1[6]);
  t444 = -1.*t37*t233;
  t459 = t15*t106*t256;
  t460 = t444 + t459;
  t209 = t15*t37*t106;
  t345 = t233*t256;
  t362 = t209 + t345;
  t1101 = Cos(var1[7]);
  t1153 = -1.*t1101;
  t1325 = 1. + t1153;
  t1416 = Sin(var1[7]);
  t666 = t371*t460;
  t816 = t362*t406;
  t927 = t666 + t816;
  t1847 = Cos(var1[4]);
  t2382 = Cos(var1[8]);
  t2427 = -1.*t2382;
  t2469 = 1. + t2427;
  t2571 = Sin(var1[8]);
  t2268 = t15*t1847*t1101;
  t2294 = t927*t1416;
  t2324 = t2268 + t2294;
  t2788 = t371*t362;
  t2790 = -1.*t460*t406;
  t2925 = t2788 + t2790;
  t3230 = Cos(var1[9]);
  t3232 = -1.*t3230;
  t3233 = 1. + t3232;
  t3312 = Sin(var1[9]);
  t3333 = t2382*t2324;
  t3365 = t2925*t2571;
  t3427 = t3333 + t3365;
  t4001 = t2382*t2925;
  t4046 = -1.*t2324*t2571;
  t4063 = t4001 + t4046;
  t4172 = Cos(var1[10]);
  t4220 = -1.*t4172;
  t4278 = 1. + t4220;
  t4295 = Sin(var1[10]);
  t4494 = -1.*t3312*t3427;
  t4533 = t3230*t4063;
  t4668 = t4494 + t4533;
  t4811 = t3230*t3427;
  t4866 = t3312*t4063;
  t5011 = t4811 + t4866;
  t5085 = Cos(var1[11]);
  t5091 = -1.*t5085;
  t5228 = 1. + t5091;
  t5268 = Sin(var1[11]);
  t5470 = t4295*t4668;
  t5473 = t4172*t5011;
  t5478 = t5470 + t5473;
  t5971 = t4172*t4668;
  t6028 = -1.*t4295*t5011;
  t6262 = t5971 + t6028;
  t6324 = Cos(var1[12]);
  t6328 = -1.*t6324;
  t6333 = 1. + t6328;
  t6376 = Sin(var1[12]);
  t6568 = -1.*t5268*t5478;
  t6621 = t5085*t6262;
  t6642 = t6568 + t6621;
  t6848 = t5085*t5478;
  t6887 = t5268*t6262;
  t6900 = t6848 + t6887;
  t405 = 0.07996*t391;
  t407 = -0.135*t406;
  t419 = 0. + t405 + t407;
  t504 = 0.135*t391;
  t595 = 0.07996*t406;
  t645 = 0. + t504 + t595;
  t7155 = t15*t37;
  t7216 = t233*t106*t256;
  t7225 = t7155 + t7216;
  t7093 = t37*t233*t106;
  t7144 = -1.*t15*t256;
  t7150 = t7093 + t7144;
  t1399 = 0.135*t1325;
  t1541 = 0.08055*t1416;
  t1670 = 0. + t1399 + t1541;
  t1871 = -0.08055*t1325;
  t1929 = 0.135*t1416;
  t1935 = 0. + t1871 + t1929;
  t7229 = t371*t7225;
  t7299 = t7150*t406;
  t7305 = t7229 + t7299;
  t2495 = -0.08055*t2469;
  t2610 = -0.01004*t2571;
  t2710 = 0. + t2495 + t2610;
  t2986 = -0.01004*t2469;
  t3056 = 0.08055*t2571;
  t3173 = 0. + t2986 + t3056;
  t3266 = -0.08055*t3233;
  t3317 = -0.13004*t3312;
  t3323 = 0. + t3266 + t3317;
  t7376 = t1847*t1101*t233;
  t7399 = t7305*t1416;
  t7406 = t7376 + t7399;
  t7409 = t371*t7150;
  t7429 = -1.*t7225*t406;
  t7435 = t7409 + t7429;
  t3465 = -0.13004*t3233;
  t3551 = 0.08055*t3312;
  t3967 = 0. + t3465 + t3551;
  t4279 = -0.19074*t4278;
  t4400 = 0.03315*t4295;
  t4485 = 0. + t4279 + t4400;
  t7449 = t2382*t7406;
  t7451 = t7435*t2571;
  t7457 = t7449 + t7451;
  t7465 = t2382*t7435;
  t7466 = -1.*t7406*t2571;
  t7471 = t7465 + t7466;
  t4708 = -0.03315*t4278;
  t4807 = -0.19074*t4295;
  t4809 = 0. + t4708 + t4807;
  t5232 = -0.01315*t5228;
  t5340 = -0.62554*t5268;
  t5422 = 0. + t5232 + t5340;
  t7508 = -1.*t3312*t7457;
  t7517 = t3230*t7471;
  t7523 = t7508 + t7517;
  t7544 = t3230*t7457;
  t7548 = t3312*t7471;
  t7554 = t7544 + t7548;
  t5506 = -0.62554*t5228;
  t5556 = 0.01315*t5268;
  t5748 = 0. + t5506 + t5556;
  t6342 = -1.03354*t6333;
  t6503 = 0.05315*t6376;
  t6559 = 0. + t6342 + t6503;
  t7611 = t4295*t7523;
  t7644 = t4172*t7554;
  t7651 = t7611 + t7644;
  t7654 = t4172*t7523;
  t7671 = -1.*t4295*t7554;
  t7676 = t7654 + t7671;
  t6644 = -0.05315*t6333;
  t6722 = -1.03354*t6376;
  t6802 = 0. + t6644 + t6722;
  t7680 = -1.*t5268*t7651;
  t7691 = t5085*t7676;
  t7698 = t7680 + t7691;
  t7707 = t5085*t7651;
  t7709 = t5268*t7676;
  t7711 = t7707 + t7709;
  t7780 = t1847*t371*t256;
  t7782 = t1847*t37*t406;
  t7783 = t7780 + t7782;
  t7800 = -1.*t1101*t106;
  t7803 = t7783*t1416;
  t7804 = t7800 + t7803;
  t7808 = t1847*t37*t371;
  t7809 = -1.*t1847*t256*t406;
  t7811 = t7808 + t7809;
  t7816 = t2382*t7804;
  t7817 = t7811*t2571;
  t7819 = t7816 + t7817;
  t7822 = t2382*t7811;
  t7824 = -1.*t7804*t2571;
  t7827 = t7822 + t7824;
  t7831 = -1.*t3312*t7819;
  t7832 = t3230*t7827;
  t7833 = t7831 + t7832;
  t7837 = t3230*t7819;
  t7839 = t3312*t7827;
  t7842 = t7837 + t7839;
  t7844 = t4295*t7833;
  t7846 = t4172*t7842;
  t7847 = t7844 + t7846;
  t7850 = t4172*t7833;
  t7853 = -1.*t4295*t7842;
  t7856 = t7850 + t7853;
  t7858 = -1.*t5268*t7847;
  t7859 = t5085*t7856;
  t7864 = t7858 + t7859;
  t7868 = t5085*t7847;
  t7871 = t5268*t7856;
  t7872 = t7868 + t7871;
  p_output1[0]=0. + t15*t1847*t1935 + t2324*t2710 + t2925*t3173 + t3323*t3427 + t3967*t4063 + t362*t419 + t4485*t4668 + t4809*t5011 + t5422*t5478 + t5748*t6262 + t460*t645 + t6559*t6642 + t6802*t6900 - 0.05315*(t6376*t6642 + t6324*t6900) - 1.03354*(t6324*t6642 - 1.*t6376*t6900) + t1670*t927 + 0.1305*(-1.*t1416*t15*t1847 + t1101*t927) + var1[0];
  p_output1[1]=0. + t1847*t1935*t233 + t419*t7150 + t645*t7225 + t1670*t7305 + 0.1305*(-1.*t1416*t1847*t233 + t1101*t7305) + t2710*t7406 + t3173*t7435 + t3323*t7457 + t3967*t7471 + t4485*t7523 + t4809*t7554 + t5422*t7651 + t5748*t7676 + t6559*t7698 + t6802*t7711 - 0.05315*(t6376*t7698 + t6324*t7711) - 1.03354*(t6324*t7698 - 1.*t6376*t7711) + var1[1];
  p_output1[2]=0. - 1.*t106*t1935 + t1847*t37*t419 + t1847*t256*t645 + t1670*t7783 + 0.1305*(t106*t1416 + t1101*t7783) + t2710*t7804 + t3173*t7811 + t3323*t7819 + t3967*t7827 + t4485*t7833 + t4809*t7842 + t5422*t7847 + t5748*t7856 + t6559*t7864 + t6802*t7872 - 0.05315*(t6376*t7864 + t6324*t7872) - 1.03354*(t6324*t7864 - 1.*t6376*t7872) + var1[2];
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

#include "p_LeftToeJoint_mex.hh"

namespace SymExpression
{

void p_LeftToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
