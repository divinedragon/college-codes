#include<stdio.h>

int f1(int n);
int f2(void);

int main(void)
{	int t;

	printf("Enter a Number : "); scanf("%d", &t);

	/* Print Proper Message */
	t ? f1(t) + f2(): printf("Zero Entered.\n");
	return 0;
}
int f1(int n)
{	printf("%d", n);
	return 0;
}
int f2(void)
{	printf(" Entered\n");
	return 0;
}

