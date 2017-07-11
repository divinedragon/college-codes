/* This Program coverts Octal Number to Equivalent Decimal Number. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,m=1,dnum=0,num=0; clrscr();
	printf("\nEnter a Octal Number : "); scanf("%d",&num);
	while(num!=0)
	{       i=(num%10);
		if (i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7)
		{  num=num/10; dnum=dnum+(i*m); m=m*8;
		}
		else
		{  dnum = 0;break;
		}
	}
	if (dnum==0) printf("\nEnter Number is not Octal Number.");
	else printf("\n\nEquivalent Decimal Number : %d",dnum);
	getch();
}