/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:04 GMT-04:00
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
  double t698;
  double t167;
  double t550;
  double t554;
  double t703;
  double t881;
  double t1040;
  double t1083;
  double t1143;
  double t1326;
  double t639;
  double t705;
  double t853;
  double t2101;
  double t2153;
  double t2203;
  double t2018;
  double t2300;
  double t2923;
  double t2952;
  double t1050;
  double t2606;
  double t2652;
  double t2760;
  double t1649;
  double t4127;
  double t4178;
  double t2258;
  double t2273;
  double t2278;
  double t2324;
  double t2343;
  double t3106;
  double t3121;
  double t3247;
  double t4861;
  double t3284;
  double t3518;
  double t5148;
  double t5267;
  double t5324;
  double t5488;
  double t6595;
  double t6596;
  double t6909;
  double t9529;
  double t9538;
  double t9551;
  double t9560;
  double t9571;
  double t9577;
  double t5476;
  double t5598;
  double t9627;
  double t9630;
  double t9638;
  double t9671;
  double t9672;
  double t9673;
  double t9678;
  double t9679;
  double t9680;
  double t901;
  double t1054;
  double t1352;
  double t1531;
  double t1549;
  double t9692;
  double t9693;
  double t9694;
  double t9675;
  double t9699;
  double t9700;
  double t9718;
  double t9720;
  double t9721;
  double t7314;
  double t7355;
  double t7420;
  double t6282;
  double t6415;
  double t6473;
  double t7233;
  double t7234;
  double t9790;
  double t9791;
  double t9793;
  double t9656;
  double t9714;
  double t9715;
  double t9716;
  double t9816;
  double t9817;
  double t9818;
  double t9819;
  double t9820;
  double t9821;
  double t9823;
  double t9732;
  double t9733;
  double t9734;
  double t4865;
  double t4869;
  double t4871;
  double t4872;
  double t4896;
  double t5007;
  double t5399;
  double t5879;
  double t5979;
  double t5980;
  double t5991;
  double t5994;
  double t5997;
  double t6000;
  double t6082;
  double t6088;
  double t6106;
  double t9640;
  double t9859;
  double t9860;
  double t9861;
  double t9644;
  double t9877;
  double t9878;
  double t9879;
  double t9876;
  double t9880;
  double t9881;
  double t9882;
  double t9712;
  double t9713;
  double t9717;
  double t9726;
  double t9730;
  double t9735;
  double t9737;
  double t9738;
  double t9741;
  double t9744;
  double t9747;
  double t9891;
  double t9892;
  double t9893;
  double t9770;
  double t9910;
  double t9911;
  double t9912;
  double t9777;
  double t9932;
  double t9933;
  double t9934;
  double t9928;
  double t9929;
  double t9930;
  double t9931;
  double t9935;
  double t9936;
  double t9937;
  double t9951;
  double t9952;
  double t9953;
  double t9968;
  double t9969;
  double t9970;
  double t9813;
  double t9815;
  double t9826;
  double t9559;
  double t9587;
  double t9597;
  double t9618;
  double t9619;
  double t9621;
  double t9639;
  double t9676;
  double t3267;
  double t3525;
  double t3605;
  double t4108;
  double t4121;
  double t4405;
  double t4409;
  double t4431;
  double t4661;
  double t9874;
  double t9875;
  double t9883;
  double t10011;
  double t10013;
  double t10014;
  double t10016;
  double t10017;
  double t9749;
  double t9752;
  double t9754;
  double t9758;
  double t9670;
  double t9674;
  double t9677;
  double t9681;
  double t9682;
  double t9683;
  double t9686;
  double t10031;
  double t10032;
  double t10034;
  double t9944;
  double t9946;
  double t9947;
  double t9948;
  double t9949;
  double t9950;
  double t9955;
  double t10041;
  double t10042;
  double t10049;
  double t10050;
  double t10051;
  double t9926;
  double t9927;
  double t9938;
  double t9828;
  double t9829;
  double t9830;
  double t9991;
  double t9992;
  double t9993;
  double t9994;
  double t9995;
  double t9996;
  double t9997;
  double t9998;
  double t9999;
  double t9696;
  double t9697;
  double t1056;
  double t1553;
  double t1648;
  double t1767;
  double t1942;
  double t2208;
  double t2366;
  double t2491;
  double t2523;
  double t9885;
  double t9886;
  double t9887;
  double t10010;
  double t10015;
  double t10018;
  double t10019;
  double t10020;
  double t10021;
  double t10022;
  double t10023;
  double t10024;
  double t10061;
  double t10062;
  double t10063;
  double t10085;
  double t10086;
  double t9691;
  double t9695;
  double t9698;
  double t9701;
  double t9707;
  double t9708;
  double t9709;
  double t10095;
  double t10096;
  double t10046;
  double t10045;
  double t10047;
  double t10052;
  double t10053;
  double t10054;
  double t10055;
  double t10056;
  double t9940;
  double t9941;
  double t9942;
  double t10001;
  double t10002;
  double t10003;
  double t10004;
  double t10074;
  double t10075;
  double t10076;
  double t10077;
  double t9833;
  double t9834;
  double t9835;
  double t9836;
  double t9837;
  double t9840;
  double t9843;
  double t9846;
  double t6517;
  double t7309;
  double t7554;
  double t7618;
  double t8417;
  double t8424;
  double t9126;
  double t9498;
  double t9799;
  double t9803;
  double t10035;
  double t10036;
  double t10037;
  double t10038;
  double t10097;
  double t10098;
  double t10099;
  double t10100;
  double t9890;
  double t9894;
  double t9895;
  double t9896;
  double t9897;
  double t9898;
  double t9899;
  double t9900;
  double t9901;
  double t9902;
  double t10113;
  double t10114;
  double t10115;
  double t10129;
  double t10130;
  double t9789;
  double t9794;
  double t9795;
  double t9796;
  double t9797;
  double t9798;
  double t9804;
  double t9805;
  double t10148;
  double t10149;
  double t10150;
  double t9958;
  double t9961;
  double t9967;
  double t9971;
  double t9972;
  double t9974;
  double t9975;
  double t9976;
  double t9977;
  double t9978;
  double t9979;
  double t9981;
  double t9982;
  t698 = Cos(var1[3]);
  t167 = Cos(var1[5]);
  t550 = Sin(var1[3]);
  t554 = Sin(var1[4]);
  t703 = Sin(var1[5]);
  t881 = Cos(var1[6]);
  t1040 = Sin(var1[6]);
  t1083 = -1.*t698*t167;
  t1143 = -1.*t550*t554*t703;
  t1326 = t1083 + t1143;
  t639 = -1.*t167*t550*t554;
  t705 = t698*t703;
  t853 = t639 + t705;
  t2101 = t881*t853;
  t2153 = -1.*t1326*t1040;
  t2203 = t2101 + t2153;
  t2018 = Cos(var1[7]);
  t2300 = Sin(var1[7]);
  t2923 = -1.*t881;
  t2952 = 1. + t2923;
  t1050 = 0.07996*t1040;
  t2606 = t698*t167;
  t2652 = t550*t554*t703;
  t2760 = t2606 + t2652;
  t1649 = -1.*t853*t1040;
  t4127 = t2760*t1040;
  t4178 = t2101 + t4127;
  t2258 = -1.*t2018;
  t2273 = 1. + t2258;
  t2278 = 0.135*t2273;
  t2324 = 0.08055*t2300;
  t2343 = 0. + t2278 + t2324;
  t3106 = 0.07996*t2952;
  t3121 = -0.135*t1040;
  t3247 = 0. + t3106 + t3121;
  t4861 = Cos(var1[4]);
  t3284 = 0.135*t2952;
  t3518 = 0. + t3284 + t1050;
  t5148 = -1.*t4861*t881*t550*t703;
  t5267 = -1.*t4861*t167*t550*t1040;
  t5324 = t5148 + t5267;
  t5488 = 0.135*t2300;
  t6595 = t881*t1326;
  t6596 = t853*t1040;
  t6909 = t6595 + t6596;
  t9529 = -1.*t698*t167*t554;
  t9538 = -1.*t550*t703;
  t9551 = t9529 + t9538;
  t9560 = t167*t550;
  t9571 = -1.*t698*t554*t703;
  t9577 = t9560 + t9571;
  t5476 = -0.08055*t2273;
  t5598 = 0. + t5476 + t5488;
  t9627 = t881*t9577;
  t9630 = t9551*t1040;
  t9638 = t9627 + t9630;
  t9671 = t698*t167*t554;
  t9672 = t550*t703;
  t9673 = t9671 + t9672;
  t9678 = t881*t9673;
  t9679 = t9577*t1040;
  t9680 = t9678 + t9679;
  t901 = -0.135*t881;
  t1054 = t901 + t1050;
  t1352 = 0.07996*t881;
  t1531 = 0.135*t1040;
  t1549 = t1352 + t1531;
  t9692 = -1.*t167*t550;
  t9693 = t698*t554*t703;
  t9694 = t9692 + t9693;
  t9675 = -1.*t9673*t1040;
  t9699 = -1.*t9694*t1040;
  t9700 = t9678 + t9699;
  t9718 = t698*t4861*t881*t703;
  t9720 = t698*t4861*t167*t1040;
  t9721 = t9718 + t9720;
  t7314 = t2018*t6909;
  t7355 = t4861*t550*t2300;
  t7420 = t7314 + t7355;
  t6282 = 0.135*t2018;
  t6415 = -0.08055*t2300;
  t6473 = t6282 + t6415;
  t7233 = 0.08055*t2018;
  t7234 = t7233 + t5488;
  t9790 = t881*t9694;
  t9791 = t9673*t1040;
  t9793 = t9790 + t9791;
  t9656 = -1.*t698*t4861*t2018;
  t9714 = t698*t4861*t167*t881;
  t9715 = -1.*t698*t4861*t703*t1040;
  t9716 = t9714 + t9715;
  t9816 = -1.*t698*t4861*t881*t703;
  t9817 = -1.*t698*t4861*t167*t1040;
  t9818 = t9816 + t9817;
  t9819 = 0.04566*t9818;
  t9820 = 0.135*t2018*t9716;
  t9821 = t9716*t2343;
  t9823 = -0.08055*t9716*t2300;
  t9732 = t2018*t9721;
  t9733 = t698*t554*t2300;
  t9734 = t9732 + t9733;
  t4865 = -1.*t4861*t167*t550*t3247;
  t4869 = -1.*t4861*t550*t703*t3518;
  t4871 = -1.*t4861*t167*t881*t550;
  t4872 = t4861*t550*t703*t1040;
  t4896 = t4871 + t4872;
  t5007 = 0.04566*t4896;
  t5399 = t5324*t2343;
  t5879 = t550*t554*t5598;
  t5979 = t2018*t5324;
  t5980 = -1.*t550*t554*t2300;
  t5991 = t5979 + t5980;
  t5994 = 0.135*t5991;
  t5997 = t2018*t550*t554;
  t6000 = t5324*t2300;
  t6082 = t5997 + t6000;
  t6088 = -0.08055*t6082;
  t6106 = t4865 + t4869 + t5007 + t5399 + t5879 + t5994 + t6088;
  t9640 = -1.*t698*t4861*t5598;
  t9859 = -1.*t698*t881*t554*t703;
  t9860 = -1.*t698*t167*t554*t1040;
  t9861 = t9859 + t9860;
  t9644 = t698*t4861*t2300;
  t9877 = t4861*t167*t881*t550;
  t9878 = -1.*t4861*t550*t703*t1040;
  t9879 = t9877 + t9878;
  t9876 = 0.04566*t5324;
  t9880 = 0.135*t2018*t9879;
  t9881 = t9879*t2343;
  t9882 = -0.08055*t9879*t2300;
  t9712 = t698*t4861*t167*t3247;
  t9713 = t698*t4861*t703*t3518;
  t9717 = 0.04566*t9716;
  t9726 = t9721*t2343;
  t9730 = -1.*t698*t554*t5598;
  t9735 = 0.135*t9734;
  t9737 = -1.*t698*t2018*t554;
  t9738 = t9721*t2300;
  t9741 = t9737 + t9738;
  t9744 = -0.08055*t9741;
  t9747 = t9712 + t9713 + t9717 + t9726 + t9730 + t9735 + t9744;
  t9891 = t4861*t881*t550*t703;
  t9892 = t4861*t167*t550*t1040;
  t9893 = t9891 + t9892;
  t9770 = -1.*t4861*t550*t5598;
  t9910 = -1.*t881*t550*t554*t703;
  t9911 = -1.*t167*t550*t554*t1040;
  t9912 = t9910 + t9911;
  t9777 = -1.*t4861*t2018*t550;
  t9932 = -1.*t167*t881*t554;
  t9933 = t554*t703*t1040;
  t9934 = t9932 + t9933;
  t9928 = t881*t554*t703;
  t9929 = t167*t554*t1040;
  t9930 = t9928 + t9929;
  t9931 = 0.04566*t9930;
  t9935 = 0.135*t2018*t9934;
  t9936 = t9934*t2343;
  t9937 = -0.08055*t9934*t2300;
  t9951 = -1.*t4861*t881*t703;
  t9952 = -1.*t4861*t167*t1040;
  t9953 = t9951 + t9952;
  t9968 = -1.*t881*t554*t703;
  t9969 = -1.*t167*t554*t1040;
  t9970 = t9968 + t9969;
  t9813 = -1.*t698*t4861*t703*t3247;
  t9815 = t698*t4861*t167*t3518;
  t9826 = t9813 + t9815 + t9819 + t9820 + t9821 + t9823;
  t9559 = t9551*t3247;
  t9587 = t9577*t3518;
  t9597 = t881*t9551;
  t9618 = -1.*t9577*t1040;
  t9619 = t9597 + t9618;
  t9621 = 0.04566*t9619;
  t9639 = t9638*t2343;
  t9676 = t9627 + t9675;
  t3267 = t2760*t3247;
  t3525 = t853*t3518;
  t3605 = t881*t2760;
  t4108 = t3605 + t1649;
  t4121 = 0.04566*t4108;
  t4405 = 0.135*t2018*t4178;
  t4409 = t4178*t2343;
  t4431 = -0.08055*t4178*t2300;
  t4661 = t3267 + t3525 + t4121 + t4405 + t4409 + t4431;
  t9874 = -1.*t4861*t550*t703*t3247;
  t9875 = t4861*t167*t550*t3518;
  t9883 = t9874 + t9875 + t9876 + t9880 + t9881 + t9882;
  t10011 = t167*t550*t554;
  t10013 = -1.*t698*t703;
  t10014 = t10011 + t10013;
  t10016 = -1.*t10014*t1040;
  t10017 = t6595 + t10016;
  t9749 = t853*t3247;
  t9752 = t1326*t3518;
  t9754 = 0.04566*t2203;
  t9758 = t6909*t2343;
  t9670 = t9577*t3247;
  t9674 = t9673*t3518;
  t9677 = 0.04566*t9676;
  t9681 = 0.135*t2018*t9680;
  t9682 = t9680*t2343;
  t9683 = -0.08055*t9680*t2300;
  t9686 = t9670 + t9674 + t9677 + t9681 + t9682 + t9683;
  t10031 = t881*t10014;
  t10032 = t1326*t1040;
  t10034 = t10031 + t10032;
  t9944 = -1.*t4861*t167*t3247;
  t9946 = -1.*t4861*t703*t3518;
  t9947 = -1.*t4861*t167*t881;
  t9948 = t4861*t703*t1040;
  t9949 = t9947 + t9948;
  t9950 = 0.04566*t9949;
  t9955 = t9953*t2343;
  t10041 = 0.135*t2018*t9953;
  t10042 = -0.08055*t9953*t2300;
  t10049 = t4861*t167*t881;
  t10050 = -1.*t4861*t703*t1040;
  t10051 = t10049 + t10050;
  t9926 = t554*t703*t3247;
  t9927 = -1.*t167*t554*t3518;
  t9938 = t9926 + t9927 + t9931 + t9935 + t9936 + t9937;
  t9828 = t698*t4861*t167*t1054;
  t9829 = t698*t4861*t703*t1549;
  t9830 = t9828 + t9829 + t9819 + t9820 + t9821 + t9823;
  t9991 = t9577*t1054;
  t9992 = t9673*t1549;
  t9993 = 0.135*t2018*t9676;
  t9994 = -1.*t881*t9673;
  t9995 = t9994 + t9618;
  t9996 = 0.04566*t9995;
  t9997 = t9676*t2343;
  t9998 = -0.08055*t9676*t2300;
  t9999 = t9991 + t9992 + t9993 + t9996 + t9997 + t9998;
  t9696 = -1.*t881*t9694;
  t9697 = t9696 + t9675;
  t1056 = t853*t1054;
  t1553 = t1326*t1549;
  t1648 = -1.*t881*t1326;
  t1767 = t1648 + t1649;
  t1942 = 0.04566*t1767;
  t2208 = 0.135*t2018*t2203;
  t2366 = t2203*t2343;
  t2491 = -0.08055*t2203*t2300;
  t2523 = t1056 + t1553 + t1942 + t2208 + t2366 + t2491;
  t9885 = t4861*t167*t550*t1054;
  t9886 = t4861*t550*t703*t1549;
  t9887 = t9885 + t9886 + t9876 + t9880 + t9881 + t9882;
  t10010 = t1326*t1054;
  t10015 = t10014*t1549;
  t10018 = 0.135*t2018*t10017;
  t10019 = -1.*t881*t10014;
  t10020 = t10019 + t2153;
  t10021 = 0.04566*t10020;
  t10022 = t10017*t2343;
  t10023 = -0.08055*t10017*t2300;
  t10024 = t10010 + t10015 + t10018 + t10021 + t10022 + t10023;
  t10061 = 0.135*t881;
  t10062 = -0.07996*t1040;
  t10063 = t10061 + t10062;
  t10085 = -1.*t881*t2760;
  t10086 = t10085 + t10016;
  t9691 = t9673*t1054;
  t9695 = t9694*t1549;
  t9698 = 0.04566*t9697;
  t9701 = 0.135*t2018*t9700;
  t9707 = t9700*t2343;
  t9708 = -0.08055*t9700*t2300;
  t9709 = t9691 + t9695 + t9698 + t9701 + t9707 + t9708;
  t10095 = -1.*t2760*t1040;
  t10096 = t10031 + t10095;
  t10046 = t4861*t167*t1549;
  t10045 = -1.*t4861*t703*t1054;
  t10047 = t10045 + t10046 + t10041 + t9950 + t9955 + t10042;
  t10052 = -0.08055*t2018*t10051;
  t10053 = t10051*t7234;
  t10054 = -0.135*t10051*t2300;
  t10055 = t10052 + t10053 + t10054;
  t10056 = var2[7]*t10055;
  t9940 = -1.*t167*t554*t1054;
  t9941 = -1.*t554*t703*t1549;
  t9942 = t9940 + t9941 + t9931 + t9935 + t9936 + t9937;
  t10001 = -0.08055*t2018*t9680;
  t10002 = t9680*t7234;
  t10003 = -0.135*t9680*t2300;
  t10004 = t10001 + t10002 + t10003;
  t10074 = -0.08055*t2018*t9700;
  t10075 = t9700*t7234;
  t10076 = -0.135*t9700*t2300;
  t10077 = t10074 + t10075 + t10076;
  t9833 = -1.*t698*t554*t6473;
  t9834 = t9721*t7234;
  t9835 = -0.08055*t9734;
  t9836 = t698*t2018*t554;
  t9837 = -1.*t9721*t2300;
  t9840 = t9836 + t9837;
  t9843 = 0.135*t9840;
  t9846 = t9833 + t9834 + t9835 + t9843;
  t6517 = -1.*t4861*t550*t6473;
  t7309 = t6909*t7234;
  t7554 = -0.08055*t7420;
  t7618 = t4861*t2018*t550;
  t8417 = -1.*t6909*t2300;
  t8424 = t7618 + t8417;
  t9126 = 0.135*t8424;
  t9498 = t6517 + t7309 + t7554 + t9126;
  t9799 = -1.*t9793*t2300;
  t9803 = t9656 + t9799;
  t10035 = -0.08055*t2018*t10034;
  t10036 = t10034*t7234;
  t10037 = -0.135*t10034*t2300;
  t10038 = t10035 + t10036 + t10037;
  t10097 = -0.08055*t2018*t10096;
  t10098 = t10096*t7234;
  t10099 = -0.135*t10096*t2300;
  t10100 = t10097 + t10098 + t10099;
  t9890 = -1.*t550*t554*t6473;
  t9894 = t9893*t7234;
  t9895 = t2018*t9893;
  t9896 = t550*t554*t2300;
  t9897 = t9895 + t9896;
  t9898 = -0.08055*t9897;
  t9899 = -1.*t9893*t2300;
  t9900 = t5997 + t9899;
  t9901 = 0.135*t9900;
  t9902 = t9890 + t9894 + t9898 + t9901;
  t10113 = -0.08055*t2018;
  t10114 = -0.135*t2300;
  t10115 = t10113 + t10114;
  t10129 = t10014*t1040;
  t10130 = t3605 + t10129;
  t9789 = t698*t4861*t6473;
  t9794 = t9793*t7234;
  t9795 = t2018*t9793;
  t9796 = -1.*t698*t4861*t2300;
  t9797 = t9795 + t9796;
  t9798 = -0.08055*t9797;
  t9804 = 0.135*t9803;
  t9805 = t9789 + t9794 + t9798 + t9804;
  t10148 = t4861*t881*t703;
  t10149 = t4861*t167*t1040;
  t10150 = t10148 + t10149;
  t9958 = -1.*t554*t2300;
  t9961 = t2018*t554;
  t9967 = -1.*t4861*t6473;
  t9971 = t9970*t7234;
  t9972 = t2018*t9970;
  t9974 = t4861*t2300;
  t9975 = t9972 + t9974;
  t9976 = -0.08055*t9975;
  t9977 = t4861*t2018;
  t9978 = -1.*t9970*t2300;
  t9979 = t9977 + t9978;
  t9981 = 0.135*t9979;
  t9982 = t9967 + t9971 + t9976 + t9981;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t9559 + t9587 + t9621 + t9639 + t9640 + 0.135*(t2018*t9638 + t9644) - 0.08055*(t2300*t9638 + t9656))*var2[3] + t6106*var2[4] + t4661*var2[5] + t2523*var2[6] + t9498*var2[7];
  p_output1[10]=(0.135*t7420 + t9749 + t9752 + t9754 + t9758 + t9770 - 0.08055*(t2300*t6909 + t9777))*var2[3] + t9747*var2[4] + t9686*var2[5] + t9709*var2[6] + t9805*var2[7];
  p_output1[11]=0;
  p_output1[12]=t6106*var2[3] + (-1.*t167*t3247*t554*t698 - 1.*t3518*t554*t698*t703 + 0.04566*(t1040*t554*t698*t703 - 1.*t167*t554*t698*t881) + t9640 + t2343*t9861 + 0.135*(t9644 + t2018*t9861) - 0.08055*(t9656 + t2300*t9861))*var2[4] + t9826*var2[5] + t9830*var2[6] + t9846*var2[7];
  p_output1[13]=t9747*var2[3] + (-1.*t167*t3247*t550*t554 - 1.*t3518*t550*t554*t703 + 0.04566*(t1040*t550*t554*t703 - 1.*t167*t550*t554*t881) + t9770 + t2343*t9912 + 0.135*(t7355 + t2018*t9912) - 0.08055*(t9777 + t2300*t9912))*var2[4] + t9883*var2[5] + t9887*var2[6] + t9902*var2[7];
  p_output1[14]=(t554*t5598 + t9944 + t9946 + t9950 + t9955 + 0.135*(t2018*t9953 + t9958) - 0.08055*(t2300*t9953 + t9961))*var2[4] + t9938*var2[5] + t9942*var2[6] + t9982*var2[7];
  p_output1[15]=t4661*var2[3] + t9826*var2[4] + (t9559 + t9587 + t9621 + 0.135*t2018*t9638 - 0.08055*t2300*t9638 + t9639)*var2[5] + t9999*var2[6] + t10004*var2[7];
  p_output1[16]=t9686*var2[3] + t9883*var2[4] + (0.135*t2018*t6909 - 0.08055*t2300*t6909 + t9749 + t9752 + t9754 + t9758)*var2[5] + t10024*var2[6] + t10038*var2[7];
  p_output1[17]=t10056 + t9938*var2[4] + (t10041 + t10042 + t9944 + t9946 + t9950 + t9955)*var2[5] + t10047*var2[6];
  p_output1[18]=t2523*var2[3] + t9830*var2[4] + t9999*var2[5] + (t10063*t9694 + 0.135*t2018*t9697 - 0.08055*t2300*t9697 + t2343*t9697 + t9992 + 0.04566*(t1040*t9694 + t9994))*var2[6] + t10077*var2[7];
  p_output1[19]=t9709*var2[3] + t9887*var2[4] + t10024*var2[5] + (t10015 + 0.135*t10086*t2018 - 0.08055*t10086*t2300 + t10086*t2343 + t10063*t2760 + 0.04566*(t10019 + t4127))*var2[6] + t10100*var2[7];
  p_output1[20]=t10056 + t9942*var2[4] + t10047*var2[5] + (t10041 + t10042 + t10046 + t10063*t4861*t703 + t9950 + t9955)*var2[6];
  p_output1[21]=t9498*var2[3] + t9846*var2[4] + t10004*var2[5] + t10077*var2[6] + (t10115*t4861*t698 + t6473*t9793 + 0.135*(t9644 - 1.*t2018*t9793) - 0.08055*t9803)*var2[7];
  p_output1[22]=t9805*var2[3] + t9902*var2[4] + t10038*var2[5] + t10100*var2[6] + (t10115*t4861*t550 + t10130*t6473 + 0.135*(-1.*t10130*t2018 + t7355) - 0.08055*(-1.*t10130*t2300 + t9777))*var2[7];
  p_output1[23]=t9982*var2[4] + t10055*var2[5] + t10055*var2[6] + (-1.*t10115*t554 + t10150*t6473 + 0.135*(-1.*t10150*t2018 + t9958) - 0.08055*(-1.*t10150*t2300 + t9961))*var2[7];
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

#include "dJp_LeftHip_mex.hh"

namespace SymExpression
{

void dJp_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
