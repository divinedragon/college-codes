/*This program displays Perfect No in the range of 1 to 500. A perfect no.
is a number which is equal to the sum of all its possible multiples.
For Example:	145 = 1!+4!+5!; 1+24+120 = 145				 */
#include<stdio.h>
#include<conio.h>
void main(void)
{       int i,j,number,factorial=1,sum=0,dig;
	clrscr();
	for(i=1; i<=150; i++)
	{   number = i; sum = 0;
	    while(number!=0)
	    {	dig=number%10; factorial = 1;
		for(j=1; j<=dig; j++)
		   factorial = factorial * j;
		sum = sum + factorial;
		number = number/10;
		//printf("%d, %d, %d, %d\n",dig, factorial, sum, number);
	    }
	    if (sum == i)
		printf("\n The number %i is a Perfect Number.",i);
	    //else
	       //printf("\n The number %i is not Perfect Number.");
	}
	getch();
}