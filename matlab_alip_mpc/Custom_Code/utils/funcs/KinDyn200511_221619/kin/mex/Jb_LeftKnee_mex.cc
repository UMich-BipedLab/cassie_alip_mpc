/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:06 GMT-04:00
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
  double t286;
  double t396;
  double t224;
  double t486;
  double t646;
  double t360;
  double t523;
  double t569;
  double t200;
  double t675;
  double t680;
  double t687;
  double t724;
  double t733;
  double t743;
  double t807;
  double t616;
  double t744;
  double t758;
  double t135;
  double t819;
  double t836;
  double t841;
  double t104;
  double t1285;
  double t1295;
  double t1313;
  double t1328;
  double t1333;
  double t926;
  double t938;
  double t965;
  double t1021;
  double t1263;
  double t1345;
  double t1367;
  double t1377;
  double t1384;
  double t1414;
  double t1677;
  double t1681;
  double t1699;
  double t1701;
  double t1718;
  double t1726;
  double t780;
  double t851;
  double t896;
  double t975;
  double t1004;
  double t1012;
  double t1111;
  double t1112;
  double t1125;
  double t1134;
  double t1148;
  double t1371;
  double t1436;
  double t1452;
  double t1487;
  double t1498;
  double t1523;
  double t1529;
  double t1625;
  double t1633;
  double t1641;
  double t1642;
  double t1714;
  double t1730;
  double t1748;
  double t1812;
  double t1813;
  double t1820;
  double t1830;
  double t1850;
  double t1851;
  double t1855;
  double t2026;
  double t2035;
  double t2054;
  double t2258;
  double t2279;
  double t2182;
  double t2237;
  double t2424;
  double t2431;
  double t2447;
  double t2459;
  double t2316;
  double t2327;
  double t2377;
  double t2378;
  double t2137;
  double t2144;
  double t2248;
  double t2393;
  double t2414;
  double t2464;
  double t2470;
  double t2487;
  double t2489;
  double t2505;
  double t2520;
  double t2534;
  double t2544;
  double t2553;
  double t2560;
  double t2575;
  double t2579;
  double t2580;
  double t2585;
  double t2071;
  double t2112;
  double t2136;
  double t2153;
  double t2178;
  double t2482;
  double t2588;
  double t2599;
  double t2614;
  double t2616;
  double t2617;
  double t2620;
  double t2621;
  double t2762;
  double t2778;
  double t2783;
  double t2798;
  double t2840;
  double t2842;
  double t2853;
  double t2608;
  double t2712;
  double t2724;
  double t2813;
  double t2854;
  double t2860;
  double t2905;
  double t2933;
  double t2934;
  double t2015;
  double t2022;
  double t2023;
  double t2729;
  double t2987;
  double t3016;
  double t3098;
  double t3159;
  double t3227;
  double t3296;
  double t3325;
  double t3397;
  double t3441;
  double t3533;
  double t3563;
  double t4294;
  double t4260;
  t286 = Cos(var1[8]);
  t396 = Sin(var1[9]);
  t224 = Cos(var1[9]);
  t486 = Sin(var1[8]);
  t646 = Cos(var1[6]);
  t360 = -1.*t224*t286;
  t523 = t396*t486;
  t569 = 0. + t360 + t523;
  t200 = Sin(var1[6]);
  t675 = Sin(var1[7]);
  t680 = t286*t396;
  t687 = t224*t486;
  t724 = 0. + t680 + t687;
  t733 = t675*t724;
  t743 = 0. + t733;
  t807 = Sin(var1[5]);
  t616 = -1.*t200*t569;
  t744 = t646*t743;
  t758 = 0. + t616 + t744;
  t135 = Cos(var1[5]);
  t819 = t646*t569;
  t836 = t200*t743;
  t841 = 0. + t819 + t836;
  t104 = Sin(var1[3]);
  t1285 = t224*t286;
  t1295 = -1.*t396*t486;
  t1313 = 0. + t1285 + t1295;
  t1328 = t675*t1313;
  t1333 = 0. + t1328;
  t926 = Cos(var1[3]);
  t938 = Cos(var1[4]);
  t965 = Cos(var1[7]);
  t1021 = Sin(var1[4]);
  t1263 = -1.*t200*t724;
  t1345 = t646*t1333;
  t1367 = 0. + t1263 + t1345;
  t1377 = t646*t724;
  t1384 = t200*t1333;
  t1414 = 0. + t1377 + t1384;
  t1677 = -1.*t965;
  t1681 = 0. + t1677;
  t1699 = t646*t1681;
  t1701 = 0. + t1699;
  t1718 = t1681*t200;
  t1726 = 0. + t1718;
  t780 = t135*t758;
  t851 = -1.*t807*t841;
  t896 = 0. + t780 + t851;
  t975 = t965*t724;
  t1004 = 0. + t975;
  t1012 = t938*t1004;
  t1111 = t807*t758;
  t1112 = t135*t841;
  t1125 = 0. + t1111 + t1112;
  t1134 = t1021*t1125;
  t1148 = 0. + t1012 + t1134;
  t1371 = t135*t1367;
  t1436 = -1.*t807*t1414;
  t1452 = 0. + t1371 + t1436;
  t1487 = t965*t1313;
  t1498 = 0. + t1487;
  t1523 = t938*t1498;
  t1529 = t807*t1367;
  t1625 = t135*t1414;
  t1633 = 0. + t1529 + t1625;
  t1641 = t1021*t1633;
  t1642 = 0. + t1523 + t1641;
  t1714 = t135*t1701;
  t1730 = -1.*t807*t1726;
  t1748 = 0. + t1714 + t1730;
  t1812 = t1701*t807;
  t1813 = t135*t1726;
  t1820 = 0. + t1812 + t1813;
  t1830 = t1021*t1820;
  t1850 = 0. + t675;
  t1851 = t938*t1850;
  t1855 = 0. + t1830 + t1851;
  t2026 = -1.*t1021*t1498;
  t2035 = t938*t1633;
  t2054 = 0. + t2026 + t2035;
  t2258 = -1.*t224;
  t2279 = 1. + t2258;
  t2182 = -1.*t286;
  t2237 = 1. + t2182;
  t2424 = -0.08055*t2279;
  t2431 = -0.04845*t224;
  t2447 = 0.02300000000000002*t396;
  t2459 = 0. + t2424 + t2431 + t2447;
  t2316 = -0.13004*t2279;
  t2327 = -0.15304*t224;
  t2377 = 0.0321*t396;
  t2378 = 0. + t2316 + t2327 + t2377;
  t2137 = -1.*t646;
  t2144 = 1. + t2137;
  t2248 = -0.01004*t2237;
  t2393 = t286*t2378;
  t2414 = 0.08055*t486;
  t2464 = t2459*t486;
  t2470 = 0. + t2248 + t2393 + t2414 + t2464;
  t2487 = -1.*t965;
  t2489 = 1. + t2487;
  t2505 = 0.135*t2489;
  t2520 = 0.1327*t965;
  t2534 = 0.08055*t675;
  t2544 = -0.08055*t2237;
  t2553 = t286*t2459;
  t2560 = -0.01004*t486;
  t2575 = -1.*t2378*t486;
  t2579 = 0. + t2544 + t2553 + t2560 + t2575;
  t2580 = t675*t2579;
  t2585 = 0. + t2505 + t2520 + t2534 + t2580;
  t2071 = t938*t1820;
  t2112 = -1.*t1021*t1850;
  t2136 = 0. + t2071 + t2112;
  t2153 = 0.135*t2144;
  t2178 = 0.07996*t200;
  t2482 = -1.*t200*t2470;
  t2588 = t646*t2585;
  t2599 = 0. + t2153 + t2178 + t2482 + t2588;
  t2614 = 0.07996*t2144;
  t2616 = -0.135*t200;
  t2617 = t646*t2470;
  t2620 = t200*t2585;
  t2621 = 0. + t2614 + t2616 + t2617 + t2620;
  t2762 = -0.08055*t2489;
  t2778 = 0.0022999999999999965*t675;
  t2783 = t965*t2579;
  t2798 = 0. + t2762 + t2778 + t2783;
  t2840 = t807*t2599;
  t2842 = t135*t2621;
  t2853 = 0. + t2840 + t2842;
  t2608 = t135*t2599;
  t2712 = -1.*t807*t2621;
  t2724 = 0. + t2608 + t2712;
  t2813 = -1.*t1021*t2798;
  t2854 = t938*t2853;
  t2860 = 0. + t2813 + t2854;
  t2905 = t938*t2798;
  t2933 = t1021*t2853;
  t2934 = 0. + t2905 + t2933;
  t2015 = -1.*t1021*t1004;
  t2022 = t938*t1125;
  t2023 = 0. + t2015 + t2022;
  t2729 = t1748*t2724;
  t2987 = -1.*t2724*t1452;
  t3016 = -1.*t1748*t2724;
  t3098 = t896*t2724;
  t3159 = -1.*t896*t2724;
  t3227 = t2724*t1452;
  t3296 = t1850*t2798;
  t3325 = -1.*t2798*t1498;
  t3397 = -1.*t1850*t2798;
  t3441 = t1004*t2798;
  t3533 = -1.*t1004*t2798;
  t3563 = t2798*t1498;
  t4294 = t724*t2470;
  t4260 = -1.*t2470*t569;
  p_output1[0]=0. - 1.*t104*t896 + t1148*t926;
  p_output1[1]=0. - 1.*t104*t1452 + t1642*t926;
  p_output1[2]=0. - 1.*t104*t1748 + t1855*t926;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t104*t1148 + t896*t926;
  p_output1[7]=0. + t104*t1642 + t1452*t926;
  p_output1[8]=0. + t104*t1855 + t1748*t926;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2023;
  p_output1[13]=t2054;
  p_output1[14]=t2136;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2054*(t2729 + t2136*t2860 + t1855*t2934) + t2136*(-1.*t2054*t2860 - 1.*t1642*t2934 + t2987);
  p_output1[19]=t2023*(-1.*t2136*t2860 - 1.*t1855*t2934 + t3016) + t2136*(t2023*t2860 + t1148*t2934 + t3098);
  p_output1[20]=t2054*(-1.*t2023*t2860 - 1.*t1148*t2934 + t3159) + t2023*(t2054*t2860 + t1642*t2934 + t3227);
  p_output1[21]=t2023;
  p_output1[22]=t2054;
  p_output1[23]=t2136;
  p_output1[24]=t1452*(t2729 + t1820*t2853 + t3296) + t1748*(-1.*t1633*t2853 + t2987 + t3325);
  p_output1[25]=t1748*(t1125*t2853 + t3098 + t3441) + (-1.*t1820*t2853 + t3016 + t3397)*t896;
  p_output1[26]=t1452*(-1.*t1125*t2853 + t3159 + t3533) + (t1633*t2853 + t3227 + t3563)*t896;
  p_output1[27]=t896;
  p_output1[28]=t1452;
  p_output1[29]=t1748;
  p_output1[30]=t1498*(t1701*t2599 + t1726*t2621 + t3296) + t1850*(-1.*t1367*t2599 - 1.*t1414*t2621 + t3325);
  p_output1[31]=t1004*(-1.*t1701*t2599 - 1.*t1726*t2621 + t3397) + t1850*(t3441 + t2599*t758 + t2621*t841);
  p_output1[32]=t1004*(t1367*t2599 + t1414*t2621 + t3563) + t1498*(t3533 - 1.*t2599*t758 - 1.*t2621*t841);
  p_output1[33]=t1004;
  p_output1[34]=t1498;
  p_output1[35]=t1850;
  p_output1[36]=t1498*(0. + t1681*t2585 + t3296) - 0.135*t569 + t1850*(-1.*t1333*t2585 + t3325 - 1.*t2470*t724) + 0.07996*t743;
  p_output1[37]=0.07996*t1333 + t1004*(0. - 1.*t1681*t2585 + t3397) - 0.135*t724 + t1850*(t3441 + t2470*t569 + t2585*t743);
  p_output1[38]=0. + 0.07996*t1681 + t1004*(t1333*t2585 + t3563 + t4294) + t1498*(t3533 + t4260 - 1.*t2585*t743);
  p_output1[39]=t1004;
  p_output1[40]=t1498;
  p_output1[41]=t1850;
  p_output1[42]=0. + 0.0022999999999999965*t724;
  p_output1[43]=0. + 0.135*t1313 + 0.1327*t569;
  p_output1[44]=-0.08055 + (0. + t1313*t2579 + t4294)*t569 + t724*(0. + t4260 - 1.*t2579*t724);
  p_output1[45]=t569;
  p_output1[46]=t724;
  p_output1[47]=0.;
  p_output1[48]=0. - 0.08055*t224 - 1.*t224*t2459 - 0.01004*t396 - 1.*t2378*t396;
  p_output1[49]=0. - 0.01004*t224 - 1.*t224*t2378 + 0.08055*t396 + t2459*t396;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=-0.0321;
  p_output1[55]=0.02300000000000002;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
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

#include "Jb_LeftKnee_mex.hh"

namespace SymExpression
{

void Jb_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
