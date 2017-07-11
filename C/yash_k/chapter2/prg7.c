/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [G] - Write C Programs for the following

(b) Enter any character from the keyboard and display whether it is a capital
letter, small case letter, a digit or a special symbol.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	A-Z -->  65-90
	a-z -->  97-122
	0-9 -->  48-57
	Special Symbols --> 0-47, 58-63,91-96, 123-127

*/
#include<stdio.h>
int main(void)
{	char ch;
	printf("\n\nPress any Key.... ==> "); ch = getch();

	if (ch>=65 && ch<=90)
	{	printf("\nYou Pressed a Capital Alphabet.");
	}
	else if(ch>=97 && ch<=122)
	{	printf("\nYou Pressed a Small Case Alphabet.");
	}
	else if (ch>=48 && ch<=57)
	{	printf("\nYou Pressed a Numeric Value.");
	}
	else
	{	printf("\nYour Presses a Special Character.");
	}


	return 1;
}