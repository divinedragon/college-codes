/***********************************************************
Program: 3A.C - MCA Assignment - C - 3.a
Author: Deepak Shakya
Date: 03-10-2009
Description: Write a chequebook balancing program of an user's account. It
						 will use getline() to read a line, which will contain either
						 the word "withdrawl" or "deposit". The next line will contain
						 the amount of the withdrawl or deposit. After reading each pair
						 of lines, the program should compute and print the new balance.
						 You can declare the variable to hold the running balance to be
						 datatype float and you can use the function atof() to convert
						 an amount string read by getline() into a floating-point number.
						 When the program reaches EOF, it should exit.
************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define STRSIZE 80

int string_compare(char *str1, char *str2)
{
	int i=0;
	int flag = 0;

	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
		else
		{
			i++;
		}
	}

	return flag;	// flag 0 - strings are same, flag 1, strings are different
}

void process_file(FILE *fp)
{
	char line[STRSIZE];
	float balance = 0.0;
	float file_amount;

	int error = 0;	// Flag for error. If 0, no error. If 1, some error in file.

	/*
	while(!feof(fp))
	{
		fgets(line,STRSIZE,fp);	// Gets the type of transaction - deposit or withdrawl
		printf("\nLine --> %s",line);
	}
	*/

	while(!feof(fp))
	{
		fgets(line,STRSIZE,fp);	// Gets the type of transaction - deposit or withdrawl

		if(0 == string_compare(line,"deposit"))
		{
			// Get the amount
			fgets(line,STRSIZE,fp);			// Get the amount from file
			file_amount = atof(line);		// Convert the string amount to float amount

			if(0 != file_amount)
			{
				// Successful conversion of string amount to float amount
				balance = balance + file_amount;
			}
			else
			{
				// Unable to Convert from string amount to float amount
				error = 1;
			}
		}
		else if(0 == string_compare(line,"withdrawl"))
		{
			// Get the amount
			fgets(line,STRSIZE,fp);			// Get the amount from file
			file_amount = atof(line);		// Convert the string amount to float amount

			if(0 != file_amount)
			{
				// Successful conversion of string amount to float amount
				balance = balance - file_amount;
			}
			else
			{
				// Unable to Convert from string amount to float amount
				error = 1;
			}
		}
		else
		{
			error = 1;
		}

		// Check for any error
		if(1 == error)
		{
			printf("\nInput file found garbled. Please check the file");
			printf("\nProgram will terminate now...");
			return ;
		}
		else
		{
			printf("\nBalance --> %.2f",balance);
		}
	}

	return ;
}



int main(void)
{
	FILE *fp;

	clrscr();

	fp = fopen("3A.DAT","r");		// Open the input file in read mode

	// Check if the input file has been opened successfully
	if(!fp)
	{
		// Unable to open the file. Inform the user
		printf("\nUnable to open the input file.");
		return 1;
	}

	process_file(fp);	// Process file for the balance calculation
	fclose(fp);				// Close the file. Release the resources

	return 0;
}