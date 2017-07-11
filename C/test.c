#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	int i,j,k; clrscr();
	for(k=0; k<10; k++)
	{   i=random(3);
	    j=random(3);
	    printf("\n %d   %d",i,j);
	}
	getch();
}