#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void insert(char *items, int count);
void main()
{	char s[10]; clrscr();
	printf("\nEnter a String"); scanf("%s",s);
	insert(s,strlen(s));
	printf("\nSorted String is : %s",s);
	getch();
}
void insert(char *items, int count)
{	register int a, b; char t;
	for(a=1; a<count; a++)
	{   t=items[a];
	    for(b=a-1; (b>=0) && (t<items[b]); b--)
	       items[b+1] = items[b];
	    items[b+1] = t;
	}
}