/*

Written By - Deepak Shakya
Date - 02/09/2007
*/
#include<stdio.h>
int main(void)
{  int lines,display,i,count=1;
	fflush(stdin);
	printf("\nEnter No of Lines of the Pyramid to be printed ==> ");
	scanf("%d",&lines);
	while(count<=lines)
	{  /* This loop provides the required spaces from the left */
		for(i=count; i<lines; i++)
		{	printf("%4c",32);
		}
		/* This loop prints the increasing sequence */
		for(i=count,display=count; i>0; i--)
		{	printf("%4d",display);
			display++;
		}
		/* This loop prints the decreasing sequence */
		for(i=count,display--; i>1; i--)
		{  display--;
			printf("%4d",display);
		}
		count++;
		printf("\n");
	}

	return 1;
}