/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(b) WAP to fill the entire screen with a smiling face. It has got the ASCII
value of 1.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:
	The DOS screen consists of default of 25 Lines of 80 columns width.
*/
#include<stdio.h>
#include<conio.h>
int main(void)
{  int i=1,j=1;
	clrscr();
	printf("\r");
	while(i<=25)
	{	j=1;
		while(j<=80)
		{	printf("%c",1); j++;
		}
		i++;
	}
	return 1;
}