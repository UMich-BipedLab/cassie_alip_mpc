/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:55 GMT-04:00
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
  double t117;
  double t221;
  double t83;
  double t130;
  double t232;
  double t367;
  double t377;
  double t422;
  double t537;
  double t617;
  double t642;
  double t648;
  double t216;
  double t252;
  double t310;
  double t807;
  double t854;
  double t914;
  double t972;
  double t748;
  double t759;
  double t779;
  double t1148;
  double t1479;
  double t1542;
  double t1566;
  double t1635;
  double t1336;
  double t1388;
  double t1458;
  double t1709;
  double t1748;
  double t1764;
  double t1843;
  double t1853;
  double t1864;
  double t1895;
  double t1954;
  double t1961;
  double t1974;
  double t2067;
  double t2093;
  double t2095;
  double t2149;
  double t2161;
  double t2171;
  double t2220;
  double t2241;
  double t2243;
  double t2276;
  double t2358;
  double t2361;
  double t2385;
  double t2408;
  double t2427;
  double t2436;
  double t2486;
  double t2522;
  double t2546;
  double t2586;
  double t2651;
  double t2652;
  double t2718;
  double t2731;
  double t2749;
  double t2772;
  double t2835;
  double t2852;
  double t2879;
  double t2880;
  double t2942;
  double t2951;
  double t2952;
  double t450;
  double t545;
  double t564;
  double t651;
  double t730;
  double t736;
  double t3270;
  double t3294;
  double t3312;
  double t3157;
  double t3183;
  double t3195;
  double t961;
  double t1023;
  double t1082;
  double t1149;
  double t1152;
  double t1159;
  double t3322;
  double t3331;
  double t3351;
  double t1588;
  double t1648;
  double t1649;
  double t1781;
  double t1804;
  double t1816;
  double t1892;
  double t1911;
  double t1941;
  double t3411;
  double t3424;
  double t3428;
  double t3471;
  double t3477;
  double t3501;
  double t2003;
  double t2045;
  double t2064;
  double t2218;
  double t2223;
  double t2240;
  double t3548;
  double t3561;
  double t3562;
  double t3583;
  double t3585;
  double t3586;
  double t2295;
  double t2354;
  double t2357;
  double t2460;
  double t2495;
  double t2515;
  double t3594;
  double t3614;
  double t3633;
  double t3651;
  double t3652;
  double t3666;
  double t2632;
  double t2649;
  double t2650;
  double t2782;
  double t2842;
  double t2849;
  double t3690;
  double t3704;
  double t3707;
  double t3715;
  double t3743;
  double t3750;
  double t2901;
  double t2903;
  double t2930;
  double t3784;
  double t3785;
  double t3787;
  double t3806;
  double t3821;
  double t3825;
  double t4037;
  double t4046;
  double t4059;
  double t4119;
  double t4134;
  double t4137;
  double t4155;
  double t4205;
  double t4207;
  double t4216;
  double t4228;
  double t4229;
  double t4260;
  double t4261;
  double t4268;
  double t4289;
  double t4290;
  double t4302;
  double t4340;
  double t4343;
  double t4351;
  double t4382;
  double t4422;
  double t4431;
  double t4494;
  double t4502;
  double t4535;
  double t4543;
  double t4545;
  double t4546;
  double t4563;
  double t4595;
  double t4613;
  t117 = Cos(var1[5]);
  t221 = Sin(var1[3]);
  t83 = Cos(var1[3]);
  t130 = Sin(var1[4]);
  t232 = Sin(var1[5]);
  t367 = Cos(var1[6]);
  t377 = -1.*t367;
  t422 = 1. + t377;
  t537 = Sin(var1[6]);
  t617 = -1.*t117*t221;
  t642 = t83*t130*t232;
  t648 = t617 + t642;
  t216 = t83*t117*t130;
  t252 = t221*t232;
  t310 = t216 + t252;
  t807 = Cos(var1[7]);
  t854 = -1.*t807;
  t914 = 1. + t854;
  t972 = Sin(var1[7]);
  t748 = t367*t648;
  t759 = t310*t537;
  t779 = t748 + t759;
  t1148 = Cos(var1[4]);
  t1479 = Cos(var1[8]);
  t1542 = -1.*t1479;
  t1566 = 1. + t1542;
  t1635 = Sin(var1[8]);
  t1336 = t83*t1148*t807;
  t1388 = t779*t972;
  t1458 = t1336 + t1388;
  t1709 = t367*t310;
  t1748 = -1.*t648*t537;
  t1764 = t1709 + t1748;
  t1843 = Cos(var1[9]);
  t1853 = -1.*t1843;
  t1864 = 1. + t1853;
  t1895 = Sin(var1[9]);
  t1954 = t1479*t1458;
  t1961 = t1764*t1635;
  t1974 = t1954 + t1961;
  t2067 = t1479*t1764;
  t2093 = -1.*t1458*t1635;
  t2095 = t2067 + t2093;
  t2149 = Cos(var1[10]);
  t2161 = -1.*t2149;
  t2171 = 1. + t2161;
  t2220 = Sin(var1[10]);
  t2241 = -1.*t1895*t1974;
  t2243 = t1843*t2095;
  t2276 = t2241 + t2243;
  t2358 = t1843*t1974;
  t2361 = t1895*t2095;
  t2385 = t2358 + t2361;
  t2408 = Cos(var1[11]);
  t2427 = -1.*t2408;
  t2436 = 1. + t2427;
  t2486 = Sin(var1[11]);
  t2522 = t2220*t2276;
  t2546 = t2149*t2385;
  t2586 = t2522 + t2546;
  t2651 = t2149*t2276;
  t2652 = -1.*t2220*t2385;
  t2718 = t2651 + t2652;
  t2731 = Cos(var1[12]);
  t2749 = -1.*t2731;
  t2772 = 1. + t2749;
  t2835 = Sin(var1[12]);
  t2852 = -1.*t2486*t2586;
  t2879 = t2408*t2718;
  t2880 = t2852 + t2879;
  t2942 = t2408*t2586;
  t2951 = t2486*t2718;
  t2952 = t2942 + t2951;
  t450 = 0.07996*t422;
  t545 = -0.135*t537;
  t564 = 0. + t450 + t545;
  t651 = 0.135*t422;
  t730 = 0.07996*t537;
  t736 = 0. + t651 + t730;
  t3270 = t83*t117;
  t3294 = t221*t130*t232;
  t3312 = t3270 + t3294;
  t3157 = t117*t221*t130;
  t3183 = -1.*t83*t232;
  t3195 = t3157 + t3183;
  t961 = 0.135*t914;
  t1023 = 0.08055*t972;
  t1082 = 0. + t961 + t1023;
  t1149 = -0.08055*t914;
  t1152 = 0.135*t972;
  t1159 = 0. + t1149 + t1152;
  t3322 = t367*t3312;
  t3331 = t3195*t537;
  t3351 = t3322 + t3331;
  t1588 = -0.08055*t1566;
  t1648 = -0.01004*t1635;
  t1649 = 0. + t1588 + t1648;
  t1781 = -0.01004*t1566;
  t1804 = 0.08055*t1635;
  t1816 = 0. + t1781 + t1804;
  t1892 = -0.08055*t1864;
  t1911 = -0.13004*t1895;
  t1941 = 0. + t1892 + t1911;
  t3411 = t1148*t807*t221;
  t3424 = t3351*t972;
  t3428 = t3411 + t3424;
  t3471 = t367*t3195;
  t3477 = -1.*t3312*t537;
  t3501 = t3471 + t3477;
  t2003 = -0.13004*t1864;
  t2045 = 0.08055*t1895;
  t2064 = 0. + t2003 + t2045;
  t2218 = -0.19074*t2171;
  t2223 = 0.03315*t2220;
  t2240 = 0. + t2218 + t2223;
  t3548 = t1479*t3428;
  t3561 = t3501*t1635;
  t3562 = t3548 + t3561;
  t3583 = t1479*t3501;
  t3585 = -1.*t3428*t1635;
  t3586 = t3583 + t3585;
  t2295 = -0.03315*t2171;
  t2354 = -0.19074*t2220;
  t2357 = 0. + t2295 + t2354;
  t2460 = -0.01315*t2436;
  t2495 = -0.62554*t2486;
  t2515 = 0. + t2460 + t2495;
  t3594 = -1.*t1895*t3562;
  t3614 = t1843*t3586;
  t3633 = t3594 + t3614;
  t3651 = t1843*t3562;
  t3652 = t1895*t3586;
  t3666 = t3651 + t3652;
  t2632 = -0.62554*t2436;
  t2649 = 0.01315*t2486;
  t2650 = 0. + t2632 + t2649;
  t2782 = -1.03354*t2772;
  t2842 = 0.05315*t2835;
  t2849 = 0. + t2782 + t2842;
  t3690 = t2220*t3633;
  t3704 = t2149*t3666;
  t3707 = t3690 + t3704;
  t3715 = t2149*t3633;
  t3743 = -1.*t2220*t3666;
  t3750 = t3715 + t3743;
  t2901 = -0.05315*t2772;
  t2903 = -1.03354*t2835;
  t2930 = 0. + t2901 + t2903;
  t3784 = -1.*t2486*t3707;
  t3785 = t2408*t3750;
  t3787 = t3784 + t3785;
  t3806 = t2408*t3707;
  t3821 = t2486*t3750;
  t3825 = t3806 + t3821;
  t4037 = t1148*t367*t232;
  t4046 = t1148*t117*t537;
  t4059 = t4037 + t4046;
  t4119 = -1.*t807*t130;
  t4134 = t4059*t972;
  t4137 = t4119 + t4134;
  t4155 = t1148*t117*t367;
  t4205 = -1.*t1148*t232*t537;
  t4207 = t4155 + t4205;
  t4216 = t1479*t4137;
  t4228 = t4207*t1635;
  t4229 = t4216 + t4228;
  t4260 = t1479*t4207;
  t4261 = -1.*t4137*t1635;
  t4268 = t4260 + t4261;
  t4289 = -1.*t1895*t4229;
  t4290 = t1843*t4268;
  t4302 = t4289 + t4290;
  t4340 = t1843*t4229;
  t4343 = t1895*t4268;
  t4351 = t4340 + t4343;
  t4382 = t2220*t4302;
  t4422 = t2149*t4351;
  t4431 = t4382 + t4422;
  t4494 = t2149*t4302;
  t4502 = -1.*t2220*t4351;
  t4535 = t4494 + t4502;
  t4543 = -1.*t2486*t4431;
  t4545 = t2408*t4535;
  t4546 = t4543 + t4545;
  t4563 = t2408*t4431;
  t4595 = t2486*t4535;
  t4613 = t4563 + t4595;
  p_output1[0]=0. + t1458*t1649 + t1764*t1816 + t1941*t1974 + t2064*t2095 + t2240*t2276 + t2357*t2385 + t2515*t2586 + t2650*t2718 + t2849*t2880 + t2930*t2952 - 0.063247*(t2835*t2880 + t2731*t2952) - 1.109926*(t2731*t2880 - 1.*t2835*t2952) + t310*t564 + t648*t736 + t1082*t779 + t1148*t1159*t83 + 0.1305*(t779*t807 - 1.*t1148*t83*t972) + var1[0];
  p_output1[1]=0. + t1148*t1159*t221 + t1082*t3351 + t1649*t3428 + t1816*t3501 + t1941*t3562 + t2064*t3586 + t2240*t3633 + t2357*t3666 + t2515*t3707 + t2650*t3750 + t2849*t3787 + t2930*t3825 - 0.063247*(t2835*t3787 + t2731*t3825) - 1.109926*(t2731*t3787 - 1.*t2835*t3825) + t3195*t564 + t3312*t736 + 0.1305*(t3351*t807 - 1.*t1148*t221*t972) + var1[1];
  p_output1[2]=0. - 1.*t1159*t130 + t1082*t4059 + t1649*t4137 + t1816*t4207 + t1941*t4229 + t2064*t4268 + t2240*t4302 + t2357*t4351 + t2515*t4431 + t2650*t4535 + t2849*t4546 + t2930*t4613 - 0.063247*(t2835*t4546 + t2731*t4613) - 1.109926*(t2731*t4546 - 1.*t2835*t4613) + t1148*t117*t564 + t1148*t232*t736 + 0.1305*(t4059*t807 + t130*t972) + var1[2];
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

#include "p_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void p_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
