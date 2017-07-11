/*This Program displays the table of a number. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0,loop=1; clrscr();
	printf("\nENTER NUMBER WHOSE TABLE IS TO BE DISPLAYED : "); scanf("%d",&num);
	for (loop=1;loop<=10;loop++)
	   printf("\n%d x %d = %d",num,loop,num*loop);
	getch();
}
