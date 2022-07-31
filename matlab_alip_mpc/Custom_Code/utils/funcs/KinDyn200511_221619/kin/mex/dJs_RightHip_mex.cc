/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:58 GMT-04:00
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
  double t339;
  double t390;
  double t1129;
  double t1161;
  double t1131;
  double t1169;
  double t1182;
  double t1227;
  double t1672;
  double t1692;
  double t1362;
  double t1379;
  double t1432;
  double t1443;
  double t1734;
  double t1742;
  double t1745;
  double t1853;
  double t1854;
  double t1856;
  double t1505;
  double t1513;
  double t1527;
  double t1538;
  double t1548;
  double t1552;
  double t1555;
  double t1557;
  double t1591;
  double t1595;
  double t1596;
  double t1599;
  double t1608;
  double t1644;
  double t1668;
  double t2054;
  double t1929;
  double t1942;
  double t1946;
  double t2075;
  double t2064;
  double t2128;
  double t2137;
  double t2312;
  double t2324;
  double t1917;
  double t1919;
  double t1920;
  double t2331;
  double t2332;
  double t2345;
  double t2360;
  double t2364;
  double t2368;
  double t1819;
  double t1825;
  double t1840;
  double t2517;
  double t2521;
  double t2525;
  double t2402;
  double t2403;
  double t2439;
  double t2475;
  double t2216;
  double t2226;
  double t2236;
  double t2672;
  double t2688;
  double t2703;
  double t2706;
  double t2717;
  double t1765;
  double t1771;
  double t1775;
  double t2643;
  double t2561;
  double t2738;
  double t2742;
  double t2744;
  double t2745;
  double t2746;
  double t2755;
  double t2765;
  double t2807;
  double t2813;
  double t2824;
  double t3107;
  double t3108;
  double t3118;
  double t3326;
  double t3328;
  double t3331;
  double t3447;
  double t3462;
  double t3479;
  double t3497;
  double t4016;
  double t4159;
  double t3074;
  double t3098;
  double t3101;
  double t2358;
  double t2374;
  double t3336;
  double t3344;
  double t3346;
  double t4699;
  double t2871;
  double t4069;
  double t4089;
  double t4761;
  double t4763;
  double t4769;
  double t4787;
  double t4852;
  double t2646;
  double t2656;
  double t4418;
  double t4423;
  double t3853;
  double t3861;
  double t3884;
  t339 = Cos(var1[3]);
  t390 = Sin(var1[3]);
  t1129 = Cos(var1[4]);
  t1161 = Sin(var1[4]);
  t1131 = -1.*var2[2]*t1129*t390;
  t1169 = -1.*var2[1]*t1161;
  t1182 = -1.*var1[1]*t1129;
  t1227 = var1[2]*t390*t1161;
  t1672 = Cos(var1[5]);
  t1692 = Sin(var1[5]);
  t1362 = var2[2]*t339*t1129;
  t1379 = var2[0]*t1161;
  t1432 = var1[0]*t1129;
  t1443 = -1.*var1[2]*t339*t1161;
  t1734 = t339*t1672*t1161;
  t1742 = t390*t1692;
  t1745 = t1734 + t1742;
  t1853 = -1.*t339*t1672;
  t1854 = -1.*t390*t1161*t1692;
  t1856 = t1853 + t1854;
  t1505 = -1.*var2[1]*t339*t1129;
  t1513 = var2[0]*t1129*t390;
  t1527 = var1[0]*t339*t1129;
  t1538 = var1[1]*t1129*t390;
  t1548 = t1527 + t1538;
  t1552 = var2[3]*t1548;
  t1555 = var1[1]*t339*t1161;
  t1557 = -1.*var1[0]*t390*t1161;
  t1591 = -1.*var2[3]*t1129*t390;
  t1595 = -1.*var2[4]*t339*t1161;
  t1596 = t1591 + t1595;
  t1599 = var2[3]*t339*t1129;
  t1608 = -1.*var2[4]*t390*t1161;
  t1644 = t1599 + t1608;
  t1668 = -1.*var2[4]*t1129;
  t2054 = Cos(var1[13]);
  t1929 = t1672*t390*t1161;
  t1942 = -1.*t339*t1692;
  t1946 = t1929 + t1942;
  t2075 = Sin(var1[13]);
  t2064 = t2054*t1129*t1672;
  t2128 = -1.*t1129*t2075*t1692;
  t2137 = t2064 + t2128;
  t2312 = -1.*t2054;
  t2324 = 1. + t2312;
  t1917 = -1.*t1672*t390;
  t1919 = t339*t1161*t1692;
  t1920 = t1917 + t1919;
  t2331 = 0.07996*t2324;
  t2332 = 0.135*t2075;
  t2345 = 0. + t2331 + t2332;
  t2360 = -0.135*t2324;
  t2364 = 0.07996*t2075;
  t2368 = 0. + t2360 + t2364;
  t1819 = -1.*t1672*t390*t1161;
  t1825 = t339*t1692;
  t1840 = t1819 + t1825;
  t2517 = t2054*t1745;
  t2521 = -1.*t2075*t1920;
  t2525 = t2517 + t2521;
  t2402 = -1.*var1[2];
  t2403 = -1.*t1129*t1672*t2345;
  t2439 = -1.*t1129*t2368*t1692;
  t2475 = 0. + t2402 + t2403 + t2439;
  t2216 = t339*t1672;
  t2226 = t390*t1161*t1692;
  t2236 = t2216 + t2226;
  t2672 = 0.135*t2054;
  t2688 = t2672 + t2364;
  t2703 = 0.07996*t2054;
  t2706 = -0.135*t2075;
  t2717 = t2703 + t2706;
  t1765 = t1672*t390;
  t1771 = -1.*t339*t1161*t1692;
  t1775 = t1765 + t1771;
  t2643 = -1.*t2075*t1946;
  t2561 = t2054*t1856;
  t2738 = -1.*t1129*t1672*t2075;
  t2742 = -1.*t2054*t1129*t1692;
  t2744 = t2738 + t2742;
  t2745 = t2345*t1946;
  t2746 = t2368*t2236;
  t2755 = 0. + var1[1] + t2745 + t2746;
  t2765 = t2744*t2755;
  t2807 = t2054*t1946;
  t2813 = -1.*t2075*t2236;
  t2824 = t2807 + t2813;
  t3107 = -1.*t2054*t1672*t1161;
  t3108 = t2075*t1161*t1692;
  t3118 = t3107 + t3108;
  t3326 = t1129*t1672*t2345;
  t3328 = t1129*t2368*t1692;
  t3331 = 0. + var1[2] + t3326 + t3328;
  t3447 = -1.*var1[0];
  t3462 = -1.*t2345*t1745;
  t3479 = -1.*t2368*t1920;
  t3497 = 0. + t3447 + t3462 + t3479;
  t4016 = -1.*t2075*t1745;
  t4159 = t2744*t3497;
  t3074 = t2054*t1129*t1672*t390;
  t3098 = -1.*t1129*t2075*t390*t1692;
  t3101 = t3074 + t3098;
  t2358 = t2345*t1745;
  t2374 = t2368*t1920;
  t3336 = t2054*t339*t1129*t1672;
  t3344 = -1.*t339*t1129*t2075*t1692;
  t3346 = t3336 + t3344;
  t4699 = 0. + var1[0] + t2358 + t2374;
  t2871 = t2643 + t2561;
  t4069 = t2054*t1775;
  t4089 = t4016 + t4069;
  t4761 = -1.*var1[1];
  t4763 = -1.*t2345*t1946;
  t4769 = -1.*t2368*t2236;
  t4787 = 0. + t4761 + t4763 + t4769;
  t4852 = 0.08055*t2137;
  t2646 = -1.*t2054*t2236;
  t2656 = t2643 + t2646;
  t4418 = -1.*t2054*t1920;
  t4423 = t4016 + t4418;
  t3853 = t2054*t1840;
  t3861 = -1.*t2075*t1856;
  t3884 = t3853 + t3861;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t339*var2[2] + t390*var1[2]*var2[3];
  p_output1[25]=-1.*t390*var2[2] - 1.*t339*var1[2]*var2[3];
  p_output1[26]=t339*var2[0] + t390*var2[1] + (-1.*t390*var1[0] + t339*var1[1])*var2[3];
  p_output1[27]=-1.*t339*var2[3];
  p_output1[28]=-1.*t390*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1131 + t1169 - 1.*t1129*t339*var1[2]*var2[3] + (t1182 + t1227)*var2[4];
  p_output1[31]=t1362 + t1379 - 1.*t1129*t390*var1[2]*var2[3] + (t1432 + t1443)*var2[4];
  p_output1[32]=t1505 + t1513 + t1552 + (t1555 + t1557)*var2[4];
  p_output1[33]=t1596;
  p_output1[34]=t1644;
  p_output1[35]=t1668;
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
  p_output1[78]=t1131 + t1169 + (0.135*t1840 + 0.07996*t1856 - 1.*t1129*t339*var1[2])*var2[3] + (t1182 + t1227 + 0.135*t1129*t1672*t339 + 0.07996*t1129*t1692*t339)*var2[4] + (0.07996*t1745 + 0.135*t1775)*var2[5];
  p_output1[79]=t1362 + t1379 + (0.135*t1745 + 0.07996*t1920 - 1.*t1129*t390*var1[2])*var2[3] + (t1432 + t1443 + 0.135*t1129*t1672*t390 + 0.07996*t1129*t1692*t390)*var2[4] + (0.135*t1856 + 0.07996*t1946)*var2[5];
  p_output1[80]=t1505 + t1513 + t1552 + (t1555 + t1557 - 0.135*t1161*t1672 - 0.07996*t1161*t1692)*var2[4] + (0.07996*t1129*t1672 - 0.135*t1129*t1692)*var2[5];
  p_output1[81]=t1596;
  p_output1[82]=t1644;
  p_output1[83]=t1668;
  p_output1[84]=t2137*var2[1] + (-1.*t1946*t2054 + t2075*t2236)*var2[2] + (t2137*(t2358 + t2374) + t2475*t2525 + 0.08055*(t1840*t2075 + t2561) + 0.135*t1129*t390)*var2[3] + ((t1161*t1672*t2345 + t1161*t1692*t2368)*t2824 + t2475*t3101 + t2755*t3118 + 0.135*t1161*t339 + 0.08055*(t1129*t1692*t2054*t339 + t1129*t1672*t2075*t339) + t2137*(t1129*t1672*t2345*t390 + t1129*t1692*t2368*t390))*var2[4] + (t2137*(t1856*t2345 + t1946*t2368) + 0.08055*(t1775*t2075 + t2517) + t2765 + (t1129*t1692*t2345 - 1.*t1129*t1672*t2368)*t2824 + t2475*t2871)*var2[5] + (0.08055*t2525 + t2475*t2656 + t2137*(t1946*t2688 + t2236*t2717) + t2765 + (-1.*t1129*t1672*t2688 - 1.*t1129*t1692*t2717)*t2824)*var2[13];
  p_output1[85]=(-1.*t1129*t1672*t2054 + t1129*t1692*t2075)*var2[0] + t2525*var2[2] + (0.08055*(t1920*t2054 + t1745*t2075) + t2137*(-1.*t1840*t2345 - 1.*t1856*t2368) - 0.135*t1129*t339 + t3331*t3884)*var2[3] + ((-1.*t1161*t1672*t2345 - 1.*t1161*t1692*t2368)*t2525 + t3331*t3346 + t2137*(-1.*t1129*t1672*t2345*t339 - 1.*t1129*t1692*t2368*t339) + t3118*t3497 + 0.135*t1161*t390 + 0.08055*(t1129*t1692*t2054*t390 + t1129*t1672*t2075*t390))*var2[4] + (t2137*(-1.*t1775*t2345 - 1.*t1745*t2368) + (-1.*t1129*t1692*t2345 + t1129*t1672*t2368)*t2525 + 0.08055*(t1856*t2075 + t2807) + t3331*t4089 + t4159)*var2[5] + (t2525*(t1129*t1672*t2688 + t1129*t1692*t2717) + t2137*(-1.*t1745*t2688 - 1.*t1920*t2717) + 0.08055*t2824 + t4159 + t3331*t4423)*var2[13];
  p_output1[86]=t2824*var2[0] + (-1.*t1745*t2054 + t1920*t2075)*var2[1] + ((t1840*t2345 + t1856*t2368)*t2824 + t2525*(t3462 + t3479) + t2525*t4699 + t3884*t4787)*var2[3] + (0.135*t1129 + 0.08055*(-1.*t1161*t1692*t2054 - 1.*t1161*t1672*t2075) + t2824*(t1129*t1672*t2345*t339 + t1129*t1692*t2368*t339) + t2525*(-1.*t1129*t1672*t2345*t390 - 1.*t1129*t1692*t2368*t390) + t3101*t4699 + t3346*t4787)*var2[4] + ((-1.*t1856*t2345 - 1.*t1946*t2368)*t2525 + (t1775*t2345 + t1745*t2368)*t2824 + t2871*t4699 + t4089*t4787 + t4852)*var2[5] + (t2525*(-1.*t1946*t2688 - 1.*t2236*t2717) + (t1745*t2688 + t1920*t2717)*t2824 + t2656*t4699 + t4423*t4787 + t4852)*var2[13];
  p_output1[87]=t3884*var2[3] + t3346*var2[4] + t4089*var2[5] + t4423*var2[13];
  p_output1[88]=t2525*var2[3] + t3101*var2[4] + t2871*var2[5] + t2656*var2[13];
  p_output1[89]=t3118*var2[4] + t2744*var2[5] + t2744*var2[13];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_RightHip_mex.hh"

namespace SymExpression
{

void dJs_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
