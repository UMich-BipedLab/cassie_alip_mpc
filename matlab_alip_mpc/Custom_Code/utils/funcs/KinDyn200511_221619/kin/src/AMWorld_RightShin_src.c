/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightShin_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t424;
  double t2242;
  double t2363;
  double t2311;
  double t2533;
  double t945;
  double t4747;
  double t3370;
  double t1034;
  double t5495;
  double t5611;
  double t1814;
  double t850;
  double t6411;
  double t6439;
  double t5719;
  double t5997;
  double t7237;
  double t7142;
  double t7154;
  double t7244;
  double t7347;
  double t7222;
  double t7284;
  double t7312;
  double t7134;
  double t7353;
  double t7358;
  double t7374;
  double t7396;
  double t7397;
  double t7399;
  double t7403;
  double t7404;
  double t7339;
  double t7378;
  double t7384;
  double t7411;
  double t7415;
  double t7431;
  double t7432;
  double t7433;
  double t7409;
  double t7422;
  double t7423;
  double t7498;
  double t7500;
  double t7502;
  double t7513;
  double t7514;
  double t7526;
  double t7527;
  double t7497;
  double t7506;
  double t7507;
  double t7545;
  double t7546;
  double t7568;
  double t7574;
  double t7575;
  double t7540;
  double t7547;
  double t7550;
  double t2316;
  double t2624;
  double t2900;
  double t3446;
  double t3453;
  double t3489;
  double t3159;
  double t3705;
  double t3796;
  double t7647;
  double t7651;
  double t7657;
  double t7661;
  double t7663;
  double t7665;
  double t7659;
  double t7673;
  double t7676;
  double t7682;
  double t7684;
  double t7685;
  double t7390;
  double t7405;
  double t7406;
  double t7426;
  double t7434;
  double t7436;
  double t7444;
  double t7454;
  double t7456;
  double t7463;
  double t7467;
  double t7471;
  double t7473;
  double t7477;
  double t7489;
  double t7509;
  double t7533;
  double t7539;
  double t7560;
  double t7584;
  double t7601;
  double t7606;
  double t7607;
  double t7618;
  double t7619;
  double t7626;
  double t7629;
  double t7630;
  double t7631;
  double t7632;
  double t7679;
  double t7687;
  double t7691;
  double t7699;
  double t7700;
  double t7702;
  double t5289;
  double t5413;
  double t6097;
  double t6457;
  double t6464;
  double t6717;
  double t6721;
  double t6771;
  double t6806;
  double t6848;
  double t6884;
  double t6953;
  double t7019;
  double t7030;
  double t7034;
  double t7099;
  double t7495;
  double t7633;
  double t7643;
  double t7760;
  double t7761;
  double t7762;
  double t7767;
  double t7774;
  double t7775;
  double t7764;
  double t7777;
  double t7780;
  double t7790;
  double t7795;
  double t7798;
  double t7807;
  double t7809;
  double t7810;
  double t7804;
  double t7814;
  double t7815;
  double t7819;
  double t7820;
  double t7821;
  double t7737;
  double t7739;
  double t7741;
  double t7817;
  double t7822;
  double t7824;
  double t7826;
  double t7827;
  double t7828;
  double t7844;
  double t7846;
  double t7847;
  double t7856;
  double t7857;
  double t7858;
  double t7862;
  double t7863;
  double t7865;
  double t7859;
  double t7867;
  double t7868;
  double t7870;
  double t7871;
  double t7874;
  double t7869;
  double t7875;
  double t7876;
  double t7879;
  double t7880;
  double t7882;
  t424 = Cos(var1[3]);
  t2242 = Cos(var1[5]);
  t2363 = Sin(var1[3]);
  t2311 = Sin(var1[4]);
  t2533 = Sin(var1[5]);
  t945 = Sin(var1[14]);
  t4747 = 0. + t945;
  t3370 = Cos(var1[13]);
  t1034 = Cos(var1[14]);
  t5495 = -1.*t1034;
  t5611 = 0. + t5495;
  t1814 = Sin(var1[13]);
  t850 = Cos(var1[4]);
  t6411 = t5611*t1814;
  t6439 = 0. + t6411;
  t5719 = t3370*t5611;
  t5997 = 0. + t5719;
  t7237 = Cos(var1[16]);
  t7142 = Cos(var1[17]);
  t7154 = Sin(var1[16]);
  t7244 = Sin(var1[17]);
  t7347 = Sin(var1[15]);
  t7222 = t7142*t7154;
  t7284 = t7237*t7244;
  t7312 = 0. + t7222 + t7284;
  t7134 = Cos(var1[15]);
  t7353 = t7237*t7142;
  t7358 = -1.*t7154*t7244;
  t7374 = 0. + t7353 + t7358;
  t7396 = -1.*t7347*t7312;
  t7397 = t7134*t7374;
  t7399 = 0. + t7396 + t7397;
  t7403 = t1034*t7399;
  t7404 = 0. + t7403;
  t7339 = t7134*t7312;
  t7378 = t7347*t7374;
  t7384 = 0. + t7339 + t7378;
  t7411 = t945*t7399;
  t7415 = 0. + t7411;
  t7431 = t3370*t7384;
  t7432 = t1814*t7415;
  t7433 = 0. + t7431 + t7432;
  t7409 = -1.*t1814*t7384;
  t7422 = t3370*t7415;
  t7423 = 0. + t7409 + t7422;
  t7498 = -1.*t7237*t7142;
  t7500 = t7154*t7244;
  t7502 = 0. + t7498 + t7500;
  t7513 = -1.*t7347*t7502;
  t7514 = 0. + t7339 + t7513;
  t7526 = t1034*t7514;
  t7527 = 0. + t7526;
  t7497 = t7347*t7312;
  t7506 = t7134*t7502;
  t7507 = 0. + t7497 + t7506;
  t7545 = t945*t7514;
  t7546 = 0. + t7545;
  t7568 = t3370*t7507;
  t7574 = t1814*t7546;
  t7575 = 0. + t7568 + t7574;
  t7540 = -1.*t1814*t7507;
  t7547 = t3370*t7546;
  t7550 = 0. + t7540 + t7547;
  t2316 = t424*t2242*t2311;
  t2624 = t2363*t2533;
  t2900 = t2316 + t2624;
  t3446 = -1.*t2242*t2363;
  t3453 = t424*t2311*t2533;
  t3489 = t3446 + t3453;
  t3159 = t1814*t2900;
  t3705 = t3370*t3489;
  t3796 = t3159 + t3705;
  t7647 = t3370*t2900;
  t7651 = -1.*t1814*t3489;
  t7657 = t7647 + t7651;
  t7661 = t1034*t424*t850;
  t7663 = t945*t3796;
  t7665 = t7661 + t7663;
  t7659 = t7347*t7657;
  t7673 = t7134*t7665;
  t7676 = t7659 + t7673;
  t7682 = t7134*t7657;
  t7684 = -1.*t7347*t7665;
  t7685 = t7682 + t7684;
  t7390 = var2[14]*t7384;
  t7405 = var2[13]*t7404;
  t7406 = var2[5]*t7404;
  t7426 = t2242*t7423;
  t7434 = -1.*t7433*t2533;
  t7436 = 0. + t7426 + t7434;
  t7444 = var2[4]*t7436;
  t7454 = -1.*t7404*t2311;
  t7456 = t2242*t7433;
  t7463 = t7423*t2533;
  t7467 = 0. + t7456 + t7463;
  t7471 = t850*t7467;
  t7473 = 0. + t7454 + t7471;
  t7477 = var2[3]*t7473;
  t7489 = 0. + t7390 + t7405 + t7406 + t7444 + t7477;
  t7509 = var2[14]*t7507;
  t7533 = var2[13]*t7527;
  t7539 = var2[5]*t7527;
  t7560 = t2242*t7550;
  t7584 = -1.*t7575*t2533;
  t7601 = 0. + t7560 + t7584;
  t7606 = var2[4]*t7601;
  t7607 = -1.*t7527*t2311;
  t7618 = t2242*t7575;
  t7619 = t7550*t2533;
  t7626 = 0. + t7618 + t7619;
  t7629 = t850*t7626;
  t7630 = 0. + t7607 + t7629;
  t7631 = var2[3]*t7630;
  t7632 = 0. + t7509 + t7533 + t7539 + t7606 + t7631;
  t7679 = -1.*t7154*t7676;
  t7687 = t7237*t7685;
  t7691 = t7679 + t7687;
  t7699 = t7237*t7676;
  t7700 = t7154*t7685;
  t7702 = t7699 + t7700;
  t5289 = var2[13]*t4747;
  t5413 = var2[5]*t4747;
  t6097 = t5997*t2242;
  t6457 = -1.*t6439*t2533;
  t6464 = 0. + t6097 + t6457;
  t6717 = var2[4]*t6464;
  t6721 = -1.*t4747*t2311;
  t6771 = t2242*t6439;
  t6806 = t5997*t2533;
  t6848 = 0. + t6771 + t6806;
  t6884 = t850*t6848;
  t6953 = 0. + t6721 + t6884;
  t7019 = var2[3]*t6953;
  t7030 = 0. + var2[15] + var2[16] + var2[17] + t5289 + t5413 + t6717 + t7019;
  t7034 = 0.0341*t7030;
  t7099 = 0. + t7034;
  t7495 = 0.0341*t7489;
  t7633 = 0.000334*t7632;
  t7643 = 0. + t7495 + t7633;
  t7760 = t2242*t2363*t2311;
  t7761 = -1.*t424*t2533;
  t7762 = t7760 + t7761;
  t7767 = t424*t2242;
  t7774 = t2363*t2311*t2533;
  t7775 = t7767 + t7774;
  t7764 = t1814*t7762;
  t7777 = t3370*t7775;
  t7780 = t7764 + t7777;
  t7790 = t3370*t7762;
  t7795 = -1.*t1814*t7775;
  t7798 = t7790 + t7795;
  t7807 = t1034*t850*t2363;
  t7809 = t945*t7780;
  t7810 = t7807 + t7809;
  t7804 = t7347*t7798;
  t7814 = t7134*t7810;
  t7815 = t7804 + t7814;
  t7819 = t7134*t7798;
  t7820 = -1.*t7347*t7810;
  t7821 = t7819 + t7820;
  t7737 = 0.000334*t7489;
  t7739 = 0.00036*t7632;
  t7741 = 0. + t7737 + t7739;
  t7817 = -1.*t7154*t7815;
  t7822 = t7237*t7821;
  t7824 = t7817 + t7822;
  t7826 = t7237*t7815;
  t7827 = t7154*t7821;
  t7828 = t7826 + t7827;
  t7844 = t850*t2242*t1814;
  t7846 = t3370*t850*t2533;
  t7847 = t7844 + t7846;
  t7856 = t3370*t850*t2242;
  t7857 = -1.*t850*t1814*t2533;
  t7858 = t7856 + t7857;
  t7862 = -1.*t1034*t2311;
  t7863 = t945*t7847;
  t7865 = t7862 + t7863;
  t7859 = t7347*t7858;
  t7867 = t7134*t7865;
  t7868 = t7859 + t7867;
  t7870 = t7134*t7858;
  t7871 = -1.*t7347*t7865;
  t7874 = t7870 + t7871;
  t7869 = -1.*t7154*t7868;
  t7875 = t7237*t7874;
  t7876 = t7869 + t7875;
  t7879 = t7237*t7868;
  t7880 = t7154*t7874;
  t7882 = t7879 + t7880;
  p_output1[0]=t7643*(t7244*t7691 + t7142*t7702) + (-1.*t7142*t7691 + t7244*t7702)*t7741 + t7099*(-1.*t1034*t3796 + t424*t850*t945);
  p_output1[1]=t7643*(t7244*t7824 + t7142*t7828) + t7741*(-1.*t7142*t7824 + t7244*t7828) + t7099*(-1.*t1034*t7780 + t2363*t850*t945);
  p_output1[2]=t7643*(t7244*t7876 + t7142*t7882) + t7741*(-1.*t7142*t7876 + t7244*t7882) + t7099*(-1.*t1034*t7847 - 1.*t2311*t945);
}



void AMWorld_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
