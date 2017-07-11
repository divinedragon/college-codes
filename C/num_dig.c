#include<stdio.h>
#include<conio.h>
void main()
{       int num=0,n=0,rnum,i=0,x=0; clrscr();
	printf("\nEnter a Number : "); scanf("%d",&num);
	printf("\n"); rnum=num;
	while (rnum!=0)
	{  i++; rnum=rnum/10;
	}
	while (i!=0)
	{  rnum=1; i--;
	   for(x=i;x>0;x--) rnum = rnum*10;
	   n=num/rnum; num=num%rnum;
	   switch (n)
	   {  case 1: printf("One "); break;
	      case 2: printf("Two "); break;
	      case 3: printf("Three "); break;
	      case 4: printf("Four "); break;
	      case 5: printf("Five "); break;
	      case 6: printf("Six "); break;
	      case 7: printf("Seven "); break;
	      case 8: printf("Eight "); break;
	      case 9: printf("Nine "); break;
	      case 0: printf("Zero "); break;
	   }
	}
	getch();
}