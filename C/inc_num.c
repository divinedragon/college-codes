#include<stdio.h>
#include<stdio.h>
void calc(int num);
void main()
{       int num;
	do
	{   clrscr();
	    printf("\nEnter a Number : \t"); scanf("%d",&num);
	} while (num<=0);
	printf("\n\nYou Entered : %d",num);
	printf("\nYour Number in Increasing Order : ");
	calc(num);
	getch();
}
void calc(int num)
{       int arr[5], i=0, j=0, k=0, temp=1, rnum; rnum = num;
	while (rnum != 0)
	{   rnum = rnum/10; k++;
	}
	for(i=0; i<k; i++)
	{   arr[i] = num%10; num = num/10;
	}
	for(i=0; i<4; i++)
	{   for(j=i+1; j<5; j++)
	    {   if (arr[i] > arr[j])
		{   temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
		}
	    }
	}
	for(i=0; i<k; i++)
	{   printf("%d",arr[i]);
	}
}