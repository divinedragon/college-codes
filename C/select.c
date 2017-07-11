#include<stdio.h>
#include<conio.h>
void main(void)
{	int a[5],i,j,pos,val;
	clrscr();
	for(i=0;i<5;i++)
	{	printf("\nEnter Element #%d ==> ",i+1);
		scanf("%d",&a[i]);
	}
	/* Selection Sort */
	for(i=0;i<4;i++)
	{	pos=i; val=a[i];
		for(j=i+1;j<=4;j++)
		{	if(a[j] < val)
			{   pos = j; val=a[j];
			}
		}
		a[pos] = a[i];
		a[i] = val;
	}
	for(i=0;i<5;i++)
	{	printf("\nElement #%d ==> %d",i+1,a[i]);
	}
	getch();
}