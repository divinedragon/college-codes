/*This Program coverts Binary Number to Equivalent Decimal Number. */
#include<stdio.h>
#include<conio.h>
void main()
{	int i=0,m=1,dnum=0,num=0; clrscr();
	printf("\nEnter a Binary Number : "); scanf("%d",&num);
	while(num!=0)
	{       i=(num%10);
		if (i==0 || i==1)
		{  num=num/10; dnum=dnum+(i*m); m=m*2;
		}
		else
		{  printf("\nThe Entered No. is not Binary.");
		   dnum = 0;break;
		}
	}
	printf("\n\nEquivalent Decimal Number : %d",dnum);
	getch();
}