/*
Yashwant Kanitkar - Let Us C
Chapter 1 - [G] - Write C Programs for the following

(c) Input the marks of 5 Subjects of a student and find the aggregate marks
and percent marks obtained by the student. Assume that the max marks that can
be obtained by a student in each subject is 100.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	Important: Initialization of total = 0 is a must.
*/
#include<stdio.h>
int main(void)
{	int sub_mark,total=0,counter;
	for(counter=1; counter<=5; counter++)
	{	printf("\n\nEnter Marks for Subject #%d ==> ",counter);
		scanf("%d",&sub_mark);
		total = total + sub_mark;
	}
	counter--;
	printf("\n\nTotal Marks ==> %d",total);
	printf("\nAggregate Marks ==> %.2f",(float) total/counter);
	printf("\nPercentage Marks ==> %.2f",(float) total/counter);

	return 1;
}