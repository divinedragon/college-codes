/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [C] - Write C Programs for the following

(b) Any integer is input through the keyboard. WAP to determine whether it
is an even number or an odd number.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{  int number;
	printf("\n\nEnter a Number ==> ");	scanf("%d",&number);
	if (number%2 == 0)
	{	printf("\n%d is Even",number);
	}
	else
	{	printf("\n%d is Odd",number);
	}
	return 1;
}