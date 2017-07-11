/* Bubble Sort in a Simple Form. Atleast for me. */
#include<stdio.h>
#include<conio.h>
void sort(int *ptrarr);
void main()
{	int arr[5],r; clrscr();
	for(r=0; r<5; r++)
	{   printf("Enter Value for Element #%d => ",r); scanf("%d",&arr[r]);
	}
	sort(&arr[0]);
	printf("\nSorted Array\n");
	for(r=0; r<5; r++)
	{   printf("\t%d",arr[r]);
	}
	getch();
}
void sort(int *ptrarr)
{       int r,c,temp;
	for(r=0; r<4; r++)
	{   for(c=r+1; c<5; c++)
	    {   if (*(ptrarr+r) > *(ptrarr+c))
		{   temp = *(ptrarr+r);
		    *(ptrarr+r) = *(ptrarr+c);
		    *(ptrarr+c) = temp;
		}
	    }
	}
}