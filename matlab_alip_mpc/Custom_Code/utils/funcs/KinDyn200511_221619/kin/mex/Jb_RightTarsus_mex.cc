/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:04 GMT-04:00
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
  double t237;
  double t159;
  double t171;
  double t240;
  double t268;
  double t212;
  double t246;
  double t257;
  double t124;
  double t288;
  double t290;
  double t294;
  double t335;
  double t261;
  double t300;
  double t321;
  double t105;
  double t340;
  double t343;
  double t348;
  double t392;
  double t322;
  double t359;
  double t363;
  double t67;
  double t405;
  double t412;
  double t419;
  double t422;
  double t433;
  double t440;
  double t13;
  double t484;
  double t494;
  double t501;
  double t366;
  double t447;
  double t463;
  double t502;
  double t3;
  double t628;
  double t636;
  double t637;
  double t625;
  double t656;
  double t659;
  double t674;
  double t684;
  double t673;
  double t692;
  double t695;
  double t719;
  double t721;
  double t725;
  double t733;
  double t744;
  double t513;
  double t515;
  double t528;
  double t580;
  double t789;
  double t792;
  double t793;
  double t710;
  double t747;
  double t783;
  double t851;
  double t859;
  double t899;
  double t901;
  double t861;
  double t872;
  double t472;
  double t503;
  double t508;
  double t544;
  double t567;
  double t574;
  double t590;
  double t603;
  double t605;
  double t609;
  double t611;
  double t786;
  double t801;
  double t803;
  double t809;
  double t811;
  double t815;
  double t816;
  double t828;
  double t834;
  double t835;
  double t841;
  double t888;
  double t902;
  double t928;
  double t936;
  double t937;
  double t948;
  double t969;
  double t970;
  double t973;
  double t984;
  double t1057;
  double t1058;
  double t1065;
  double t1208;
  double t1209;
  double t1185;
  double t1186;
  double t1234;
  double t1249;
  double t1250;
  double t1252;
  double t1266;
  double t1275;
  double t1277;
  double t1282;
  double t1162;
  double t1166;
  double t1201;
  double t1202;
  double t1262;
  double t1284;
  double t1290;
  double t1299;
  double t1300;
  double t1301;
  double t1309;
  double t1326;
  double t1145;
  double t1146;
  double t1173;
  double t1181;
  double t1292;
  double t1343;
  double t1359;
  double t1362;
  double t1364;
  double t1370;
  double t1377;
  double t1380;
  double t1101;
  double t1103;
  double t1116;
  double t1129;
  double t1137;
  double t1139;
  double t1140;
  double t1155;
  double t1160;
  double t1360;
  double t1385;
  double t1386;
  double t1387;
  double t1388;
  double t1414;
  double t1419;
  double t1420;
  double t1422;
  double t1427;
  double t1067;
  double t1087;
  double t1095;
  double t1463;
  double t1464;
  double t1482;
  double t1484;
  double t1500;
  double t1106;
  double t1113;
  double t1410;
  double t1435;
  double t1440;
  double t1522;
  double t1528;
  double t1545;
  double t1546;
  double t1555;
  double t1559;
  double t1560;
  double t1450;
  double t1505;
  double t1519;
  double t1551;
  double t1566;
  double t1570;
  double t1577;
  double t1579;
  double t1590;
  double t1041;
  double t1045;
  double t1047;
  double t1521;
  double t1614;
  double t1631;
  double t1648;
  double t1681;
  double t1706;
  double t1749;
  double t1777;
  double t1802;
  double t1809;
  double t1823;
  double t1832;
  double t2093;
  double t2133;
  t237 = Cos(var1[17]);
  t159 = Cos(var1[18]);
  t171 = Sin(var1[17]);
  t240 = Sin(var1[18]);
  t268 = Cos(var1[16]);
  t212 = t159*t171;
  t246 = t237*t240;
  t257 = 0. + t212 + t246;
  t124 = Sin(var1[16]);
  t288 = -1.*t237*t159;
  t290 = t171*t240;
  t294 = 0. + t288 + t290;
  t335 = Sin(var1[15]);
  t261 = t124*t257;
  t300 = t268*t294;
  t321 = 0. + t261 + t300;
  t105 = Cos(var1[15]);
  t340 = t268*t257;
  t343 = -1.*t124*t294;
  t348 = 0. + t340 + t343;
  t392 = Cos(var1[13]);
  t322 = t105*t321;
  t359 = t335*t348;
  t363 = 0. + t322 + t359;
  t67 = Sin(var1[13]);
  t405 = Sin(var1[14]);
  t412 = -1.*t335*t321;
  t419 = t105*t348;
  t422 = 0. + t412 + t419;
  t433 = t405*t422;
  t440 = 0. + t433;
  t13 = Cos(var1[5]);
  t484 = t392*t363;
  t494 = t67*t440;
  t501 = 0. + t484 + t494;
  t366 = -1.*t67*t363;
  t447 = t392*t440;
  t463 = 0. + t366 + t447;
  t502 = Sin(var1[5]);
  t3 = Sin(var1[3]);
  t628 = t237*t159;
  t636 = -1.*t171*t240;
  t637 = 0. + t628 + t636;
  t625 = -1.*t124*t257;
  t656 = t268*t637;
  t659 = 0. + t625 + t656;
  t674 = t124*t637;
  t684 = 0. + t340 + t674;
  t673 = t335*t659;
  t692 = t105*t684;
  t695 = 0. + t673 + t692;
  t719 = t105*t659;
  t721 = -1.*t335*t684;
  t725 = 0. + t719 + t721;
  t733 = t405*t725;
  t744 = 0. + t733;
  t513 = Cos(var1[3]);
  t515 = Cos(var1[4]);
  t528 = Cos(var1[14]);
  t580 = Sin(var1[4]);
  t789 = t392*t695;
  t792 = t67*t744;
  t793 = 0. + t789 + t792;
  t710 = -1.*t67*t695;
  t747 = t392*t744;
  t783 = 0. + t710 + t747;
  t851 = -1.*t528;
  t859 = 0. + t851;
  t899 = t859*t67;
  t901 = 0. + t899;
  t861 = t392*t859;
  t872 = 0. + t861;
  t472 = t13*t463;
  t503 = -1.*t501*t502;
  t508 = 0. + t472 + t503;
  t544 = t528*t422;
  t567 = 0. + t544;
  t574 = t515*t567;
  t590 = t13*t501;
  t603 = t463*t502;
  t605 = 0. + t590 + t603;
  t609 = t580*t605;
  t611 = 0. + t574 + t609;
  t786 = t13*t783;
  t801 = -1.*t793*t502;
  t803 = 0. + t786 + t801;
  t809 = t528*t725;
  t811 = 0. + t809;
  t815 = t515*t811;
  t816 = t13*t793;
  t828 = t783*t502;
  t834 = 0. + t816 + t828;
  t835 = t580*t834;
  t841 = 0. + t815 + t835;
  t888 = t872*t13;
  t902 = -1.*t901*t502;
  t928 = 0. + t888 + t902;
  t936 = 0. + t405;
  t937 = t515*t936;
  t948 = t13*t901;
  t969 = t872*t502;
  t970 = 0. + t948 + t969;
  t973 = t580*t970;
  t984 = 0. + t937 + t973;
  t1057 = -1.*t811*t580;
  t1058 = t515*t834;
  t1065 = 0. + t1057 + t1058;
  t1208 = -1.*t159;
  t1209 = 1. + t1208;
  t1185 = -1.*t237;
  t1186 = 1. + t1185;
  t1234 = -0.62554*t1209;
  t1249 = -0.73604*t159;
  t1250 = -0.030599999999999995*t240;
  t1252 = 0. + t1234 + t1249 + t1250;
  t1266 = -0.01315*t1209;
  t1275 = -0.04375*t159;
  t1277 = 0.11050000000000004*t240;
  t1282 = 0. + t1266 + t1275 + t1277;
  t1162 = -1.*t268;
  t1166 = 1. + t1162;
  t1201 = -0.03315*t1186;
  t1202 = -0.19074*t171;
  t1262 = -1.*t171*t1252;
  t1284 = t237*t1282;
  t1290 = 0. + t1201 + t1202 + t1262 + t1284;
  t1299 = -0.19074*t1186;
  t1300 = 0.03315*t171;
  t1301 = t237*t1252;
  t1309 = t171*t1282;
  t1326 = 0. + t1299 + t1300 + t1301 + t1309;
  t1145 = -1.*t105;
  t1146 = 1. + t1145;
  t1173 = -0.13004*t1166;
  t1181 = 0.08055*t124;
  t1292 = t124*t1290;
  t1343 = t268*t1326;
  t1359 = 0. + t1173 + t1181 + t1292 + t1343;
  t1362 = -0.08055*t1166;
  t1364 = -0.13004*t124;
  t1370 = t268*t1290;
  t1377 = -1.*t124*t1326;
  t1380 = 0. + t1362 + t1364 + t1370 + t1377;
  t1101 = -1.*t392;
  t1103 = 1. + t1101;
  t1116 = -1.*t528;
  t1129 = 1. + t1116;
  t1137 = -0.135*t1129;
  t1139 = -0.1318*t528;
  t1140 = 0.08055*t405;
  t1155 = -0.08055*t1146;
  t1160 = -0.01004*t335;
  t1360 = -1.*t335*t1359;
  t1385 = t105*t1380;
  t1386 = 0. + t1155 + t1160 + t1360 + t1385;
  t1387 = t405*t1386;
  t1388 = 0. + t1137 + t1139 + t1140 + t1387;
  t1414 = -0.01004*t1146;
  t1419 = 0.08055*t335;
  t1420 = t105*t1359;
  t1422 = t335*t1380;
  t1427 = 0. + t1414 + t1419 + t1420 + t1422;
  t1067 = -1.*t936*t580;
  t1087 = t515*t970;
  t1095 = 0. + t1067 + t1087;
  t1463 = 0.07996*t1103;
  t1464 = 0.135*t67;
  t1482 = t67*t1388;
  t1484 = t392*t1427;
  t1500 = 0. + t1463 + t1464 + t1482 + t1484;
  t1106 = -0.135*t1103;
  t1113 = 0.07996*t67;
  t1410 = t392*t1388;
  t1435 = -1.*t67*t1427;
  t1440 = 0. + t1106 + t1113 + t1410 + t1435;
  t1522 = -0.08055*t1129;
  t1528 = -0.0032000000000000084*t405;
  t1545 = t528*t1386;
  t1546 = 0. + t1522 + t1528 + t1545;
  t1555 = t13*t1500;
  t1559 = t1440*t502;
  t1560 = 0. + t1555 + t1559;
  t1450 = t13*t1440;
  t1505 = -1.*t1500*t502;
  t1519 = 0. + t1450 + t1505;
  t1551 = -1.*t1546*t580;
  t1566 = t515*t1560;
  t1570 = 0. + t1551 + t1566;
  t1577 = t515*t1546;
  t1579 = t580*t1560;
  t1590 = 0. + t1577 + t1579;
  t1041 = -1.*t567*t580;
  t1045 = t515*t605;
  t1047 = 0. + t1041 + t1045;
  t1521 = t928*t1519;
  t1614 = -1.*t1519*t803;
  t1631 = -1.*t928*t1519;
  t1648 = t1519*t508;
  t1681 = t1519*t803;
  t1706 = -1.*t1519*t508;
  t1749 = t936*t1546;
  t1777 = -1.*t1546*t811;
  t1802 = -1.*t936*t1546;
  t1809 = t1546*t567;
  t1823 = t1546*t811;
  t1832 = -1.*t1546*t567;
  t2093 = t1427*t695;
  t2133 = -1.*t1427*t363;
  p_output1[0]=0. - 1.*t3*t508 + t513*t611;
  p_output1[1]=0. - 1.*t3*t803 + t513*t841;
  p_output1[2]=0. - 1.*t3*t928 + t513*t984;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t508*t513 + t3*t611;
  p_output1[7]=0. + t513*t803 + t3*t841;
  p_output1[8]=0. + t513*t928 + t3*t984;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1047;
  p_output1[13]=t1065;
  p_output1[14]=t1095;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1095*(-1.*t1065*t1570 + t1614 - 1.*t1590*t841) + t1065*(t1521 + t1095*t1570 + t1590*t984);
  p_output1[19]=t1095*(t1047*t1570 + t1648 + t1590*t611) + t1047*(-1.*t1095*t1570 + t1631 - 1.*t1590*t984);
  p_output1[20]=t1065*(-1.*t1047*t1570 + t1706 - 1.*t1590*t611) + t1047*(t1065*t1570 + t1681 + t1590*t841);
  p_output1[21]=t1047;
  p_output1[22]=t1065;
  p_output1[23]=t1095;
  p_output1[24]=(t1614 + t1777 - 1.*t1560*t834)*t928 + t803*(t1521 + t1749 + t1560*t970);
  p_output1[25]=(t1648 + t1809 + t1560*t605)*t928 + t508*(t1631 + t1802 - 1.*t1560*t970);
  p_output1[26]=(t1706 + t1832 - 1.*t1560*t605)*t803 + t508*(t1681 + t1823 + t1560*t834);
  p_output1[27]=t508;
  p_output1[28]=t803;
  p_output1[29]=t928;
  p_output1[30]=t811*(t1749 + t1440*t872 + t1500*t901) + (t1777 - 1.*t1440*t783 - 1.*t1500*t793)*t936;
  p_output1[31]=t567*(t1802 - 1.*t1440*t872 - 1.*t1500*t901) + (t1809 + t1440*t463 + t1500*t501)*t936;
  p_output1[32]=t567*(t1823 + t1440*t783 + t1500*t793) + (t1832 - 1.*t1440*t463 - 1.*t1500*t501)*t811;
  p_output1[33]=t567;
  p_output1[34]=t811;
  p_output1[35]=t936;
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
  p_output1[78]=0.135*t363 + 0.07996*t440 + t811*(0. + t1749 + t1388*t859) + (t1777 - 1.*t1427*t695 - 1.*t1388*t744)*t936;
  p_output1[79]=0.135*t695 + 0.07996*t744 + t567*(0. + t1802 - 1.*t1388*t859) + (t1809 + t1427*t363 + t1388*t440)*t936;
  p_output1[80]=0. + t567*(t1823 + t2093 + t1388*t744) + (t1832 + t2133 - 1.*t1388*t440)*t811 + 0.07996*t859;
  p_output1[81]=t567;
  p_output1[82]=t811;
  p_output1[83]=t936;
  p_output1[84]=0. - 0.135*t422 + 0.1318*t695;
  p_output1[85]=0. - 0.1318*t363 - 0.135*t725;
  p_output1[86]=-0.08055 + (0. + t2133 - 1.*t1386*t422)*t695 + t363*(0. + t2093 + t1386*t725);
  p_output1[87]=t363;
  p_output1[88]=t695;
  p_output1[89]=0.;
  p_output1[90]=0. + 0.08055*t321 - 0.01004*t348 - 1.*t1380*t659 - 1.*t1359*t684;
  p_output1[91]=0. + t1359*t321 + t1380*t348 - 0.01004*t659 + 0.08055*t684;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.13004*t257 - 1.*t1326*t257 + 0.08055*t294 - 1.*t1290*t637;
  p_output1[97]=0. + 0.08055*t257 + t1290*t257 + t1326*t294 - 0.13004*t637;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.03315*t159 - 1.*t1282*t159 - 0.19074*t240 - 1.*t1252*t240;
  p_output1[103]=0. - 0.19074*t159 - 1.*t1252*t159 + 0.03315*t240 + t1282*t240;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0.030599999999999995;
  p_output1[109]=0.11050000000000004;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
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

#include "Jb_RightTarsus_mex.hh"

namespace SymExpression
{

void Jb_RightTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
