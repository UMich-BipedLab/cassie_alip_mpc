/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:03 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1330;
  double t151;
  double t348;
  double t552;
  double t611;
  double t792;
  double t1345;
  double t1352;
  double t1385;
  double t1448;
  double t276;
  double t2453;
  double t1806;
  double t2687;
  double t3294;
  double t3696;
  double t2233;
  double t5718;
  double t5667;
  double t6339;
  double t6387;
  double t6555;
  double t6558;
  double t6577;
  double t2533;
  double t2541;
  double t2638;
  double t7185;
  double t7189;
  double t7231;
  double t1837;
  double t2362;
  double t641;
  double t1100;
  double t1223;
  double t6740;
  double t7502;
  double t7693;
  double t7747;
  double t8132;
  double t8148;
  double t1402;
  double t1474;
  double t1772;
  double t8567;
  double t9130;
  double t9341;
  double t9416;
  double t9434;
  double t9437;
  double t9452;
  double t9454;
  double t9463;
  double t9520;
  double t9521;
  double t9522;
  double t9542;
  double t9546;
  double t9547;
  double t9575;
  double t9576;
  double t9577;
  double t9589;
  double t9590;
  double t9591;
  double t5590;
  double t5650;
  double t6435;
  double t6523;
  double t6524;
  double t9585;
  double t9611;
  double t9612;
  double t9614;
  double t9622;
  double t9624;
  double t9513;
  double t9514;
  double t9515;
  double t9518;
  double t9519;
  double t9644;
  double t9651;
  double t9652;
  double t9496;
  double t9525;
  double t9526;
  double t9527;
  double t9549;
  double t9550;
  double t9551;
  double t9686;
  double t9687;
  double t9689;
  double t9691;
  double t9692;
  double t9694;
  double t9695;
  double t9560;
  double t9561;
  double t9562;
  double t1336;
  double t1817;
  double t2456;
  double t3732;
  double t3736;
  double t3977;
  double t4019;
  double t4258;
  double t4461;
  double t4477;
  double t4682;
  double t4906;
  double t4991;
  double t4995;
  double t5025;
  double t5026;
  double t5404;
  double t8502;
  double t9482;
  double t9722;
  double t9723;
  double t9724;
  double t9744;
  double t9745;
  double t9746;
  double t9743;
  double t9747;
  double t9748;
  double t9749;
  double t9538;
  double t9539;
  double t9540;
  double t9548;
  double t9559;
  double t9564;
  double t9566;
  double t9568;
  double t9571;
  double t9572;
  double t9573;
  double t9761;
  double t9762;
  double t9763;
  double t9667;
  double t9777;
  double t9778;
  double t9779;
  double t9676;
  double t9807;
  double t9810;
  double t9811;
  double t9802;
  double t9804;
  double t9805;
  double t9806;
  double t9812;
  double t9813;
  double t9814;
  double t9825;
  double t9826;
  double t9827;
  double t9845;
  double t9846;
  double t9847;
  double t9700;
  double t9701;
  double t9703;
  double t9361;
  double t9442;
  double t9464;
  double t9465;
  double t9473;
  double t9476;
  double t9477;
  double t9586;
  double t7500;
  double t7829;
  double t7851;
  double t8029;
  double t8092;
  double t8187;
  double t8189;
  double t8225;
  double t8236;
  double t9755;
  double t9756;
  double t9757;
  double t9578;
  double t9579;
  double t9588;
  double t9592;
  double t9593;
  double t9598;
  double t9600;
  double t9884;
  double t9885;
  double t9886;
  double t9889;
  double t9890;
  double t9668;
  double t9669;
  double t9670;
  double t9671;
  double t9904;
  double t9905;
  double t9906;
  double t9913;
  double t9914;
  double t9915;
  double t9822;
  double t9824;
  double t9828;
  double t9830;
  double t9831;
  double t9832;
  double t9833;
  double t9926;
  double t9928;
  double t9818;
  double t9819;
  double t9820;
  double t9684;
  double t9685;
  double t9696;
  double t9865;
  double t9866;
  double t9867;
  double t9868;
  double t9869;
  double t9870;
  double t9871;
  double t9872;
  double t9873;
  double t9616;
  double t9617;
  double t6422;
  double t6582;
  double t6809;
  double t6899;
  double t7144;
  double t7389;
  double t7398;
  double t7404;
  double t7409;
  double t9741;
  double t9742;
  double t9750;
  double t9608;
  double t9615;
  double t9620;
  double t9630;
  double t9633;
  double t9634;
  double t9635;
  double t9887;
  double t9888;
  double t9891;
  double t9892;
  double t9893;
  double t9894;
  double t9895;
  double t9896;
  double t9897;
  double t9964;
  double t9965;
  double t9945;
  double t9947;
  double t9948;
  double t9972;
  double t9973;
  double t9917;
  double t9918;
  double t9921;
  double t9922;
  double t9925;
  double t9932;
  double t9933;
  double t9934;
  double t9796;
  double t9798;
  double t9815;
  double t9706;
  double t9707;
  double t9709;
  double t9710;
  double t9712;
  double t9714;
  double t9715;
  double t9716;
  double t9875;
  double t9876;
  double t9877;
  double t9878;
  double t9940;
  double t9941;
  double t9942;
  double t9943;
  double t9660;
  double t9663;
  double t9516;
  double t9523;
  double t9528;
  double t9531;
  double t9532;
  double t9533;
  double t9534;
  double t9535;
  double t9760;
  double t9764;
  double t9766;
  double t9767;
  double t9768;
  double t9769;
  double t9770;
  double t9771;
  double t9772;
  double t9773;
  double t9907;
  double t9908;
  double t9909;
  double t9910;
  double t9966;
  double t9967;
  double t9968;
  double t9969;
  double t9642;
  double t9653;
  double t9654;
  double t9657;
  double t9658;
  double t9659;
  double t9664;
  double t9665;
  double t9994;
  double t9995;
  double t9996;
  double t10013;
  double t10014;
  double t9834;
  double t10028;
  double t10029;
  double t10030;
  double t9838;
  double t9844;
  double t9848;
  double t9849;
  double t9850;
  double t9851;
  double t9852;
  double t9853;
  double t9854;
  double t9855;
  double t9856;
  double t9857;
  t1330 = Sin(var1[3]);
  t151 = Cos(var1[4]);
  t348 = Cos(var1[13]);
  t552 = -1.*t348;
  t611 = 1. + t552;
  t792 = Sin(var1[13]);
  t1345 = Cos(var1[14]);
  t1352 = -1.*t1345;
  t1385 = 1. + t1352;
  t1448 = Sin(var1[14]);
  t276 = Cos(var1[5]);
  t2453 = Sin(var1[5]);
  t1806 = Sin(var1[4]);
  t2687 = -1.*t151*t276*t792*t1330;
  t3294 = -1.*t348*t151*t1330*t2453;
  t3696 = t2687 + t3294;
  t2233 = 0.07996*t792;
  t5718 = Cos(var1[3]);
  t5667 = -1.*t276*t1330*t1806;
  t6339 = t5718*t2453;
  t6387 = t5667 + t6339;
  t6555 = -1.*t5718*t276;
  t6558 = -1.*t1330*t1806*t2453;
  t6577 = t6555 + t6558;
  t2533 = -0.135*t1385;
  t2541 = 0.08055*t1448;
  t2638 = 0. + t2533 + t2541;
  t7185 = t348*t6387;
  t7189 = -1.*t792*t6577;
  t7231 = t7185 + t7189;
  t1837 = -0.135*t611;
  t2362 = 0. + t1837 + t2233;
  t641 = 0.07996*t611;
  t1100 = 0.135*t792;
  t1223 = 0. + t641 + t1100;
  t6740 = -1.*t792*t6387;
  t7502 = t5718*t276;
  t7693 = t1330*t1806*t2453;
  t7747 = t7502 + t7693;
  t8132 = t792*t7747;
  t8148 = t7185 + t8132;
  t1402 = -0.08055*t1385;
  t1474 = -0.135*t1448;
  t1772 = 0. + t1402 + t1474;
  t8567 = -1.*t5718*t276*t1806;
  t9130 = -1.*t1330*t2453;
  t9341 = t8567 + t9130;
  t9416 = t276*t1330;
  t9434 = -1.*t5718*t1806*t2453;
  t9437 = t9416 + t9434;
  t9452 = t792*t9341;
  t9454 = t348*t9437;
  t9463 = t9452 + t9454;
  t9520 = t792*t6387;
  t9521 = t348*t6577;
  t9522 = t9520 + t9521;
  t9542 = t5718*t151*t276*t792;
  t9546 = t348*t5718*t151*t2453;
  t9547 = t9542 + t9546;
  t9575 = t5718*t276*t1806;
  t9576 = t1330*t2453;
  t9577 = t9575 + t9576;
  t9589 = t348*t9577;
  t9590 = t792*t9437;
  t9591 = t9589 + t9590;
  t5590 = 0.135*t348;
  t5650 = t5590 + t2233;
  t6435 = 0.07996*t348;
  t6523 = -0.135*t792;
  t6524 = t6435 + t6523;
  t9585 = -1.*t792*t9577;
  t9611 = -1.*t276*t1330;
  t9612 = t5718*t1806*t2453;
  t9614 = t9611 + t9612;
  t9622 = -1.*t792*t9614;
  t9624 = t9589 + t9622;
  t9513 = -0.135*t1345;
  t9514 = -0.08055*t1448;
  t9515 = t9513 + t9514;
  t9518 = 0.08055*t1345;
  t9519 = t9518 + t1474;
  t9644 = t792*t9577;
  t9651 = t348*t9614;
  t9652 = t9644 + t9651;
  t9496 = -1.*t1345*t5718*t151;
  t9525 = t151*t1448*t1330;
  t9526 = t1345*t9522;
  t9527 = t9525 + t9526;
  t9549 = t348*t5718*t151*t276;
  t9550 = -1.*t5718*t151*t792*t2453;
  t9551 = t9549 + t9550;
  t9686 = -1.*t5718*t151*t276*t792;
  t9687 = -1.*t348*t5718*t151*t2453;
  t9689 = t9686 + t9687;
  t9691 = -0.01004*t9689;
  t9692 = -0.135*t1345*t9551;
  t9694 = t2638*t9551;
  t9695 = -0.08055*t1448*t9551;
  t9560 = t5718*t1448*t1806;
  t9561 = t1345*t9547;
  t9562 = t9560 + t9561;
  t1336 = -1.*t151*t276*t1223*t1330;
  t1817 = t1772*t1330*t1806;
  t2456 = -1.*t151*t2362*t1330*t2453;
  t3732 = t2638*t3696;
  t3736 = -1.*t348*t151*t276*t1330;
  t3977 = t151*t792*t1330*t2453;
  t4019 = t3736 + t3977;
  t4258 = -0.01004*t4019;
  t4461 = -1.*t1448*t1330*t1806;
  t4477 = t1345*t3696;
  t4682 = t4461 + t4477;
  t4906 = -0.135*t4682;
  t4991 = t1345*t1330*t1806;
  t4995 = t1448*t3696;
  t5025 = t4991 + t4995;
  t5026 = -0.08055*t5025;
  t5404 = t1336 + t1817 + t2456 + t3732 + t4258 + t4906 + t5026;
  t8502 = -1.*t5718*t151*t1772;
  t9482 = t5718*t151*t1448;
  t9722 = -1.*t5718*t276*t792*t1806;
  t9723 = -1.*t348*t5718*t1806*t2453;
  t9724 = t9722 + t9723;
  t9744 = t348*t151*t276*t1330;
  t9745 = -1.*t151*t792*t1330*t2453;
  t9746 = t9744 + t9745;
  t9743 = -0.01004*t3696;
  t9747 = -0.135*t1345*t9746;
  t9748 = t2638*t9746;
  t9749 = -0.08055*t1448*t9746;
  t9538 = t5718*t151*t276*t1223;
  t9539 = -1.*t5718*t1772*t1806;
  t9540 = t5718*t151*t2362*t2453;
  t9548 = t2638*t9547;
  t9559 = -0.01004*t9551;
  t9564 = -0.135*t9562;
  t9566 = -1.*t1345*t5718*t1806;
  t9568 = t1448*t9547;
  t9571 = t9566 + t9568;
  t9572 = -0.08055*t9571;
  t9573 = t9538 + t9539 + t9540 + t9548 + t9559 + t9564 + t9572;
  t9761 = t151*t276*t792*t1330;
  t9762 = t348*t151*t1330*t2453;
  t9763 = t9761 + t9762;
  t9667 = -1.*t151*t1772*t1330;
  t9777 = -1.*t276*t792*t1330*t1806;
  t9778 = -1.*t348*t1330*t1806*t2453;
  t9779 = t9777 + t9778;
  t9676 = -1.*t1345*t151*t1330;
  t9807 = -1.*t348*t276*t1806;
  t9810 = t792*t1806*t2453;
  t9811 = t9807 + t9810;
  t9802 = t276*t792*t1806;
  t9804 = t348*t1806*t2453;
  t9805 = t9802 + t9804;
  t9806 = -0.01004*t9805;
  t9812 = -0.135*t1345*t9811;
  t9813 = t2638*t9811;
  t9814 = -0.08055*t1448*t9811;
  t9825 = -1.*t151*t276*t792;
  t9826 = -1.*t348*t151*t2453;
  t9827 = t9825 + t9826;
  t9845 = -1.*t276*t792*t1806;
  t9846 = -1.*t348*t1806*t2453;
  t9847 = t9845 + t9846;
  t9700 = t5718*t151*t276*t2362;
  t9701 = -1.*t5718*t151*t1223*t2453;
  t9703 = t9700 + t9701 + t9691 + t9692 + t9694 + t9695;
  t9361 = t1223*t9341;
  t9442 = t2362*t9437;
  t9464 = t2638*t9463;
  t9465 = t348*t9341;
  t9473 = -1.*t792*t9437;
  t9476 = t9465 + t9473;
  t9477 = -0.01004*t9476;
  t9586 = t9585 + t9454;
  t7500 = t2362*t6387;
  t7829 = t1223*t7747;
  t7851 = t348*t7747;
  t8029 = t6740 + t7851;
  t8092 = -0.01004*t8029;
  t8187 = -0.135*t1345*t8148;
  t8189 = t2638*t8148;
  t8225 = -0.08055*t1448*t8148;
  t8236 = t7500 + t7829 + t8092 + t8187 + t8189 + t8225;
  t9755 = t151*t276*t2362*t1330;
  t9756 = -1.*t151*t1223*t1330*t2453;
  t9757 = t9755 + t9756 + t9743 + t9747 + t9748 + t9749;
  t9578 = t2362*t9577;
  t9579 = t1223*t9437;
  t9588 = -0.01004*t9586;
  t9592 = -0.135*t1345*t9591;
  t9593 = t2638*t9591;
  t9598 = -0.08055*t1448*t9591;
  t9600 = t9578 + t9579 + t9588 + t9592 + t9593 + t9598;
  t9884 = t276*t1330*t1806;
  t9885 = -1.*t5718*t2453;
  t9886 = t9884 + t9885;
  t9889 = -1.*t792*t9886;
  t9890 = t9889 + t9521;
  t9668 = t1223*t6387;
  t9669 = t2362*t6577;
  t9670 = t2638*t9522;
  t9671 = -0.01004*t7231;
  t9904 = t348*t9886;
  t9905 = t792*t6577;
  t9906 = t9904 + t9905;
  t9913 = t348*t151*t276;
  t9914 = -1.*t151*t792*t2453;
  t9915 = t9913 + t9914;
  t9822 = -1.*t151*t276*t1223;
  t9824 = -1.*t151*t2362*t2453;
  t9828 = t2638*t9827;
  t9830 = -1.*t348*t151*t276;
  t9831 = t151*t792*t2453;
  t9832 = t9830 + t9831;
  t9833 = -0.01004*t9832;
  t9926 = -0.135*t1345*t9827;
  t9928 = -0.08055*t1448*t9827;
  t9818 = -1.*t276*t2362*t1806;
  t9819 = t1223*t1806*t2453;
  t9820 = t9818 + t9819 + t9806 + t9812 + t9813 + t9814;
  t9684 = t5718*t151*t276*t5650;
  t9685 = t5718*t151*t6524*t2453;
  t9696 = t9684 + t9685 + t9691 + t9692 + t9694 + t9695;
  t9865 = t6524*t9577;
  t9866 = t5650*t9437;
  t9867 = -0.135*t1345*t9586;
  t9868 = t2638*t9586;
  t9869 = -0.08055*t1448*t9586;
  t9870 = -1.*t348*t9577;
  t9871 = t9870 + t9473;
  t9872 = -0.01004*t9871;
  t9873 = t9865 + t9866 + t9867 + t9868 + t9869 + t9872;
  t9616 = -1.*t348*t9614;
  t9617 = t9585 + t9616;
  t6422 = t5650*t6387;
  t6582 = t6524*t6577;
  t6809 = -1.*t348*t6577;
  t6899 = t6740 + t6809;
  t7144 = -0.01004*t6899;
  t7389 = -0.135*t1345*t7231;
  t7398 = t2638*t7231;
  t7404 = -0.08055*t1448*t7231;
  t7409 = t6422 + t6582 + t7144 + t7389 + t7398 + t7404;
  t9741 = t151*t276*t5650*t1330;
  t9742 = t151*t6524*t1330*t2453;
  t9750 = t9741 + t9742 + t9743 + t9747 + t9748 + t9749;
  t9608 = t5650*t9577;
  t9615 = t6524*t9614;
  t9620 = -0.01004*t9617;
  t9630 = -0.135*t1345*t9624;
  t9633 = t2638*t9624;
  t9634 = -0.08055*t1448*t9624;
  t9635 = t9608 + t9615 + t9620 + t9630 + t9633 + t9634;
  t9887 = t6524*t9886;
  t9888 = t5650*t6577;
  t9891 = -0.135*t1345*t9890;
  t9892 = t2638*t9890;
  t9893 = -0.08055*t1448*t9890;
  t9894 = -1.*t348*t9886;
  t9895 = t9894 + t7189;
  t9896 = -0.01004*t9895;
  t9897 = t9887 + t9888 + t9891 + t9892 + t9893 + t9896;
  t9964 = -1.*t792*t7747;
  t9965 = t9904 + t9964;
  t9945 = -0.135*t348;
  t9947 = -0.07996*t792;
  t9948 = t9945 + t9947;
  t9972 = -1.*t348*t7747;
  t9973 = t9889 + t9972;
  t9917 = -0.08055*t1345*t9915;
  t9918 = t9519*t9915;
  t9921 = 0.135*t1448*t9915;
  t9922 = t9917 + t9918 + t9921;
  t9925 = var2[14]*t9922;
  t9932 = t151*t276*t6524;
  t9933 = -1.*t151*t5650*t2453;
  t9934 = t9932 + t9933 + t9926 + t9828 + t9928 + t9833;
  t9796 = -1.*t276*t5650*t1806;
  t9798 = -1.*t6524*t1806*t2453;
  t9815 = t9796 + t9798 + t9806 + t9812 + t9813 + t9814;
  t9706 = -1.*t5718*t9515*t1806;
  t9707 = t9519*t9547;
  t9709 = -0.08055*t9562;
  t9710 = t1345*t5718*t1806;
  t9712 = -1.*t1448*t9547;
  t9714 = t9710 + t9712;
  t9715 = -0.135*t9714;
  t9716 = t9706 + t9707 + t9709 + t9715;
  t9875 = -0.08055*t1345*t9591;
  t9876 = t9519*t9591;
  t9877 = 0.135*t1448*t9591;
  t9878 = t9875 + t9876 + t9877;
  t9940 = -0.08055*t1345*t9624;
  t9941 = t9519*t9624;
  t9942 = 0.135*t1448*t9624;
  t9943 = t9940 + t9941 + t9942;
  t9660 = -1.*t1448*t9652;
  t9663 = t9496 + t9660;
  t9516 = -1.*t151*t9515*t1330;
  t9523 = t9519*t9522;
  t9528 = -0.08055*t9527;
  t9531 = t1345*t151*t1330;
  t9532 = -1.*t1448*t9522;
  t9533 = t9531 + t9532;
  t9534 = -0.135*t9533;
  t9535 = t9516 + t9523 + t9528 + t9534;
  t9760 = -1.*t9515*t1330*t1806;
  t9764 = t9519*t9763;
  t9766 = t1448*t1330*t1806;
  t9767 = t1345*t9763;
  t9768 = t9766 + t9767;
  t9769 = -0.08055*t9768;
  t9770 = -1.*t1448*t9763;
  t9771 = t4991 + t9770;
  t9772 = -0.135*t9771;
  t9773 = t9760 + t9764 + t9769 + t9772;
  t9907 = -0.08055*t1345*t9906;
  t9908 = t9519*t9906;
  t9909 = 0.135*t1448*t9906;
  t9910 = t9907 + t9908 + t9909;
  t9966 = -0.08055*t1345*t9965;
  t9967 = t9519*t9965;
  t9968 = 0.135*t1448*t9965;
  t9969 = t9966 + t9967 + t9968;
  t9642 = t5718*t151*t9515;
  t9653 = t9519*t9652;
  t9654 = -1.*t5718*t151*t1448;
  t9657 = t1345*t9652;
  t9658 = t9654 + t9657;
  t9659 = -0.08055*t9658;
  t9664 = -0.135*t9663;
  t9665 = t9642 + t9653 + t9659 + t9664;
  t9994 = -0.08055*t1345;
  t9995 = 0.135*t1448;
  t9996 = t9994 + t9995;
  t10013 = t792*t9886;
  t10014 = t10013 + t7851;
  t9834 = -1.*t1448*t1806;
  t10028 = t151*t276*t792;
  t10029 = t348*t151*t2453;
  t10030 = t10028 + t10029;
  t9838 = t1345*t1806;
  t9844 = -1.*t151*t9515;
  t9848 = t9519*t9847;
  t9849 = t151*t1448;
  t9850 = t1345*t9847;
  t9851 = t9849 + t9850;
  t9852 = -0.08055*t9851;
  t9853 = t1345*t151;
  t9854 = -1.*t1448*t9847;
  t9855 = t9853 + t9854;
  t9856 = -0.135*t9855;
  t9857 = t9844 + t9848 + t9852 + t9856;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t8502 + t9361 + t9442 + t9464 + t9477 - 0.135*(t1345*t9463 + t9482) - 0.08055*(t1448*t9463 + t9496))*var2[3] + t5404*var2[4] + t8236*var2[5] + t7409*var2[13] + t9535*var2[14];
  p_output1[10]=(-0.135*t9527 + t9667 + t9668 + t9669 + t9670 + t9671 - 0.08055*(t1448*t9522 + t9676))*var2[3] + t9573*var2[4] + t9600*var2[5] + t9635*var2[13] + t9665*var2[14];
  p_output1[11]=0;
  p_output1[12]=t5404*var2[3] + (-1.*t1806*t2362*t2453*t5718 - 1.*t1223*t1806*t276*t5718 - 0.01004*(-1.*t1806*t276*t348*t5718 + t1806*t2453*t5718*t792) + t8502 + t2638*t9724 - 0.135*(t9482 + t1345*t9724) - 0.08055*(t9496 + t1448*t9724))*var2[4] + t9703*var2[5] + t9696*var2[13] + t9716*var2[14];
  p_output1[13]=t9573*var2[3] + (-1.*t1330*t1806*t2362*t2453 - 1.*t1223*t1330*t1806*t276 - 0.01004*(-1.*t1330*t1806*t276*t348 + t1330*t1806*t2453*t792) + t9667 + t2638*t9779 - 0.135*(t9525 + t1345*t9779) - 0.08055*(t9676 + t1448*t9779))*var2[4] + t9757*var2[5] + t9750*var2[13] + t9773*var2[14];
  p_output1[14]=(t1772*t1806 + t9822 + t9824 + t9828 + t9833 - 0.135*(t1345*t9827 + t9834) - 0.08055*(t1448*t9827 + t9838))*var2[4] + t9820*var2[5] + t9815*var2[13] + t9857*var2[14];
  p_output1[15]=t8236*var2[3] + t9703*var2[4] + (t9361 + t9442 - 0.135*t1345*t9463 - 0.08055*t1448*t9463 + t9464 + t9477)*var2[5] + t9873*var2[13] + t9878*var2[14];
  p_output1[16]=t9600*var2[3] + t9757*var2[4] + (-0.135*t1345*t9522 - 0.08055*t1448*t9522 + t9668 + t9669 + t9670 + t9671)*var2[5] + t9897*var2[13] + t9910*var2[14];
  p_output1[17]=t9925 + t9820*var2[4] + (t9822 + t9824 + t9828 + t9833 + t9926 + t9928)*var2[5] + t9934*var2[13];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=t7409*var2[3] + t9696*var2[4] + t9873*var2[5] + (-0.135*t1345*t9617 - 0.08055*t1448*t9617 + t2638*t9617 + t9865 - 0.01004*(t792*t9614 + t9870) + t9614*t9948)*var2[13] + t9943*var2[14];
  p_output1[40]=t9635*var2[3] + t9750*var2[4] + t9897*var2[5] + (t9887 - 0.01004*(t8132 + t9894) + t7747*t9948 - 0.135*t1345*t9973 - 0.08055*t1448*t9973 + t2638*t9973)*var2[13] + t9969*var2[14];
  p_output1[41]=t9925 + t9815*var2[4] + t9934*var2[5] + (t9828 + t9833 + t9926 + t9928 + t9932 + t151*t2453*t9948)*var2[13];
  p_output1[42]=t9535*var2[3] + t9716*var2[4] + t9878*var2[5] + t9943*var2[13] + (t9515*t9652 - 0.135*(t9482 - 1.*t1345*t9652) - 0.08055*t9663 + t151*t5718*t9996)*var2[14];
  p_output1[43]=t9665*var2[3] + t9773*var2[4] + t9910*var2[5] + t9969*var2[13] + (t10014*t9515 - 0.135*(-1.*t10014*t1345 + t9525) - 0.08055*(-1.*t10014*t1448 + t9676) + t1330*t151*t9996)*var2[14];
  p_output1[44]=t9857*var2[4] + t9922*var2[5] + t9922*var2[13] + (t10030*t9515 - 0.135*(-1.*t10030*t1345 + t9834) - 0.08055*(-1.*t10030*t1448 + t9838) - 1.*t1806*t9996)*var2[14];
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_RightRotationJoint_mex.hh"

namespace SymExpression
{

void dJp_RightRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
