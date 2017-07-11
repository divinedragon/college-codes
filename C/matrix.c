/* This program adds two matrices of order 3x3. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{       int x[3][3],y[3][3],z[3][3],r,c; clrscr();
	gotoxy(10,3); printf("MATRIX 1");
	gotoxy(30,3); printf("MATRIX 2");
	gotoxy(50,3); printf("SUM 1 & 2");
	gotoxy(22,6); printf("+"); gotoxy(42,6); printf("+");
	for(r=0;r<3;r++)
	{  for(c=0;c<3;c++)
	   {  x[r][c]=random(5+c); y[r][c]=random(6+c);
	      z[r][c]=x[r][c]+y[r][c];
	      gotoxy(10+(3*c),5+r); printf("%d",x[r][c]);
	      gotoxy(30+(3*c),5+r); printf("%d",y[r][c]);
	      gotoxy(50+(3*c),5+r); printf("%d",z[r][c]);
	   }
	}
	getch();
}