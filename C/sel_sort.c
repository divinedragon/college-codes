#include<stdio.h>
void main()
{	int i,j,pos,temp;
	int arr[5] = {2,4,5,1,3};
	printf("\nArray Before Sorting.");
	for (i=0; i<5; i++)
	{	printf("\t%d",arr[i]);
	}

	//Sorting with Selection Sort
	/*for(i=0; i<4; i++)
	{	pos = i;
		//min = arr[i];
		for(j=i+1; j<=4; j++)
		{	if (arr[pos] > arr[j])
			{	pos = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}*/

	//Sorting with Insertion Sort
	for(i=1; i<=4; i++)
	{	for(j=0; j<i; j++)
		{	if(arr[j] > arr[i])
			{	temp = arr[i];
				for(pos=i; pos>j; pos--)
				{	arr[pos] = arr[pos-1];
				}
				arr[j] = temp;
			}
		}
	}

	printf("\nArray After Sorting.");
	for (i=0; i<5; i++)
	{	printf("\t%d",arr[i]);
	}
}