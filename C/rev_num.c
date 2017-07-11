/* This program accepts a number and displays the reverse of that number. */
# include <stdio.h>
# include <conio.h>
void main()
{	long int num=0;
	clrscr();
	printf("\nEnter a Number(Less than 5 digits) ==> "); scanf("%d",&num);
	printf("\n\nThe Reverse of the Number is :\t");
	do
	{	printf("%d",num%10); num=num/10;
	} while(num!=0);
	getch();
}