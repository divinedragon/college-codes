#include<stdio.h>
int main(void)
{	int x;
	for(x=1; x<=100; x++) printf("\t%d",x);
	for(x=100; x!=65; x-=5) printf("\nThe square of %d is %d.",x,x*x);
	return 0;
}

