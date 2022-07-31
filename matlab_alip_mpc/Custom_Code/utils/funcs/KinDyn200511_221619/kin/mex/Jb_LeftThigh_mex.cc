/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:36 GMT-04:00
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
  double t714;
  double t156;
  double t394;
  double t577;
  double t629;
  double t766;
  double t785;
  double t796;
  double t860;
  double t917;
  double t663;
  double t878;
  double t889;
  double t103;
  double t953;
  double t972;
  double t998;
  double t55;
  double t1443;
  double t1504;
  double t1541;
  double t1097;
  double t1106;
  double t1119;
  double t1228;
  double t1514;
  double t1557;
  double t1560;
  double t1737;
  double t1768;
  double t1829;
  double t2386;
  double t2410;
  double t2419;
  double t2421;
  double t904;
  double t1013;
  double t1044;
  double t1190;
  double t1205;
  double t1218;
  double t1268;
  double t1299;
  double t1313;
  double t1355;
  double t1361;
  double t1679;
  double t1860;
  double t1861;
  double t1993;
  double t2084;
  double t2095;
  double t2115;
  double t2147;
  double t2187;
  double t2207;
  double t2215;
  double t2411;
  double t2526;
  double t2531;
  double t2604;
  double t2648;
  double t2657;
  double t2672;
  double t2728;
  double t2794;
  double t2798;
  double t3217;
  double t3048;
  double t3058;
  double t3173;
  double t3184;
  double t3190;
  double t3204;
  double t3206;
  double t3246;
  double t3297;
  double t3320;
  double t3332;
  double t3333;
  double t3363;
  double t3386;
  double t3413;
  double t3424;
  double t3444;
  double t3062;
  double t3064;
  double t3381;
  double t3476;
  double t3492;
  double t3516;
  double t3561;
  double t3579;
  double t3604;
  double t3613;
  double t2970;
  double t2982;
  double t3035;
  double t3638;
  double t3641;
  double t3643;
  double t3672;
  double t3687;
  double t3705;
  double t3732;
  double t2962;
  double t2963;
  double t2968;
  double t3512;
  double t3614;
  double t3615;
  double t3791;
  double t3840;
  double t3841;
  double t3649;
  double t3744;
  double t3765;
  double t2942;
  double t2945;
  double t2950;
  double t3629;
  double t3896;
  double t4072;
  double t4156;
  double t4228;
  double t4252;
  double t4330;
  double t4367;
  double t4417;
  double t4468;
  double t4504;
  double t4646;
  t714 = Cos(var1[6]);
  t156 = Cos(var1[8]);
  t394 = -1.*t156;
  t577 = 0. + t394;
  t629 = Sin(var1[6]);
  t766 = Sin(var1[7]);
  t785 = Sin(var1[8]);
  t796 = t766*t785;
  t860 = 0. + t796;
  t917 = Sin(var1[5]);
  t663 = -1.*t577*t629;
  t878 = t714*t860;
  t889 = 0. + t663 + t878;
  t103 = Cos(var1[5]);
  t953 = t714*t577;
  t972 = t629*t860;
  t998 = 0. + t953 + t972;
  t55 = Sin(var1[3]);
  t1443 = t156*t766;
  t1504 = 0. + t1443;
  t1541 = 0. + t785;
  t1097 = Cos(var1[3]);
  t1106 = Cos(var1[4]);
  t1119 = Cos(var1[7]);
  t1228 = Sin(var1[4]);
  t1514 = t629*t1504;
  t1557 = t714*t1541;
  t1560 = 0. + t1514 + t1557;
  t1737 = t714*t1504;
  t1768 = -1.*t629*t1541;
  t1829 = 0. + t1737 + t1768;
  t2386 = -1.*t714*t1119;
  t2410 = 0. + t2386;
  t2419 = -1.*t1119*t629;
  t2421 = 0. + t2419;
  t904 = t103*t889;
  t1013 = -1.*t917*t998;
  t1044 = 0. + t904 + t1013;
  t1190 = t1119*t785;
  t1205 = 0. + t1190;
  t1218 = t1106*t1205;
  t1268 = t917*t889;
  t1299 = t103*t998;
  t1313 = 0. + t1268 + t1299;
  t1355 = t1228*t1313;
  t1361 = 0. + t1218 + t1355;
  t1679 = -1.*t917*t1560;
  t1860 = t103*t1829;
  t1861 = 0. + t1679 + t1860;
  t1993 = t1119*t156;
  t2084 = 0. + t1993;
  t2095 = t1106*t2084;
  t2115 = t103*t1560;
  t2147 = t917*t1829;
  t2187 = 0. + t2115 + t2147;
  t2207 = t1228*t2187;
  t2215 = 0. + t2095 + t2207;
  t2411 = t103*t2410;
  t2526 = -1.*t917*t2421;
  t2531 = 0. + t2411 + t2526;
  t2604 = t2410*t917;
  t2648 = t103*t2421;
  t2657 = 0. + t2604 + t2648;
  t2672 = t1228*t2657;
  t2728 = 0. + t766;
  t2794 = t1106*t2728;
  t2798 = 0. + t2672 + t2794;
  t3217 = 1. + t394;
  t3048 = -1.*t714;
  t3058 = 1. + t3048;
  t3173 = -1.*t1119;
  t3184 = 1. + t3173;
  t3190 = 0.135*t3184;
  t3204 = 0.1708*t1119;
  t3206 = 0.08055*t766;
  t3246 = -0.08055*t3217;
  t3297 = -0.08045*t156;
  t3320 = 0.0598*t785;
  t3332 = 0. + t3246 + t3297 + t3320;
  t3333 = t766*t3332;
  t3363 = 0. + t3190 + t3204 + t3206 + t3333;
  t3386 = -0.01004*t3217;
  t3413 = -0.06984*t156;
  t3424 = 0.00010000000000000286*t785;
  t3444 = 0. + t3386 + t3413 + t3424;
  t3062 = 0.07996*t3058;
  t3064 = -0.135*t629;
  t3381 = t629*t3363;
  t3476 = t714*t3444;
  t3492 = 0. + t3062 + t3064 + t3381 + t3476;
  t3516 = 0.135*t3058;
  t3561 = 0.07996*t629;
  t3579 = t714*t3363;
  t3604 = -1.*t629*t3444;
  t3613 = 0. + t3516 + t3561 + t3579 + t3604;
  t2970 = t1106*t2657;
  t2982 = -1.*t1228*t2728;
  t3035 = 0. + t2970 + t2982;
  t3638 = t103*t3492;
  t3641 = t917*t3613;
  t3643 = 0. + t3638 + t3641;
  t3672 = -0.08055*t3184;
  t3687 = -0.0358*t766;
  t3705 = t1119*t3332;
  t3732 = 0. + t3672 + t3687 + t3705;
  t2962 = -1.*t2084*t1228;
  t2963 = t1106*t2187;
  t2968 = 0. + t2962 + t2963;
  t3512 = -1.*t917*t3492;
  t3614 = t103*t3613;
  t3615 = 0. + t3512 + t3614;
  t3791 = t1106*t3643;
  t3840 = -1.*t1228*t3732;
  t3841 = 0. + t3791 + t3840;
  t3649 = t1228*t3643;
  t3744 = t1106*t3732;
  t3765 = 0. + t3649 + t3744;
  t2942 = -1.*t1228*t1205;
  t2945 = t1106*t1313;
  t2950 = 0. + t2942 + t2945;
  t3629 = t2531*t3615;
  t3896 = -1.*t3615*t1861;
  t4072 = -1.*t2531*t3615;
  t4156 = t3615*t1044;
  t4228 = t3615*t1861;
  t4252 = -1.*t3615*t1044;
  t4330 = t2728*t3732;
  t4367 = -1.*t2084*t3732;
  t4417 = -1.*t2728*t3732;
  t4468 = t3732*t1205;
  t4504 = t2084*t3732;
  t4646 = -1.*t3732*t1205;
  p_output1[0]=0. + t1097*t1361 - 1.*t1044*t55;
  p_output1[1]=0. + t1097*t2215 - 1.*t1861*t55;
  p_output1[2]=0. + t1097*t2798 - 1.*t2531*t55;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1044*t1097 + t1361*t55;
  p_output1[7]=0. + t1097*t1861 + t2215*t55;
  p_output1[8]=0. + t1097*t2531 + t2798*t55;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2950;
  p_output1[13]=t2968;
  p_output1[14]=t3035;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2968*(t3629 + t2798*t3765 + t3035*t3841) + t3035*(-1.*t2215*t3765 - 1.*t2968*t3841 + t3896);
  p_output1[19]=t2950*(-1.*t2798*t3765 - 1.*t3035*t3841 + t4072) + t3035*(t1361*t3765 + t2950*t3841 + t4156);
  p_output1[20]=t2950*(t2215*t3765 + t2968*t3841 + t4228) + t2968*(-1.*t1361*t3765 - 1.*t2950*t3841 + t4252);
  p_output1[21]=t2950;
  p_output1[22]=t2968;
  p_output1[23]=t3035;
  p_output1[24]=t1861*(t3629 + t2657*t3643 + t4330) + t2531*(-1.*t2187*t3643 + t3896 + t4367);
  p_output1[25]=t1044*(-1.*t2657*t3643 + t4072 + t4417) + t2531*(t1313*t3643 + t4156 + t4468);
  p_output1[26]=t1044*(t2187*t3643 + t4228 + t4504) + t1861*(-1.*t1313*t3643 + t4252 + t4646);
  p_output1[27]=t1044;
  p_output1[28]=t1861;
  p_output1[29]=t2531;
  p_output1[30]=t2084*(t2421*t3492 + t2410*t3613 + t4330) + t2728*(-1.*t1560*t3492 - 1.*t1829*t3613 + t4367);
  p_output1[31]=t1205*(-1.*t2421*t3492 - 1.*t2410*t3613 + t4417) + t2728*(t4468 + t3613*t889 + t3492*t998);
  p_output1[32]=t1205*(t1560*t3492 + t1829*t3613 + t4504) + t2084*(t4646 - 1.*t3613*t889 - 1.*t3492*t998);
  p_output1[33]=t1205;
  p_output1[34]=t2084;
  p_output1[35]=t2728;
  p_output1[36]=-0.135*t577 + (-1.*t1504*t3363 - 1.*t1541*t3444 + t4367)*t766 + t2084*(0. - 1.*t1119*t3363 + t3732*t766) + 0.07996*t860;
  p_output1[37]=0.07996*t1504 - 0.135*t1541 + t1205*(0. + t1119*t3363 - 1.*t3732*t766) + t766*(t4468 + t3444*t577 + t3363*t860);
  p_output1[38]=0. - 0.07996*t1119 + t1205*(t1504*t3363 + t1541*t3444 + t4504) + t2084*(t4646 - 1.*t3444*t577 - 1.*t3363*t860);
  p_output1[39]=t1205;
  p_output1[40]=t2084;
  p_output1[41]=t2728;
  p_output1[42]=0. - 0.0358*t785;
  p_output1[43]=0. - 0.0358*t156;
  p_output1[44]=-0.08055 + t785*(0. + t156*t3444 - 1.*t3332*t785) - 1.*t156*(0. + t156*t3332 + t3444*t785);
  p_output1[45]=t577;
  p_output1[46]=t1541;
  p_output1[47]=0.;
  p_output1[48]=-0.00010000000000000286;
  p_output1[49]=0.0598;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_LeftThigh_mex.hh"

namespace SymExpression
{

void Jb_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
