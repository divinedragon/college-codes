#include<stdio.h>
#include<conio.h>
void main()
{	char *arr,ch;
	int i=0;
	clrscr();
	do
	{	ch = getche();
		if (ch!='q')
			*(arr+i) = ch;
		else if (ch=='q')
			*(arr+i) = '\0';
		else if (ch == '\b')
		{	clrscr();
			printf("\r%s",arr);
		}
		i++;
	} while(ch!='q');
	puts(arr);
}