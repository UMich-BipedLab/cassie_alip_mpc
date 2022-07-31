/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:55 GMT-04:00
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
  double t40;
  double t78;
  double t32;
  double t83;
  double t188;
  double t42;
  double t108;
  double t155;
  double t26;
  double t200;
  double t205;
  double t237;
  double t255;
  double t314;
  double t320;
  double t21;
  double t354;
  double t392;
  double t411;
  double t165;
  double t343;
  double t350;
  double t441;
  double t18;
  double t819;
  double t836;
  double t842;
  double t846;
  double t858;
  double t515;
  double t520;
  double t535;
  double t624;
  double t952;
  double t990;
  double t1008;
  double t798;
  double t890;
  double t902;
  double t1355;
  double t1357;
  double t1419;
  double t1444;
  double t1360;
  double t1366;
  double t351;
  double t442;
  double t471;
  double t577;
  double t596;
  double t604;
  double t629;
  double t661;
  double t676;
  double t698;
  double t753;
  double t909;
  double t1042;
  double t1058;
  double t1157;
  double t1188;
  double t1231;
  double t1240;
  double t1241;
  double t1269;
  double t1284;
  double t1317;
  double t1391;
  double t1452;
  double t1462;
  double t1473;
  double t1484;
  double t1485;
  double t1487;
  double t1498;
  double t1505;
  double t1515;
  double t1755;
  double t1773;
  double t1777;
  double t1983;
  double t1989;
  double t1924;
  double t1929;
  double t2013;
  double t2033;
  double t2048;
  double t2072;
  double t2076;
  double t2093;
  double t2102;
  double t2137;
  double t1840;
  double t1867;
  double t1880;
  double t1896;
  double t1901;
  double t1909;
  double t1919;
  double t1974;
  double t1982;
  double t2074;
  double t2138;
  double t2153;
  double t2163;
  double t2204;
  double t2246;
  double t2308;
  double t2314;
  double t2325;
  double t2334;
  double t1780;
  double t1807;
  double t1823;
  double t2426;
  double t2427;
  double t2433;
  double t2445;
  double t2452;
  double t1873;
  double t1876;
  double t2216;
  double t2347;
  double t2355;
  double t2483;
  double t2491;
  double t2500;
  double t2509;
  double t2536;
  double t2541;
  double t2568;
  double t2408;
  double t2473;
  double t2477;
  double t2530;
  double t2575;
  double t2605;
  double t2608;
  double t2612;
  double t2627;
  double t1684;
  double t1717;
  double t1726;
  double t2478;
  double t2714;
  double t2788;
  double t2863;
  double t2928;
  double t2991;
  double t3028;
  double t3061;
  double t3100;
  double t3130;
  double t3177;
  double t3212;
  double t3943;
  double t3841;
  t40 = Cos(var1[16]);
  t78 = Sin(var1[15]);
  t32 = Cos(var1[15]);
  t83 = Sin(var1[16]);
  t188 = Cos(var1[13]);
  t42 = -1.*t32*t40;
  t108 = t78*t83;
  t155 = 0. + t42 + t108;
  t26 = Sin(var1[13]);
  t200 = Sin(var1[14]);
  t205 = t40*t78;
  t237 = t32*t83;
  t255 = 0. + t205 + t237;
  t314 = t200*t255;
  t320 = 0. + t314;
  t21 = Cos(var1[5]);
  t354 = t188*t155;
  t392 = t26*t320;
  t411 = 0. + t354 + t392;
  t165 = -1.*t26*t155;
  t343 = t188*t320;
  t350 = 0. + t165 + t343;
  t441 = Sin(var1[5]);
  t18 = Sin(var1[3]);
  t819 = t32*t40;
  t836 = -1.*t78*t83;
  t842 = 0. + t819 + t836;
  t846 = t200*t842;
  t858 = 0. + t846;
  t515 = Cos(var1[3]);
  t520 = Cos(var1[4]);
  t535 = Cos(var1[14]);
  t624 = Sin(var1[4]);
  t952 = t188*t255;
  t990 = t26*t858;
  t1008 = 0. + t952 + t990;
  t798 = -1.*t26*t255;
  t890 = t188*t858;
  t902 = 0. + t798 + t890;
  t1355 = -1.*t535;
  t1357 = 0. + t1355;
  t1419 = t1357*t26;
  t1444 = 0. + t1419;
  t1360 = t188*t1357;
  t1366 = 0. + t1360;
  t351 = t21*t350;
  t442 = -1.*t411*t441;
  t471 = 0. + t351 + t442;
  t577 = t535*t255;
  t596 = 0. + t577;
  t604 = t520*t596;
  t629 = t21*t411;
  t661 = t350*t441;
  t676 = 0. + t629 + t661;
  t698 = t624*t676;
  t753 = 0. + t604 + t698;
  t909 = t21*t902;
  t1042 = -1.*t1008*t441;
  t1058 = 0. + t909 + t1042;
  t1157 = t535*t842;
  t1188 = 0. + t1157;
  t1231 = t520*t1188;
  t1240 = t21*t1008;
  t1241 = t902*t441;
  t1269 = 0. + t1240 + t1241;
  t1284 = t624*t1269;
  t1317 = 0. + t1231 + t1284;
  t1391 = t1366*t21;
  t1452 = -1.*t1444*t441;
  t1462 = 0. + t1391 + t1452;
  t1473 = 0. + t200;
  t1484 = t520*t1473;
  t1485 = t21*t1444;
  t1487 = t1366*t441;
  t1498 = 0. + t1485 + t1487;
  t1505 = t624*t1498;
  t1515 = 0. + t1484 + t1505;
  t1755 = -1.*t1188*t624;
  t1773 = t520*t1269;
  t1777 = 0. + t1755 + t1773;
  t1983 = -1.*t40;
  t1989 = 1. + t1983;
  t1924 = -1.*t32;
  t1929 = 1. + t1924;
  t2013 = -0.08055*t1989;
  t2033 = -0.04845*t40;
  t2048 = 0.02300000000000002*t83;
  t2072 = 0. + t2013 + t2033 + t2048;
  t2076 = -0.13004*t1989;
  t2093 = -0.15304*t40;
  t2102 = 0.0321*t83;
  t2137 = 0. + t2076 + t2093 + t2102;
  t1840 = -1.*t188;
  t1867 = 1. + t1840;
  t1880 = -1.*t535;
  t1896 = 1. + t1880;
  t1901 = -0.135*t1896;
  t1909 = -0.1327*t535;
  t1919 = 0.08055*t200;
  t1974 = -0.08055*t1929;
  t1982 = -0.01004*t78;
  t2074 = t32*t2072;
  t2138 = -1.*t78*t2137;
  t2153 = 0. + t1974 + t1982 + t2074 + t2138;
  t2163 = t200*t2153;
  t2204 = 0. + t1901 + t1909 + t1919 + t2163;
  t2246 = -0.01004*t1929;
  t2308 = 0.08055*t78;
  t2314 = t78*t2072;
  t2325 = t32*t2137;
  t2334 = 0. + t2246 + t2308 + t2314 + t2325;
  t1780 = -1.*t1473*t624;
  t1807 = t520*t1498;
  t1823 = 0. + t1780 + t1807;
  t2426 = 0.07996*t1867;
  t2427 = 0.135*t26;
  t2433 = t26*t2204;
  t2445 = t188*t2334;
  t2452 = 0. + t2426 + t2427 + t2433 + t2445;
  t1873 = -0.135*t1867;
  t1876 = 0.07996*t26;
  t2216 = t188*t2204;
  t2347 = -1.*t26*t2334;
  t2355 = 0. + t1873 + t1876 + t2216 + t2347;
  t2483 = -0.08055*t1896;
  t2491 = -0.0022999999999999965*t200;
  t2500 = t535*t2153;
  t2509 = 0. + t2483 + t2491 + t2500;
  t2536 = t21*t2452;
  t2541 = t2355*t441;
  t2568 = 0. + t2536 + t2541;
  t2408 = t21*t2355;
  t2473 = -1.*t2452*t441;
  t2477 = 0. + t2408 + t2473;
  t2530 = -1.*t2509*t624;
  t2575 = t520*t2568;
  t2605 = 0. + t2530 + t2575;
  t2608 = t520*t2509;
  t2612 = t624*t2568;
  t2627 = 0. + t2608 + t2612;
  t1684 = -1.*t596*t624;
  t1717 = t520*t676;
  t1726 = 0. + t1684 + t1717;
  t2478 = t1462*t2477;
  t2714 = -1.*t2477*t1058;
  t2788 = -1.*t1462*t2477;
  t2863 = t2477*t471;
  t2928 = -1.*t2477*t471;
  t2991 = t2477*t1058;
  t3028 = t1473*t2509;
  t3061 = -1.*t2509*t1188;
  t3100 = -1.*t1473*t2509;
  t3130 = t2509*t596;
  t3177 = -1.*t2509*t596;
  t3212 = t2509*t1188;
  t3943 = t2334*t255;
  t3841 = -1.*t2334*t155;
  p_output1[0]=0. - 1.*t18*t471 + t515*t753;
  p_output1[1]=0. - 1.*t1058*t18 + t1317*t515;
  p_output1[2]=0. - 1.*t1462*t18 + t1515*t515;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t471*t515 + t18*t753;
  p_output1[7]=0. + t1317*t18 + t1058*t515;
  p_output1[8]=0. + t1515*t18 + t1462*t515;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1726;
  p_output1[13]=t1777;
  p_output1[14]=t1823;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1777*(t2478 + t1823*t2605 + t1515*t2627) + t1823*(-1.*t1777*t2605 - 1.*t1317*t2627 + t2714);
  p_output1[19]=t1726*(-1.*t1823*t2605 - 1.*t1515*t2627 + t2788) + t1823*(t1726*t2605 + t2863 + t2627*t753);
  p_output1[20]=t1726*(t1777*t2605 + t1317*t2627 + t2991) + t1777*(-1.*t1726*t2605 + t2928 - 1.*t2627*t753);
  p_output1[21]=t1726;
  p_output1[22]=t1777;
  p_output1[23]=t1823;
  p_output1[24]=t1058*(t2478 + t1498*t2568 + t3028) + t1462*(-1.*t1269*t2568 + t2714 + t3061);
  p_output1[25]=(-1.*t1498*t2568 + t2788 + t3100)*t471 + t1462*(t2863 + t3130 + t2568*t676);
  p_output1[26]=(t1269*t2568 + t2991 + t3212)*t471 + t1058*(t2928 + t3177 - 1.*t2568*t676);
  p_output1[27]=t471;
  p_output1[28]=t1058;
  p_output1[29]=t1462;
  p_output1[30]=t1188*(t1366*t2355 + t1444*t2452 + t3028) + t1473*(-1.*t1008*t2452 + t3061 - 1.*t2355*t902);
  p_output1[31]=t1473*(t3130 + t2355*t350 + t2452*t411) + (-1.*t1366*t2355 - 1.*t1444*t2452 + t3100)*t596;
  p_output1[32]=t1188*(t3177 - 1.*t2355*t350 - 1.*t2452*t411) + t596*(t1008*t2452 + t3212 + t2355*t902);
  p_output1[33]=t596;
  p_output1[34]=t1188;
  p_output1[35]=t1473;
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
  p_output1[78]=0.135*t155 + t1188*(0. + t1357*t2204 + t3028) + 0.07996*t320 + t1473*(-1.*t2334*t255 + t3061 - 1.*t2204*t858);
  p_output1[79]=0.135*t255 + t1473*(t155*t2334 + t3130 + t2204*t320) + (0. - 1.*t1357*t2204 + t3100)*t596 + 0.07996*t858;
  p_output1[80]=0. + 0.07996*t1357 + t1188*(t3177 - 1.*t2204*t320 + t3841) + t596*(t3212 + t3943 + t2204*t858);
  p_output1[81]=t596;
  p_output1[82]=t1188;
  p_output1[83]=t1473;
  p_output1[84]=0. - 0.0022999999999999965*t255;
  p_output1[85]=0. - 0.1327*t155 - 0.135*t842;
  p_output1[86]=-0.08055 + t255*(0. - 1.*t2153*t255 + t3841) + t155*(0. + t3943 + t2153*t842);
  p_output1[87]=t155;
  p_output1[88]=t255;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.08055*t40 - 1.*t2072*t40 - 0.01004*t83 - 1.*t2137*t83;
  p_output1[91]=0. - 0.01004*t40 - 1.*t2137*t40 + 0.08055*t83 + t2072*t83;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=-0.0321;
  p_output1[97]=0.02300000000000002;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
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

#include "Jb_RightKnee_mex.hh"

namespace SymExpression
{

void Jb_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
