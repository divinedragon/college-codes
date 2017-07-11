#include<stdio.h>
#include<conio.h>
void input(int *ptrarr);
void sort(int *ptrarr);
void main()
{	int arr[5]; clrscr();
	input(&arr[0]);        //Passing Address of arr to fn - input
	sort(&arr[0]);         //Passing Address of arr to fn - sort
	getch();
}
void input(int *ptrarr)
{       int r;
	for(r=0; r<5; r++)
	{   printf("Enter Value for Element #%d => ",r);
	    scanf("%d",ptrarr+r);  //Accepting values in array using pointer
	}
}
void sort(int *ptrarr)
{       int r,c,temp;
	for(r=0; r<4; r++)                        //Bubble Sort Starts Here
	{   for(c=r+1; c<5; c++)
	    {   if (*(ptrarr+r) > *(ptrarr+c))
		{   temp = *(ptrarr+r);
		    *(ptrarr+r) = *(ptrarr+c);
		    *(ptrarr+c) = temp;
		}
	    }
	}                       	//Bubble Sort Ends Here
	printf("\nSorted Array\n");	//Displaying Values using Pointer
	for(r=0; r<5; r++)
	{   printf("\t%d",*(ptrarr+r));
	}
}