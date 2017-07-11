#include <stdlib.h>
#include <stdio.h>
#include <dir.h>
#include<string.h>
#define MYDRIVE "D:\\TC\\DEEPAK\\"
//int readmyfile(char file[]);
int main(void)
{       char *s;
	char drive[] = MYDRIVE;
	char file[] = "files.dat";
	FILE *fp1,*fp2;
	clrscr();
	printf("File Info:\n");
	printf("\tDrive: %s\n",drive);
	printf("\tFile: %s\n",file);
	s = drive;
	strcat(s,file);
	printf("Value of S = %s",s);
	fp1 = fopen(s,"r");
	if (!fp1)
		printf("\nError Opening the File.");
	else
		printf("\nFile Opened Successfully.");
	drive[0]='\0';
	while(!feof(fp1))
	{       fscanf(fp1, "%s",file);
		printf("\n%s",file);
		getch();
		s = drive;
		strcat(s,file);
		printf("\t%s\n",s);
		/*fp2 = fopen(s,"r");
		if (!fp2)
		{	printf("\nError Opening the File."); exit(1);
		}
		else
		{       printf("\n%s\n",s);
			printf("\nFile is Opened and Ready for Use.");
			fclose(fp2);
		} */
	}
	fclose(fp1);
	return 0;
}
/*int readmyfile(char file[])
{	FILE *fp; char drive[] = MYDRIVE;
	strcat(drive,file); //Concatinating Drive & Filename &  storing in drive
	file = drive;	//Assiging the add of original file to file variable

	fclose(fp);
	return 1;
} */