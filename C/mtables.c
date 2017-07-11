/* This Program creates a Matrix of Tables from 1 to 10. */
#include<stdio.h>
#include<conio.h>
void main()
{	int row,col; clrscr();
	printf("\n\t\t\tMultiplication Tables from 1 to 10\n\n");
	for(row=1;row<=10;row++)
	{  for(col=1;col<=10;col++)
	      printf("%7d",row*col);
	   printf("\n\n");
	}
	getch();
}
