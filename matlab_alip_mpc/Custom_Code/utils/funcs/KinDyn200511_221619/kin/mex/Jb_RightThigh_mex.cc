/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:23 GMT-04:00
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
  double t375;
  double t147;
  double t182;
  double t226;
  double t230;
  double t380;
  double t406;
  double t467;
  double t478;
  double t48;
  double t624;
  double t655;
  double t665;
  double t350;
  double t486;
  double t576;
  double t672;
  double t24;
  double t1009;
  double t1046;
  double t1088;
  double t741;
  double t794;
  double t747;
  double t853;
  double t1121;
  double t1125;
  double t1128;
  double t1082;
  double t1106;
  double t1117;
  double t1343;
  double t1352;
  double t1323;
  double t1325;
  double t581;
  double t687;
  double t696;
  double t810;
  double t821;
  double t830;
  double t864;
  double t869;
  double t879;
  double t887;
  double t920;
  double t1119;
  double t1155;
  double t1168;
  double t1205;
  double t1216;
  double t1231;
  double t1233;
  double t1241;
  double t1259;
  double t1284;
  double t1285;
  double t1327;
  double t1360;
  double t1363;
  double t1385;
  double t1421;
  double t1428;
  double t1453;
  double t1461;
  double t1478;
  double t1581;
  double t1951;
  double t1967;
  double t1980;
  double t2167;
  double t2027;
  double t2034;
  double t2065;
  double t2076;
  double t2106;
  double t2123;
  double t2147;
  double t2173;
  double t2246;
  double t2262;
  double t2266;
  double t2281;
  double t2284;
  double t2295;
  double t2305;
  double t2309;
  double t2317;
  double t1991;
  double t2007;
  double t2021;
  double t2350;
  double t2366;
  double t2372;
  double t2406;
  double t2411;
  double t2050;
  double t2055;
  double t2292;
  double t2325;
  double t2326;
  double t2498;
  double t2506;
  double t2522;
  double t2532;
  double t2539;
  double t2549;
  double t2553;
  double t2333;
  double t2453;
  double t2470;
  double t2534;
  double t2569;
  double t2584;
  double t2608;
  double t2662;
  double t2680;
  double t1901;
  double t1930;
  double t1944;
  double t2476;
  double t2792;
  double t2905;
  double t2953;
  double t3005;
  double t3075;
  double t3228;
  double t3252;
  double t3278;
  double t3339;
  double t3402;
  double t3458;
  t375 = Cos(var1[13]);
  t147 = Cos(var1[15]);
  t182 = -1.*t147;
  t226 = 0. + t182;
  t230 = Sin(var1[13]);
  t380 = Sin(var1[14]);
  t406 = Sin(var1[15]);
  t467 = t380*t406;
  t478 = 0. + t467;
  t48 = Cos(var1[5]);
  t624 = t375*t226;
  t655 = t230*t478;
  t665 = 0. + t624 + t655;
  t350 = -1.*t226*t230;
  t486 = t375*t478;
  t576 = 0. + t350 + t486;
  t672 = Sin(var1[5]);
  t24 = Sin(var1[3]);
  t1009 = t147*t380;
  t1046 = 0. + t1009;
  t1088 = 0. + t406;
  t741 = Cos(var1[3]);
  t794 = Cos(var1[14]);
  t747 = Cos(var1[4]);
  t853 = Sin(var1[4]);
  t1121 = t230*t1046;
  t1125 = t375*t1088;
  t1128 = 0. + t1121 + t1125;
  t1082 = t375*t1046;
  t1106 = -1.*t230*t1088;
  t1117 = 0. + t1082 + t1106;
  t1343 = -1.*t794*t230;
  t1352 = 0. + t1343;
  t1323 = -1.*t375*t794;
  t1325 = 0. + t1323;
  t581 = t48*t576;
  t687 = -1.*t665*t672;
  t696 = 0. + t581 + t687;
  t810 = t794*t406;
  t821 = 0. + t810;
  t830 = t747*t821;
  t864 = t48*t665;
  t869 = t576*t672;
  t879 = 0. + t864 + t869;
  t887 = t853*t879;
  t920 = 0. + t830 + t887;
  t1119 = t48*t1117;
  t1155 = -1.*t1128*t672;
  t1168 = 0. + t1119 + t1155;
  t1205 = t794*t147;
  t1216 = 0. + t1205;
  t1231 = t1216*t747;
  t1233 = t48*t1128;
  t1241 = t1117*t672;
  t1259 = 0. + t1233 + t1241;
  t1284 = t853*t1259;
  t1285 = 0. + t1231 + t1284;
  t1327 = t1325*t48;
  t1360 = -1.*t1352*t672;
  t1363 = 0. + t1327 + t1360;
  t1385 = 0. + t380;
  t1421 = t747*t1385;
  t1428 = t48*t1352;
  t1453 = t1325*t672;
  t1461 = 0. + t1428 + t1453;
  t1478 = t853*t1461;
  t1581 = 0. + t1421 + t1478;
  t1951 = -1.*t1216*t853;
  t1967 = t747*t1259;
  t1980 = 0. + t1951 + t1967;
  t2167 = 1. + t182;
  t2027 = -1.*t375;
  t2034 = 1. + t2027;
  t2065 = -1.*t794;
  t2076 = 1. + t2065;
  t2106 = -0.135*t2076;
  t2123 = -0.1708*t794;
  t2147 = 0.08055*t380;
  t2173 = -0.08055*t2167;
  t2246 = -0.08045*t147;
  t2262 = 0.0598*t406;
  t2266 = 0. + t2173 + t2246 + t2262;
  t2281 = t380*t2266;
  t2284 = 0. + t2106 + t2123 + t2147 + t2281;
  t2295 = -0.01004*t2167;
  t2305 = -0.06984*t147;
  t2309 = 0.00010000000000000286*t406;
  t2317 = 0. + t2295 + t2305 + t2309;
  t1991 = -1.*t1385*t853;
  t2007 = t747*t1461;
  t2021 = 0. + t1991 + t2007;
  t2350 = 0.07996*t2034;
  t2366 = 0.135*t230;
  t2372 = t230*t2284;
  t2406 = t375*t2317;
  t2411 = 0. + t2350 + t2366 + t2372 + t2406;
  t2050 = -0.135*t2034;
  t2055 = 0.07996*t230;
  t2292 = t375*t2284;
  t2325 = -1.*t230*t2317;
  t2326 = 0. + t2050 + t2055 + t2292 + t2325;
  t2498 = -0.08055*t2076;
  t2506 = 0.0358*t380;
  t2522 = t794*t2266;
  t2532 = 0. + t2498 + t2506 + t2522;
  t2539 = t48*t2411;
  t2549 = t2326*t672;
  t2553 = 0. + t2539 + t2549;
  t2333 = t48*t2326;
  t2453 = -1.*t2411*t672;
  t2470 = 0. + t2333 + t2453;
  t2534 = -1.*t2532*t853;
  t2569 = t747*t2553;
  t2584 = 0. + t2534 + t2569;
  t2608 = t747*t2532;
  t2662 = t853*t2553;
  t2680 = 0. + t2608 + t2662;
  t1901 = -1.*t821*t853;
  t1930 = t747*t879;
  t1944 = 0. + t1901 + t1930;
  t2476 = t1363*t2470;
  t2792 = -1.*t2470*t1168;
  t2905 = -1.*t1363*t2470;
  t2953 = t2470*t696;
  t3005 = t2470*t1168;
  t3075 = -1.*t2470*t696;
  t3228 = t1385*t2532;
  t3252 = -1.*t1216*t2532;
  t3278 = -1.*t1385*t2532;
  t3339 = t2532*t821;
  t3402 = t1216*t2532;
  t3458 = -1.*t2532*t821;
  p_output1[0]=0. - 1.*t24*t696 + t741*t920;
  p_output1[1]=0. - 1.*t1168*t24 + t1285*t741;
  p_output1[2]=0. - 1.*t1363*t24 + t1581*t741;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t696*t741 + t24*t920;
  p_output1[7]=0. + t1285*t24 + t1168*t741;
  p_output1[8]=0. + t1581*t24 + t1363*t741;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1944;
  p_output1[13]=t1980;
  p_output1[14]=t2021;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1980*(t2476 + t2021*t2584 + t1581*t2680) + t2021*(-1.*t1980*t2584 - 1.*t1285*t2680 + t2792);
  p_output1[19]=t1944*(-1.*t2021*t2584 - 1.*t1581*t2680 + t2905) + t2021*(t1944*t2584 + t2953 + t2680*t920);
  p_output1[20]=t1944*(t1980*t2584 + t1285*t2680 + t3005) + t1980*(-1.*t1944*t2584 + t3075 - 1.*t2680*t920);
  p_output1[21]=t1944;
  p_output1[22]=t1980;
  p_output1[23]=t2021;
  p_output1[24]=t1168*(t2476 + t1461*t2553 + t3228) + t1363*(-1.*t1259*t2553 + t2792 + t3252);
  p_output1[25]=(-1.*t1461*t2553 + t2905 + t3278)*t696 + t1363*(t2953 + t3339 + t2553*t879);
  p_output1[26]=(t1259*t2553 + t3005 + t3402)*t696 + t1168*(t3075 + t3458 - 1.*t2553*t879);
  p_output1[27]=t696;
  p_output1[28]=t1168;
  p_output1[29]=t1363;
  p_output1[30]=t1216*(t1325*t2326 + t1352*t2411 + t3228) + t1385*(-1.*t1117*t2326 - 1.*t1128*t2411 + t3252);
  p_output1[31]=t1385*(t3339 + t2326*t576 + t2411*t665) + (-1.*t1325*t2326 - 1.*t1352*t2411 + t3278)*t821;
  p_output1[32]=t1216*(t3458 - 1.*t2326*t576 - 1.*t2411*t665) + (t1117*t2326 + t1128*t2411 + t3402)*t821;
  p_output1[33]=t821;
  p_output1[34]=t1216;
  p_output1[35]=t1385;
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
  p_output1[78]=0.135*t226 + (-1.*t1046*t2284 - 1.*t1088*t2317 + t3252)*t380 + 0.07996*t478 + t1216*(0. + t2532*t380 - 1.*t2284*t794);
  p_output1[79]=0.07996*t1046 + 0.135*t1088 + t380*(t226*t2317 + t3339 + t2284*t478) + (0. - 1.*t2532*t380 + t2284*t794)*t821;
  p_output1[80]=0. + t1216*(-1.*t226*t2317 + t3458 - 1.*t2284*t478) - 0.07996*t794 + (t1046*t2284 + t1088*t2317 + t3402)*t821;
  p_output1[81]=t821;
  p_output1[82]=t1216;
  p_output1[83]=t1385;
  p_output1[84]=0. + 0.0358*t406;
  p_output1[85]=0. + 0.0358*t147;
  p_output1[86]=-0.08055 + t406*(0. + t147*t2317 - 1.*t2266*t406) - 1.*t147*(0. + t147*t2266 + t2317*t406);
  p_output1[87]=t226;
  p_output1[88]=t1088;
  p_output1[89]=0.;
  p_output1[90]=-0.00010000000000000286;
  p_output1[91]=0.0598;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
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

#include "Jb_RightThigh_mex.hh"

namespace SymExpression
{

void Jb_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
