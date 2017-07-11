/*This program displays whether an entered number is Armstrong Number or not.
An Armstrong Number is one which is equal to the sum of the cube of the
digits contained by the number.
For Example: 153 = 1^3 + 5^3 + 3^3 */
#include<stdio.h>
#include<conio.h>
int cube(int x);
void main(void)
{	int i,number=0, sum=0, digit=0, tnum=0; clrscr();
	for(i=1; i!=500; i++)
	{   number=i; sum=0;
	    for(tnum = number; tnum!=0; tnum=tnum/10)
	    {	digit = tnum%10;
		sum = sum + cube(digit);
	    }
	    if (sum == number)
	       printf("\nThe Number %d is a Armstrong Number",number);
	}
	getch();
}
int cube(int x)
{	return (x*x*x);}