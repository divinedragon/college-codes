#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,sum=0,t=0; clrscr();
	printf("\nEnter a Number : "); scanf("%d",&num);
	while(num!=0)
	{
	   t=num%10; num=num/10; sum=sum+t;
	}
	printf("\nSum of Digits : %d",sum);
	getch();
}