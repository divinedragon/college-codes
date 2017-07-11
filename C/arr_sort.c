/* This Program is an example of Bubble sort. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	int num[10],i,j,temp=0; clrscr();
	for(i=0;i<10;i++)
	{   num[i] = random(100); printf("%7d",num[i]);
	}
	for(i=0;i<10;i++)
	{   for(j=i+1;j<=10;j++)
	    {   if (num[i]<num[j])
		{   temp = num[j]; num[j] = num[i]; num[i] = temp;
		}
	    }
	}
	printf("\n");
	for(i=0;i<10;i++)
	   printf("%7d",num[i]);
	getch();
}