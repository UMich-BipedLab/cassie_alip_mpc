/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:23 GMT-04:00
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
  double t1485;
  double t1538;
  double t1575;
  double t1582;
  double t1586;
  double t1600;
  double t1619;
  double t1546;
  double t1673;
  double t1520;
  double t1588;
  double t1604;
  double t1608;
  double t1620;
  double t1622;
  double t1631;
  double t1705;
  double t1706;
  double t1707;
  double t1694;
  double t1697;
  double t1700;
  double t1802;
  double t1803;
  double t1806;
  double t1785;
  double t1788;
  double t1789;
  double t1865;
  double t1868;
  double t1869;
  double t1833;
  double t1838;
  double t1729;
  double t1945;
  double t1948;
  double t1951;
  double t1793;
  double t1794;
  double t1807;
  double t1812;
  double t1821;
  double t1991;
  double t1992;
  double t1995;
  double t1957;
  double t1967;
  double t1840;
  double t1842;
  double t1917;
  double t1918;
  double t1919;
  double t2048;
  double t2049;
  double t2050;
  double t2052;
  double t2054;
  double t1536;
  double t1614;
  double t1633;
  double t1634;
  double t1638;
  double t1640;
  double t1652;
  double t1655;
  double t1659;
  double t1663;
  double t1664;
  double t1666;
  double t1680;
  double t1902;
  double t1903;
  double t1904;
  double t1905;
  double t1909;
  double t1911;
  double t1914;
  double t1936;
  double t1939;
  double t2125;
  double t2127;
  double t2128;
  double t2129;
  double t2131;
  double t2014;
  double t2216;
  double t2218;
  double t2219;
  double t2222;
  double t2225;
  double t2226;
  double t2227;
  double t2233;
  double t2036;
  double t2046;
  double t2055;
  double t1704;
  double t1708;
  double t1733;
  double t1735;
  double t1742;
  double t1743;
  double t1744;
  double t1747;
  double t1750;
  double t1962;
  double t1870;
  double t1877;
  double t1878;
  double t1881;
  double t1885;
  double t1886;
  double t1890;
  double t1894;
  double t1896;
  double t2121;
  double t2122;
  double t2133;
  double t1942;
  double t1954;
  double t1964;
  double t1969;
  double t1977;
  double t1979;
  double t1982;
  double t2018;
  double t2299;
  double t2304;
  double t2305;
  double t2015;
  double t2017;
  double t2019;
  double t2020;
  double t2022;
  double t2024;
  double t2184;
  double t2185;
  double t2186;
  double t2193;
  double t2195;
  double t2197;
  double t2199;
  double t2200;
  double t2203;
  double t2204;
  double t2209;
  double t2210;
  double t2234;
  double t2060;
  double t2062;
  double t2063;
  double t2257;
  double t2260;
  double t2261;
  double t2265;
  double t2269;
  double t2271;
  double t2280;
  double t1999;
  double t2001;
  double t1801;
  double t1823;
  double t1829;
  double t1835;
  double t1836;
  double t1855;
  double t1861;
  double t2143;
  double t2144;
  double t2145;
  double t1989;
  double t1998;
  double t2004;
  double t2005;
  double t2007;
  double t2008;
  double t2010;
  double t2297;
  double t2308;
  double t2309;
  double t2312;
  double t2314;
  double t2319;
  double t2320;
  double t2322;
  double t2324;
  double t2349;
  double t2359;
  double t2363;
  double t2336;
  double t2335;
  double t2337;
  double t2237;
  double t2238;
  double t2240;
  t1485 = Sin(var1[3]);
  t1538 = Cos(var1[4]);
  t1575 = Cos(var1[6]);
  t1582 = -1.*t1575;
  t1586 = 1. + t1582;
  t1600 = Sin(var1[6]);
  t1619 = Sin(var1[5]);
  t1546 = Cos(var1[5]);
  t1673 = Cos(var1[3]);
  t1520 = Sin(var1[4]);
  t1588 = 0.07996*t1586;
  t1604 = -0.135*t1600;
  t1608 = 0. + t1588 + t1604;
  t1620 = 0.135*t1586;
  t1622 = 0.07996*t1600;
  t1631 = 0. + t1620 + t1622;
  t1705 = t1546*t1485;
  t1706 = -1.*t1673*t1520*t1619;
  t1707 = t1705 + t1706;
  t1694 = -1.*t1673*t1546*t1520;
  t1697 = -1.*t1485*t1619;
  t1700 = t1694 + t1697;
  t1802 = -1.*t1673*t1546;
  t1803 = -1.*t1485*t1520*t1619;
  t1806 = t1802 + t1803;
  t1785 = -1.*t1546*t1485*t1520;
  t1788 = t1673*t1619;
  t1789 = t1785 + t1788;
  t1865 = t1673*t1546;
  t1868 = t1485*t1520*t1619;
  t1869 = t1865 + t1868;
  t1833 = -1.*t1789*t1600;
  t1838 = t1575*t1789;
  t1729 = t1575*t1707;
  t1945 = t1673*t1546*t1520;
  t1948 = t1485*t1619;
  t1951 = t1945 + t1948;
  t1793 = -0.135*t1575;
  t1794 = t1793 + t1622;
  t1807 = 0.07996*t1575;
  t1812 = 0.135*t1600;
  t1821 = t1807 + t1812;
  t1991 = -1.*t1546*t1485;
  t1992 = t1673*t1520*t1619;
  t1995 = t1991 + t1992;
  t1957 = -1.*t1951*t1600;
  t1967 = t1575*t1951;
  t1840 = -1.*t1806*t1600;
  t1842 = t1838 + t1840;
  t1917 = t1673*t1538*t1546*t1575;
  t1918 = -1.*t1673*t1538*t1619*t1600;
  t1919 = t1917 + t1918;
  t2048 = -1.*t1673*t1538*t1575*t1619;
  t2049 = -1.*t1673*t1538*t1546*t1600;
  t2050 = t2048 + t2049;
  t2052 = 0.07996*t2050;
  t2054 = 0.135*t1919;
  t1536 = -0.08055*t1485*t1520;
  t1614 = -1.*t1538*t1546*t1485*t1608;
  t1633 = -1.*t1538*t1485*t1619*t1631;
  t1634 = -1.*t1538*t1575*t1485*t1619;
  t1638 = -1.*t1538*t1546*t1485*t1600;
  t1640 = t1634 + t1638;
  t1652 = 0.135*t1640;
  t1655 = -1.*t1538*t1546*t1575*t1485;
  t1659 = t1538*t1485*t1619*t1600;
  t1663 = t1655 + t1659;
  t1664 = 0.07996*t1663;
  t1666 = t1536 + t1614 + t1633 + t1652 + t1664;
  t1680 = 0.08055*t1673*t1538;
  t1902 = 0.08055*t1673*t1520;
  t1903 = t1673*t1538*t1546*t1608;
  t1904 = t1673*t1538*t1619*t1631;
  t1905 = t1673*t1538*t1575*t1619;
  t1909 = t1673*t1538*t1546*t1600;
  t1911 = t1905 + t1909;
  t1914 = 0.135*t1911;
  t1936 = 0.07996*t1919;
  t1939 = t1902 + t1903 + t1904 + t1914 + t1936;
  t2125 = 0.07996*t1640;
  t2127 = t1538*t1546*t1575*t1485;
  t2128 = -1.*t1538*t1485*t1619*t1600;
  t2129 = t2127 + t2128;
  t2131 = 0.135*t2129;
  t2014 = 0.08055*t1538*t1485;
  t2216 = t1575*t1520*t1619;
  t2218 = t1546*t1520*t1600;
  t2219 = t2216 + t2218;
  t2222 = 0.07996*t2219;
  t2225 = -1.*t1546*t1575*t1520;
  t2226 = t1520*t1619*t1600;
  t2227 = t2225 + t2226;
  t2233 = 0.135*t2227;
  t2036 = -1.*t1673*t1538*t1619*t1608;
  t2046 = t1673*t1538*t1546*t1631;
  t2055 = t2036 + t2046 + t2052 + t2054;
  t1704 = t1700*t1608;
  t1708 = t1707*t1631;
  t1733 = t1700*t1600;
  t1735 = t1729 + t1733;
  t1742 = 0.135*t1735;
  t1743 = t1575*t1700;
  t1744 = -1.*t1707*t1600;
  t1747 = t1743 + t1744;
  t1750 = 0.07996*t1747;
  t1962 = t1729 + t1957;
  t1870 = t1869*t1608;
  t1877 = t1789*t1631;
  t1878 = t1575*t1869;
  t1881 = t1878 + t1833;
  t1885 = 0.07996*t1881;
  t1886 = t1869*t1600;
  t1890 = t1838 + t1886;
  t1894 = 0.135*t1890;
  t1896 = t1870 + t1877 + t1885 + t1894;
  t2121 = -1.*t1538*t1485*t1619*t1608;
  t2122 = t1538*t1546*t1485*t1631;
  t2133 = t2121 + t2122 + t2125 + t2131;
  t1942 = t1707*t1608;
  t1954 = t1951*t1631;
  t1964 = 0.07996*t1962;
  t1969 = t1707*t1600;
  t1977 = t1967 + t1969;
  t1979 = 0.135*t1977;
  t1982 = t1942 + t1954 + t1964 + t1979;
  t2018 = t1575*t1806;
  t2299 = t1546*t1485*t1520;
  t2304 = -1.*t1673*t1619;
  t2305 = t2299 + t2304;
  t2015 = t1789*t1608;
  t2017 = t1806*t1631;
  t2019 = t1789*t1600;
  t2020 = t2018 + t2019;
  t2022 = 0.135*t2020;
  t2024 = 0.07996*t1842;
  t2184 = -1.*t1538*t1546*t1608;
  t2185 = -1.*t1538*t1619*t1631;
  t2186 = -1.*t1538*t1575*t1619;
  t2193 = -1.*t1538*t1546*t1600;
  t2195 = t2186 + t2193;
  t2197 = 0.135*t2195;
  t2199 = -1.*t1538*t1546*t1575;
  t2200 = t1538*t1619*t1600;
  t2203 = t2199 + t2200;
  t2204 = 0.07996*t2203;
  t2209 = t1520*t1619*t1608;
  t2210 = -1.*t1546*t1520*t1631;
  t2234 = t2209 + t2210 + t2222 + t2233;
  t2060 = t1673*t1538*t1546*t1794;
  t2062 = t1673*t1538*t1619*t1821;
  t2063 = t2060 + t2062 + t2052 + t2054;
  t2257 = t1707*t1794;
  t2260 = t1951*t1821;
  t2261 = 0.135*t1962;
  t2265 = -1.*t1575*t1951;
  t2269 = t2265 + t1744;
  t2271 = 0.07996*t2269;
  t2280 = t2257 + t2260 + t2261 + t2271;
  t1999 = -1.*t1575*t1995;
  t2001 = t1999 + t1957;
  t1801 = t1789*t1794;
  t1823 = t1806*t1821;
  t1829 = -1.*t1575*t1806;
  t1835 = t1829 + t1833;
  t1836 = 0.07996*t1835;
  t1855 = 0.135*t1842;
  t1861 = t1801 + t1823 + t1836 + t1855;
  t2143 = t1538*t1546*t1485*t1794;
  t2144 = t1538*t1485*t1619*t1821;
  t2145 = t2143 + t2144 + t2125 + t2131;
  t1989 = t1951*t1794;
  t1998 = t1995*t1821;
  t2004 = 0.07996*t2001;
  t2005 = -1.*t1995*t1600;
  t2007 = t1967 + t2005;
  t2008 = 0.135*t2007;
  t2010 = t1989 + t1998 + t2004 + t2008;
  t2297 = t1806*t1794;
  t2308 = t2305*t1821;
  t2309 = -1.*t2305*t1600;
  t2312 = t2018 + t2309;
  t2314 = 0.135*t2312;
  t2319 = -1.*t1575*t2305;
  t2320 = t2319 + t1840;
  t2322 = 0.07996*t2320;
  t2324 = t2297 + t2308 + t2314 + t2322;
  t2349 = 0.135*t1575;
  t2359 = -0.07996*t1600;
  t2363 = t2349 + t2359;
  t2336 = t1538*t1546*t1821;
  t2335 = -1.*t1538*t1619*t1794;
  t2337 = t2335 + t2336 + t2197 + t2204;
  t2237 = -1.*t1546*t1520*t1794;
  t2238 = -1.*t1520*t1619*t1821;
  t2240 = t2237 + t2238 + t2222 + t2233;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1680 + t1704 + t1708 + t1742 + t1750)*var2[3] + t1666*var2[4] + t1896*var2[5] + t1861*var2[6];
  p_output1[10]=(t2014 + t2015 + t2017 + t2022 + t2024)*var2[3] + t1939*var2[4] + t1982*var2[5] + t2010*var2[6];
  p_output1[11]=0;
  p_output1[12]=t1666*var2[3] + (-1.*t1520*t1546*t1608*t1673 - 1.*t1520*t1619*t1631*t1673 + 0.135*(-1.*t1520*t1546*t1600*t1673 - 1.*t1520*t1575*t1619*t1673) + 0.07996*(-1.*t1520*t1546*t1575*t1673 + t1520*t1600*t1619*t1673) + t1680)*var2[4] + t2055*var2[5] + t2063*var2[6];
  p_output1[13]=t1939*var2[3] + (-1.*t1485*t1520*t1546*t1608 + 0.135*(-1.*t1485*t1520*t1546*t1600 - 1.*t1485*t1520*t1575*t1619) + 0.07996*(-1.*t1485*t1520*t1546*t1575 + t1485*t1520*t1600*t1619) - 1.*t1485*t1520*t1619*t1631 + t2014)*var2[4] + t2133*var2[5] + t2145*var2[6];
  p_output1[14]=(-0.08055*t1520 + t2184 + t2185 + t2197 + t2204)*var2[4] + t2234*var2[5] + t2240*var2[6];
  p_output1[15]=t1896*var2[3] + t2055*var2[4] + (t1704 + t1708 + t1742 + t1750)*var2[5] + t2280*var2[6];
  p_output1[16]=t1982*var2[3] + t2133*var2[4] + (t2015 + t2017 + t2022 + t2024)*var2[5] + t2324*var2[6];
  p_output1[17]=t2234*var2[4] + (t2184 + t2185 + t2197 + t2204)*var2[5] + t2337*var2[6];
  p_output1[18]=t1861*var2[3] + t2063*var2[4] + t2280*var2[5] + (0.135*t2001 + t2260 + 0.07996*(t1600*t1995 + t2265) + t1995*t2363)*var2[6];
  p_output1[19]=t2010*var2[3] + t2145*var2[4] + t2324*var2[5] + (t2308 + 0.135*(-1.*t1575*t1869 + t2309) + 0.07996*(t1886 + t2319) + t1869*t2363)*var2[6];
  p_output1[20]=t2240*var2[4] + t2337*var2[5] + (t2197 + t2204 + t2336 + t1538*t1619*t2363)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void dJp_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
