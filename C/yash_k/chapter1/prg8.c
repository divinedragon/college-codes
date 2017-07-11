/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(h) If a FIVE digit is input, then WAP to reverse the number.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	Remove the Last digit and then multiply it by 10 at subsequent levels.

*/
#include<stdio.h>
int main(void)
{	int num, reverse=0;
	printf("\n\nEnter a Number to Reverse (5 Digits) --> "); scanf("%d",&num);

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

	/*
	//THIS IS THE LOOP VERSION OF THE SAME PROBLEM
	while(num)
	{	reverse = (reverse * 10) + (num % 10);
		num = num / 10;
	}
	*/

	printf("\nThe Reversed Number is ==>  %d",reverse);
	return 1;
}