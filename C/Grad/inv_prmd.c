/*

Written By - Deepak Shakya
Date - 02/09/2007
*/
#include<stdio.h>
int main(void)
{  int lines,display,i,count=0;
	fflush(stdin);
	printf("\nEnter No of Lines of the Pyramid to be printed ==> ");
	scanf("%d",&lines);
	while(lines>0)
	{  /* This loop provides the required spaces from the left */
		for(i=0; i<count; i++)
		{	printf("%4c",32);
		}
		/* This loop prints the increasing sequence */
		for(i=lines,display=lines; i>0; i--)
		{	printf("%4d",display);
			display++;
		}
		/* This loop prints the decreasing sequence */
		for(i=lines-1,display--; i>0; i--)
		{  display--;
			printf("%4d",display);
		}
		lines--;
		count++;
		printf("\n");
	}


	return 1;
}