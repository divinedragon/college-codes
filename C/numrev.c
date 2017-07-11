#include<stdio.h>
#include<conio.h>
void main()
{	int num,rnum=0,dig=0;
	clrscr();
	printf("\nENTER A NUMBER : ");
	scanf("%d",&num);
	while(num)
	{	dig = num % 10;
		rnum = (rnum*10) + dig;
		num = num/10;
	}
	printf("\nTHE REVERSED NUMBER IS : %d",rnum);
}