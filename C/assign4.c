#include<stdio.h>
#include<alloc.h>
#define SIZE 10
void arrange_values(int *num_array);
int main(void)
{  int *numbers = (int *) malloc(sizeof(int)*SIZE);
	int i = 0;

	//Accepting the numbers
	for(i=0; i<SIZE; i++)
	{	printf("\nEnter value for Number #%d==>",i+1);
		scanf("%d",numbers+i);
	}

	//Printing the sequence of numbers before arranging
	printf("\nYou Entered Following Values");
	for(i=0; i<SIZE; i++)
	{	printf("\nPosition #%d ==> %d",i+1,*(numbers+i));
	}

	arrange_values(numbers);		//Arranging the sequence of numbers

	//Printing the sequence of numbers after arranging
	printf("\nAfter Arranging, the list is");
	for(i=0; i<SIZE; i++)
	{	printf("\nPosition #%d ==> %d",i+1,*(numbers+i));
	}

	free(numbers);	//Free the allocated memory

	return 1;
}

void arrange_values(int *num_array)
{   int i=0, j=0, k=0, temp;

	for(i=0; i<SIZE; i++)
	{	if ((*(num_array+i))<0)
		{	if(i!=j)
			{	temp = *(num_array+i);
				for(k = i; k != j; k--)
				{	*(num_array+k) = *(num_array+k-1);
				}
				*(num_array+k) = temp;
			}
			j++;
		}
	}
}