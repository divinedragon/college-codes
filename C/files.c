#include<stdio.h>
#include<conio.h>
void main()
{	FILE *fp; char name[20]; clrscr();
	fp = fopen("C:\\TC\\Deepak\\Data.dat","a+");
	if (!fp)
	   printf("\nError Opening File.");
	else
	   printf("\nFile is ready to Use.");
	printf("\nEnter Name : ");
	gets(name);
	fputs(name,fp);
	rewind(fp);
	while (!feof(fp))
	{   printf("%c",fgetc(fp));
	}
	fclose(fp);
	getch();
}
