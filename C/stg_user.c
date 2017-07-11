/* This Program uses various String Functions */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	char name[20], cname[20]; int i,p=0; clrscr();
	printf("\nEnter Your Name : "); gets(name);
	printf("\nHello! %s. Pleased to Meet You.",name);

	/* Calculation of No. of Characters in the Name. */
	for(i=0;name[i];i++);
	printf("\n\t\t\tCharacters in Your Name\n");
	printf("\tCalculated Value : %d \t\t With Function : %d",i,strlen(name));

	/* Copying the String into New Array. */
	printf("\n\t\t\tYour Copied Name\n");
	printf("\tCalculated : ");
	for(i=0;name[i];i++)
	{   cname[i]=name[i]; printf("%c",cname[i]); cname[i] = 'A';
	}
	strcpy(cname,name);
	printf(" \t\t With Function : %s",cname);

	/* Reversing the String */
	printf("\n\t\t\tYour Name in Reversed.\n");
	printf("\tCalculated : ");
	for(i=strlen(name);i>=0;i--)
	{   cname[p]=name[i]; printf("%c",cname[p]); p++;
	}
	strcpy(cname,name);
	printf(" \t\t With Function : %s",strrev(name));

	/* Checking whether the Entered Name is a Pallindrome or not. */
	for(i=0;cname[i]!='\0';i++)
	{   if(cname[i]!=name[i]) p=0; break;
	}
	if (p==0) printf("\n\n\t\t\tYour Name is not a Pallindrom.");
	else printf("\n\n\t\t\tYour Name is a Pallindrom.");
	getch();

}