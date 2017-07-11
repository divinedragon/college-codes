#include<stdio.h>
#include<conio.h>
void main(void)
{	int a[5],i,j,temp;
	clrscr();
	for(i=0;i<5;i++)
	{	printf("\nEnter Element #%d ==> ",i+1);
		scanf("%d",&a[i]);
	}
	/*Bubble Sort */
	for(i=0;i<4;i++)
	{	for(j=i+1;j<=4;j++)
		{   	if(a[i] > a[j])
			{  temp = a[i];
			   a[i] = a[j];
			   a[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{	printf("\nElement #%d ==> %d",i+1,a[i]);
	}
	getch();
}