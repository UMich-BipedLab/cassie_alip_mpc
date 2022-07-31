/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:01 GMT-04:00
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
  double t113;
  double t88;
  double t109;
  double t161;
  double t207;
  double t110;
  double t176;
  double t187;
  double t80;
  double t226;
  double t234;
  double t237;
  double t74;
  double t274;
  double t279;
  double t296;
  double t198;
  double t240;
  double t259;
  double t298;
  double t355;
  double t271;
  double t347;
  double t348;
  double t58;
  double t366;
  double t367;
  double t369;
  double t376;
  double t385;
  double t387;
  double t433;
  double t352;
  double t398;
  double t416;
  double t34;
  double t438;
  double t441;
  double t442;
  double t25;
  double t648;
  double t652;
  double t654;
  double t668;
  double t669;
  double t677;
  double t657;
  double t661;
  double t664;
  double t692;
  double t695;
  double t701;
  double t703;
  double t721;
  double t723;
  double t729;
  double t501;
  double t507;
  double t512;
  double t537;
  double t700;
  double t762;
  double t787;
  double t811;
  double t815;
  double t816;
  double t896;
  double t897;
  double t900;
  double t903;
  double t907;
  double t908;
  double t422;
  double t465;
  double t491;
  double t517;
  double t519;
  double t533;
  double t564;
  double t592;
  double t600;
  double t606;
  double t611;
  double t789;
  double t821;
  double t825;
  double t839;
  double t840;
  double t843;
  double t845;
  double t852;
  double t853;
  double t859;
  double t886;
  double t906;
  double t910;
  double t918;
  double t923;
  double t931;
  double t945;
  double t963;
  double t966;
  double t969;
  double t977;
  double t1077;
  double t1083;
  double t1085;
  double t1159;
  double t1160;
  double t1145;
  double t1150;
  double t1209;
  double t1214;
  double t1218;
  double t1163;
  double t1167;
  double t1170;
  double t1131;
  double t1134;
  double t1151;
  double t1202;
  double t1204;
  double t1220;
  double t1222;
  double t1226;
  double t1228;
  double t1236;
  double t1238;
  double t1247;
  double t1103;
  double t1120;
  double t1277;
  double t1281;
  double t1282;
  double t1290;
  double t1291;
  double t1140;
  double t1142;
  double t1224;
  double t1257;
  double t1258;
  double t1093;
  double t1094;
  double t1126;
  double t1269;
  double t1270;
  double t1299;
  double t1300;
  double t1314;
  double t1322;
  double t1324;
  double t1327;
  double t1332;
  double t1366;
  double t1394;
  double t1395;
  double t1403;
  double t1407;
  double t1410;
  double t1426;
  double t1087;
  double t1088;
  double t1092;
  double t1098;
  double t1102;
  double t1304;
  double t1433;
  double t1436;
  double t1454;
  double t1456;
  double t1466;
  double t1472;
  double t1474;
  double t1497;
  double t1500;
  double t1504;
  double t1506;
  double t1514;
  double t1519;
  double t1521;
  double t1443;
  double t1479;
  double t1480;
  double t1512;
  double t1533;
  double t1535;
  double t1548;
  double t1557;
  double t1565;
  double t1063;
  double t1064;
  double t1065;
  double t1492;
  double t1580;
  double t1626;
  double t1671;
  double t1722;
  double t1752;
  double t1794;
  double t1811;
  double t1834;
  double t1857;
  double t1878;
  double t1906;
  double t2209;
  double t2232;
  t113 = Cos(var1[10]);
  t88 = Cos(var1[11]);
  t109 = Sin(var1[10]);
  t161 = Sin(var1[11]);
  t207 = Cos(var1[9]);
  t110 = t88*t109;
  t176 = t113*t161;
  t187 = 0. + t110 + t176;
  t80 = Sin(var1[9]);
  t226 = -1.*t113*t88;
  t234 = t109*t161;
  t237 = 0. + t226 + t234;
  t74 = Cos(var1[8]);
  t274 = t207*t187;
  t279 = -1.*t80*t237;
  t296 = 0. + t274 + t279;
  t198 = t80*t187;
  t240 = t207*t237;
  t259 = 0. + t198 + t240;
  t298 = Sin(var1[8]);
  t355 = Cos(var1[6]);
  t271 = t74*t259;
  t347 = t296*t298;
  t348 = 0. + t271 + t347;
  t58 = Sin(var1[6]);
  t366 = Sin(var1[7]);
  t367 = t74*t296;
  t369 = -1.*t259*t298;
  t376 = 0. + t367 + t369;
  t385 = t366*t376;
  t387 = 0. + t385;
  t433 = Sin(var1[5]);
  t352 = -1.*t58*t348;
  t398 = t355*t387;
  t416 = 0. + t352 + t398;
  t34 = Cos(var1[5]);
  t438 = t355*t348;
  t441 = t58*t387;
  t442 = 0. + t438 + t441;
  t25 = Sin(var1[3]);
  t648 = t113*t88;
  t652 = -1.*t109*t161;
  t654 = 0. + t648 + t652;
  t668 = -1.*t80*t187;
  t669 = t207*t654;
  t677 = 0. + t668 + t669;
  t657 = t80*t654;
  t661 = 0. + t274 + t657;
  t664 = t74*t661;
  t692 = t677*t298;
  t695 = 0. + t664 + t692;
  t701 = t74*t677;
  t703 = -1.*t661*t298;
  t721 = 0. + t701 + t703;
  t723 = t366*t721;
  t729 = 0. + t723;
  t501 = Cos(var1[3]);
  t507 = Cos(var1[4]);
  t512 = Cos(var1[7]);
  t537 = Sin(var1[4]);
  t700 = -1.*t58*t695;
  t762 = t355*t729;
  t787 = 0. + t700 + t762;
  t811 = t355*t695;
  t815 = t58*t729;
  t816 = 0. + t811 + t815;
  t896 = -1.*t512;
  t897 = 0. + t896;
  t900 = t355*t897;
  t903 = 0. + t900;
  t907 = t897*t58;
  t908 = 0. + t907;
  t422 = t34*t416;
  t465 = -1.*t433*t442;
  t491 = 0. + t422 + t465;
  t517 = t512*t376;
  t519 = 0. + t517;
  t533 = t507*t519;
  t564 = t433*t416;
  t592 = t34*t442;
  t600 = 0. + t564 + t592;
  t606 = t537*t600;
  t611 = 0. + t533 + t606;
  t789 = t34*t787;
  t821 = -1.*t433*t816;
  t825 = 0. + t789 + t821;
  t839 = t512*t721;
  t840 = 0. + t839;
  t843 = t507*t840;
  t845 = t433*t787;
  t852 = t34*t816;
  t853 = 0. + t845 + t852;
  t859 = t537*t853;
  t886 = 0. + t843 + t859;
  t906 = t34*t903;
  t910 = -1.*t433*t908;
  t918 = 0. + t906 + t910;
  t923 = t903*t433;
  t931 = t34*t908;
  t945 = 0. + t923 + t931;
  t963 = t537*t945;
  t966 = 0. + t366;
  t969 = t507*t966;
  t977 = 0. + t963 + t969;
  t1077 = -1.*t537*t840;
  t1083 = t507*t853;
  t1085 = 0. + t1077 + t1083;
  t1159 = -1.*t88;
  t1160 = 1. + t1159;
  t1145 = -1.*t113;
  t1150 = 1. + t1145;
  t1209 = -0.62554*t1160;
  t1214 = -0.62554*t88;
  t1218 = 0. + t1209 + t1214;
  t1163 = -0.01315*t1160;
  t1167 = -0.01315*t88;
  t1170 = 0. + t1163 + t1167;
  t1131 = -1.*t207;
  t1134 = 1. + t1131;
  t1151 = -0.03315*t1150;
  t1202 = t113*t1170;
  t1204 = -0.19074*t109;
  t1220 = -1.*t1218*t109;
  t1222 = 0. + t1151 + t1202 + t1204 + t1220;
  t1226 = -0.19074*t1150;
  t1228 = t113*t1218;
  t1236 = 0.03315*t109;
  t1238 = t1170*t109;
  t1247 = 0. + t1226 + t1228 + t1236 + t1238;
  t1103 = -1.*t74;
  t1120 = 1. + t1103;
  t1277 = -0.08055*t1134;
  t1281 = -0.13004*t80;
  t1282 = t207*t1222;
  t1290 = -1.*t80*t1247;
  t1291 = 0. + t1277 + t1281 + t1282 + t1290;
  t1140 = -0.13004*t1134;
  t1142 = 0.08055*t80;
  t1224 = t80*t1222;
  t1257 = t207*t1247;
  t1258 = 0. + t1140 + t1142 + t1224 + t1257;
  t1093 = -1.*t355;
  t1094 = 1. + t1093;
  t1126 = -0.01004*t1120;
  t1269 = t74*t1258;
  t1270 = 0.08055*t298;
  t1299 = t1291*t298;
  t1300 = 0. + t1126 + t1269 + t1270 + t1299;
  t1314 = -1.*t512;
  t1322 = 1. + t1314;
  t1324 = 0.135*t1322;
  t1327 = 0.1305*t512;
  t1332 = 0.08055*t366;
  t1366 = -0.08055*t1120;
  t1394 = t74*t1291;
  t1395 = -0.01004*t298;
  t1403 = -1.*t1258*t298;
  t1407 = 0. + t1366 + t1394 + t1395 + t1403;
  t1410 = t366*t1407;
  t1426 = 0. + t1324 + t1327 + t1332 + t1410;
  t1087 = t507*t945;
  t1088 = -1.*t537*t966;
  t1092 = 0. + t1087 + t1088;
  t1098 = 0.135*t1094;
  t1102 = 0.07996*t58;
  t1304 = -1.*t58*t1300;
  t1433 = t355*t1426;
  t1436 = 0. + t1098 + t1102 + t1304 + t1433;
  t1454 = 0.07996*t1094;
  t1456 = -0.135*t58;
  t1466 = t355*t1300;
  t1472 = t58*t1426;
  t1474 = 0. + t1454 + t1456 + t1466 + t1472;
  t1497 = -0.08055*t1322;
  t1500 = 0.004500000000000004*t366;
  t1504 = t512*t1407;
  t1506 = 0. + t1497 + t1500 + t1504;
  t1514 = t433*t1436;
  t1519 = t34*t1474;
  t1521 = 0. + t1514 + t1519;
  t1443 = t34*t1436;
  t1479 = -1.*t433*t1474;
  t1480 = 0. + t1443 + t1479;
  t1512 = -1.*t537*t1506;
  t1533 = t507*t1521;
  t1535 = 0. + t1512 + t1533;
  t1548 = t507*t1506;
  t1557 = t537*t1521;
  t1565 = 0. + t1548 + t1557;
  t1063 = -1.*t537*t519;
  t1064 = t507*t600;
  t1065 = 0. + t1063 + t1064;
  t1492 = t918*t1480;
  t1580 = -1.*t1480*t825;
  t1626 = -1.*t918*t1480;
  t1671 = t1480*t491;
  t1722 = t1480*t825;
  t1752 = -1.*t1480*t491;
  t1794 = t966*t1506;
  t1811 = -1.*t1506*t840;
  t1834 = -1.*t966*t1506;
  t1857 = t1506*t519;
  t1878 = t1506*t840;
  t1906 = -1.*t1506*t519;
  t2209 = t1300*t695;
  t2232 = -1.*t1300*t348;
  p_output1[0]=0. - 1.*t25*t491 + t501*t611;
  p_output1[1]=0. - 1.*t25*t825 + t501*t886;
  p_output1[2]=0. - 1.*t25*t918 + t501*t977;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t491*t501 + t25*t611;
  p_output1[7]=0. + t501*t825 + t25*t886;
  p_output1[8]=0. + t501*t918 + t25*t977;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1065;
  p_output1[13]=t1085;
  p_output1[14]=t1092;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1092*(-1.*t1085*t1535 + t1580 - 1.*t1565*t886) + t1085*(t1492 + t1092*t1535 + t1565*t977);
  p_output1[19]=t1092*(t1065*t1535 + t1671 + t1565*t611) + t1065*(-1.*t1092*t1535 + t1626 - 1.*t1565*t977);
  p_output1[20]=t1085*(-1.*t1065*t1535 + t1752 - 1.*t1565*t611) + t1065*(t1085*t1535 + t1722 + t1565*t886);
  p_output1[21]=t1065;
  p_output1[22]=t1085;
  p_output1[23]=t1092;
  p_output1[24]=(t1580 + t1811 - 1.*t1521*t853)*t918 + t825*(t1492 + t1794 + t1521*t945);
  p_output1[25]=(t1671 + t1857 + t1521*t600)*t918 + t491*(t1626 + t1834 - 1.*t1521*t945);
  p_output1[26]=(t1752 + t1906 - 1.*t1521*t600)*t825 + t491*(t1722 + t1878 + t1521*t853);
  p_output1[27]=t491;
  p_output1[28]=t825;
  p_output1[29]=t918;
  p_output1[30]=t840*(t1794 + t1436*t903 + t1474*t908) + (t1811 - 1.*t1436*t787 - 1.*t1474*t816)*t966;
  p_output1[31]=t519*(t1834 - 1.*t1436*t903 - 1.*t1474*t908) + (t1857 + t1436*t416 + t1474*t442)*t966;
  p_output1[32]=t519*(t1878 + t1436*t787 + t1474*t816) + (t1906 - 1.*t1436*t416 - 1.*t1474*t442)*t840;
  p_output1[33]=t519;
  p_output1[34]=t840;
  p_output1[35]=t966;
  p_output1[36]=-0.135*t348 + 0.07996*t387 + t840*(0. + t1794 + t1426*t897) + (t1811 - 1.*t1300*t695 - 1.*t1426*t729)*t966;
  p_output1[37]=-0.135*t695 + 0.07996*t729 + t519*(0. + t1834 - 1.*t1426*t897) + (t1857 + t1300*t348 + t1426*t387)*t966;
  p_output1[38]=0. + t519*(t1878 + t2209 + t1426*t729) + (t1906 + t2232 - 1.*t1426*t387)*t840 + 0.07996*t897;
  p_output1[39]=t519;
  p_output1[40]=t840;
  p_output1[41]=t966;
  p_output1[42]=0. + 0.135*t376 - 0.1305*t695;
  p_output1[43]=0. + 0.1305*t348 + 0.135*t721;
  p_output1[44]=-0.08055 + (0. + t2232 - 1.*t1407*t376)*t695 + t348*(0. + t2209 + t1407*t721);
  p_output1[45]=t348;
  p_output1[46]=t695;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t259 - 0.01004*t296 - 1.*t1258*t661 - 1.*t1291*t677;
  p_output1[49]=0. + t1258*t259 + t1291*t296 + 0.08055*t661 - 0.01004*t677;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.13004*t187 - 1.*t1247*t187 + 0.08055*t237 - 1.*t1222*t654;
  p_output1[55]=0. + 0.08055*t187 + t1222*t187 + t1247*t237 - 0.13004*t654;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.19074*t161 - 1.*t1218*t161 - 0.03315*t88 - 1.*t1170*t88;
  p_output1[61]=0. + 0.03315*t161 + t1170*t161 - 0.19074*t88 - 1.*t1218*t88;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
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

#include "Jb_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
