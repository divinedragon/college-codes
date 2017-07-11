/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(d) Temperature of a city in farenheit degrees is input through the keyboard.
Write a program to convert this temperature into centigrade degrees.

Written By - Deepak Shakya
Date - 27/07/2007

Solution:
	Main thing - Conversion for Farenheit to Centigrade

	F = 9/5 * C + 32
	C = (F-32) * 5/9

*/
#include<stdio.h>
int main(void)
{  float farenheit,celcius;
	printf("\n\nEnter Farenheit Temperature --> "); scanf("%f",&farenheit);
	celcius = (farenheit - 32) * ((float) 5/9);

	printf("\nEquivalent Centrigrade Temperature --> %0.3f",celcius);

	return 1;
}