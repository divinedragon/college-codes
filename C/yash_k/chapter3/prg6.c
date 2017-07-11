/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [F] - Write C Programs for the following

(a) WAP to print all the prime numbers from 1 to 300.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
int main(void)
{  int i=1,j;
	printf("\n");
	while(i<=500)
	{  //This loop will from 1 to 500
		i++;	//Because 1 is not a prime,so we are incrementing the value here.
		j=2;	//Also we dont have to start from 1. Every no. is divisible by 1.
		while(j<i)
		{  //This loop will check for prime by dividing the value of i and checking
			if(i%j==0)
			{	break;	//The no. got divided. It is not a prime no.
			}
			if(j!=2)
				j+=2;	//As 2 is the only prime no, we are incrementing the value
						//of j by 2 to get odd numbers
			else
				j++;  //If the value of j is 2, then we are incrementing it by 1.
						//This will make the value of j odd and the above condition
						//will always satisfy. So, j will increment in odd values
						//only.
		}
		if (i==j)				//If the no. is prime then the nested while loop
			printf("%d\t",i); //will execute till the end where the value of j
									//will become equal to i. If it breaks in b/w,
									//the value of j and i will not match.
	}
	return 1;
}