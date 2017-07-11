/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(d) WAP to print all the ASCII values and their equivalent characters using
a while loop. The ASCII values vary from 0 to 255.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{	int i = 0;
	printf("\n");
	while(i<=255)
	{  printf("%d  ==>  %c\t",i,i);
		i++;
	}
	return 1;
}