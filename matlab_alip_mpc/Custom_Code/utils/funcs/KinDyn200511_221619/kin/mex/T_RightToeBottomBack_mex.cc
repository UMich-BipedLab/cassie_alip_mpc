/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:44 GMT-04:00
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
  double t70;
  double t101;
  double t69;
  double t72;
  double t109;
  double t135;
  double t75;
  double t117;
  double t122;
  double t63;
  double t138;
  double t150;
  double t154;
  double t173;
  double t123;
  double t160;
  double t161;
  double t58;
  double t197;
  double t203;
  double t207;
  double t210;
  double t212;
  double t221;
  double t228;
  double t247;
  double t253;
  double t298;
  double t164;
  double t274;
  double t289;
  double t57;
  double t303;
  double t308;
  double t313;
  double t336;
  double t292;
  double t318;
  double t327;
  double t43;
  double t340;
  double t342;
  double t345;
  double t366;
  double t328;
  double t347;
  double t357;
  double t29;
  double t381;
  double t386;
  double t389;
  double t438;
  double t359;
  double t406;
  double t409;
  double t22;
  double t439;
  double t445;
  double t447;
  double t519;
  double t528;
  double t529;
  double t534;
  double t536;
  double t542;
  double t533;
  double t560;
  double t561;
  double t575;
  double t583;
  double t592;
  double t605;
  double t621;
  double t622;
  double t571;
  double t628;
  double t634;
  double t650;
  double t658;
  double t672;
  double t636;
  double t685;
  double t687;
  double t692;
  double t696;
  double t697;
  double t691;
  double t704;
  double t711;
  double t720;
  double t728;
  double t743;
  double t715;
  double t759;
  double t763;
  double t770;
  double t782;
  double t784;
  double t845;
  double t850;
  double t858;
  double t868;
  double t869;
  double t878;
  double t885;
  double t887;
  double t894;
  double t859;
  double t895;
  double t900;
  double t910;
  double t919;
  double t920;
  double t903;
  double t925;
  double t926;
  double t940;
  double t946;
  double t947;
  double t928;
  double t955;
  double t956;
  double t964;
  double t976;
  double t977;
  double t957;
  double t1018;
  double t1020;
  double t1033;
  double t1035;
  double t1036;
  double t418;
  double t449;
  double t459;
  double t489;
  double t497;
  double t500;
  double t768;
  double t794;
  double t803;
  double t816;
  double t832;
  double t838;
  double t1021;
  double t1039;
  double t1061;
  double t1082;
  double t1086;
  double t1090;
  double t1272;
  double t1275;
  double t1226;
  double t1242;
  double t1100;
  double t1103;
  double t1108;
  double t1330;
  double t1348;
  double t1428;
  double t1454;
  double t1484;
  double t1489;
  double t1562;
  double t1567;
  double t1608;
  double t1613;
  double t1243;
  double t1248;
  double t1262;
  double t1279;
  double t1282;
  double t1286;
  double t1290;
  double t1294;
  double t1307;
  double t1322;
  double t1324;
  double t1326;
  double t1351;
  double t1359;
  double t1368;
  double t1112;
  double t1113;
  double t1117;
  double t1389;
  double t1418;
  double t1422;
  double t1457;
  double t1460;
  double t1466;
  double t1469;
  double t1471;
  double t1473;
  double t1518;
  double t1520;
  double t1533;
  double t1537;
  double t1540;
  double t1550;
  double t1573;
  double t1578;
  double t1584;
  double t1596;
  double t1599;
  double t1604;
  double t1624;
  double t1627;
  double t1634;
  double t1645;
  double t1650;
  double t1651;
  double t1123;
  double t1130;
  double t1133;
  t70 = Cos(var1[5]);
  t101 = Sin(var1[3]);
  t69 = Cos(var1[3]);
  t72 = Sin(var1[4]);
  t109 = Sin(var1[5]);
  t135 = Sin(var1[13]);
  t75 = t69*t70*t72;
  t117 = t101*t109;
  t122 = t75 + t117;
  t63 = Cos(var1[13]);
  t138 = -1.*t70*t101;
  t150 = t69*t72*t109;
  t154 = t138 + t150;
  t173 = Cos(var1[15]);
  t123 = t63*t122;
  t160 = -1.*t135*t154;
  t161 = t123 + t160;
  t58 = Sin(var1[15]);
  t197 = Cos(var1[14]);
  t203 = Cos(var1[4]);
  t207 = t197*t69*t203;
  t210 = Sin(var1[14]);
  t212 = t135*t122;
  t221 = t63*t154;
  t228 = t212 + t221;
  t247 = t210*t228;
  t253 = t207 + t247;
  t298 = Cos(var1[16]);
  t164 = t58*t161;
  t274 = t173*t253;
  t289 = t164 + t274;
  t57 = Sin(var1[16]);
  t303 = t173*t161;
  t308 = -1.*t58*t253;
  t313 = t303 + t308;
  t336 = Cos(var1[17]);
  t292 = -1.*t57*t289;
  t318 = t298*t313;
  t327 = t292 + t318;
  t43 = Sin(var1[17]);
  t340 = t298*t289;
  t342 = t57*t313;
  t345 = t340 + t342;
  t366 = Cos(var1[18]);
  t328 = t43*t327;
  t347 = t336*t345;
  t357 = t328 + t347;
  t29 = Sin(var1[18]);
  t381 = t336*t327;
  t386 = -1.*t43*t345;
  t389 = t381 + t386;
  t438 = Cos(var1[19]);
  t359 = -1.*t29*t357;
  t406 = t366*t389;
  t409 = t359 + t406;
  t22 = Sin(var1[19]);
  t439 = t366*t357;
  t445 = t29*t389;
  t447 = t439 + t445;
  t519 = t70*t101*t72;
  t528 = -1.*t69*t109;
  t529 = t519 + t528;
  t534 = t69*t70;
  t536 = t101*t72*t109;
  t542 = t534 + t536;
  t533 = t63*t529;
  t560 = -1.*t135*t542;
  t561 = t533 + t560;
  t575 = t197*t203*t101;
  t583 = t135*t529;
  t592 = t63*t542;
  t605 = t583 + t592;
  t621 = t210*t605;
  t622 = t575 + t621;
  t571 = t58*t561;
  t628 = t173*t622;
  t634 = t571 + t628;
  t650 = t173*t561;
  t658 = -1.*t58*t622;
  t672 = t650 + t658;
  t636 = -1.*t57*t634;
  t685 = t298*t672;
  t687 = t636 + t685;
  t692 = t298*t634;
  t696 = t57*t672;
  t697 = t692 + t696;
  t691 = t43*t687;
  t704 = t336*t697;
  t711 = t691 + t704;
  t720 = t336*t687;
  t728 = -1.*t43*t697;
  t743 = t720 + t728;
  t715 = -1.*t29*t711;
  t759 = t366*t743;
  t763 = t715 + t759;
  t770 = t366*t711;
  t782 = t29*t743;
  t784 = t770 + t782;
  t845 = t63*t203*t70;
  t850 = -1.*t203*t135*t109;
  t858 = t845 + t850;
  t868 = -1.*t197*t72;
  t869 = t203*t70*t135;
  t878 = t63*t203*t109;
  t885 = t869 + t878;
  t887 = t210*t885;
  t894 = t868 + t887;
  t859 = t58*t858;
  t895 = t173*t894;
  t900 = t859 + t895;
  t910 = t173*t858;
  t919 = -1.*t58*t894;
  t920 = t910 + t919;
  t903 = -1.*t57*t900;
  t925 = t298*t920;
  t926 = t903 + t925;
  t940 = t298*t900;
  t946 = t57*t920;
  t947 = t940 + t946;
  t928 = t43*t926;
  t955 = t336*t947;
  t956 = t928 + t955;
  t964 = t336*t926;
  t976 = -1.*t43*t947;
  t977 = t964 + t976;
  t957 = -1.*t29*t956;
  t1018 = t366*t977;
  t1020 = t957 + t1018;
  t1033 = t366*t956;
  t1035 = t29*t977;
  t1036 = t1033 + t1035;
  t418 = t22*t409;
  t449 = t438*t447;
  t459 = t418 + t449;
  t489 = t438*t409;
  t497 = -1.*t22*t447;
  t500 = t489 + t497;
  t768 = t22*t763;
  t794 = t438*t784;
  t803 = t768 + t794;
  t816 = t438*t763;
  t832 = -1.*t22*t784;
  t838 = t816 + t832;
  t1021 = t22*t1020;
  t1039 = t438*t1036;
  t1061 = t1021 + t1039;
  t1082 = t438*t1020;
  t1086 = -1.*t22*t1036;
  t1090 = t1082 + t1086;
  t1272 = -1.*t63;
  t1275 = 1. + t1272;
  t1226 = -1.*t197;
  t1242 = 1. + t1226;
  t1100 = -1.*t69*t203*t210;
  t1103 = t197*t228;
  t1108 = t1100 + t1103;
  t1330 = -1.*t173;
  t1348 = 1. + t1330;
  t1428 = -1.*t298;
  t1454 = 1. + t1428;
  t1484 = -1.*t336;
  t1489 = 1. + t1484;
  t1562 = -1.*t366;
  t1567 = 1. + t1562;
  t1608 = -1.*t438;
  t1613 = 1. + t1608;
  t1243 = -0.08055*t1242;
  t1248 = -0.135*t210;
  t1262 = 0. + t1243 + t1248;
  t1279 = 0.07996*t1275;
  t1282 = 0.135*t135;
  t1286 = 0. + t1279 + t1282;
  t1290 = -0.135*t1275;
  t1294 = 0.07996*t135;
  t1307 = 0. + t1290 + t1294;
  t1322 = -0.135*t1242;
  t1324 = 0.08055*t210;
  t1326 = 0. + t1322 + t1324;
  t1351 = -0.01004*t1348;
  t1359 = 0.08055*t58;
  t1368 = 0. + t1351 + t1359;
  t1112 = -1.*t203*t210*t101;
  t1113 = t197*t605;
  t1117 = t1112 + t1113;
  t1389 = -0.08055*t1348;
  t1418 = -0.01004*t58;
  t1422 = 0. + t1389 + t1418;
  t1457 = -0.08055*t1454;
  t1460 = -0.13004*t57;
  t1466 = 0. + t1457 + t1460;
  t1469 = -0.13004*t1454;
  t1471 = 0.08055*t57;
  t1473 = 0. + t1469 + t1471;
  t1518 = -0.19074*t1489;
  t1520 = 0.03315*t43;
  t1533 = 0. + t1518 + t1520;
  t1537 = -0.03315*t1489;
  t1540 = -0.19074*t43;
  t1550 = 0. + t1537 + t1540;
  t1573 = -0.01315*t1567;
  t1578 = -0.62554*t29;
  t1584 = 0. + t1573 + t1578;
  t1596 = -0.62554*t1567;
  t1599 = 0.01315*t29;
  t1604 = 0. + t1596 + t1599;
  t1624 = -1.03354*t1613;
  t1627 = 0.05315*t22;
  t1634 = 0. + t1624 + t1627;
  t1645 = -0.05315*t1613;
  t1650 = -1.03354*t22;
  t1651 = 0. + t1645 + t1650;
  t1123 = t210*t72;
  t1130 = t197*t885;
  t1133 = t1123 + t1130;
  p_output1[0]=0.642788*t459 + 0.766044*t500;
  p_output1[1]=0.642788*t803 + 0.766044*t838;
  p_output1[2]=0.642788*t1061 + 0.766044*t1090;
  p_output1[3]=0.;
  p_output1[4]=t1108;
  p_output1[5]=t1117;
  p_output1[6]=t1133;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t459 + 0.642788*t500;
  p_output1[9]=-0.766044*t803 + 0.642788*t838;
  p_output1[10]=-0.766044*t1061 + 0.642788*t1090;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*t1108 + t122*t1286 + t1307*t154 + t1368*t161 + t1326*t228 + t1422*t253 + t1466*t289 + t1473*t313 + t1533*t327 + t1550*t345 + t1584*t357 + t1604*t389 + t1634*t409 + t1651*t447 - 0.063247*t459 - 1.109926*t500 + t1262*t203*t69 + var1[0];
  p_output1[13]=0. - 0.1305*t1117 + t101*t1262*t203 + t1286*t529 + t1307*t542 + t1368*t561 + t1326*t605 + t1422*t622 + t1466*t634 + t1473*t672 + t1533*t687 + t1550*t697 + t1584*t711 + t1604*t743 + t1634*t763 + t1651*t784 - 0.063247*t803 - 1.109926*t838 + var1[1];
  p_output1[14]=0. - 0.063247*t1061 - 1.109926*t1090 - 0.1305*t1133 + t1020*t1634 + t1036*t1651 + t109*t1307*t203 + t1286*t203*t70 - 1.*t1262*t72 + t1368*t858 + t1326*t885 + t1422*t894 + t1466*t900 + t1473*t920 + t1533*t926 + t1550*t947 + t1584*t956 + t1604*t977 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightToeBottomBack_mex.hh"

namespace SymExpression
{

void T_RightToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
