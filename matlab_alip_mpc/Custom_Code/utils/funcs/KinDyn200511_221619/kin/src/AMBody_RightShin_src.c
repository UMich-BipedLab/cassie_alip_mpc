/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightShin_src.h"

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
  double t668;
  double t153;
  double t279;
  double t694;
  double t1128;
  double t374;
  double t813;
  double t972;
  double t8;
  double t1147;
  double t1175;
  double t1216;
  double t1458;
  double t1495;
  double t1665;
  double t1680;
  double t1691;
  double t1762;
  double t1089;
  double t1267;
  double t1342;
  double t1985;
  double t1952;
  double t2118;
  double t2149;
  double t2551;
  double t1913;
  double t2961;
  double t2995;
  double t3025;
  double t1980;
  double t2600;
  double t2847;
  double t3027;
  double t4192;
  double t4383;
  double t4412;
  double t4549;
  double t4557;
  double t4566;
  double t4731;
  double t4174;
  double t4413;
  double t4429;
  double t4928;
  double t5017;
  double t3375;
  double t3521;
  double t5360;
  double t5421;
  double t5501;
  double t4899;
  double t5018;
  double t5125;
  double t1398;
  double t1853;
  double t1871;
  double t2853;
  double t3068;
  double t3127;
  double t3298;
  double t3444;
  double t3569;
  double t3619;
  double t3640;
  double t3645;
  double t3726;
  double t3849;
  double t3887;
  double t4487;
  double t4866;
  double t4894;
  double t5147;
  double t5533;
  double t5566;
  double t5648;
  double t5672;
  double t5676;
  double t5739;
  double t5831;
  double t5972;
  double t5984;
  double t6097;
  double t6267;
  double t6503;
  double t6517;
  double t6611;
  double t6626;
  double t6669;
  double t6612;
  double t6617;
  t668 = Cos(var1[16]);
  t153 = Cos(var1[17]);
  t279 = Sin(var1[16]);
  t694 = Sin(var1[17]);
  t1128 = Sin(var1[15]);
  t374 = t153*t279;
  t813 = t668*t694;
  t972 = 0. + t374 + t813;
  t8 = Cos(var1[15]);
  t1147 = t668*t153;
  t1175 = -1.*t279*t694;
  t1216 = 0. + t1147 + t1175;
  t1458 = Cos(var1[14]);
  t1495 = -1.*t1128*t972;
  t1665 = t8*t1216;
  t1680 = 0. + t1495 + t1665;
  t1691 = t1458*t1680;
  t1762 = 0. + t1691;
  t1089 = t8*t972;
  t1267 = t1128*t1216;
  t1342 = 0. + t1089 + t1267;
  t1985 = Cos(var1[13]);
  t1952 = Sin(var1[13]);
  t2118 = Sin(var1[14]);
  t2149 = t2118*t1680;
  t2551 = 0. + t2149;
  t1913 = Cos(var1[5]);
  t2961 = t1985*t1342;
  t2995 = t1952*t2551;
  t3025 = 0. + t2961 + t2995;
  t1980 = -1.*t1952*t1342;
  t2600 = t1985*t2551;
  t2847 = 0. + t1980 + t2600;
  t3027 = Sin(var1[5]);
  t4192 = -1.*t668*t153;
  t4383 = t279*t694;
  t4412 = 0. + t4192 + t4383;
  t4549 = -1.*t1128*t4412;
  t4557 = 0. + t1089 + t4549;
  t4566 = t1458*t4557;
  t4731 = 0. + t4566;
  t4174 = t1128*t972;
  t4413 = t8*t4412;
  t4429 = 0. + t4174 + t4413;
  t4928 = t2118*t4557;
  t5017 = 0. + t4928;
  t3375 = Sin(var1[4]);
  t3521 = Cos(var1[4]);
  t5360 = t1985*t4429;
  t5421 = t1952*t5017;
  t5501 = 0. + t5360 + t5421;
  t4899 = -1.*t1952*t4429;
  t5018 = t1985*t5017;
  t5125 = 0. + t4899 + t5018;
  t1398 = var2[14]*t1342;
  t1853 = var2[13]*t1762;
  t1871 = var2[5]*t1762;
  t2853 = t1913*t2847;
  t3068 = -1.*t3025*t3027;
  t3127 = 0. + t2853 + t3068;
  t3298 = var2[4]*t3127;
  t3444 = -1.*t1762*t3375;
  t3569 = t1913*t3025;
  t3619 = t2847*t3027;
  t3640 = 0. + t3569 + t3619;
  t3645 = t3521*t3640;
  t3726 = 0. + t3444 + t3645;
  t3849 = var2[3]*t3726;
  t3887 = 0. + t1398 + t1853 + t1871 + t3298 + t3849;
  t4487 = var2[14]*t4429;
  t4866 = var2[13]*t4731;
  t4894 = var2[5]*t4731;
  t5147 = t1913*t5125;
  t5533 = -1.*t5501*t3027;
  t5566 = 0. + t5147 + t5533;
  t5648 = var2[4]*t5566;
  t5672 = -1.*t4731*t3375;
  t5676 = t1913*t5501;
  t5739 = t5125*t3027;
  t5831 = 0. + t5676 + t5739;
  t5972 = t3521*t5831;
  t5984 = 0. + t5672 + t5972;
  t6097 = var2[3]*t5984;
  t6267 = 0. + t4487 + t4866 + t4894 + t5648 + t6097;
  t6503 = 0. + t2118;
  t6517 = -1.*t1458;
  t6611 = 0. + t6517;
  t6626 = t6611*t1952;
  t6669 = 0. + t6626;
  t6612 = t1985*t6611;
  t6617 = 0. + t6612;
  p_output1[0]=0. + 0.000334*t3887 + 0.00036*t6267;
  p_output1[1]=0. + 0.0341*t3887 + 0.000334*t6267;
  p_output1[2]=0. + 0.0341*(0. + (0. - 1.*t3375*t6503 + t3521*(0. + t3027*t6617 + t1913*t6669))*var2[3] + (0. + t1913*t6617 - 1.*t3027*t6669)*var2[4] + t6503*var2[5] + t6503*var2[13] + var2[15] + var2[16] + var2[17]);
}



void AMBody_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
