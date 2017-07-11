/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [G] - Write C Programs for the following

(d) A certain grade of steel is graded according to the following conditions
	(1)	Hardness must be greater than 50
	(2)	Carbon content must be less than 0.7
	(3)	Tensile strength must be greater than 5600

	The grades are as follows -
		(i)		Grade is 10 if all the three conditions are met
		(ii)		Grade is 9 if (1) and (2) are met
		(iii) 	Grade is 8 if (2) and (3) are met
		(iv)		Grade is 7 if (1) and (3) are met
		(v)		Grade is 6 if only one condition is met
		(vi)		Grade is 5 if none of the conditions are met

	WAP which accepts values for hardness, carbon content and tensile strength
	of the steel. Output the grade for the values for the steel.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:


*/
#include<stdio.h>
int main(void)
{	int hardness,tensile;
	float carbon;

	printf("\n\nEnter the Hardness for Steel ==> "); scanf("%d",&hardness);
	printf("\nEnter Carbon Content for Steel ==> "); scanf("%f",&carbon);
	printf("\nEnter Tensile Strength for Steel ==> "); scanf("%d",&tensile);

	if ((hardness>50) && (carbon<0.7) && (tensile>5600))
	{	printf("\nGRADE OF YOUR STEEL IS ==> 10");
	}
	else if((hardness>50) && (carbon<0.7))
	{	printf("\nGRADE OF YOUR STEEL IS ==> 9");
	}
	else if((carbon<0.7) && (tensile>5600))
	{	printf("\nGRADE OF YOUR STEEL IS ==> 8");
	}
	else if ((hardness>50) && (tensile>5600))
	{	printf("\nGRADE OF YOUR STEEL IS ==> 7");
	}
	else if ((hardness>50) || (carbon<0.7) || (tensile>5600))
	{	printf("\nGRADE OF YOUR STEEL IS ==> 6");
	}
	else
	{  printf("\nGRADE OF YOUR STEEL IS ==> 5");
	}

	return 1;
}