#include<stdio.h>
#include<conio.h>
void main(void)
{	int a[5],i,j,temp;
	clrscr();
	for(i=0;i<5;i++)
	{	printf("\nEnter Element #%d ==> ",i+1);
		scanf("%d",&a[i]);
	}
	/* Insertion Sort */
	for(i=1;i<5;i++)
	{	temp = a[i]; j = i;
		while((j>0) && (temp<a[j-1]))
		{   a[j] = a[j-1];
			j = j-1;
		}
		a[j] = temp;
	}
	for(i=0;i<5;i++)
	{	printf("\nElement #%d ==> %d",i+1,a[i]);
	}
	getch();
}