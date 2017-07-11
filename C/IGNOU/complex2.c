#include<conio.h>
#include<stdio.h>

typedef struct {
	double rl;
	double im;
} Complex;

Complex multiply(Complex a, Complex b) {
	Complex c;

	/* Perform multiplication */
	c.rl = (a.rl * b.rl) - (a.im * b.im);
	c.im = (a.rl * b.im) + (b.rl * a.im);

	return c;
}

void main(void) {
	Complex a, b, c;
	clrscr();

	printf("\nEnter the first Complex No. ==> ");
	scanf("%lf %lf", &a.rl, &a.im);

	printf("\nEnter the second Complex No. ==> ");
	scanf("%lf %lf", &b.rl, &b.im);

	c = multiply(a, b);

	printf("\nMultiplied Complex No. ==> %.2lf + %.2lfi", c.rl, c.im);
}