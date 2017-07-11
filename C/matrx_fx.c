/* This Program transpose a matrix. */
#include<stdio.h>
#include<conio.h>
void transpose_mat(int r,int c);
void main()
{	int row=0, col=0; clrscr();
	printf("\nEnter the Rows of the Matrix : "); scanf("%d",&row);
	printf("Enter the Columns of the Matrix : "); scanf("%d",&col);
	transpose_mat(row,col);
	getch();
}
void transpose_mat(int r,int c)
{	int mat[3][3], tmat[3][3]; int a,b; int flag = 0;
	printf("\nEnter the Elements of the Matrix\n");
	for(a=0; a<r; a++)	//Accepting the Values in the Array.
	{   for(b=0; b<c; b++)
	    {   gotoxy(20+(4*b),6+a); scanf("%d",&mat[a][b]);
	    }
	}
	printf("\n\nTranspose of the Above Matrix");
	for(a=0; a<r; a++)	//Displating the Values of the Array.
	{   for(b=0; b<c; b++)
	    {   gotoxy(20+(4*b),12+a); printf("%d",mat[b][a]);
		tmat[a][b] = mat[b][a];
	    }
	}
	for(a=0; a<r; a++)	//Displating the Values of the Array.
	{   for(b=0; b<c; b++)
	    {    if (tmat[b][a] != mat[a][b])
		 {   flag = -1; break;
		 }
	    }
	    if (flag == -1) break;
	}
	if (flag == -1) printf("\nEntered Matrix is a Non - Symmetric Matrix.");
	if (flag == 0)  printf("\nEntered Matrix is a Symmetric Matrix.");
}
