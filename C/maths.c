/* This Program does arithematic operation(+,-,x,/,%) on two numbers.*/
# include <stdio.h>
# include <conio.h>
void main()
{       int x=0,y=0; clrscr();
	printf("\nEnter Value for x :\t"); scanf("%i",&x);
	printf("\nEnter Value for y :\t"); scanf("%i",&y);
	printf("\n\n\nSum of Numbers(x+y) : %i",x+y);
	printf("\nSubtraction of Numbers(x-y) : %i",x-y);
	printf("\nMultiplication of Numbers(x*y) : %i",x*y);
	if (y==0)
	   printf("\n\n\nDivision of Numbers(x/y) is not Possible.");
	else
	   printf("\nDivision of Numbers(x/y) : %i\t Remainder is : %i",x/y,x%y);
	getch();
}