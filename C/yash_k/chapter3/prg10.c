/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(f) According to a study, the approxiamate level of intelligence of a person
can be calculated using the following formulae-
	i = 2 + (y + 0.5 x)
	WAP which will produce a table of values of i,y and x, where y varies from
	1 to 6, and for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:
	Straight Problem. Nesting the loops will do the job.
*/
#include<stdio.h>
int main(void)
{	int y=1;
	float x=5.5,i;

	while(y<=6)
	{  x=5.5;
		while(x<=12.5)
		{	i = 2 + (y + (0.5 * x));
			printf("\n\t%d\t%.2f\t%.2f",y,x,i);
			x += 0.5;
		}
		y++;

	}
	return 1;
}