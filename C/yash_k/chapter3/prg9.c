/*
Yashwant Kanitkar - Let Us C
Chapter 3 - [C] - Write C Programs for the following

(d) WAP to produce the following output -
	A B C D E F G F E D C B A
	A B C D E F   F E D C B A
	A B C D E       E D C B A
	A B C D           D C B A
	A B C               C B A
	A B                   B A
	A                       A

Written By - Deepak Shakya
Date - 30/07/2007

Solution:
	The problem with this sequence is that we have to display spaces from the
	2nd line. And with the next lines, the spaces to be displayed are in the
	sequence 1,3,5.
	That is why you have to check for the first condition.
*/
#include<stdio.h>
int main(void)
{  int i,j,k;
	printf("\n");

	for(i=0; i<25; i++)
	{	//This loop is for the lines that are to be printed
		printf("\n");	//For every new line

		for(j='A'; j<=('Y'-i); j++)
		{  //This loop prints the increasing sequence.
			printf("%c",j);
		}

		for(k=0; k<=2*i-2; k++)
		{  //This loop prints the spaces. For the first time, the condition is
			//false, so no space is printed.
			//Afterwards, the loop executes for 1,3,5, times respectively.
			printf(" ");
		}
		if(i==0) j--;	//This decrement of j is required because for the first
							//time it is not decrement, then the last character will
							//be displayed twice. Other times, i in ('Y'-i) expression
							//ensures this decrementation. So when i=0, we have
							//decrement the counter ourselves.


		for(j--; j>='A'; j--)
		{  //This loop prints the characters in reverse sequence.
			printf("%c",j);
		}
	}

	return 1;
}