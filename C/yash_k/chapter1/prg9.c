/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(i) Input a FOUR digit number and obtain the sum of the first and the last
digit of the number.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{  int num,sum=0;

	printf("\n\nEnter a Number (4 DIGITS) ==> "); scanf("%d",&num);

	sum = (num % 10) + (num/1000);
	printf("\nThe sum of First and Last Digit -->%d",sum);

	return 1;
}