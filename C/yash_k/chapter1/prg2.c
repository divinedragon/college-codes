/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(b) The distance b/w two cities (in km.) is input through the keyboard. Write
a prg to convert and print this distance in metres,centimeters, feet and inches.

Written By - Deepak ShakyaDate - 29/07/2007
Solution:
	Main problem: What is the conversion factor into feet and inches.
	1 Km = 1000 mtr
	1 mtr = 100 cm
	1 mtr = 39.370 inch
	1 mtr = 3.2808 feet
	1 Km = 0.6214 mile
	1 mile = 1.6093 Km
*/
#include<stdio.h>
int main(void)
{  float dis_km, dis_m, dis_ft,dis_inch,dis_mile;
	/* I am not declaring any variable for storing value in cm because we can
	simply mutliply the value of dis_m by 100 to get the cm value. */

	printf("\n\nEnter Distance (in Km) ==> ");
	scanf("%f",&dis_km);
	dis_m = 1000 * dis_km;
	dis_ft = 3.2808 * dis_m;
	dis_inch = 39.370 * dis_m;
	dis_mile = 1.6093 * dis_km;

	printf("\nEquivalent Distance in Metres ==> %.3f meters",dis_m);
	printf("\nEquivalent Distance in Centimetres ==> %.3f centimeters",dis_m*100);
	printf("\nEquivalent Distance in Inches ==> %.3f inches",dis_inch);
	printf("\nEquivalent Distance in Feets ==> %.3f feets",dis_ft);
	printf("\nEquivalent Distance in Miles ==> %.3f miles",dis_mile);

	return 1;
}