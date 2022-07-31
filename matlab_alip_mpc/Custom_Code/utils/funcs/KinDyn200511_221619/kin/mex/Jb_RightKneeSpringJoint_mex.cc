/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:00 GMT-04:00
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
  double t179;
  double t136;
  double t139;
  double t181;
  double t271;
  double t146;
  double t194;
  double t235;
  double t130;
  double t272;
  double t274;
  double t278;
  double t349;
  double t238;
  double t291;
  double t336;
  double t123;
  double t373;
  double t379;
  double t413;
  double t426;
  double t453;
  double t463;
  double t92;
  double t506;
  double t538;
  double t584;
  double t344;
  double t476;
  double t492;
  double t588;
  double t55;
  double t758;
  double t759;
  double t767;
  double t769;
  double t784;
  double t812;
  double t823;
  double t834;
  double t839;
  double t843;
  double t633;
  double t646;
  double t648;
  double t704;
  double t911;
  double t921;
  double t922;
  double t798;
  double t884;
  double t894;
  double t1058;
  double t1062;
  double t1102;
  double t1109;
  double t1089;
  double t1098;
  double t500;
  double t617;
  double t624;
  double t668;
  double t674;
  double t700;
  double t709;
  double t719;
  double t723;
  double t727;
  double t732;
  double t899;
  double t942;
  double t952;
  double t990;
  double t992;
  double t1002;
  double t1030;
  double t1031;
  double t1036;
  double t1045;
  double t1050;
  double t1100;
  double t1116;
  double t1122;
  double t1132;
  double t1137;
  double t1139;
  double t1142;
  double t1150;
  double t1155;
  double t1163;
  double t1271;
  double t1277;
  double t1278;
  double t1392;
  double t1399;
  double t1377;
  double t1385;
  double t1487;
  double t1502;
  double t1523;
  double t1408;
  double t1424;
  double t1449;
  double t1325;
  double t1360;
  double t1389;
  double t1473;
  double t1475;
  double t1527;
  double t1528;
  double t1569;
  double t1575;
  double t1588;
  double t1592;
  double t1597;
  double t1314;
  double t1317;
  double t1364;
  double t1367;
  double t1535;
  double t1606;
  double t1612;
  double t1622;
  double t1625;
  double t1628;
  double t1636;
  double t1660;
  double t1672;
  double t1688;
  double t1700;
  double t1703;
  double t1705;
  double t1707;
  double t1714;
  double t1287;
  double t1304;
  double t1307;
  double t1746;
  double t1766;
  double t1767;
  double t1789;
  double t1797;
  double t1322;
  double t1324;
  double t1615;
  double t1730;
  double t1739;
  double t1847;
  double t1848;
  double t1852;
  double t1856;
  double t1872;
  double t1893;
  double t1895;
  double t1745;
  double t1814;
  double t1829;
  double t1868;
  double t1902;
  double t1915;
  double t1947;
  double t1969;
  double t1970;
  double t1237;
  double t1240;
  double t1252;
  double t1839;
  double t1988;
  double t2056;
  double t2090;
  double t2150;
  double t2179;
  double t2217;
  double t2249;
  double t2266;
  double t2284;
  double t2321;
  double t2354;
  double t2730;
  double t2771;
  t179 = Cos(var1[16]);
  t136 = Cos(var1[17]);
  t139 = Sin(var1[16]);
  t181 = Sin(var1[17]);
  t271 = Cos(var1[15]);
  t146 = t136*t139;
  t194 = t179*t181;
  t235 = 0. + t146 + t194;
  t130 = Sin(var1[15]);
  t272 = -1.*t179*t136;
  t274 = t139*t181;
  t278 = 0. + t272 + t274;
  t349 = Cos(var1[13]);
  t238 = t130*t235;
  t291 = t271*t278;
  t336 = 0. + t238 + t291;
  t123 = Sin(var1[13]);
  t373 = Sin(var1[14]);
  t379 = t271*t235;
  t413 = -1.*t130*t278;
  t426 = 0. + t379 + t413;
  t453 = t373*t426;
  t463 = 0. + t453;
  t92 = Cos(var1[5]);
  t506 = t349*t336;
  t538 = t123*t463;
  t584 = 0. + t506 + t538;
  t344 = -1.*t123*t336;
  t476 = t349*t463;
  t492 = 0. + t344 + t476;
  t588 = Sin(var1[5]);
  t55 = Sin(var1[3]);
  t758 = t179*t136;
  t759 = -1.*t139*t181;
  t767 = 0. + t758 + t759;
  t769 = t130*t767;
  t784 = 0. + t379 + t769;
  t812 = -1.*t130*t235;
  t823 = t271*t767;
  t834 = 0. + t812 + t823;
  t839 = t373*t834;
  t843 = 0. + t839;
  t633 = Cos(var1[3]);
  t646 = Cos(var1[4]);
  t648 = Cos(var1[14]);
  t704 = Sin(var1[4]);
  t911 = t349*t784;
  t921 = t123*t843;
  t922 = 0. + t911 + t921;
  t798 = -1.*t123*t784;
  t884 = t349*t843;
  t894 = 0. + t798 + t884;
  t1058 = -1.*t648;
  t1062 = 0. + t1058;
  t1102 = t1062*t123;
  t1109 = 0. + t1102;
  t1089 = t349*t1062;
  t1098 = 0. + t1089;
  t500 = t92*t492;
  t617 = -1.*t584*t588;
  t624 = 0. + t500 + t617;
  t668 = t648*t426;
  t674 = 0. + t668;
  t700 = t646*t674;
  t709 = t92*t584;
  t719 = t492*t588;
  t723 = 0. + t709 + t719;
  t727 = t704*t723;
  t732 = 0. + t700 + t727;
  t899 = t92*t894;
  t942 = -1.*t922*t588;
  t952 = 0. + t899 + t942;
  t990 = t648*t834;
  t992 = 0. + t990;
  t1002 = t646*t992;
  t1030 = t92*t922;
  t1031 = t894*t588;
  t1036 = 0. + t1030 + t1031;
  t1045 = t704*t1036;
  t1050 = 0. + t1002 + t1045;
  t1100 = t1098*t92;
  t1116 = -1.*t1109*t588;
  t1122 = 0. + t1100 + t1116;
  t1132 = 0. + t373;
  t1137 = t646*t1132;
  t1139 = t92*t1109;
  t1142 = t1098*t588;
  t1150 = 0. + t1139 + t1142;
  t1155 = t704*t1150;
  t1163 = 0. + t1137 + t1155;
  t1271 = -1.*t992*t704;
  t1277 = t646*t1036;
  t1278 = 0. + t1271 + t1277;
  t1392 = -1.*t136;
  t1399 = 1. + t1392;
  t1377 = -1.*t179;
  t1385 = 1. + t1377;
  t1487 = -0.19074*t1399;
  t1502 = -0.19074*t136;
  t1523 = 0. + t1487 + t1502;
  t1408 = -0.03315*t1399;
  t1424 = -0.03315*t136;
  t1449 = 0. + t1408 + t1424;
  t1325 = -1.*t271;
  t1360 = 1. + t1325;
  t1389 = -0.08055*t1385;
  t1473 = t179*t1449;
  t1475 = -0.13004*t139;
  t1527 = -1.*t1523*t139;
  t1528 = 0. + t1389 + t1473 + t1475 + t1527;
  t1569 = -0.13004*t1385;
  t1575 = t179*t1523;
  t1588 = 0.08055*t139;
  t1592 = t1449*t139;
  t1597 = 0. + t1569 + t1575 + t1588 + t1592;
  t1314 = -1.*t349;
  t1317 = 1. + t1314;
  t1364 = -0.01004*t1360;
  t1367 = 0.08055*t130;
  t1535 = t130*t1528;
  t1606 = t271*t1597;
  t1612 = 0. + t1364 + t1367 + t1535 + t1606;
  t1622 = -1.*t648;
  t1625 = 1. + t1622;
  t1628 = -0.135*t1625;
  t1636 = -0.1305*t648;
  t1660 = 0.08055*t373;
  t1672 = -0.08055*t1360;
  t1688 = -0.01004*t130;
  t1700 = t271*t1528;
  t1703 = -1.*t130*t1597;
  t1705 = 0. + t1672 + t1688 + t1700 + t1703;
  t1707 = t373*t1705;
  t1714 = 0. + t1628 + t1636 + t1660 + t1707;
  t1287 = -1.*t1132*t704;
  t1304 = t646*t1150;
  t1307 = 0. + t1287 + t1304;
  t1746 = 0.07996*t1317;
  t1766 = 0.135*t123;
  t1767 = t349*t1612;
  t1789 = t123*t1714;
  t1797 = 0. + t1746 + t1766 + t1767 + t1789;
  t1322 = -0.135*t1317;
  t1324 = 0.07996*t123;
  t1615 = -1.*t123*t1612;
  t1730 = t349*t1714;
  t1739 = 0. + t1322 + t1324 + t1615 + t1730;
  t1847 = -0.08055*t1625;
  t1848 = -0.004500000000000004*t373;
  t1852 = t648*t1705;
  t1856 = 0. + t1847 + t1848 + t1852;
  t1872 = t92*t1797;
  t1893 = t1739*t588;
  t1895 = 0. + t1872 + t1893;
  t1745 = t92*t1739;
  t1814 = -1.*t1797*t588;
  t1829 = 0. + t1745 + t1814;
  t1868 = -1.*t1856*t704;
  t1902 = t646*t1895;
  t1915 = 0. + t1868 + t1902;
  t1947 = t646*t1856;
  t1969 = t704*t1895;
  t1970 = 0. + t1947 + t1969;
  t1237 = -1.*t674*t704;
  t1240 = t646*t723;
  t1252 = 0. + t1237 + t1240;
  t1839 = t1122*t1829;
  t1988 = -1.*t1829*t952;
  t2056 = -1.*t1122*t1829;
  t2090 = t1829*t624;
  t2150 = t1829*t952;
  t2179 = -1.*t1829*t624;
  t2217 = t1132*t1856;
  t2249 = -1.*t1856*t992;
  t2266 = -1.*t1132*t1856;
  t2284 = t1856*t674;
  t2321 = t1856*t992;
  t2354 = -1.*t1856*t674;
  t2730 = t1612*t784;
  t2771 = -1.*t1612*t336;
  p_output1[0]=0. - 1.*t55*t624 + t633*t732;
  p_output1[1]=0. + t1050*t633 - 1.*t55*t952;
  p_output1[2]=0. - 1.*t1122*t55 + t1163*t633;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t624*t633 + t55*t732;
  p_output1[7]=0. + t1050*t55 + t633*t952;
  p_output1[8]=0. + t1163*t55 + t1122*t633;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1252;
  p_output1[13]=t1278;
  p_output1[14]=t1307;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1278*(t1839 + t1307*t1915 + t1163*t1970) + t1307*(-1.*t1278*t1915 - 1.*t1050*t1970 + t1988);
  p_output1[19]=t1252*(-1.*t1307*t1915 - 1.*t1163*t1970 + t2056) + t1307*(t1252*t1915 + t2090 + t1970*t732);
  p_output1[20]=t1252*(t1278*t1915 + t1050*t1970 + t2150) + t1278*(-1.*t1252*t1915 + t2179 - 1.*t1970*t732);
  p_output1[21]=t1252;
  p_output1[22]=t1278;
  p_output1[23]=t1307;
  p_output1[24]=t1122*(-1.*t1036*t1895 + t1988 + t2249) + (t1839 + t1150*t1895 + t2217)*t952;
  p_output1[25]=(-1.*t1150*t1895 + t2056 + t2266)*t624 + t1122*(t2090 + t2284 + t1895*t723);
  p_output1[26]=(t1036*t1895 + t2150 + t2321)*t624 + (t2179 + t2354 - 1.*t1895*t723)*t952;
  p_output1[27]=t624;
  p_output1[28]=t952;
  p_output1[29]=t1122;
  p_output1[30]=t1132*(t2249 - 1.*t1739*t894 - 1.*t1797*t922) + (t1098*t1739 + t1109*t1797 + t2217)*t992;
  p_output1[31]=t1132*(t2284 + t1739*t492 + t1797*t584) + (-1.*t1098*t1739 - 1.*t1109*t1797 + t2266)*t674;
  p_output1[32]=t674*(t2321 + t1739*t894 + t1797*t922) + (t2354 - 1.*t1739*t492 - 1.*t1797*t584)*t992;
  p_output1[33]=t674;
  p_output1[34]=t992;
  p_output1[35]=t1132;
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
  p_output1[78]=0.135*t336 + 0.07996*t463 + t1132*(t2249 - 1.*t1612*t784 - 1.*t1714*t843) + (0. + t1062*t1714 + t2217)*t992;
  p_output1[79]=t1132*(t2284 + t1612*t336 + t1714*t463) + (0. - 1.*t1062*t1714 + t2266)*t674 + 0.135*t784 + 0.07996*t843;
  p_output1[80]=0. + 0.07996*t1062 + t674*(t2321 + t2730 + t1714*t843) + (t2354 + t2771 - 1.*t1714*t463)*t992;
  p_output1[81]=t674;
  p_output1[82]=t992;
  p_output1[83]=t1132;
  p_output1[84]=0. - 0.135*t426 + 0.1305*t784;
  p_output1[85]=0. - 0.1305*t336 - 0.135*t834;
  p_output1[86]=-0.08055 + (0. + t2771 - 1.*t1705*t426)*t784 + t336*(0. + t2730 + t1705*t834);
  p_output1[87]=t336;
  p_output1[88]=t784;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t235 - 1.*t1597*t235 + 0.08055*t278 - 1.*t1528*t767;
  p_output1[91]=0. + 0.08055*t235 + t1528*t235 + t1597*t278 - 0.01004*t767;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.08055*t136 - 1.*t136*t1449 - 0.13004*t181 - 1.*t1523*t181;
  p_output1[97]=0. - 0.13004*t136 - 1.*t136*t1523 + 0.08055*t181 + t1449*t181;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0.;
  p_output1[103]=0.;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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

#include "Jb_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Jb_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
