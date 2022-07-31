/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:23 GMT-04:00
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
  double t56;
  double t88;
  double t200;
  double t251;
  double t223;
  double t260;
  double t443;
  double t465;
  double t289;
  double t321;
  double t327;
  double t343;
  double t373;
  double t384;
  double t410;
  double t578;
  double t592;
  double t595;
  double t601;
  double t610;
  double t621;
  double t763;
  double t764;
  double t773;
  double t785;
  double t534;
  double t543;
  double t559;
  double t454;
  double t478;
  double t501;
  double t776;
  double t791;
  double t792;
  double t817;
  double t824;
  double t834;
  double t36;
  double t877;
  double t879;
  double t880;
  double t1114;
  double t1115;
  double t1119;
  double t922;
  double t923;
  double t1010;
  double t900;
  double t906;
  double t916;
  double t1218;
  double t1223;
  double t1230;
  double t1456;
  double t1468;
  double t1479;
  double t1502;
  double t1062;
  double t1072;
  double t1087;
  double t797;
  double t853;
  double t1494;
  double t1503;
  double t1517;
  double t1528;
  double t1535;
  double t1543;
  double t888;
  double t891;
  double t892;
  double t1108;
  double t1109;
  double t1029;
  double t1032;
  double t1651;
  double t1692;
  double t1697;
  double t1260;
  double t1288;
  double t1292;
  double t1841;
  double t1842;
  double t1855;
  double t1345;
  double t1355;
  double t1578;
  double t1602;
  double t1605;
  double t1527;
  double t1561;
  double t2076;
  double t2080;
  double t2112;
  double t2223;
  double t2244;
  double t2273;
  double t2276;
  double t1617;
  double t1630;
  double t1939;
  double t1944;
  double t1958;
  double t2275;
  double t2278;
  double t2289;
  double t2300;
  double t2301;
  double t2322;
  double t1732;
  double t1738;
  double t1753;
  double t1819;
  double t1830;
  double t1882;
  double t1899;
  double t2040;
  double t2055;
  double t1990;
  double t2001;
  double t2161;
  double t2163;
  double t2166;
  double t2167;
  double t2173;
  double t2174;
  double t2175;
  double t2186;
  double t2194;
  t56 = Cos(var1[3]);
  t88 = Sin(var1[3]);
  t200 = Cos(var1[4]);
  t251 = Sin(var1[4]);
  t223 = -1.*var1[2]*t200*t88;
  t260 = -1.*var1[1]*t251;
  t443 = Cos(var1[5]);
  t465 = Sin(var1[5]);
  t289 = var1[2]*t56*t200;
  t321 = var1[0]*t251;
  t327 = -1.*var1[1]*t56*t200;
  t343 = var1[0]*t200*t88;
  t373 = t56*t200;
  t384 = t200*t88;
  t410 = -1.*t251;
  t578 = t443*t88*t251;
  t592 = -1.*t56*t465;
  t595 = t578 + t592;
  t601 = t56*t443;
  t610 = t88*t251*t465;
  t621 = t601 + t610;
  t763 = Cos(var1[6]);
  t764 = -1.*t763;
  t773 = 1. + t764;
  t785 = Sin(var1[6]);
  t534 = -1.*t443*t88;
  t543 = t56*t251*t465;
  t559 = t534 + t543;
  t454 = t56*t443*t251;
  t478 = t88*t465;
  t501 = t454 + t478;
  t776 = 0.07996*t773;
  t791 = -0.135*t785;
  t792 = 0. + t776 + t791;
  t817 = 0.135*t773;
  t824 = 0.07996*t785;
  t834 = 0. + t817 + t824;
  t36 = -1.*var1[0];
  t877 = t200*t443*t763;
  t879 = -1.*t200*t465*t785;
  t880 = t877 + t879;
  t1114 = t763*t501;
  t1115 = -1.*t559*t785;
  t1119 = t1114 + t1115;
  t922 = t763*t595;
  t923 = -1.*t621*t785;
  t1010 = t922 + t923;
  t900 = -1.*var1[2];
  t906 = -1.*t200*t443*t792;
  t916 = -1.*t200*t465*t834;
  t1218 = t200*t763*t465;
  t1223 = t200*t443*t785;
  t1230 = t1218 + t1223;
  t1456 = Cos(var1[7]);
  t1468 = -1.*t1456;
  t1479 = 1. + t1468;
  t1502 = Sin(var1[7]);
  t1062 = t763*t621;
  t1072 = t595*t785;
  t1087 = t1062 + t1072;
  t797 = t595*t792;
  t853 = t621*t834;
  t1494 = 0.135*t1479;
  t1503 = 0.08055*t1502;
  t1517 = 0. + t1494 + t1503;
  t1528 = -0.08055*t1479;
  t1535 = 0.135*t1502;
  t1543 = 0. + t1528 + t1535;
  t888 = t763*t559;
  t891 = t501*t785;
  t892 = t888 + t891;
  t1108 = t200*t443*t792;
  t1109 = t200*t465*t834;
  t1029 = -1.*t501*t792;
  t1032 = -1.*t559*t834;
  t1651 = t1456*t1230;
  t1692 = t251*t1502;
  t1697 = t1651 + t1692;
  t1260 = -1.*var1[1];
  t1288 = -1.*t595*t792;
  t1292 = -1.*t621*t834;
  t1841 = t1456*t892;
  t1842 = -1.*t56*t200*t1502;
  t1855 = t1841 + t1842;
  t1345 = t501*t792;
  t1355 = t559*t834;
  t1578 = t1456*t1087;
  t1602 = -1.*t200*t88*t1502;
  t1605 = t1578 + t1602;
  t1527 = -1.*t1230*t1517;
  t1561 = t251*t1543;
  t2076 = -1.*t1456*t251;
  t2080 = t1230*t1502;
  t2112 = t2076 + t2080;
  t2223 = Cos(var1[8]);
  t2244 = -1.*t2223;
  t2273 = 1. + t2244;
  t2276 = Sin(var1[8]);
  t1617 = t1087*t1517;
  t1630 = t200*t88*t1543;
  t1939 = t200*t1456*t88;
  t1944 = t1087*t1502;
  t1958 = t1939 + t1944;
  t2275 = -0.08055*t2273;
  t2278 = -0.01004*t2276;
  t2289 = 0. + t2275 + t2278;
  t2300 = -0.01004*t2273;
  t2301 = 0.08055*t2276;
  t2322 = 0. + t2300 + t2301;
  t1732 = t56*t200*t1456;
  t1738 = t892*t1502;
  t1753 = t1732 + t1738;
  t1819 = t1230*t1517;
  t1830 = -1.*t251*t1543;
  t1882 = -1.*t892*t1517;
  t1899 = -1.*t56*t200*t1543;
  t2040 = t892*t1517;
  t2055 = t56*t200*t1543;
  t1990 = -1.*t1087*t1517;
  t2001 = -1.*t200*t88*t1543;
  t2161 = -1.*t1456*t892;
  t2163 = t56*t200*t1502;
  t2166 = 0. + t2161 + t2163;
  t2167 = -1.*t1456*t1087;
  t2173 = t200*t88*t1502;
  t2174 = 0. + t2167 + t2173;
  t2175 = -1.*t1456*t1230;
  t2186 = -1.*t251*t1502;
  t2194 = 0. + t2175 + t2186;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t36;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t56*var1[2];
  p_output1[25]=-1.*t88*var1[2];
  p_output1[26]=t56*var1[0] + t88*var1[1];
  p_output1[27]=-1.*t88;
  p_output1[28]=t56;
  p_output1[29]=0;
  p_output1[30]=t223 + t260;
  p_output1[31]=t289 + t321;
  p_output1[32]=t327 + t343;
  p_output1[33]=t373;
  p_output1[34]=t384;
  p_output1[35]=t410;
  p_output1[36]=t223 + t260 - 0.135*t501 + 0.07996*t559;
  p_output1[37]=t289 + t321 - 0.135*t595 + 0.07996*t621;
  p_output1[38]=t327 + t343 - 0.135*t200*t443 + 0.07996*t200*t465;
  p_output1[39]=0. + t373;
  p_output1[40]=0. + t384;
  p_output1[41]=0. + t410;
  p_output1[42]=0.135*t200*t56 + 0.08055*t892 + t1010*(0. + t900 + t906 + t916) + t880*(0. + t797 + t853 + var1[1]);
  p_output1[43]=0.08055*t1087 + 0.135*t200*t88 + (0. + t1029 + t1032 + t36)*t880 + t1119*(0. + t1108 + t1109 + var1[2]);
  p_output1[44]=0.08055*t1230 + t1119*(0. + t1260 + t1288 + t1292) - 0.135*t251 + t1010*(0. + t1345 + t1355 + var1[0]);
  p_output1[45]=0. + t1114 + t1115;
  p_output1[46]=0. + t922 + t923;
  p_output1[47]=0. + t877 + t879;
  p_output1[48]=0.08055*t1119 - 0.01004*t1753 - 1.*t1605*(0. + t1527 + t1561 + t900 + t906 + t916) - 1.*t1697*(0. + t1617 + t1630 + t797 + t853 + var1[1]);
  p_output1[49]=0.08055*t1010 - 0.01004*t1958 - 1.*t1697*(0. + t1029 + t1032 + t1882 + t1899 + t36) - 1.*t1855*(0. + t1108 + t1109 + t1819 + t1830 + var1[2]);
  p_output1[50]=-1.*t1855*(0. + t1260 + t1288 + t1292 + t1990 + t2001) - 0.01004*t2112 + 0.08055*t880 - 1.*t1605*(0. + t1345 + t1355 + t2040 + t2055 + var1[0]);
  p_output1[51]=t2166;
  p_output1[52]=t2174;
  p_output1[53]=t2194;
  p_output1[54]=-0.13004*(t1753*t2223 + t1119*t2276) + 0.08055*(t1119*t2223 - 1.*t1753*t2276) - 1.*t1605*(0. + t1527 + t1561 - 1.*t2112*t2289 - 1.*t2322*t880 + t900 + t906 + t916) - 1.*t1697*(0. + t1617 + t1630 + t1958*t2289 + t1010*t2322 + t797 + t853 + var1[1]);
  p_output1[55]=-0.13004*(t1958*t2223 + t1010*t2276) + 0.08055*(t1010*t2223 - 1.*t1958*t2276) - 1.*t1697*(0. + t1029 + t1032 + t1882 + t1899 - 1.*t1753*t2289 - 1.*t1119*t2322 + t36) - 1.*t1855*(0. + t1108 + t1109 + t1819 + t1830 + t2112*t2289 + t2322*t880 + var1[2]);
  p_output1[56]=-1.*t1855*(0. + t1260 + t1288 + t1292 + t1990 + t2001 - 1.*t1958*t2289 - 1.*t1010*t2322) + 0.08055*(-1.*t2112*t2276 + t2223*t880) - 0.13004*(t2112*t2223 + t2276*t880) - 1.*t1605*(0. + t1345 + t1355 + t2040 + t2055 + t1753*t2289 + t1119*t2322 + var1[0]);
  p_output1[57]=t2166;
  p_output1[58]=t2174;
  p_output1[59]=t2194;
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

#include "Js_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void Js_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
