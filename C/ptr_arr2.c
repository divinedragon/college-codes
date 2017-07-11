#include<stdio.h>
#include<conio.h>
void disp(int *a);
void main()
{	int x[3][3],r,c; clrscr();
	for(r=0; r<3; r++)
	{   for(c=0; c<3; c++)
	    {   printf("Element %d%d ==> ",r,c); scanf("%d",&x[r][c]);
	    }
	}
	for(r=0; r<3; r++)
	{   for(c=0; c<3; c++)
	    {   printf(" %d  %u ",x[r][c],&x[r][c]);
	    }
	    printf("\n");
	}
	disp(&x[0][0]);
	getch();
}
void disp(int *a)
{       int r,c; printf("\n");
	for(r=0; r<3; r++)
	{   for(c=0; c<3; c++)
	    {   printf(" %d  %u ",*(a+(3*r)+c),(a+(3*r)+c));
	    }
	    printf("\n");
	}

}