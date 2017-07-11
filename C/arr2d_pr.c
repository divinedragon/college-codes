#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int *a, int *b, int *c);
void mul_disp(int *a, int *b, int *c);
void main()
{
	int x[3][3], y[3][3], z[3][3]; int i,j,k; clrscr();
	input(&x[0][0], &y[0][0], &z[0][0]);
	mul_disp(&x[0][0], &y[0][0], &z[0][0]);
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   gotoxy(60+(3*j),15+i); printf("%d",z[i][j]);
	    }
	}
	getch();
}
void input(int *a, int *b, int *c)
{       int i,j,k,p=0;
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   *(a+p)=0; *(b+p)=0; *(c+p)=0;
		gotoxy(20+(3*j),5+i); printf("%d",*(a+p));
		gotoxy(40+(3*j),5+i); printf("%d",*(b+p));
		gotoxy(60+(3*j),5+i); printf("%d",*(c+p));
		p++;
	    }
	}
	p=0;
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   *(a+p)=random(3); *(b+p)=random(3);
		gotoxy(20+(3*j),10+i); printf("%d",*(a+p));
		gotoxy(40+(3*j),10+i); printf("%d",*(b+p));
		p++;
	    }
	}
}
void mul_disp(int *a, int *b, int *c)
{       int i,j,k;
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   for(k=0;k<3;k++)
		{   *(c+(3*i)+j) = *(c+(3*i)+j) + ((*(a+(3*i)+k) * (*(b+(3*k)+j))));
		}
	    }
	}
	for(i=0;i<3;i++)
	{   for(j=0;j<3;j++)
	    {   gotoxy(60+(3*j),10+i); printf("%d",*(c+(3*i)+j));
	    }
	}
}