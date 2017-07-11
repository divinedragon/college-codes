#include<stdio.h>
#include<conio.h>
void main()
{	int *x,a[5],c; clrscr();
	x = a;
	for(c=0; c<5; c++)   //Accepting Value using Pointes
	{   printf("Enter a Value for Element #%d : ",c);
	    scanf("%d",x+c);
	}
	for(c=0; c<5; c++)   //Displaying Value using Pointes
	   printf("\nElemeny #%d : Address = %u \t Value = %d",c,x+c,*(x+c));
	getch();
}