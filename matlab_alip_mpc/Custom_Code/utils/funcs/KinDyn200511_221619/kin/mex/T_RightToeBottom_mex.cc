/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:14 GMT-04:00
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
  double t44;
  double t56;
  double t43;
  double t46;
  double t59;
  double t82;
  double t52;
  double t69;
  double t71;
  double t36;
  double t93;
  double t104;
  double t112;
  double t185;
  double t77;
  double t114;
  double t135;
  double t31;
  double t187;
  double t192;
  double t198;
  double t202;
  double t207;
  double t210;
  double t217;
  double t219;
  double t221;
  double t258;
  double t183;
  double t235;
  double t246;
  double t29;
  double t269;
  double t274;
  double t279;
  double t293;
  double t255;
  double t281;
  double t282;
  double t25;
  double t296;
  double t297;
  double t302;
  double t314;
  double t286;
  double t304;
  double t310;
  double t19;
  double t317;
  double t318;
  double t324;
  double t359;
  double t311;
  double t325;
  double t349;
  double t11;
  double t361;
  double t373;
  double t375;
  double t443;
  double t450;
  double t455;
  double t476;
  double t477;
  double t490;
  double t471;
  double t492;
  double t501;
  double t520;
  double t528;
  double t540;
  double t545;
  double t547;
  double t548;
  double t517;
  double t549;
  double t571;
  double t583;
  double t586;
  double t588;
  double t575;
  double t603;
  double t614;
  double t631;
  double t636;
  double t639;
  double t624;
  double t641;
  double t642;
  double t652;
  double t658;
  double t661;
  double t645;
  double t662;
  double t669;
  double t686;
  double t688;
  double t693;
  double t760;
  double t766;
  double t767;
  double t776;
  double t784;
  double t785;
  double t788;
  double t791;
  double t796;
  double t772;
  double t800;
  double t802;
  double t812;
  double t814;
  double t819;
  double t810;
  double t820;
  double t822;
  double t837;
  double t841;
  double t846;
  double t825;
  double t851;
  double t859;
  double t878;
  double t882;
  double t884;
  double t866;
  double t885;
  double t890;
  double t893;
  double t901;
  double t909;
  double t351;
  double t386;
  double t388;
  double t408;
  double t412;
  double t422;
  double t681;
  double t694;
  double t695;
  double t733;
  double t737;
  double t743;
  double t891;
  double t910;
  double t927;
  double t930;
  double t931;
  double t932;
  double t1111;
  double t1118;
  double t1096;
  double t1097;
  double t959;
  double t965;
  double t966;
  double t1202;
  double t1206;
  double t1307;
  double t1311;
  double t1386;
  double t1388;
  double t1427;
  double t1434;
  double t1468;
  double t1472;
  double t1098;
  double t1105;
  double t1106;
  double t1122;
  double t1127;
  double t1132;
  double t1161;
  double t1169;
  double t1171;
  double t1178;
  double t1180;
  double t1198;
  double t1230;
  double t1237;
  double t1246;
  double t969;
  double t972;
  double t981;
  double t1283;
  double t1294;
  double t1297;
  double t1333;
  double t1334;
  double t1344;
  double t1356;
  double t1358;
  double t1359;
  double t1404;
  double t1405;
  double t1411;
  double t1415;
  double t1419;
  double t1422;
  double t1435;
  double t1437;
  double t1439;
  double t1446;
  double t1448;
  double t1454;
  double t1474;
  double t1480;
  double t1483;
  double t1497;
  double t1500;
  double t1514;
  double t991;
  double t993;
  double t1000;
  t44 = Cos(var1[5]);
  t56 = Sin(var1[3]);
  t43 = Cos(var1[3]);
  t46 = Sin(var1[4]);
  t59 = Sin(var1[5]);
  t82 = Sin(var1[13]);
  t52 = t43*t44*t46;
  t69 = t56*t59;
  t71 = t52 + t69;
  t36 = Cos(var1[13]);
  t93 = -1.*t44*t56;
  t104 = t43*t46*t59;
  t112 = t93 + t104;
  t185 = Cos(var1[15]);
  t77 = t36*t71;
  t114 = -1.*t82*t112;
  t135 = t77 + t114;
  t31 = Sin(var1[15]);
  t187 = Cos(var1[14]);
  t192 = Cos(var1[4]);
  t198 = t187*t43*t192;
  t202 = Sin(var1[14]);
  t207 = t82*t71;
  t210 = t36*t112;
  t217 = t207 + t210;
  t219 = t202*t217;
  t221 = t198 + t219;
  t258 = Cos(var1[16]);
  t183 = t31*t135;
  t235 = t185*t221;
  t246 = t183 + t235;
  t29 = Sin(var1[16]);
  t269 = t185*t135;
  t274 = -1.*t31*t221;
  t279 = t269 + t274;
  t293 = Cos(var1[17]);
  t255 = -1.*t29*t246;
  t281 = t258*t279;
  t282 = t255 + t281;
  t25 = Sin(var1[17]);
  t296 = t258*t246;
  t297 = t29*t279;
  t302 = t296 + t297;
  t314 = Cos(var1[18]);
  t286 = t25*t282;
  t304 = t293*t302;
  t310 = t286 + t304;
  t19 = Sin(var1[18]);
  t317 = t293*t282;
  t318 = -1.*t25*t302;
  t324 = t317 + t318;
  t359 = Cos(var1[19]);
  t311 = -1.*t19*t310;
  t325 = t314*t324;
  t349 = t311 + t325;
  t11 = Sin(var1[19]);
  t361 = t314*t310;
  t373 = t19*t324;
  t375 = t361 + t373;
  t443 = t44*t56*t46;
  t450 = -1.*t43*t59;
  t455 = t443 + t450;
  t476 = t43*t44;
  t477 = t56*t46*t59;
  t490 = t476 + t477;
  t471 = t36*t455;
  t492 = -1.*t82*t490;
  t501 = t471 + t492;
  t520 = t187*t192*t56;
  t528 = t82*t455;
  t540 = t36*t490;
  t545 = t528 + t540;
  t547 = t202*t545;
  t548 = t520 + t547;
  t517 = t31*t501;
  t549 = t185*t548;
  t571 = t517 + t549;
  t583 = t185*t501;
  t586 = -1.*t31*t548;
  t588 = t583 + t586;
  t575 = -1.*t29*t571;
  t603 = t258*t588;
  t614 = t575 + t603;
  t631 = t258*t571;
  t636 = t29*t588;
  t639 = t631 + t636;
  t624 = t25*t614;
  t641 = t293*t639;
  t642 = t624 + t641;
  t652 = t293*t614;
  t658 = -1.*t25*t639;
  t661 = t652 + t658;
  t645 = -1.*t19*t642;
  t662 = t314*t661;
  t669 = t645 + t662;
  t686 = t314*t642;
  t688 = t19*t661;
  t693 = t686 + t688;
  t760 = t36*t192*t44;
  t766 = -1.*t192*t82*t59;
  t767 = t760 + t766;
  t776 = -1.*t187*t46;
  t784 = t192*t44*t82;
  t785 = t36*t192*t59;
  t788 = t784 + t785;
  t791 = t202*t788;
  t796 = t776 + t791;
  t772 = t31*t767;
  t800 = t185*t796;
  t802 = t772 + t800;
  t812 = t185*t767;
  t814 = -1.*t31*t796;
  t819 = t812 + t814;
  t810 = -1.*t29*t802;
  t820 = t258*t819;
  t822 = t810 + t820;
  t837 = t258*t802;
  t841 = t29*t819;
  t846 = t837 + t841;
  t825 = t25*t822;
  t851 = t293*t846;
  t859 = t825 + t851;
  t878 = t293*t822;
  t882 = -1.*t25*t846;
  t884 = t878 + t882;
  t866 = -1.*t19*t859;
  t885 = t314*t884;
  t890 = t866 + t885;
  t893 = t314*t859;
  t901 = t19*t884;
  t909 = t893 + t901;
  t351 = t11*t349;
  t386 = t359*t375;
  t388 = t351 + t386;
  t408 = t359*t349;
  t412 = -1.*t11*t375;
  t422 = t408 + t412;
  t681 = t11*t669;
  t694 = t359*t693;
  t695 = t681 + t694;
  t733 = t359*t669;
  t737 = -1.*t11*t693;
  t743 = t733 + t737;
  t891 = t11*t890;
  t910 = t359*t909;
  t927 = t891 + t910;
  t930 = t359*t890;
  t931 = -1.*t11*t909;
  t932 = t930 + t931;
  t1111 = -1.*t36;
  t1118 = 1. + t1111;
  t1096 = -1.*t187;
  t1097 = 1. + t1096;
  t959 = -1.*t43*t192*t202;
  t965 = t187*t217;
  t966 = t959 + t965;
  t1202 = -1.*t185;
  t1206 = 1. + t1202;
  t1307 = -1.*t258;
  t1311 = 1. + t1307;
  t1386 = -1.*t293;
  t1388 = 1. + t1386;
  t1427 = -1.*t314;
  t1434 = 1. + t1427;
  t1468 = -1.*t359;
  t1472 = 1. + t1468;
  t1098 = -0.08055*t1097;
  t1105 = -0.135*t202;
  t1106 = 0. + t1098 + t1105;
  t1122 = 0.07996*t1118;
  t1127 = 0.135*t82;
  t1132 = 0. + t1122 + t1127;
  t1161 = -0.135*t1118;
  t1169 = 0.07996*t82;
  t1171 = 0. + t1161 + t1169;
  t1178 = -0.135*t1097;
  t1180 = 0.08055*t202;
  t1198 = 0. + t1178 + t1180;
  t1230 = -0.01004*t1206;
  t1237 = 0.08055*t31;
  t1246 = 0. + t1230 + t1237;
  t969 = -1.*t192*t202*t56;
  t972 = t187*t545;
  t981 = t969 + t972;
  t1283 = -0.08055*t1206;
  t1294 = -0.01004*t31;
  t1297 = 0. + t1283 + t1294;
  t1333 = -0.08055*t1311;
  t1334 = -0.13004*t29;
  t1344 = 0. + t1333 + t1334;
  t1356 = -0.13004*t1311;
  t1358 = 0.08055*t29;
  t1359 = 0. + t1356 + t1358;
  t1404 = -0.19074*t1388;
  t1405 = 0.03315*t25;
  t1411 = 0. + t1404 + t1405;
  t1415 = -0.03315*t1388;
  t1419 = -0.19074*t25;
  t1422 = 0. + t1415 + t1419;
  t1435 = -0.01315*t1434;
  t1437 = -0.62554*t19;
  t1439 = 0. + t1435 + t1437;
  t1446 = -0.62554*t1434;
  t1448 = 0.01315*t19;
  t1454 = 0. + t1446 + t1448;
  t1474 = -1.03354*t1472;
  t1480 = 0.05315*t11;
  t1483 = 0. + t1474 + t1480;
  t1497 = -0.05315*t1472;
  t1500 = -1.03354*t11;
  t1514 = 0. + t1497 + t1500;
  t991 = t202*t46;
  t993 = t187*t788;
  t1000 = t991 + t993;
  p_output1[0]=0.642788*t388 + 0.766044*t422;
  p_output1[1]=0.642788*t695 + 0.766044*t743;
  p_output1[2]=0.642788*t927 + 0.766044*t932;
  p_output1[3]=0.;
  p_output1[4]=t966;
  p_output1[5]=t981;
  p_output1[6]=t1000;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t388 + 0.642788*t422;
  p_output1[9]=-0.766044*t695 + 0.642788*t743;
  p_output1[10]=-0.766044*t927 + 0.642788*t932;
  p_output1[11]=0.;
  p_output1[12]=0. + t112*t1171 + t1246*t135 + t1198*t217 + t1297*t221 + t1344*t246 + t1359*t279 + t1411*t282 + t1422*t302 + t1439*t310 + t1454*t324 + t1483*t349 + t1514*t375 - 0.00095*t388 - 1.05124*t422 + t1106*t192*t43 + t1132*t71 - 0.1305*t966 + var1[0];
  p_output1[13]=0. + t1132*t455 + t1171*t490 + t1246*t501 + t1198*t545 + t1297*t548 + t1106*t192*t56 + t1344*t571 + t1359*t588 + t1411*t614 + t1422*t639 + t1439*t642 + t1454*t661 + t1483*t669 + t1514*t693 - 0.00095*t695 - 1.05124*t743 - 0.1305*t981 + var1[1];
  p_output1[14]=0. - 0.1305*t1000 + t1132*t192*t44 - 1.*t1106*t46 + t1171*t192*t59 + t1246*t767 + t1198*t788 + t1297*t796 + t1344*t802 + t1359*t819 + t1411*t822 + t1422*t846 + t1439*t859 + t1454*t884 + t1483*t890 + t1514*t909 - 0.00095*t927 - 1.05124*t932 + var1[2];
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

#include "T_RightToeBottom_mex.hh"

namespace SymExpression
{

void T_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
