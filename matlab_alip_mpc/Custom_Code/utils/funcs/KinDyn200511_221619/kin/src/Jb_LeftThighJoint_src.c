/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftThighJoint_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t582;
  double t277;
  double t352;
  double t404;
  double t447;
  double t588;
  double t618;
  double t631;
  double t719;
  double t1033;
  double t484;
  double t811;
  double t851;
  double t209;
  double t1045;
  double t1067;
  double t1068;
  double t69;
  double t1563;
  double t1606;
  double t1657;
  double t1244;
  double t1301;
  double t1307;
  double t1436;
  double t1616;
  double t1662;
  double t1667;
  double t1687;
  double t1736;
  double t1772;
  double t2114;
  double t2124;
  double t2172;
  double t2183;
  double t1002;
  double t1112;
  double t1157;
  double t1327;
  double t1374;
  double t1418;
  double t1454;
  double t1460;
  double t1465;
  double t1471;
  double t1503;
  double t1678;
  double t1838;
  double t1849;
  double t1875;
  double t1911;
  double t1933;
  double t1935;
  double t1946;
  double t2020;
  double t2043;
  double t2045;
  double t2135;
  double t2256;
  double t2262;
  double t2293;
  double t2306;
  double t2328;
  double t2440;
  double t2442;
  double t2447;
  double t2462;
  double t3014;
  double t2917;
  double t2938;
  double t3070;
  double t3079;
  double t3086;
  double t3098;
  double t3100;
  double t3101;
  double t3119;
  double t3140;
  double t3190;
  double t3192;
  double t3214;
  double t3225;
  double t3230;
  double t2810;
  double t2819;
  double t2880;
  double t2995;
  double t3005;
  double t3094;
  double t3234;
  double t3240;
  double t3255;
  double t3268;
  double t3290;
  double t3291;
  double t3311;
  double t3376;
  double t3406;
  double t3408;
  double t3437;
  double t3447;
  double t3468;
  double t2712;
  double t2798;
  double t2803;
  double t3250;
  double t3334;
  double t3351;
  double t3420;
  double t3480;
  double t3539;
  double t3559;
  double t3596;
  double t3687;
  double t2659;
  double t2692;
  double t2710;
  double t3353;
  double t3828;
  double t3950;
  double t3999;
  double t4056;
  double t4138;
  double t4182;
  double t4213;
  double t4257;
  double t4276;
  double t4302;
  double t4326;
  t582 = Cos(var1[6]);
  t277 = Cos(var1[8]);
  t352 = -1.*t277;
  t404 = 0. + t352;
  t447 = Sin(var1[6]);
  t588 = Sin(var1[7]);
  t618 = Sin(var1[8]);
  t631 = t588*t618;
  t719 = 0. + t631;
  t1033 = Sin(var1[5]);
  t484 = -1.*t404*t447;
  t811 = t582*t719;
  t851 = 0. + t484 + t811;
  t209 = Cos(var1[5]);
  t1045 = t582*t404;
  t1067 = t447*t719;
  t1068 = 0. + t1045 + t1067;
  t69 = Sin(var1[3]);
  t1563 = t277*t588;
  t1606 = 0. + t1563;
  t1657 = 0. + t618;
  t1244 = Cos(var1[3]);
  t1301 = Cos(var1[4]);
  t1307 = Cos(var1[7]);
  t1436 = Sin(var1[4]);
  t1616 = t447*t1606;
  t1662 = t582*t1657;
  t1667 = 0. + t1616 + t1662;
  t1687 = t582*t1606;
  t1736 = -1.*t447*t1657;
  t1772 = 0. + t1687 + t1736;
  t2114 = -1.*t582*t1307;
  t2124 = 0. + t2114;
  t2172 = -1.*t1307*t447;
  t2183 = 0. + t2172;
  t1002 = t209*t851;
  t1112 = -1.*t1033*t1068;
  t1157 = 0. + t1002 + t1112;
  t1327 = t1307*t618;
  t1374 = 0. + t1327;
  t1418 = t1301*t1374;
  t1454 = t1033*t851;
  t1460 = t209*t1068;
  t1465 = 0. + t1454 + t1460;
  t1471 = t1436*t1465;
  t1503 = 0. + t1418 + t1471;
  t1678 = -1.*t1033*t1667;
  t1838 = t209*t1772;
  t1849 = 0. + t1678 + t1838;
  t1875 = t1307*t277;
  t1911 = 0. + t1875;
  t1933 = t1301*t1911;
  t1935 = t209*t1667;
  t1946 = t1033*t1772;
  t2020 = 0. + t1935 + t1946;
  t2043 = t1436*t2020;
  t2045 = 0. + t1933 + t2043;
  t2135 = t209*t2124;
  t2256 = -1.*t1033*t2183;
  t2262 = 0. + t2135 + t2256;
  t2293 = t2124*t1033;
  t2306 = t209*t2183;
  t2328 = 0. + t2293 + t2306;
  t2440 = t1436*t2328;
  t2442 = 0. + t588;
  t2447 = t1301*t2442;
  t2462 = 0. + t2440 + t2447;
  t3014 = 1. + t352;
  t2917 = -1.*t582;
  t2938 = 1. + t2917;
  t3070 = -0.01004*t3014;
  t3079 = -0.01004*t277;
  t3086 = 0. + t3070 + t3079;
  t3098 = -1.*t1307;
  t3100 = 1. + t3098;
  t3101 = 0.135*t3100;
  t3119 = 0.135*t1307;
  t3140 = 0.08055*t588;
  t3190 = -0.08055*t3014;
  t3192 = -0.08055*t277;
  t3214 = 0. + t3190 + t3192;
  t3225 = t3214*t588;
  t3230 = 0. + t3101 + t3119 + t3140 + t3225;
  t2810 = t1301*t2328;
  t2819 = -1.*t1436*t2442;
  t2880 = 0. + t2810 + t2819;
  t2995 = 0.135*t2938;
  t3005 = 0.07996*t447;
  t3094 = -1.*t3086*t447;
  t3234 = t582*t3230;
  t3240 = 0. + t2995 + t3005 + t3094 + t3234;
  t3255 = 0.07996*t2938;
  t3268 = t582*t3086;
  t3290 = -0.135*t447;
  t3291 = t447*t3230;
  t3311 = 0. + t3255 + t3268 + t3290 + t3291;
  t3376 = -0.08055*t3100;
  t3406 = t1307*t3214;
  t3408 = 0. + t3376 + t3406;
  t3437 = t1033*t3240;
  t3447 = t209*t3311;
  t3468 = 0. + t3437 + t3447;
  t2712 = -1.*t1911*t1436;
  t2798 = t1301*t2020;
  t2803 = 0. + t2712 + t2798;
  t3250 = t209*t3240;
  t3334 = -1.*t1033*t3311;
  t3351 = 0. + t3250 + t3334;
  t3420 = -1.*t3408*t1436;
  t3480 = t1301*t3468;
  t3539 = 0. + t3420 + t3480;
  t3559 = t1301*t3408;
  t3596 = t1436*t3468;
  t3687 = 0. + t3559 + t3596;
  t2659 = -1.*t1436*t1374;
  t2692 = t1301*t1465;
  t2710 = 0. + t2659 + t2692;
  t3353 = t2262*t3351;
  t3828 = -1.*t3351*t1849;
  t3950 = -1.*t2262*t3351;
  t3999 = t3351*t1157;
  t4056 = t3351*t1849;
  t4138 = -1.*t3351*t1157;
  t4182 = t3408*t2442;
  t4213 = -1.*t3408*t1911;
  t4257 = -1.*t3408*t2442;
  t4276 = t3408*t1374;
  t4302 = t3408*t1911;
  t4326 = -1.*t3408*t1374;
  p_output1[0]=0. + t1244*t1503 - 1.*t1157*t69;
  p_output1[1]=0. + t1244*t2045 - 1.*t1849*t69;
  p_output1[2]=0. + t1244*t2462 - 1.*t2262*t69;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1157*t1244 + t1503*t69;
  p_output1[7]=0. + t1244*t1849 + t2045*t69;
  p_output1[8]=0. + t1244*t2262 + t2462*t69;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2710;
  p_output1[13]=t2803;
  p_output1[14]=t2880;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2803*(t3353 + t2880*t3539 + t2462*t3687) + t2880*(-1.*t2803*t3539 - 1.*t2045*t3687 + t3828);
  p_output1[19]=t2710*(-1.*t2880*t3539 - 1.*t2462*t3687 + t3950) + t2880*(t2710*t3539 + t1503*t3687 + t3999);
  p_output1[20]=t2710*(t2803*t3539 + t2045*t3687 + t4056) + t2803*(-1.*t2710*t3539 - 1.*t1503*t3687 + t4138);
  p_output1[21]=t2710;
  p_output1[22]=t2803;
  p_output1[23]=t2880;
  p_output1[24]=t1849*(t3353 + t2328*t3468 + t4182) + t2262*(-1.*t2020*t3468 + t3828 + t4213);
  p_output1[25]=t1157*(-1.*t2328*t3468 + t3950 + t4257) + t2262*(t1465*t3468 + t3999 + t4276);
  p_output1[26]=t1157*(t2020*t3468 + t4056 + t4302) + t1849*(-1.*t1465*t3468 + t4138 + t4326);
  p_output1[27]=t1157;
  p_output1[28]=t1849;
  p_output1[29]=t2262;
  p_output1[30]=t1911*(t2124*t3240 + t2183*t3311 + t4182) + t2442*(-1.*t1772*t3240 - 1.*t1667*t3311 + t4213);
  p_output1[31]=t1374*(-1.*t2124*t3240 - 1.*t2183*t3311 + t4257) + t2442*(t1068*t3311 + t4276 + t3240*t851);
  p_output1[32]=t1374*(t1772*t3240 + t1667*t3311 + t4302) + t1911*(-1.*t1068*t3311 + t4326 - 1.*t3240*t851);
  p_output1[33]=t1374;
  p_output1[34]=t1911;
  p_output1[35]=t2442;
  p_output1[36]=-0.135*t404 + (-1.*t1657*t3086 - 1.*t1606*t3230 + t4213)*t588 + t1911*(0. - 1.*t1307*t3230 + t3408*t588) + 0.07996*t719;
  p_output1[37]=0.07996*t1606 - 0.135*t1657 + t1374*(0. + t1307*t3230 - 1.*t3408*t588) + t588*(t3086*t404 + t4276 + t3230*t719);
  p_output1[38]=0. - 0.07996*t1307 + t1374*(t1657*t3086 + t1606*t3230 + t4302) + t1911*(-1.*t3086*t404 + t4326 - 1.*t3230*t719);
  p_output1[39]=t1374;
  p_output1[40]=t1911;
  p_output1[41]=t2442;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=-0.08055 - 1.*t277*(0. + t277*t3214 + t3086*t618) + t618*(0. + t277*t3086 - 1.*t3214*t618);
  p_output1[45]=t404;
  p_output1[46]=t1657;
  p_output1[47]=0.;
  p_output1[48]=0.;
  p_output1[49]=0.;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
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



void Jb_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
