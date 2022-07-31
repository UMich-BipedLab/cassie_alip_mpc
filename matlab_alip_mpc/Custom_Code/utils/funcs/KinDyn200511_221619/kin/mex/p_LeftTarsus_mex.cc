/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:05 GMT-04:00
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
  double t324;
  double t1131;
  double t42;
  double t395;
  double t1259;
  double t1341;
  double t1351;
  double t1368;
  double t1378;
  double t1556;
  double t1583;
  double t1598;
  double t1127;
  double t1286;
  double t1339;
  double t1849;
  double t1855;
  double t1884;
  double t2197;
  double t1759;
  double t1777;
  double t1792;
  double t2408;
  double t3289;
  double t3302;
  double t3313;
  double t3392;
  double t3168;
  double t3199;
  double t3253;
  double t3800;
  double t3817;
  double t3875;
  double t4158;
  double t4181;
  double t4203;
  double t4256;
  double t4345;
  double t4407;
  double t4422;
  double t4661;
  double t4678;
  double t4682;
  double t4760;
  double t4795;
  double t4801;
  double t4981;
  double t5134;
  double t5181;
  double t5227;
  double t5350;
  double t5357;
  double t5473;
  double t5562;
  double t5606;
  double t5649;
  double t5723;
  double t5924;
  double t5928;
  double t5970;
  double t6074;
  double t6141;
  double t6162;
  double t1370;
  double t1396;
  double t1429;
  double t1613;
  double t1646;
  double t1671;
  double t7083;
  double t7154;
  double t7165;
  double t6891;
  double t6924;
  double t7031;
  double t2061;
  double t2203;
  double t2243;
  double t2547;
  double t2569;
  double t2613;
  double t7208;
  double t7216;
  double t7226;
  double t3323;
  double t3429;
  double t3548;
  double t3878;
  double t3996;
  double t4016;
  double t4249;
  double t4257;
  double t4291;
  double t7285;
  double t7287;
  double t7303;
  double t7367;
  double t7379;
  double t7402;
  double t4592;
  double t4595;
  double t4622;
  double t4893;
  double t5004;
  double t5102;
  double t7421;
  double t7422;
  double t7433;
  double t7441;
  double t7443;
  double t7444;
  double t5266;
  double t5279;
  double t5327;
  double t5679;
  double t5725;
  double t5837;
  double t7453;
  double t7461;
  double t7465;
  double t7487;
  double t7495;
  double t7501;
  double t6032;
  double t6059;
  double t6061;
  double t7507;
  double t7511;
  double t7513;
  double t7518;
  double t7523;
  double t7531;
  double t7602;
  double t7616;
  double t7626;
  double t7660;
  double t7668;
  double t7673;
  double t7678;
  double t7683;
  double t7689;
  double t7705;
  double t7708;
  double t7709;
  double t7714;
  double t7717;
  double t7731;
  double t7738;
  double t7745;
  double t7747;
  double t7749;
  double t7752;
  double t7756;
  double t7766;
  double t7773;
  double t7786;
  double t7792;
  double t7798;
  double t7800;
  t324 = Cos(var1[5]);
  t1131 = Sin(var1[3]);
  t42 = Cos(var1[3]);
  t395 = Sin(var1[4]);
  t1259 = Sin(var1[5]);
  t1341 = Cos(var1[6]);
  t1351 = -1.*t1341;
  t1368 = 1. + t1351;
  t1378 = Sin(var1[6]);
  t1556 = -1.*t324*t1131;
  t1583 = t42*t395*t1259;
  t1598 = t1556 + t1583;
  t1127 = t42*t324*t395;
  t1286 = t1131*t1259;
  t1339 = t1127 + t1286;
  t1849 = Cos(var1[7]);
  t1855 = -1.*t1849;
  t1884 = 1. + t1855;
  t2197 = Sin(var1[7]);
  t1759 = t1341*t1598;
  t1777 = t1339*t1378;
  t1792 = t1759 + t1777;
  t2408 = Cos(var1[4]);
  t3289 = Cos(var1[8]);
  t3302 = -1.*t3289;
  t3313 = 1. + t3302;
  t3392 = Sin(var1[8]);
  t3168 = t42*t2408*t1849;
  t3199 = t1792*t2197;
  t3253 = t3168 + t3199;
  t3800 = t1341*t1339;
  t3817 = -1.*t1598*t1378;
  t3875 = t3800 + t3817;
  t4158 = Cos(var1[9]);
  t4181 = -1.*t4158;
  t4203 = 1. + t4181;
  t4256 = Sin(var1[9]);
  t4345 = t3289*t3253;
  t4407 = t3875*t3392;
  t4422 = t4345 + t4407;
  t4661 = t3289*t3875;
  t4678 = -1.*t3253*t3392;
  t4682 = t4661 + t4678;
  t4760 = Cos(var1[10]);
  t4795 = -1.*t4760;
  t4801 = 1. + t4795;
  t4981 = Sin(var1[10]);
  t5134 = -1.*t4256*t4422;
  t5181 = t4158*t4682;
  t5227 = t5134 + t5181;
  t5350 = t4158*t4422;
  t5357 = t4256*t4682;
  t5473 = t5350 + t5357;
  t5562 = Cos(var1[11]);
  t5606 = -1.*t5562;
  t5649 = 1. + t5606;
  t5723 = Sin(var1[11]);
  t5924 = t4981*t5227;
  t5928 = t4760*t5473;
  t5970 = t5924 + t5928;
  t6074 = t4760*t5227;
  t6141 = -1.*t4981*t5473;
  t6162 = t6074 + t6141;
  t1370 = 0.07996*t1368;
  t1396 = -0.135*t1378;
  t1429 = 0. + t1370 + t1396;
  t1613 = 0.135*t1368;
  t1646 = 0.07996*t1378;
  t1671 = 0. + t1613 + t1646;
  t7083 = t42*t324;
  t7154 = t1131*t395*t1259;
  t7165 = t7083 + t7154;
  t6891 = t324*t1131*t395;
  t6924 = -1.*t42*t1259;
  t7031 = t6891 + t6924;
  t2061 = 0.135*t1884;
  t2203 = 0.08055*t2197;
  t2243 = 0. + t2061 + t2203;
  t2547 = -0.08055*t1884;
  t2569 = 0.135*t2197;
  t2613 = 0. + t2547 + t2569;
  t7208 = t1341*t7165;
  t7216 = t7031*t1378;
  t7226 = t7208 + t7216;
  t3323 = -0.08055*t3313;
  t3429 = -0.01004*t3392;
  t3548 = 0. + t3323 + t3429;
  t3878 = -0.01004*t3313;
  t3996 = 0.08055*t3392;
  t4016 = 0. + t3878 + t3996;
  t4249 = -0.08055*t4203;
  t4257 = -0.13004*t4256;
  t4291 = 0. + t4249 + t4257;
  t7285 = t2408*t1849*t1131;
  t7287 = t7226*t2197;
  t7303 = t7285 + t7287;
  t7367 = t1341*t7031;
  t7379 = -1.*t7165*t1378;
  t7402 = t7367 + t7379;
  t4592 = -0.13004*t4203;
  t4595 = 0.08055*t4256;
  t4622 = 0. + t4592 + t4595;
  t4893 = -0.19074*t4801;
  t5004 = 0.03315*t4981;
  t5102 = 0. + t4893 + t5004;
  t7421 = t3289*t7303;
  t7422 = t7402*t3392;
  t7433 = t7421 + t7422;
  t7441 = t3289*t7402;
  t7443 = -1.*t7303*t3392;
  t7444 = t7441 + t7443;
  t5266 = -0.03315*t4801;
  t5279 = -0.19074*t4981;
  t5327 = 0. + t5266 + t5279;
  t5679 = -0.01315*t5649;
  t5725 = -0.62554*t5723;
  t5837 = 0. + t5679 + t5725;
  t7453 = -1.*t4256*t7433;
  t7461 = t4158*t7444;
  t7465 = t7453 + t7461;
  t7487 = t4158*t7433;
  t7495 = t4256*t7444;
  t7501 = t7487 + t7495;
  t6032 = -0.62554*t5649;
  t6059 = 0.01315*t5723;
  t6061 = 0. + t6032 + t6059;
  t7507 = t4981*t7465;
  t7511 = t4760*t7501;
  t7513 = t7507 + t7511;
  t7518 = t4760*t7465;
  t7523 = -1.*t4981*t7501;
  t7531 = t7518 + t7523;
  t7602 = t2408*t1341*t1259;
  t7616 = t2408*t324*t1378;
  t7626 = t7602 + t7616;
  t7660 = -1.*t1849*t395;
  t7668 = t7626*t2197;
  t7673 = t7660 + t7668;
  t7678 = t2408*t324*t1341;
  t7683 = -1.*t2408*t1259*t1378;
  t7689 = t7678 + t7683;
  t7705 = t3289*t7673;
  t7708 = t7689*t3392;
  t7709 = t7705 + t7708;
  t7714 = t3289*t7689;
  t7717 = -1.*t7673*t3392;
  t7731 = t7714 + t7717;
  t7738 = -1.*t4256*t7709;
  t7745 = t4158*t7731;
  t7747 = t7738 + t7745;
  t7749 = t4158*t7709;
  t7752 = t4256*t7731;
  t7756 = t7749 + t7752;
  t7766 = t4981*t7747;
  t7773 = t4760*t7756;
  t7786 = t7766 + t7773;
  t7792 = t4760*t7747;
  t7798 = -1.*t4981*t7756;
  t7800 = t7792 + t7798;
  p_output1[0]=0. + t1339*t1429 + t1598*t1671 + t1792*t2243 + t3253*t3548 + t3875*t4016 + t2408*t2613*t42 + 0.1318*(t1792*t1849 - 1.*t2197*t2408*t42) + t4291*t4422 + t4622*t4682 + t5102*t5227 + t5327*t5473 + t5837*t5970 + t6061*t6162 - 0.73604*(-1.*t5723*t5970 + t5562*t6162) - 0.04375*(t5562*t5970 + t5723*t6162) + var1[0];
  p_output1[1]=0. + t1131*t2408*t2613 + t1429*t7031 + t1671*t7165 + t2243*t7226 + 0.1318*(-1.*t1131*t2197*t2408 + t1849*t7226) + t3548*t7303 + t4016*t7402 + t4291*t7433 + t4622*t7444 + t5102*t7465 + t5327*t7501 + t5837*t7513 + t6061*t7531 - 0.73604*(-1.*t5723*t7513 + t5562*t7531) - 0.04375*(t5562*t7513 + t5723*t7531) + var1[1];
  p_output1[2]=0. + t1259*t1671*t2408 + t1429*t2408*t324 - 1.*t2613*t395 + t2243*t7626 + 0.1318*(t2197*t395 + t1849*t7626) + t3548*t7673 + t4016*t7689 + t4291*t7709 + t4622*t7731 + t5102*t7747 + t5327*t7756 + t5837*t7786 + t6061*t7800 - 0.73604*(-1.*t5723*t7786 + t5562*t7800) - 0.04375*(t5562*t7786 + t5723*t7800) + var1[2];
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

#include "p_LeftTarsus_mex.hh"

namespace SymExpression
{

void p_LeftTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
