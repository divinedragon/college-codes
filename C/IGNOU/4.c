/***********************************************************
Program: 3A.C - MCA Assignment - C - 3.a
Author: Deepak Shakya
Date: 03-10-2009
Description: Write the following functions using pointers.
						 1. Line-reversing function.
						 2. Character Counting Function
						 3. String Concatenation Function
						 4. String-Replacing Function
************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<alloc.h>


/***************************************************************************
* Following function returns the reversed string of s
***************************************************************************/
char *line_reversing(char *s)
{
	int length = character_count(s);
	int i;
	char *rev = (char *) malloc(sizeof(char)*(length+1));

	for(i=0; i<length; i++)
	{
		rev[i] = s[length-i-1];
	}

	rev[i] = '\0';

	return rev;
}

/***************************************************************************
* Following function counts the totol number of characters in the string s.
***************************************************************************/
int character_count(char *s)
{
	int i=0;
	while(s[i] != '\0')
	{
		i++;
	}

	return i;
}

/***************************************************************************
* Following function returns the concatenation of s1 and s2
***************************************************************************/
char *string_concat(char *s1, char *s2)
{
	int s1_len = character_count(s1);		// Length of first string
	int s2_len = character_count(s2);		// Length of second string
	int i,j;
	// Allocate memory for concatenated string -> s1 + s2 + \0
	char *concat = (char *) malloc(sizeof(char) * (s1_len+s2_len+1));

	// Store the first string
	for(i=0; i<s1_len; i++)
	{
		concat[i] = s1[i];
	}

	// Store the second string
	for(j=0; j<s2_len; j++,i++)
	{
		concat[i] = s2[j];
	}

	// Finalize the string will null termination character
	concat[i] = '\0';

	return concat;
}


int main(void)
{
	char s[30] = "Deepak Shakya";

	clrscr();

	printf("\n\t\t\tSTRING MANIPULATION USING CUSTOM FUNCTIONS");

	printf("\n\tTest String ==> %s",s);
	printf("\n\t\tTotal No. of Characters ==> %d",character_count(s));
	printf("\n\t\tReversed String ==> %s",line_reversing(s));
	printf("\n\t\tConcatenated with \"TEST\" ==> %s",string_concat(s,"TEST"));


	return 0;
}