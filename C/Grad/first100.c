#include<stdio.h>
void main(void)
{	int count=2;
	double i=0,j=1,sum,final_sum=0,avg;
	printf("\n%lf\t%lf",i,j);
	while (count<=100)
	{	sum = (double) i+j;
		i = j;
		j = sum;
		printf("\t%.0lf",sum);
		final_sum = final_sum + sum;
		count++;
	}
	count--;
	printf("\nTotal Sum = %.0lf",final_sum);
	printf("\nAverage = %.2lf", final_sum/count);


}