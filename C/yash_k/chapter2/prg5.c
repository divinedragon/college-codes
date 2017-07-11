/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [C] - Write C Programs for the following

(e) A five digit number is entered. WAP to reverse the number and check
whether the entered number and reversed number are equal or not.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{  int num,temp, reverse=0;
	printf("\n\nEnter a Number to Reverse (5 Digits) --> "); scanf("%d",&num);
	temp = num;
	//Extracting for UNITS place
	reverse = (reverse * 10) + (num % 10);
	num = num / 10;

	//Extracting for TENS place
	reverse = (reverse * 10) + (num % 10);
	num = num / 10;

	//Extracting for HUNDREDS place
	reverse = (reverse * 10) + (num % 10);
	num = num / 10;

	//Extracting for THOUSANDS place
	reverse = (reverse * 10) + (num % 10);
	num = num / 10;

	//Extracting for TEN THOUSANDS place
	reverse = (reverse * 10) + (num % 10);
	num = num / 10;

	printf("\nThe Reversed Number is ==> %d",reverse);

	if (reverse == temp)
	{	printf("\nEntered Number and Reversed Number are Equal.");
	}
	else
	{	printf("\nEntered Number and Reversed Number are not Equal.");
	}

	return 1;
}