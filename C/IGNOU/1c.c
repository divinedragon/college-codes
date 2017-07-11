/***********************************************************
Program: 1C.C - MCA Assignment - C - 1.c
Author: Deepak Shakya
Date: 03-10-2009
Description: Write a function celcius() to convert degrees Fahrenheit to
						 degrees Celcius.
************************************************************/

#include<stdio.h>
#include<conio.h>

/***********************************************************************
* Following function convertes the fahrenheit value passed as argument
* into celcious and returns the value.
***********************************************************************/
float celcius(float value)
{
	return ((5.0/9.0) * (value - 32));
}

int main(void)
{
	float fahrenheit=0.0;

	clrscr();

	printf("\n\t\t\tFAHRENHEIGHT TO CELCIUS CONVERTER");
	printf("\n\tEnter Fahrenheit value ==> "); scanf("%f",&fahrenheit);

	printf("\n\tEquivalent Celcius Value is ==> %.3f",celcius(fahrenheit));

	return 0;
}