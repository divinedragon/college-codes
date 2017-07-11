#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
void input(int *x, int *y, int *z);
void multiply(int *z, int *z, int *z);
void main()
{       int x[3][3], y[3][3], z[3][3]; clrscr();
	input(&x[0][0], &y[0][0], &z[0][0]);
	multiply(&x[0][0], &y[0][0], &z[0][0]);
	getch();
}
void input(int *x, int *y, int *z)
{       int i,j,k;
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   x[i][j]=0; y[i][j]=0; z[i][j]=0;
		gotoxy(20+(3*j),5+i); printf("%d",x[i][j]);
		gotoxy(40+(3*j),5+i); printf("%d",y[i][j]);
		gotoxy(60+(3*j),5+i); printf("%d",z[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   x[i][j]=random(3); y[i][j]=random(3);
		gotoxy(20+(3*j),10+i); printf("%d",x[i][j]);
		gotoxy(40+(3*j),10+i); printf("%d",y[i][j]);
	    }
	}
}
void multiply(int *x, int *y, int *z)
{       int i,j,k,sum=0;
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   for(k=0;k<3;k++)
		{   sum = sum + ((x[i][k]) * (y[k][j]));
		}
		z[i][j] = sum; sum=0;
	    }
	}
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   gotoxy(60+(3*j),10+i); printf("%d",z[i][j]);
	    }
	}
}