/*This Program coverts Binary Number to Equivalent Decimal Number. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	int i=0,m=1,res=0; long int dnum=0,num=0;
	char flag; clrscr();
	printf("\nEnter a Binary Number : "); scanf("%ld",&num);
	dnum=num;
	//Checks whether entered number is binary or not.
	while(dnum!=0)
	{	i=(dnum%10);
		if (i==0 || i==1)
		{   dnum=dnum/10; flag = 'T';
		}
		else
		{   printf("\nThe Entered No. is not Binary.");
		    dnum = 0; flag = 'F'; break;
		}
	}
	while(flag=='T')
	{    //Displays the Equivalent Decimal Number.
	     dnum=num;
	     while(dnum!=0)
	     {	i=dnum%10; dnum=dnum/10; res=res+(i*m); m=m*2;
	     }
	     printf("\n\nEquivalent Decimal Number : %d",res);
	     //Displays the Equivalent Octal Number.
	     dnum=num; res=0; m=1;
	     while(dnum!=0)
	     {	i=dnum%1000; dnum=dnum/1000;
		switch (i)
		{   case 111: res=res+(7*m); m=m*10; break;
		    case 110: res=res+(6*m); m=m*10; break;
		    case 101: res=res+(5*m); m=m*10; break;
		    case 100: res=res+(4*m); m=m*10; break;
		    case 11: res=res+(3*m); m=m*10; break;
		    case 10: res=res+(2*m); m=m*10; break;
		    case 1: res=res+(1*m); m=m*10; break;
		}
	     }
	     printf("\nEquivalent Octal Number : %d",res);
	     flag='F';
	}
     getch();
}