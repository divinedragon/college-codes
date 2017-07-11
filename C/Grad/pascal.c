/*
Written By - Deepak Shakya
Date - 02/09/2007

*/
#include<stdio.h>
double factorial(int num)
{	double fact = 1;
	if (num==0)
		return 1;
	else
	{	while (num>0)
		{	fact = fact * num;
			num=num-1;
		}
	}
	return fact;
}
int combination(int upper,int lower)
{	return (factorial(upper)/(factorial(lower) * factorial(upper-lower)));
}

int main(void)
{  int binom,row,q,r,x;
	binom = 1;
	q=0;
	printf("\nEnter No. of Rows for the PASCAL's Triangle ==> ");
	scanf("%d",&row);

	while(q<row)
	{	for(r=40-3*q; r>0; --r)
		{	printf(" ");
		}
		/* This one is my logic */
		/*
		for(x=0; x<=q; x++)
		{  printf("%6d",combination(q,x));
		}
		*/
		///*
		//This code is copied from some book.
		for(x=0; x<=q; ++x)
		{	if ((x==0) || (q==0))
				binom = 1;
			else
				binom = (binom * (q-x+1))/x;
			printf("%6d",binom);
		}
		//*/
		printf("\n");
		++q;
	}

	for(x=0,q=3; x<=2; ++x)
	{	if ((x==0) || (q==0))
			binom = 1;
		else
			binom = (binom * (q-x+1))/x;
		printf("%6d",binom);
	}

	return 1;
}

