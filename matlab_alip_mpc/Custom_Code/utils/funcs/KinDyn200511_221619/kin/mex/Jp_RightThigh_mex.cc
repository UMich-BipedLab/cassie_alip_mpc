/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:20 GMT-04:00
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
  double t1954;
  double t2311;
  double t2397;
  double t2455;
  double t2482;
  double t2782;
  double t2648;
  double t2668;
  double t2850;
  double t1353;
  double t1358;
  double t1420;
  double t1849;
  double t2722;
  double t2990;
  double t3079;
  double t3163;
  double t3173;
  double t3274;
  double t233;
  double t3520;
  double t3536;
  double t3623;
  double t3636;
  double t3704;
  double t3707;
  double t3740;
  double t3793;
  double t3807;
  double t3827;
  double t4140;
  double t4154;
  double t4175;
  double t1695;
  double t1912;
  double t1913;
  double t2481;
  double t2590;
  double t2617;
  double t3127;
  double t3141;
  double t3149;
  double t3337;
  double t3413;
  double t3476;
  double t4380;
  double t4449;
  double t4471;
  double t4488;
  double t4521;
  double t4527;
  double t3709;
  double t3781;
  double t3791;
  double t4564;
  double t4567;
  double t4592;
  double t3991;
  double t4074;
  double t4109;
  double t4598;
  double t4622;
  double t4636;
  double t4738;
  double t4752;
  double t4753;
  double t4945;
  double t4950;
  double t4952;
  double t4982;
  double t4985;
  double t4993;
  double t5062;
  double t5074;
  double t5106;
  double t5298;
  double t5305;
  double t5329;
  double t5351;
  double t5353;
  double t5360;
  double t5386;
  double t5390;
  double t5397;
  double t5496;
  double t5499;
  double t5508;
  double t5539;
  double t5541;
  double t5548;
  double t5610;
  double t5612;
  double t5634;
  double t5748;
  double t5767;
  double t5771;
  double t5803;
  double t5815;
  double t5775;
  double t5776;
  double t5778;
  double t5934;
  double t5937;
  double t5944;
  double t5995;
  double t5998;
  double t5999;
  double t5962;
  double t5974;
  double t6101;
  double t6112;
  double t6116;
  double t6075;
  double t6085;
  double t6087;
  double t6191;
  double t6201;
  double t6176;
  double t6178;
  double t6180;
  double t6182;
  double t6184;
  double t6267;
  double t6269;
  double t6276;
  double t6317;
  double t6319;
  double t6299;
  double t6307;
  double t6092;
  double t6134;
  double t6144;
  double t6146;
  double t6147;
  double t6148;
  double t6150;
  double t6153;
  double t6156;
  double t6162;
  double t6167;
  double t6168;
  double t4703;
  double t4717;
  double t4728;
  double t6451;
  double t6452;
  double t6453;
  double t6462;
  double t6465;
  double t6537;
  double t6554;
  double t6557;
  double t6562;
  double t6572;
  double t6580;
  double t6638;
  double t6642;
  double t6644;
  double t6661;
  double t6665;
  double t6666;
  double t4857;
  double t4880;
  double t4882;
  double t6704;
  double t6705;
  double t6734;
  double t6739;
  double t6740;
  double t6782;
  double t6783;
  double t6788;
  double t6856;
  double t6858;
  double t6865;
  t1954 = Sin(var1[3]);
  t2311 = Cos(var1[13]);
  t2397 = -1.*t2311;
  t2455 = 1. + t2397;
  t2482 = Sin(var1[13]);
  t2782 = Cos(var1[3]);
  t2648 = Cos(var1[5]);
  t2668 = Sin(var1[4]);
  t2850 = Sin(var1[5]);
  t1353 = Cos(var1[14]);
  t1358 = -1.*t1353;
  t1420 = 1. + t1358;
  t1849 = Sin(var1[14]);
  t2722 = -1.*t2648*t1954*t2668;
  t2990 = t2782*t2850;
  t3079 = t2722 + t2990;
  t3163 = -1.*t2782*t2648;
  t3173 = -1.*t1954*t2668*t2850;
  t3274 = t3163 + t3173;
  t233 = Cos(var1[4]);
  t3520 = t2482*t3079;
  t3536 = t2311*t3274;
  t3623 = t3520 + t3536;
  t3636 = Cos(var1[15]);
  t3704 = -1.*t3636;
  t3707 = 1. + t3704;
  t3740 = Sin(var1[15]);
  t3793 = t2311*t3079;
  t3807 = -1.*t2482*t3274;
  t3827 = t3793 + t3807;
  t4140 = -1.*t1353*t233*t1954;
  t4154 = t1849*t3623;
  t4175 = t4140 + t4154;
  t1695 = -0.08055*t1420;
  t1912 = -0.135*t1849;
  t1913 = 0. + t1695 + t1912;
  t2481 = 0.07996*t2455;
  t2590 = 0.135*t2482;
  t2617 = 0. + t2481 + t2590;
  t3127 = -0.135*t2455;
  t3141 = 0.07996*t2482;
  t3149 = 0. + t3127 + t3141;
  t3337 = -0.135*t1420;
  t3413 = 0.08055*t1849;
  t3476 = 0. + t3337 + t3413;
  t4380 = t2782*t2648*t2668;
  t4449 = t1954*t2850;
  t4471 = t4380 + t4449;
  t4488 = -1.*t2648*t1954;
  t4521 = t2782*t2668*t2850;
  t4527 = t4488 + t4521;
  t3709 = -0.01004*t3707;
  t3781 = 0.08055*t3740;
  t3791 = 0. + t3709 + t3781;
  t4564 = t2482*t4471;
  t4567 = t2311*t4527;
  t4592 = t4564 + t4567;
  t3991 = -0.08055*t3707;
  t4074 = -0.01004*t3740;
  t4109 = 0. + t3991 + t4074;
  t4598 = t2311*t4471;
  t4622 = -1.*t2482*t4527;
  t4636 = t4598 + t4622;
  t4738 = t1353*t2782*t233;
  t4752 = t1849*t4592;
  t4753 = t4738 + t4752;
  t4945 = t2782*t233*t2648*t2482;
  t4950 = t2311*t2782*t233*t2850;
  t4952 = t4945 + t4950;
  t4982 = t2311*t2782*t233*t2648;
  t4985 = -1.*t2782*t233*t2482*t2850;
  t4993 = t4982 + t4985;
  t5062 = -1.*t1353*t2782*t2668;
  t5074 = t1849*t4952;
  t5106 = t5062 + t5074;
  t5298 = t233*t2648*t2482*t1954;
  t5305 = t2311*t233*t1954*t2850;
  t5329 = t5298 + t5305;
  t5351 = t2311*t233*t2648*t1954;
  t5353 = -1.*t233*t2482*t1954*t2850;
  t5360 = t5351 + t5353;
  t5386 = -1.*t1353*t1954*t2668;
  t5390 = t1849*t5329;
  t5397 = t5386 + t5390;
  t5496 = -1.*t2648*t2482*t2668;
  t5499 = -1.*t2311*t2668*t2850;
  t5508 = t5496 + t5499;
  t5539 = -1.*t2311*t2648*t2668;
  t5541 = t2482*t2668*t2850;
  t5548 = t5539 + t5541;
  t5610 = -1.*t1353*t233;
  t5612 = t1849*t5508;
  t5634 = t5610 + t5612;
  t5748 = t2648*t1954;
  t5767 = -1.*t2782*t2668*t2850;
  t5771 = t5748 + t5767;
  t5803 = t2482*t5771;
  t5815 = t4598 + t5803;
  t5775 = -1.*t2482*t4471;
  t5776 = t2311*t5771;
  t5778 = t5775 + t5776;
  t5934 = t2648*t1954*t2668;
  t5937 = -1.*t2782*t2850;
  t5944 = t5934 + t5937;
  t5995 = t2311*t5944;
  t5998 = t2482*t3274;
  t5999 = t5995 + t5998;
  t5962 = -1.*t2482*t5944;
  t5974 = t5962 + t3536;
  t6101 = t2311*t233*t2648;
  t6112 = -1.*t233*t2482*t2850;
  t6116 = t6101 + t6112;
  t6075 = -1.*t233*t2648*t2482;
  t6085 = -1.*t2311*t233*t2850;
  t6087 = t6075 + t6085;
  t6191 = -1.*t2311*t4527;
  t6201 = t5775 + t6191;
  t6176 = 0.135*t2311;
  t6178 = t6176 + t3141;
  t6180 = 0.07996*t2311;
  t6182 = -0.135*t2482;
  t6184 = t6180 + t6182;
  t6267 = t2782*t2648;
  t6269 = t1954*t2668*t2850;
  t6276 = t6267 + t6269;
  t6317 = -1.*t2482*t6276;
  t6319 = t5995 + t6317;
  t6299 = -1.*t2311*t6276;
  t6307 = t5962 + t6299;
  t6092 = t3791*t6087;
  t6134 = -0.1708*t1353*t6116;
  t6144 = t3476*t6116;
  t6146 = t1849*t4109*t6116;
  t6147 = t3740*t6087;
  t6148 = t3636*t1849*t6116;
  t6150 = t6147 + t6148;
  t6153 = -0.08045*t6150;
  t6156 = t3636*t6087;
  t6162 = -1.*t1849*t3740*t6116;
  t6167 = t6156 + t6162;
  t6168 = -0.06984*t6167;
  t4703 = -1.*t2782*t233*t1849;
  t4717 = t1353*t4592;
  t4728 = t4703 + t4717;
  t6451 = -0.135*t1353;
  t6452 = -0.08055*t1849;
  t6453 = t6451 + t6452;
  t6462 = 0.08055*t1353;
  t6465 = t6462 + t1912;
  t6537 = t2482*t5944;
  t6554 = t2311*t6276;
  t6557 = t6537 + t6554;
  t6562 = -1.*t233*t1849*t1954;
  t6572 = t1353*t6557;
  t6580 = t6562 + t6572;
  t6638 = t233*t2648*t2482;
  t6642 = t2311*t233*t2850;
  t6644 = t6638 + t6642;
  t6661 = t1849*t2668;
  t6665 = t1353*t6644;
  t6666 = t6661 + t6665;
  t4857 = t3636*t4636;
  t4880 = -1.*t3740*t4753;
  t4882 = t4857 + t4880;
  t6704 = 0.08055*t3636;
  t6705 = t6704 + t4074;
  t6734 = -0.01004*t3636;
  t6739 = -0.08055*t3740;
  t6740 = t6734 + t6739;
  t6782 = t1353*t233*t1954;
  t6783 = t1849*t6557;
  t6788 = t6782 + t6783;
  t6856 = -1.*t1353*t2668;
  t6858 = t1849*t6644;
  t6865 = t6856 + t6858;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1913*t1954*t233 + t2617*t3079 + t3149*t3274 + t3476*t3623 - 0.1708*(t1849*t1954*t233 + t1353*t3623) + t3791*t3827 + t4109*t4175 - 0.08045*(t3740*t3827 + t3636*t4175) - 0.06984*(t3636*t3827 - 1.*t3740*t4175);
  p_output1[10]=t1913*t233*t2782 + t2617*t4471 + t3149*t4527 + t3476*t4592 + t3791*t4636 - 0.1708*t4728 + t4109*t4753 - 0.08045*(t3740*t4636 + t3636*t4753) - 0.06984*t4882;
  p_output1[11]=0;
  p_output1[12]=t233*t2617*t2648*t2782 - 1.*t1913*t2668*t2782 + t233*t2782*t2850*t3149 + t3476*t4952 - 0.1708*(t1849*t2668*t2782 + t1353*t4952) + t3791*t4993 + t4109*t5106 - 0.08045*(t3740*t4993 + t3636*t5106) - 0.06984*(t3636*t4993 - 1.*t3740*t5106);
  p_output1[13]=t1954*t233*t2617*t2648 - 1.*t1913*t1954*t2668 + t1954*t233*t2850*t3149 + t3476*t5329 - 0.1708*(t1849*t1954*t2668 + t1353*t5329) + t3791*t5360 + t4109*t5397 - 0.08045*(t3740*t5360 + t3636*t5397) - 0.06984*(t3636*t5360 - 1.*t3740*t5397);
  p_output1[14]=-1.*t1913*t233 - 1.*t2617*t2648*t2668 - 1.*t2668*t2850*t3149 + t3476*t5508 - 0.1708*(t1849*t233 + t1353*t5508) + t3791*t5548 + t4109*t5634 - 0.08045*(t3740*t5548 + t3636*t5634) - 0.06984*(t3636*t5548 - 1.*t3740*t5634);
  p_output1[15]=t3149*t4471 + t2617*t5771 + t3791*t5778 - 0.1708*t1353*t5815 + t3476*t5815 + t1849*t4109*t5815 - 0.08045*(t3740*t5778 + t1849*t3636*t5815) - 0.06984*(t3636*t5778 - 1.*t1849*t3740*t5815);
  p_output1[16]=t2617*t3274 + t3149*t5944 + t3791*t5974 - 0.1708*t1353*t5999 + t3476*t5999 + t1849*t4109*t5999 - 0.08045*(t3740*t5974 + t1849*t3636*t5999) - 0.06984*(t3636*t5974 - 1.*t1849*t3740*t5999);
  p_output1[17]=-1.*t233*t2617*t2850 + t233*t2648*t3149 + t6092 + t6134 + t6144 + t6146 + t6153 + t6168;
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
  p_output1[39]=-0.1708*t1353*t4636 + t3476*t4636 + t1849*t4109*t4636 + t4471*t6178 + t4527*t6184 + t3791*t6201 - 0.06984*(-1.*t1849*t3740*t4636 + t3636*t6201) - 0.08045*(t1849*t3636*t4636 + t3740*t6201);
  p_output1[40]=t5944*t6178 + t6184*t6276 + t3791*t6307 - 0.1708*t1353*t6319 + t3476*t6319 + t1849*t4109*t6319 - 0.08045*(t3740*t6307 + t1849*t3636*t6319) - 0.06984*(t3636*t6307 - 1.*t1849*t3740*t6319);
  p_output1[41]=t6092 + t6134 + t6144 + t6146 + t6153 + t6168 + t233*t2648*t6178 + t233*t2850*t6184;
  p_output1[42]=-0.1708*(-1.*t1353*t233*t2782 - 1.*t1849*t4592) - 0.08045*t3636*t4728 + 0.06984*t3740*t4728 + t4109*t4728 + t233*t2782*t6453 + t4592*t6465;
  p_output1[43]=t1954*t233*t6453 + t6465*t6557 - 0.1708*(t4140 - 1.*t1849*t6557) - 0.08045*t3636*t6580 + 0.06984*t3740*t6580 + t4109*t6580;
  p_output1[44]=-1.*t2668*t6453 + t6465*t6644 - 0.1708*(t1353*t2668 - 1.*t1849*t6644) - 0.08045*t3636*t6666 + 0.06984*t3740*t6666 + t4109*t6666;
  p_output1[45]=-0.06984*(-1.*t3740*t4636 - 1.*t3636*t4753) - 0.08045*t4882 + t4636*t6705 + t4753*t6740;
  p_output1[46]=t6319*t6705 + t6740*t6788 - 0.06984*(-1.*t3740*t6319 - 1.*t3636*t6788) - 0.08045*(t3636*t6319 - 1.*t3740*t6788);
  p_output1[47]=t6116*t6705 + t6740*t6865 - 0.06984*(-1.*t3740*t6116 - 1.*t3636*t6865) - 0.08045*(t3636*t6116 - 1.*t3740*t6865);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_RightThigh_mex.hh"

namespace SymExpression
{

void Jp_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
