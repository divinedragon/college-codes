/* This program displays the number from 1 to 16 in decimal,octal, and hex */
#include<stdio.h>
#include<conio.h>
void main(void)
{	int num; clrscr();
	for(num=0; num<16; num++)
	{   printf("\nNumber #%d \t %o \t %#X",num,num,num);
	}
	getch();
}
