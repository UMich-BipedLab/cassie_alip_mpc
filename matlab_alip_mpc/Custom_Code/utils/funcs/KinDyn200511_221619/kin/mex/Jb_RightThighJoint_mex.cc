/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:23 GMT-04:00
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
  double t425;
  double t211;
  double t228;
  double t234;
  double t251;
  double t468;
  double t470;
  double t486;
  double t490;
  double t166;
  double t604;
  double t639;
  double t664;
  double t403;
  double t512;
  double t570;
  double t684;
  double t76;
  double t989;
  double t990;
  double t1006;
  double t847;
  double t875;
  double t850;
  double t929;
  double t1063;
  double t1070;
  double t1073;
  double t994;
  double t1029;
  double t1034;
  double t1322;
  double t1344;
  double t1284;
  double t1286;
  double t599;
  double t686;
  double t743;
  double t877;
  double t902;
  double t907;
  double t931;
  double t943;
  double t946;
  double t957;
  double t963;
  double t1044;
  double t1075;
  double t1083;
  double t1147;
  double t1184;
  double t1188;
  double t1197;
  double t1200;
  double t1224;
  double t1232;
  double t1245;
  double t1301;
  double t1370;
  double t1377;
  double t1389;
  double t1391;
  double t1398;
  double t1405;
  double t1407;
  double t1410;
  double t1426;
  double t1562;
  double t1564;
  double t1600;
  double t1721;
  double t1658;
  double t1675;
  double t1732;
  double t1738;
  double t1755;
  double t1773;
  double t1775;
  double t1784;
  double t1785;
  double t1786;
  double t1795;
  double t1798;
  double t1802;
  double t1805;
  double t1807;
  double t1603;
  double t1607;
  double t1624;
  double t1840;
  double t1841;
  double t1842;
  double t1843;
  double t1855;
  double t1679;
  double t1696;
  double t1763;
  double t1829;
  double t1836;
  double t1880;
  double t1890;
  double t1899;
  double t1922;
  double t1941;
  double t2002;
  double t1838;
  double t1857;
  double t1871;
  double t1921;
  double t2029;
  double t2093;
  double t2170;
  double t2224;
  double t2225;
  double t1541;
  double t1546;
  double t1561;
  double t1874;
  double t2349;
  double t2501;
  double t2781;
  double t2929;
  double t3009;
  double t3104;
  double t3127;
  double t3157;
  double t3178;
  double t3240;
  double t3263;
  t425 = Cos(var1[13]);
  t211 = Cos(var1[15]);
  t228 = -1.*t211;
  t234 = 0. + t228;
  t251 = Sin(var1[13]);
  t468 = Sin(var1[14]);
  t470 = Sin(var1[15]);
  t486 = t468*t470;
  t490 = 0. + t486;
  t166 = Cos(var1[5]);
  t604 = t425*t234;
  t639 = t251*t490;
  t664 = 0. + t604 + t639;
  t403 = -1.*t234*t251;
  t512 = t425*t490;
  t570 = 0. + t403 + t512;
  t684 = Sin(var1[5]);
  t76 = Sin(var1[3]);
  t989 = t211*t468;
  t990 = 0. + t989;
  t1006 = 0. + t470;
  t847 = Cos(var1[3]);
  t875 = Cos(var1[14]);
  t850 = Cos(var1[4]);
  t929 = Sin(var1[4]);
  t1063 = t251*t990;
  t1070 = t425*t1006;
  t1073 = 0. + t1063 + t1070;
  t994 = t425*t990;
  t1029 = -1.*t251*t1006;
  t1034 = 0. + t994 + t1029;
  t1322 = -1.*t875*t251;
  t1344 = 0. + t1322;
  t1284 = -1.*t425*t875;
  t1286 = 0. + t1284;
  t599 = t166*t570;
  t686 = -1.*t664*t684;
  t743 = 0. + t599 + t686;
  t877 = t875*t470;
  t902 = 0. + t877;
  t907 = t850*t902;
  t931 = t166*t664;
  t943 = t570*t684;
  t946 = 0. + t931 + t943;
  t957 = t929*t946;
  t963 = 0. + t907 + t957;
  t1044 = t166*t1034;
  t1075 = -1.*t1073*t684;
  t1083 = 0. + t1044 + t1075;
  t1147 = t875*t211;
  t1184 = 0. + t1147;
  t1188 = t1184*t850;
  t1197 = t166*t1073;
  t1200 = t1034*t684;
  t1224 = 0. + t1197 + t1200;
  t1232 = t929*t1224;
  t1245 = 0. + t1188 + t1232;
  t1301 = t1286*t166;
  t1370 = -1.*t1344*t684;
  t1377 = 0. + t1301 + t1370;
  t1389 = 0. + t468;
  t1391 = t850*t1389;
  t1398 = t166*t1344;
  t1405 = t1286*t684;
  t1407 = 0. + t1398 + t1405;
  t1410 = t929*t1407;
  t1426 = 0. + t1391 + t1410;
  t1562 = -1.*t1184*t929;
  t1564 = t850*t1224;
  t1600 = 0. + t1562 + t1564;
  t1721 = 1. + t228;
  t1658 = -1.*t425;
  t1675 = 1. + t1658;
  t1732 = -0.01004*t1721;
  t1738 = -0.01004*t211;
  t1755 = 0. + t1732 + t1738;
  t1773 = -1.*t875;
  t1775 = 1. + t1773;
  t1784 = -0.135*t1775;
  t1785 = -0.135*t875;
  t1786 = 0.08055*t468;
  t1795 = -0.08055*t1721;
  t1798 = -0.08055*t211;
  t1802 = 0. + t1795 + t1798;
  t1805 = t1802*t468;
  t1807 = 0. + t1784 + t1785 + t1786 + t1805;
  t1603 = -1.*t1389*t929;
  t1607 = t850*t1407;
  t1624 = 0. + t1603 + t1607;
  t1840 = 0.07996*t1675;
  t1841 = t425*t1755;
  t1842 = 0.135*t251;
  t1843 = t251*t1807;
  t1855 = 0. + t1840 + t1841 + t1842 + t1843;
  t1679 = -0.135*t1675;
  t1696 = 0.07996*t251;
  t1763 = -1.*t1755*t251;
  t1829 = t425*t1807;
  t1836 = 0. + t1679 + t1696 + t1763 + t1829;
  t1880 = -0.08055*t1775;
  t1890 = t875*t1802;
  t1899 = 0. + t1880 + t1890;
  t1922 = t166*t1855;
  t1941 = t1836*t684;
  t2002 = 0. + t1922 + t1941;
  t1838 = t166*t1836;
  t1857 = -1.*t1855*t684;
  t1871 = 0. + t1838 + t1857;
  t1921 = -1.*t1899*t929;
  t2029 = t850*t2002;
  t2093 = 0. + t1921 + t2029;
  t2170 = t1899*t850;
  t2224 = t929*t2002;
  t2225 = 0. + t2170 + t2224;
  t1541 = -1.*t902*t929;
  t1546 = t850*t946;
  t1561 = 0. + t1541 + t1546;
  t1874 = t1377*t1871;
  t2349 = -1.*t1871*t1083;
  t2501 = -1.*t1377*t1871;
  t2781 = t1871*t743;
  t2929 = t1871*t1083;
  t3009 = -1.*t1871*t743;
  t3104 = t1899*t1389;
  t3127 = -1.*t1899*t1184;
  t3157 = -1.*t1899*t1389;
  t3178 = t1899*t902;
  t3240 = t1899*t1184;
  t3263 = -1.*t1899*t902;
  p_output1[0]=0. - 1.*t743*t76 + t847*t963;
  p_output1[1]=0. - 1.*t1083*t76 + t1245*t847;
  p_output1[2]=0. - 1.*t1377*t76 + t1426*t847;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t743*t847 + t76*t963;
  p_output1[7]=0. + t1245*t76 + t1083*t847;
  p_output1[8]=0. + t1426*t76 + t1377*t847;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1561;
  p_output1[13]=t1600;
  p_output1[14]=t1624;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1600*(t1874 + t1624*t2093 + t1426*t2225) + t1624*(-1.*t1600*t2093 - 1.*t1245*t2225 + t2349);
  p_output1[19]=t1561*(-1.*t1624*t2093 - 1.*t1426*t2225 + t2501) + t1624*(t1561*t2093 + t2781 + t2225*t963);
  p_output1[20]=t1561*(t1600*t2093 + t1245*t2225 + t2929) + t1600*(-1.*t1561*t2093 + t3009 - 1.*t2225*t963);
  p_output1[21]=t1561;
  p_output1[22]=t1600;
  p_output1[23]=t1624;
  p_output1[24]=t1083*(t1874 + t1407*t2002 + t3104) + t1377*(-1.*t1224*t2002 + t2349 + t3127);
  p_output1[25]=(-1.*t1407*t2002 + t2501 + t3157)*t743 + t1377*(t2781 + t3178 + t2002*t946);
  p_output1[26]=(t1224*t2002 + t2929 + t3240)*t743 + t1083*(t3009 + t3263 - 1.*t2002*t946);
  p_output1[27]=t743;
  p_output1[28]=t1083;
  p_output1[29]=t1377;
  p_output1[30]=t1184*(t1286*t1836 + t1344*t1855 + t3104) + t1389*(-1.*t1034*t1836 - 1.*t1073*t1855 + t3127);
  p_output1[31]=t1389*(t3178 + t1836*t570 + t1855*t664) + (-1.*t1286*t1836 - 1.*t1344*t1855 + t3157)*t902;
  p_output1[32]=t1184*(t3263 - 1.*t1836*t570 - 1.*t1855*t664) + (t1034*t1836 + t1073*t1855 + t3240)*t902;
  p_output1[33]=t902;
  p_output1[34]=t1184;
  p_output1[35]=t1389;
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
  p_output1[78]=0.135*t234 + 0.07996*t490 + t1184*(0. + t1899*t468 - 1.*t1807*t875) + t468*(-1.*t1006*t1755 + t3127 - 1.*t1807*t990);
  p_output1[79]=0.135*t1006 + t468*(t1755*t234 + t3178 + t1807*t490) + (0. - 1.*t1899*t468 + t1807*t875)*t902 + 0.07996*t990;
  p_output1[80]=0. + t1184*(-1.*t1755*t234 + t3263 - 1.*t1807*t490) - 0.07996*t875 + t902*(t1006*t1755 + t3240 + t1807*t990);
  p_output1[81]=t902;
  p_output1[82]=t1184;
  p_output1[83]=t1389;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=-0.08055 - 1.*t211*(0. + t1802*t211 + t1755*t470) + t470*(0. + t1755*t211 - 1.*t1802*t470);
  p_output1[87]=t234;
  p_output1[88]=t1006;
  p_output1[89]=0.;
  p_output1[90]=0.;
  p_output1[91]=0.;
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

#include "Jb_RightThighJoint_mex.hh"

namespace SymExpression
{

void Jb_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
