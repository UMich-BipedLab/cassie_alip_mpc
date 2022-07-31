/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftAbductionJoint_src.h"

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
  double t1404;
  double t1459;
  double t1438;
  double t1443;
  double t1466;
  double t1477;
  double t1478;
  double t1479;
  double t1486;
  double t1495;
  double t1496;
  double t1499;
  double t1458;
  double t1468;
  double t1470;
  double t1351;
  double t1485;
  double t1488;
  double t1489;
  double t1504;
  double t1510;
  double t1513;
  double t1572;
  double t1575;
  double t1576;
  double t1549;
  double t1552;
  double t1570;
  double t1756;
  double t1771;
  double t1781;
  double t1604;
  double t1520;
  double t1812;
  double t1816;
  double t1817;
  double t1792;
  double t1605;
  double t1608;
  double t1865;
  double t1867;
  double t1869;
  double t1870;
  double t1877;
  double t1893;
  double t1894;
  double t1895;
  double t1822;
  double t1832;
  double t1844;
  double t1845;
  double t1850;
  double t1851;
  double t1855;
  double t1859;
  double t1861;
  double t1862;
  t1404 = Sin(var1[3]);
  t1459 = Cos(var1[3]);
  t1438 = Cos(var1[5]);
  t1443 = Sin(var1[4]);
  t1466 = Sin(var1[5]);
  t1477 = Cos(var1[6]);
  t1478 = -1.*t1477;
  t1479 = 1. + t1478;
  t1486 = Sin(var1[6]);
  t1495 = -1.*t1459*t1438;
  t1496 = -1.*t1404*t1443*t1466;
  t1499 = t1495 + t1496;
  t1458 = -1.*t1438*t1404*t1443;
  t1468 = t1459*t1466;
  t1470 = t1458 + t1468;
  t1351 = Cos(var1[4]);
  t1485 = 0.07996*t1479;
  t1488 = -0.135*t1486;
  t1489 = 0. + t1485 + t1488;
  t1504 = 0.135*t1479;
  t1510 = 0.07996*t1486;
  t1513 = 0. + t1504 + t1510;
  t1572 = -1.*t1438*t1404;
  t1575 = t1459*t1443*t1466;
  t1576 = t1572 + t1575;
  t1549 = t1459*t1438*t1443;
  t1552 = t1404*t1466;
  t1570 = t1549 + t1552;
  t1756 = t1438*t1404;
  t1771 = -1.*t1459*t1443*t1466;
  t1781 = t1756 + t1771;
  t1604 = t1477*t1570;
  t1520 = t1477*t1499;
  t1812 = t1438*t1404*t1443;
  t1816 = -1.*t1459*t1466;
  t1817 = t1812 + t1816;
  t1792 = -1.*t1570*t1486;
  t1605 = -1.*t1576*t1486;
  t1608 = t1604 + t1605;
  t1865 = -0.135*t1477;
  t1867 = t1865 + t1510;
  t1869 = 0.07996*t1477;
  t1870 = 0.135*t1486;
  t1877 = t1869 + t1870;
  t1893 = t1459*t1438;
  t1894 = t1404*t1443*t1466;
  t1895 = t1893 + t1894;
  t1822 = -1.*t1817*t1486;
  t1832 = t1477*t1817;
  t1844 = -1.*t1351*t1477*t1466;
  t1845 = -1.*t1351*t1438*t1486;
  t1850 = t1844 + t1845;
  t1851 = 0.07996*t1850;
  t1855 = t1351*t1438*t1477;
  t1859 = -1.*t1351*t1466*t1486;
  t1861 = t1855 + t1859;
  t1862 = 0.135*t1861;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.08055*t1351*t1404 + t1470*t1489 + 0.07996*(t1470*t1477 - 1.*t1486*t1499) + t1499*t1513 + 0.135*(t1470*t1486 + t1520);
  p_output1[10]=-0.08055*t1351*t1459 + t1489*t1570 + t1513*t1576 + 0.135*(t1486*t1570 + t1477*t1576) + 0.07996*t1608;
  p_output1[11]=0;
  p_output1[12]=0.08055*t1443*t1459 + 0.135*(t1351*t1459*t1466*t1477 + t1351*t1438*t1459*t1486) + 0.07996*(t1351*t1438*t1459*t1477 - 1.*t1351*t1459*t1466*t1486) + t1351*t1438*t1459*t1489 + t1351*t1459*t1466*t1513;
  p_output1[13]=0.08055*t1404*t1443 + 0.135*(t1351*t1404*t1466*t1477 + t1351*t1404*t1438*t1486) + 0.07996*(t1351*t1404*t1438*t1477 - 1.*t1351*t1404*t1466*t1486) + t1351*t1404*t1438*t1489 + t1351*t1404*t1466*t1513;
  p_output1[14]=0.08055*t1351 + 0.135*(-1.*t1443*t1466*t1477 - 1.*t1438*t1443*t1486) + 0.07996*(-1.*t1438*t1443*t1477 + t1443*t1466*t1486) - 1.*t1438*t1443*t1489 - 1.*t1443*t1466*t1513;
  p_output1[15]=t1513*t1570 + t1489*t1781 + 0.135*(t1604 + t1486*t1781) + 0.07996*(t1477*t1781 + t1792);
  p_output1[16]=t1489*t1499 + t1513*t1817 + 0.07996*(t1520 + t1822) + 0.135*(t1486*t1499 + t1832);
  p_output1[17]=-1.*t1351*t1466*t1489 + t1351*t1438*t1513 + t1851 + t1862;
  p_output1[18]=0.135*t1608 + 0.07996*(-1.*t1477*t1576 + t1792) + t1570*t1867 + t1576*t1877;
  p_output1[19]=t1817*t1867 + t1877*t1895 + 0.07996*(t1822 - 1.*t1477*t1895) + 0.135*(t1832 - 1.*t1486*t1895);
  p_output1[20]=t1851 + t1862 + t1351*t1438*t1867 + t1351*t1466*t1877;
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



void Jp_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
