/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:41 GMT-04:00
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
  double t71;
  double t162;
  double t63;
  double t168;
  double t261;
  double t138;
  double t238;
  double t239;
  double t35;
  double t297;
  double t345;
  double t353;
  double t382;
  double t403;
  double t444;
  double t19;
  double t576;
  double t609;
  double t649;
  double t258;
  double t510;
  double t548;
  double t671;
  double t13;
  double t1101;
  double t1154;
  double t1161;
  double t1168;
  double t1181;
  double t703;
  double t716;
  double t777;
  double t890;
  double t1225;
  double t1229;
  double t1248;
  double t1099;
  double t1212;
  double t1215;
  double t1515;
  double t1543;
  double t1563;
  double t1577;
  double t1547;
  double t1552;
  double t556;
  double t689;
  double t693;
  double t806;
  double t819;
  double t869;
  double t905;
  double t986;
  double t987;
  double t993;
  double t1000;
  double t1220;
  double t1254;
  double t1255;
  double t1270;
  double t1309;
  double t1318;
  double t1321;
  double t1326;
  double t1339;
  double t1382;
  double t1433;
  double t1554;
  double t1594;
  double t1595;
  double t1617;
  double t1621;
  double t1640;
  double t1644;
  double t1656;
  double t1670;
  double t1692;
  double t1801;
  double t1808;
  double t1813;
  double t1910;
  double t1957;
  double t1892;
  double t1898;
  double t2003;
  double t2004;
  double t2006;
  double t1960;
  double t1967;
  double t1969;
  double t1859;
  double t1868;
  double t1905;
  double t1986;
  double t1999;
  double t2011;
  double t2017;
  double t2039;
  double t2041;
  double t2042;
  double t2056;
  double t2073;
  double t2100;
  double t2118;
  double t2119;
  double t2153;
  double t2163;
  double t2164;
  double t2175;
  double t1818;
  double t1822;
  double t1826;
  double t2216;
  double t2228;
  double t2237;
  double t2243;
  double t2277;
  double t1884;
  double t1889;
  double t2020;
  double t2193;
  double t2198;
  double t2308;
  double t2315;
  double t2344;
  double t2348;
  double t2361;
  double t2365;
  double t2371;
  double t2211;
  double t2280;
  double t2286;
  double t2352;
  double t2430;
  double t2448;
  double t2499;
  double t2508;
  double t2522;
  double t1781;
  double t1782;
  double t1799;
  double t2288;
  double t2548;
  double t2608;
  double t2638;
  double t2687;
  double t2716;
  double t2758;
  double t2803;
  double t2887;
  double t2921;
  double t2956;
  double t2981;
  double t3584;
  double t3474;
  t71 = Cos(var1[16]);
  t162 = Sin(var1[15]);
  t63 = Cos(var1[15]);
  t168 = Sin(var1[16]);
  t261 = Cos(var1[13]);
  t138 = -1.*t63*t71;
  t238 = t162*t168;
  t239 = 0. + t138 + t238;
  t35 = Sin(var1[13]);
  t297 = Sin(var1[14]);
  t345 = t71*t162;
  t353 = t63*t168;
  t382 = 0. + t345 + t353;
  t403 = t297*t382;
  t444 = 0. + t403;
  t19 = Cos(var1[5]);
  t576 = t261*t239;
  t609 = t35*t444;
  t649 = 0. + t576 + t609;
  t258 = -1.*t35*t239;
  t510 = t261*t444;
  t548 = 0. + t258 + t510;
  t671 = Sin(var1[5]);
  t13 = Sin(var1[3]);
  t1101 = t63*t71;
  t1154 = -1.*t162*t168;
  t1161 = 0. + t1101 + t1154;
  t1168 = t297*t1161;
  t1181 = 0. + t1168;
  t703 = Cos(var1[3]);
  t716 = Cos(var1[4]);
  t777 = Cos(var1[14]);
  t890 = Sin(var1[4]);
  t1225 = t261*t382;
  t1229 = t35*t1181;
  t1248 = 0. + t1225 + t1229;
  t1099 = -1.*t35*t382;
  t1212 = t261*t1181;
  t1215 = 0. + t1099 + t1212;
  t1515 = -1.*t777;
  t1543 = 0. + t1515;
  t1563 = t1543*t35;
  t1577 = 0. + t1563;
  t1547 = t261*t1543;
  t1552 = 0. + t1547;
  t556 = t19*t548;
  t689 = -1.*t649*t671;
  t693 = 0. + t556 + t689;
  t806 = t777*t382;
  t819 = 0. + t806;
  t869 = t716*t819;
  t905 = t19*t649;
  t986 = t548*t671;
  t987 = 0. + t905 + t986;
  t993 = t890*t987;
  t1000 = 0. + t869 + t993;
  t1220 = t19*t1215;
  t1254 = -1.*t1248*t671;
  t1255 = 0. + t1220 + t1254;
  t1270 = t777*t1161;
  t1309 = 0. + t1270;
  t1318 = t716*t1309;
  t1321 = t19*t1248;
  t1326 = t1215*t671;
  t1339 = 0. + t1321 + t1326;
  t1382 = t890*t1339;
  t1433 = 0. + t1318 + t1382;
  t1554 = t1552*t19;
  t1594 = -1.*t1577*t671;
  t1595 = 0. + t1554 + t1594;
  t1617 = 0. + t297;
  t1621 = t716*t1617;
  t1640 = t19*t1577;
  t1644 = t1552*t671;
  t1656 = 0. + t1640 + t1644;
  t1670 = t890*t1656;
  t1692 = 0. + t1621 + t1670;
  t1801 = -1.*t1309*t890;
  t1808 = t716*t1339;
  t1813 = 0. + t1801 + t1808;
  t1910 = -1.*t71;
  t1957 = 1. + t1910;
  t1892 = -1.*t63;
  t1898 = 1. + t1892;
  t2003 = -0.08055*t1957;
  t2004 = -0.08055*t71;
  t2006 = 0. + t2003 + t2004;
  t1960 = -0.13004*t1957;
  t1967 = -0.13004*t71;
  t1969 = 0. + t1960 + t1967;
  t1859 = -1.*t261;
  t1868 = 1. + t1859;
  t1905 = -0.01004*t1898;
  t1986 = t63*t1969;
  t1999 = 0.08055*t162;
  t2011 = t2006*t162;
  t2017 = 0. + t1905 + t1986 + t1999 + t2011;
  t2039 = -1.*t777;
  t2041 = 1. + t2039;
  t2042 = -0.135*t2041;
  t2056 = -0.1305*t777;
  t2073 = 0.08055*t297;
  t2100 = -0.08055*t1898;
  t2118 = t63*t2006;
  t2119 = -0.01004*t162;
  t2153 = -1.*t1969*t162;
  t2163 = 0. + t2100 + t2118 + t2119 + t2153;
  t2164 = t297*t2163;
  t2175 = 0. + t2042 + t2056 + t2073 + t2164;
  t1818 = -1.*t1617*t890;
  t1822 = t716*t1656;
  t1826 = 0. + t1818 + t1822;
  t2216 = 0.07996*t1868;
  t2228 = 0.135*t35;
  t2237 = t261*t2017;
  t2243 = t35*t2175;
  t2277 = 0. + t2216 + t2228 + t2237 + t2243;
  t1884 = -0.135*t1868;
  t1889 = 0.07996*t35;
  t2020 = -1.*t35*t2017;
  t2193 = t261*t2175;
  t2198 = 0. + t1884 + t1889 + t2020 + t2193;
  t2308 = -0.08055*t2041;
  t2315 = -0.004500000000000004*t297;
  t2344 = t777*t2163;
  t2348 = 0. + t2308 + t2315 + t2344;
  t2361 = t19*t2277;
  t2365 = t2198*t671;
  t2371 = 0. + t2361 + t2365;
  t2211 = t19*t2198;
  t2280 = -1.*t2277*t671;
  t2286 = 0. + t2211 + t2280;
  t2352 = -1.*t2348*t890;
  t2430 = t716*t2371;
  t2448 = 0. + t2352 + t2430;
  t2499 = t716*t2348;
  t2508 = t890*t2371;
  t2522 = 0. + t2499 + t2508;
  t1781 = -1.*t819*t890;
  t1782 = t716*t987;
  t1799 = 0. + t1781 + t1782;
  t2288 = t1595*t2286;
  t2548 = -1.*t2286*t1255;
  t2608 = -1.*t1595*t2286;
  t2638 = t2286*t693;
  t2687 = -1.*t2286*t693;
  t2716 = t2286*t1255;
  t2758 = t1617*t2348;
  t2803 = -1.*t2348*t1309;
  t2887 = -1.*t1617*t2348;
  t2921 = t2348*t819;
  t2956 = -1.*t2348*t819;
  t2981 = t2348*t1309;
  t3584 = t2017*t382;
  t3474 = -1.*t2017*t239;
  p_output1[0]=0. - 1.*t13*t693 + t1000*t703;
  p_output1[1]=0. - 1.*t1255*t13 + t1433*t703;
  p_output1[2]=0. - 1.*t13*t1595 + t1692*t703;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1000*t13 + t693*t703;
  p_output1[7]=0. + t13*t1433 + t1255*t703;
  p_output1[8]=0. + t13*t1692 + t1595*t703;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1799;
  p_output1[13]=t1813;
  p_output1[14]=t1826;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1813*(t2288 + t1826*t2448 + t1692*t2522) + t1826*(-1.*t1813*t2448 - 1.*t1433*t2522 + t2548);
  p_output1[19]=t1799*(-1.*t1826*t2448 - 1.*t1692*t2522 + t2608) + t1826*(t1799*t2448 + t1000*t2522 + t2638);
  p_output1[20]=t1813*(-1.*t1799*t2448 - 1.*t1000*t2522 + t2687) + t1799*(t1813*t2448 + t1433*t2522 + t2716);
  p_output1[21]=t1799;
  p_output1[22]=t1813;
  p_output1[23]=t1826;
  p_output1[24]=t1255*(t2288 + t1656*t2371 + t2758) + t1595*(-1.*t1339*t2371 + t2548 + t2803);
  p_output1[25]=(-1.*t1656*t2371 + t2608 + t2887)*t693 + t1595*(t2638 + t2921 + t2371*t987);
  p_output1[26]=(t1339*t2371 + t2716 + t2981)*t693 + t1255*(t2687 + t2956 - 1.*t2371*t987);
  p_output1[27]=t693;
  p_output1[28]=t1255;
  p_output1[29]=t1595;
  p_output1[30]=t1309*(t1552*t2198 + t1577*t2277 + t2758) + t1617*(-1.*t1215*t2198 - 1.*t1248*t2277 + t2803);
  p_output1[31]=t1617*(t2921 + t2198*t548 + t2277*t649) + (-1.*t1552*t2198 - 1.*t1577*t2277 + t2887)*t819;
  p_output1[32]=t1309*(t2956 - 1.*t2198*t548 - 1.*t2277*t649) + (t1215*t2198 + t1248*t2277 + t2981)*t819;
  p_output1[33]=t819;
  p_output1[34]=t1309;
  p_output1[35]=t1617;
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
  p_output1[78]=0.135*t239 + t1309*(0. + t1543*t2175 + t2758) + t1617*(-1.*t1181*t2175 + t2803 - 1.*t2017*t382) + 0.07996*t444;
  p_output1[79]=0.07996*t1181 + 0.135*t382 + t1617*(t2017*t239 + t2921 + t2175*t444) + (0. - 1.*t1543*t2175 + t2887)*t819;
  p_output1[80]=0. + 0.07996*t1543 + t1309*(t2956 + t3474 - 1.*t2175*t444) + (t1181*t2175 + t2981 + t3584)*t819;
  p_output1[81]=t819;
  p_output1[82]=t1309;
  p_output1[83]=t1617;
  p_output1[84]=0. - 0.004500000000000004*t382;
  p_output1[85]=0. - 0.135*t1161 - 0.1305*t239;
  p_output1[86]=-0.08055 + t239*(0. + t1161*t2163 + t3584) + t382*(0. + t3474 - 1.*t2163*t382);
  p_output1[87]=t239;
  p_output1[88]=t382;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t168 - 1.*t168*t1969 + t2004 - 1.*t2006*t71;
  p_output1[91]=0. + 0.08055*t168 + t168*t2006 - 0.01004*t71 - 1.*t1969*t71;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0.;
  p_output1[97]=0.;
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

#include "Jb_RightKneeJoint_mex.hh"

namespace SymExpression
{

void Jb_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
