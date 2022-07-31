/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:19 GMT-04:00
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
  double t86;
  double t95;
  double t81;
  double t97;
  double t186;
  double t92;
  double t99;
  double t100;
  double t57;
  double t225;
  double t228;
  double t272;
  double t319;
  double t323;
  double t330;
  double t400;
  double t169;
  double t360;
  double t386;
  double t41;
  double t426;
  double t445;
  double t455;
  double t23;
  double t860;
  double t862;
  double t903;
  double t910;
  double t931;
  double t519;
  double t557;
  double t607;
  double t683;
  double t840;
  double t943;
  double t961;
  double t975;
  double t976;
  double t978;
  double t1195;
  double t1201;
  double t1204;
  double t1205;
  double t1217;
  double t1219;
  double t398;
  double t486;
  double t503;
  double t622;
  double t627;
  double t648;
  double t699;
  double t720;
  double t772;
  double t788;
  double t813;
  double t965;
  double t982;
  double t1035;
  double t1074;
  double t1078;
  double t1090;
  double t1091;
  double t1092;
  double t1101;
  double t1107;
  double t1128;
  double t1215;
  double t1224;
  double t1231;
  double t1245;
  double t1247;
  double t1253;
  double t1257;
  double t1275;
  double t1280;
  double t1285;
  double t1442;
  double t1443;
  double t1446;
  double t1554;
  double t1565;
  double t1510;
  double t1523;
  double t1632;
  double t1648;
  double t1674;
  double t1567;
  double t1570;
  double t1589;
  double t1470;
  double t1487;
  double t1530;
  double t1607;
  double t1613;
  double t1675;
  double t1686;
  double t1699;
  double t1709;
  double t1715;
  double t1727;
  double t1728;
  double t1732;
  double t1746;
  double t1749;
  double t1752;
  double t1758;
  double t1792;
  double t1800;
  double t1457;
  double t1459;
  double t1467;
  double t1489;
  double t1491;
  double t1698;
  double t1816;
  double t1817;
  double t1827;
  double t1831;
  double t1845;
  double t1847;
  double t1864;
  double t1923;
  double t1927;
  double t1928;
  double t1947;
  double t1968;
  double t1974;
  double t1976;
  double t1822;
  double t1883;
  double t1886;
  double t1962;
  double t1994;
  double t1999;
  double t2008;
  double t2019;
  double t2030;
  double t1438;
  double t1439;
  double t1440;
  double t1901;
  double t2151;
  double t2247;
  double t2305;
  double t2418;
  double t2505;
  double t2551;
  double t2579;
  double t2609;
  double t2666;
  double t2702;
  double t2725;
  double t3376;
  double t3332;
  t86 = Cos(var1[8]);
  t95 = Sin(var1[9]);
  t81 = Cos(var1[9]);
  t97 = Sin(var1[8]);
  t186 = Cos(var1[6]);
  t92 = -1.*t81*t86;
  t99 = t95*t97;
  t100 = 0. + t92 + t99;
  t57 = Sin(var1[6]);
  t225 = Sin(var1[7]);
  t228 = t86*t95;
  t272 = t81*t97;
  t319 = 0. + t228 + t272;
  t323 = t225*t319;
  t330 = 0. + t323;
  t400 = Sin(var1[5]);
  t169 = -1.*t57*t100;
  t360 = t186*t330;
  t386 = 0. + t169 + t360;
  t41 = Cos(var1[5]);
  t426 = t186*t100;
  t445 = t57*t330;
  t455 = 0. + t426 + t445;
  t23 = Sin(var1[3]);
  t860 = t81*t86;
  t862 = -1.*t95*t97;
  t903 = 0. + t860 + t862;
  t910 = t225*t903;
  t931 = 0. + t910;
  t519 = Cos(var1[3]);
  t557 = Cos(var1[4]);
  t607 = Cos(var1[7]);
  t683 = Sin(var1[4]);
  t840 = -1.*t57*t319;
  t943 = t186*t931;
  t961 = 0. + t840 + t943;
  t975 = t186*t319;
  t976 = t57*t931;
  t978 = 0. + t975 + t976;
  t1195 = -1.*t607;
  t1201 = 0. + t1195;
  t1204 = t186*t1201;
  t1205 = 0. + t1204;
  t1217 = t1201*t57;
  t1219 = 0. + t1217;
  t398 = t41*t386;
  t486 = -1.*t400*t455;
  t503 = 0. + t398 + t486;
  t622 = t607*t319;
  t627 = 0. + t622;
  t648 = t557*t627;
  t699 = t400*t386;
  t720 = t41*t455;
  t772 = 0. + t699 + t720;
  t788 = t683*t772;
  t813 = 0. + t648 + t788;
  t965 = t41*t961;
  t982 = -1.*t400*t978;
  t1035 = 0. + t965 + t982;
  t1074 = t607*t903;
  t1078 = 0. + t1074;
  t1090 = t557*t1078;
  t1091 = t400*t961;
  t1092 = t41*t978;
  t1101 = 0. + t1091 + t1092;
  t1107 = t683*t1101;
  t1128 = 0. + t1090 + t1107;
  t1215 = t41*t1205;
  t1224 = -1.*t400*t1219;
  t1231 = 0. + t1215 + t1224;
  t1245 = t1205*t400;
  t1247 = t41*t1219;
  t1253 = 0. + t1245 + t1247;
  t1257 = t683*t1253;
  t1275 = 0. + t225;
  t1280 = t557*t1275;
  t1285 = 0. + t1257 + t1280;
  t1442 = -1.*t683*t1078;
  t1443 = t557*t1101;
  t1446 = 0. + t1442 + t1443;
  t1554 = -1.*t81;
  t1565 = 1. + t1554;
  t1510 = -1.*t86;
  t1523 = 1. + t1510;
  t1632 = -0.08055*t1565;
  t1648 = -0.08055*t81;
  t1674 = 0. + t1632 + t1648;
  t1567 = -0.13004*t1565;
  t1570 = -0.13004*t81;
  t1589 = 0. + t1567 + t1570;
  t1470 = -1.*t186;
  t1487 = 1. + t1470;
  t1530 = -0.01004*t1523;
  t1607 = t1589*t86;
  t1613 = 0.08055*t97;
  t1675 = t1674*t97;
  t1686 = 0. + t1530 + t1607 + t1613 + t1675;
  t1699 = -1.*t607;
  t1709 = 1. + t1699;
  t1715 = 0.135*t1709;
  t1727 = 0.1305*t607;
  t1728 = 0.08055*t225;
  t1732 = -0.08055*t1523;
  t1746 = t1674*t86;
  t1749 = -0.01004*t97;
  t1752 = -1.*t1589*t97;
  t1758 = 0. + t1732 + t1746 + t1749 + t1752;
  t1792 = t225*t1758;
  t1800 = 0. + t1715 + t1727 + t1728 + t1792;
  t1457 = t557*t1253;
  t1459 = -1.*t683*t1275;
  t1467 = 0. + t1457 + t1459;
  t1489 = 0.135*t1487;
  t1491 = 0.07996*t57;
  t1698 = -1.*t57*t1686;
  t1816 = t186*t1800;
  t1817 = 0. + t1489 + t1491 + t1698 + t1816;
  t1827 = 0.07996*t1487;
  t1831 = -0.135*t57;
  t1845 = t186*t1686;
  t1847 = t57*t1800;
  t1864 = 0. + t1827 + t1831 + t1845 + t1847;
  t1923 = -0.08055*t1709;
  t1927 = 0.004500000000000004*t225;
  t1928 = t607*t1758;
  t1947 = 0. + t1923 + t1927 + t1928;
  t1968 = t400*t1817;
  t1974 = t41*t1864;
  t1976 = 0. + t1968 + t1974;
  t1822 = t41*t1817;
  t1883 = -1.*t400*t1864;
  t1886 = 0. + t1822 + t1883;
  t1962 = -1.*t683*t1947;
  t1994 = t557*t1976;
  t1999 = 0. + t1962 + t1994;
  t2008 = t557*t1947;
  t2019 = t683*t1976;
  t2030 = 0. + t2008 + t2019;
  t1438 = -1.*t683*t627;
  t1439 = t557*t772;
  t1440 = 0. + t1438 + t1439;
  t1901 = t1231*t1886;
  t2151 = -1.*t1886*t1035;
  t2247 = -1.*t1231*t1886;
  t2305 = t1886*t503;
  t2418 = -1.*t1886*t503;
  t2505 = t1886*t1035;
  t2551 = t1275*t1947;
  t2579 = -1.*t1947*t1078;
  t2609 = -1.*t1275*t1947;
  t2666 = t1947*t627;
  t2702 = -1.*t1947*t627;
  t2725 = t1947*t1078;
  t3376 = t1686*t319;
  t3332 = -1.*t1686*t100;
  p_output1[0]=0. - 1.*t23*t503 + t519*t813;
  p_output1[1]=0. - 1.*t1035*t23 + t1128*t519;
  p_output1[2]=0. - 1.*t1231*t23 + t1285*t519;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t503*t519 + t23*t813;
  p_output1[7]=0. + t1128*t23 + t1035*t519;
  p_output1[8]=0. + t1285*t23 + t1231*t519;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1440;
  p_output1[13]=t1446;
  p_output1[14]=t1467;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1446*(t1901 + t1467*t1999 + t1285*t2030) + t1467*(-1.*t1446*t1999 - 1.*t1128*t2030 + t2151);
  p_output1[19]=t1440*(-1.*t1467*t1999 - 1.*t1285*t2030 + t2247) + t1467*(t1440*t1999 + t2305 + t2030*t813);
  p_output1[20]=t1440*(t1446*t1999 + t1128*t2030 + t2505) + t1446*(-1.*t1440*t1999 + t2418 - 1.*t2030*t813);
  p_output1[21]=t1440;
  p_output1[22]=t1446;
  p_output1[23]=t1467;
  p_output1[24]=t1035*(t1901 + t1253*t1976 + t2551) + t1231*(-1.*t1101*t1976 + t2151 + t2579);
  p_output1[25]=(-1.*t1253*t1976 + t2247 + t2609)*t503 + t1231*(t2305 + t2666 + t1976*t772);
  p_output1[26]=(t1101*t1976 + t2505 + t2725)*t503 + t1035*(t2418 + t2702 - 1.*t1976*t772);
  p_output1[27]=t503;
  p_output1[28]=t1035;
  p_output1[29]=t1231;
  p_output1[30]=t1078*(t1205*t1817 + t1219*t1864 + t2551) + t1275*(t2579 - 1.*t1817*t961 - 1.*t1864*t978);
  p_output1[31]=t1275*(t2666 + t1817*t386 + t1864*t455) + (-1.*t1205*t1817 - 1.*t1219*t1864 + t2609)*t627;
  p_output1[32]=t1078*(t2702 - 1.*t1817*t386 - 1.*t1864*t455) + t627*(t2725 + t1817*t961 + t1864*t978);
  p_output1[33]=t627;
  p_output1[34]=t1078;
  p_output1[35]=t1275;
  p_output1[36]=-0.135*t100 + t1078*(0. + t1201*t1800 + t2551) + 0.07996*t330 + t1275*(t2579 - 1.*t1686*t319 - 1.*t1800*t931);
  p_output1[37]=-0.135*t319 + t1275*(t100*t1686 + t2666 + t1800*t330) + (0. - 1.*t1201*t1800 + t2609)*t627 + 0.07996*t931;
  p_output1[38]=0. + 0.07996*t1201 + t1078*(t2702 - 1.*t1800*t330 + t3332) + t627*(t2725 + t3376 + t1800*t931);
  p_output1[39]=t627;
  p_output1[40]=t1078;
  p_output1[41]=t1275;
  p_output1[42]=0. + 0.004500000000000004*t319;
  p_output1[43]=0. + 0.1305*t100 + 0.135*t903;
  p_output1[44]=-0.08055 + t319*(0. - 1.*t1758*t319 + t3332) + t100*(0. + t3376 + t1758*t903);
  p_output1[45]=t100;
  p_output1[46]=t319;
  p_output1[47]=0.;
  p_output1[48]=0. + t1648 - 1.*t1674*t81 - 0.01004*t95 - 1.*t1589*t95;
  p_output1[49]=0. - 0.01004*t81 - 1.*t1589*t81 + 0.08055*t95 + t1674*t95;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0.;
  p_output1[55]=0.;
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

#include "Jb_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
