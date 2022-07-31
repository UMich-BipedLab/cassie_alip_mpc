/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:39 GMT-04:00
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
  double t167;
  double t818;
  double t893;
  double t1012;
  double t1115;
  double t1329;
  double t1436;
  double t1400;
  double t1560;
  double t224;
  double t384;
  double t629;
  double t695;
  double t1418;
  double t1648;
  double t1760;
  double t1881;
  double t1883;
  double t1892;
  double t223;
  double t2124;
  double t2149;
  double t2154;
  double t2182;
  double t2217;
  double t2227;
  double t2278;
  double t2374;
  double t2391;
  double t2397;
  double t2630;
  double t2650;
  double t2670;
  double t2732;
  double t2733;
  double t2746;
  double t2765;
  double t2857;
  double t2859;
  double t2889;
  double t2927;
  double t2966;
  double t2976;
  double t3077;
  double t3093;
  double t3113;
  double t3156;
  double t3252;
  double t3374;
  double t3382;
  double t3621;
  double t3626;
  double t3698;
  double t3799;
  double t3846;
  double t3854;
  double t3902;
  double t3993;
  double t4007;
  double t4011;
  double t4189;
  double t4191;
  double t4232;
  double t4295;
  double t4332;
  double t4344;
  double t4413;
  double t4509;
  double t4546;
  double t4549;
  double t4839;
  double t4851;
  double t4928;
  double t651;
  double t727;
  double t794;
  double t1104;
  double t1135;
  double t1141;
  double t1854;
  double t1859;
  double t1871;
  double t2065;
  double t2088;
  double t2122;
  double t5295;
  double t5343;
  double t5351;
  double t5380;
  double t5393;
  double t5394;
  double t2265;
  double t2293;
  double t2317;
  double t5493;
  double t5512;
  double t5527;
  double t2580;
  double t2613;
  double t2616;
  double t2750;
  double t2768;
  double t2835;
  double t5576;
  double t5609;
  double t5632;
  double t5748;
  double t5753;
  double t5795;
  double t2909;
  double t2911;
  double t2915;
  double t3128;
  double t3159;
  double t3182;
  double t5872;
  double t5981;
  double t5999;
  double t6051;
  double t6068;
  double t6090;
  double t3422;
  double t3469;
  double t3471;
  double t3876;
  double t3970;
  double t3985;
  double t6307;
  double t6316;
  double t6326;
  double t6441;
  double t6442;
  double t6536;
  double t4081;
  double t4165;
  double t4188;
  double t4408;
  double t4453;
  double t4492;
  double t6565;
  double t6573;
  double t6576;
  double t6626;
  double t6689;
  double t6694;
  double t4676;
  double t4695;
  double t4837;
  double t6758;
  double t6773;
  double t6795;
  double t6814;
  double t6837;
  double t6848;
  double t7154;
  double t7180;
  double t7181;
  double t7244;
  double t7318;
  double t7342;
  double t7385;
  double t7442;
  double t7446;
  double t7481;
  double t7538;
  double t7601;
  double t7651;
  double t7676;
  double t7706;
  double t7708;
  double t7720;
  double t7728;
  double t7734;
  double t7744;
  double t7748;
  double t7757;
  double t7758;
  double t7770;
  double t7816;
  double t7825;
  double t7843;
  double t7868;
  double t7869;
  double t7871;
  double t7974;
  double t7991;
  double t8044;
  t167 = Cos(var1[3]);
  t818 = Cos(var1[13]);
  t893 = -1.*t818;
  t1012 = 1. + t893;
  t1115 = Sin(var1[13]);
  t1329 = Cos(var1[5]);
  t1436 = Sin(var1[3]);
  t1400 = Sin(var1[4]);
  t1560 = Sin(var1[5]);
  t224 = Cos(var1[14]);
  t384 = -1.*t224;
  t629 = 1. + t384;
  t695 = Sin(var1[14]);
  t1418 = t167*t1329*t1400;
  t1648 = t1436*t1560;
  t1760 = t1418 + t1648;
  t1881 = -1.*t1329*t1436;
  t1883 = t167*t1400*t1560;
  t1892 = t1881 + t1883;
  t223 = Cos(var1[4]);
  t2124 = t1115*t1760;
  t2149 = t818*t1892;
  t2154 = t2124 + t2149;
  t2182 = Cos(var1[15]);
  t2217 = -1.*t2182;
  t2227 = 1. + t2217;
  t2278 = Sin(var1[15]);
  t2374 = t818*t1760;
  t2391 = -1.*t1115*t1892;
  t2397 = t2374 + t2391;
  t2630 = t224*t167*t223;
  t2650 = t695*t2154;
  t2670 = t2630 + t2650;
  t2732 = Cos(var1[16]);
  t2733 = -1.*t2732;
  t2746 = 1. + t2733;
  t2765 = Sin(var1[16]);
  t2857 = t2278*t2397;
  t2859 = t2182*t2670;
  t2889 = t2857 + t2859;
  t2927 = t2182*t2397;
  t2966 = -1.*t2278*t2670;
  t2976 = t2927 + t2966;
  t3077 = Cos(var1[17]);
  t3093 = -1.*t3077;
  t3113 = 1. + t3093;
  t3156 = Sin(var1[17]);
  t3252 = -1.*t2765*t2889;
  t3374 = t2732*t2976;
  t3382 = t3252 + t3374;
  t3621 = t2732*t2889;
  t3626 = t2765*t2976;
  t3698 = t3621 + t3626;
  t3799 = Cos(var1[18]);
  t3846 = -1.*t3799;
  t3854 = 1. + t3846;
  t3902 = Sin(var1[18]);
  t3993 = t3156*t3382;
  t4007 = t3077*t3698;
  t4011 = t3993 + t4007;
  t4189 = t3077*t3382;
  t4191 = -1.*t3156*t3698;
  t4232 = t4189 + t4191;
  t4295 = Cos(var1[19]);
  t4332 = -1.*t4295;
  t4344 = 1. + t4332;
  t4413 = Sin(var1[19]);
  t4509 = -1.*t3902*t4011;
  t4546 = t3799*t4232;
  t4549 = t4509 + t4546;
  t4839 = t3799*t4011;
  t4851 = t3902*t4232;
  t4928 = t4839 + t4851;
  t651 = -0.08055*t629;
  t727 = -0.135*t695;
  t794 = 0. + t651 + t727;
  t1104 = 0.07996*t1012;
  t1135 = 0.135*t1115;
  t1141 = 0. + t1104 + t1135;
  t1854 = -0.135*t1012;
  t1859 = 0.07996*t1115;
  t1871 = 0. + t1854 + t1859;
  t2065 = -0.135*t629;
  t2088 = 0.08055*t695;
  t2122 = 0. + t2065 + t2088;
  t5295 = t1329*t1436*t1400;
  t5343 = -1.*t167*t1560;
  t5351 = t5295 + t5343;
  t5380 = t167*t1329;
  t5393 = t1436*t1400*t1560;
  t5394 = t5380 + t5393;
  t2265 = -0.01004*t2227;
  t2293 = 0.08055*t2278;
  t2317 = 0. + t2265 + t2293;
  t5493 = t1115*t5351;
  t5512 = t818*t5394;
  t5527 = t5493 + t5512;
  t2580 = -0.08055*t2227;
  t2613 = -0.01004*t2278;
  t2616 = 0. + t2580 + t2613;
  t2750 = -0.08055*t2746;
  t2768 = -0.13004*t2765;
  t2835 = 0. + t2750 + t2768;
  t5576 = t818*t5351;
  t5609 = -1.*t1115*t5394;
  t5632 = t5576 + t5609;
  t5748 = t224*t223*t1436;
  t5753 = t695*t5527;
  t5795 = t5748 + t5753;
  t2909 = -0.13004*t2746;
  t2911 = 0.08055*t2765;
  t2915 = 0. + t2909 + t2911;
  t3128 = -0.19074*t3113;
  t3159 = 0.03315*t3156;
  t3182 = 0. + t3128 + t3159;
  t5872 = t2278*t5632;
  t5981 = t2182*t5795;
  t5999 = t5872 + t5981;
  t6051 = t2182*t5632;
  t6068 = -1.*t2278*t5795;
  t6090 = t6051 + t6068;
  t3422 = -0.03315*t3113;
  t3469 = -0.19074*t3156;
  t3471 = 0. + t3422 + t3469;
  t3876 = -0.01315*t3854;
  t3970 = -0.62554*t3902;
  t3985 = 0. + t3876 + t3970;
  t6307 = -1.*t2765*t5999;
  t6316 = t2732*t6090;
  t6326 = t6307 + t6316;
  t6441 = t2732*t5999;
  t6442 = t2765*t6090;
  t6536 = t6441 + t6442;
  t4081 = -0.62554*t3854;
  t4165 = 0.01315*t3902;
  t4188 = 0. + t4081 + t4165;
  t4408 = -1.03354*t4344;
  t4453 = 0.05315*t4413;
  t4492 = 0. + t4408 + t4453;
  t6565 = t3156*t6326;
  t6573 = t3077*t6536;
  t6576 = t6565 + t6573;
  t6626 = t3077*t6326;
  t6689 = -1.*t3156*t6536;
  t6694 = t6626 + t6689;
  t4676 = -0.05315*t4344;
  t4695 = -1.03354*t4413;
  t4837 = 0. + t4676 + t4695;
  t6758 = -1.*t3902*t6576;
  t6773 = t3799*t6694;
  t6795 = t6758 + t6773;
  t6814 = t3799*t6576;
  t6837 = t3902*t6694;
  t6848 = t6814 + t6837;
  t7154 = t223*t1329*t1115;
  t7180 = t818*t223*t1560;
  t7181 = t7154 + t7180;
  t7244 = t818*t223*t1329;
  t7318 = -1.*t223*t1115*t1560;
  t7342 = t7244 + t7318;
  t7385 = -1.*t224*t1400;
  t7442 = t695*t7181;
  t7446 = t7385 + t7442;
  t7481 = t2278*t7342;
  t7538 = t2182*t7446;
  t7601 = t7481 + t7538;
  t7651 = t2182*t7342;
  t7676 = -1.*t2278*t7446;
  t7706 = t7651 + t7676;
  t7708 = -1.*t2765*t7601;
  t7720 = t2732*t7706;
  t7728 = t7708 + t7720;
  t7734 = t2732*t7601;
  t7744 = t2765*t7706;
  t7748 = t7734 + t7744;
  t7757 = t3156*t7728;
  t7758 = t3077*t7748;
  t7770 = t7757 + t7758;
  t7816 = t3077*t7728;
  t7825 = -1.*t3156*t7748;
  t7843 = t7816 + t7825;
  t7868 = -1.*t3902*t7770;
  t7869 = t3799*t7843;
  t7871 = t7868 + t7869;
  t7974 = t3799*t7770;
  t7991 = t3902*t7843;
  t8044 = t7974 + t7991;
  p_output1[0]=0. + t1141*t1760 + t1871*t1892 + t2122*t2154 + t2317*t2397 + t2616*t2670 + t2835*t2889 + t2915*t2976 + t3182*t3382 + t3471*t3698 + t3985*t4011 + t4188*t4232 + t4492*t4549 + t4837*t4928 - 0.02565*(t4413*t4549 + t4295*t4928) - 1.03824*(t4295*t4549 - 1.*t4413*t4928) - 0.1306*(t2154*t224 - 1.*t167*t223*t695) + t167*t223*t794 + var1[0];
  p_output1[1]=0. + t1141*t5351 + t1871*t5394 + t2122*t5527 + t2317*t5632 + t2616*t5795 + t2835*t5999 + t2915*t6090 + t3182*t6326 + t3471*t6536 + t3985*t6576 + t4188*t6694 + t4492*t6795 + t4837*t6848 - 0.02565*(t4413*t6795 + t4295*t6848) - 1.03824*(t4295*t6795 - 1.*t4413*t6848) - 0.1306*(t224*t5527 - 1.*t1436*t223*t695) + t1436*t223*t794 + var1[1];
  p_output1[2]=0. + t1141*t1329*t223 + t1560*t1871*t223 + t2122*t7181 - 0.1306*(t1400*t695 + t224*t7181) + t2317*t7342 + t2616*t7446 + t2835*t7601 + t2915*t7706 + t3182*t7728 + t3471*t7748 + t3985*t7770 + t4188*t7843 + t4492*t7871 - 1.*t1400*t794 + t4837*t8044 - 0.02565*(t4413*t7871 + t4295*t8044) - 1.03824*(t4295*t7871 - 1.*t4413*t8044) + var1[2];
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

#include "p_RightToe_mex.hh"

namespace SymExpression
{

void p_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
