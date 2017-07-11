/* This program converts decimal number to equivalent binary number. */
# include <stdio.h>
# include <conio.h>
void main()
{       int num=0,i=1; long int bnum=0,m=1; clrscr();
	printf("\nEnter a Number : "); scanf("%d",&num);
	printf("\nEquivalent Binary Number is : ");
	while(num!=0)
	{	i=num%2; bnum = bnum+(i*m); m=m*10; num=num/2;
	}
	printf("%d",bnum);
	getch();
}