#include<stdio.h>
#include<conio.h>
void main(void)
{   char string[30];
	int i=0;

	printf("\n\t\tEnter a String ==> ");
	gets(string);

	for(i=0; string[i]!='\0'; i++)
	{	printf("\n%d ==> %6c",i,string[i]);
	}
}