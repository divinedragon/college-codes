/*
Yashwant Kanitkar - Let Us C
Chapter 7 - [C] - Write C Programs for the following

(a)	Write a macro definition to test whether a character entered is a small
case letter or not.

Written By - Deepak Shakya
Date - 30/07/2007

Solution:

*/
#include<stdio.h>
#define CHECK_BIG (ch>=65 && ch<=90)
#define CHECK_SMALL (ch>=97 && ch<=122)
#define CHECK_NUMBER (ch>=48 && ch<=57)
int main(void)
{	char ch;
	printf("\n\nPress any Key... ==> "); ch = getche();
	if (CHECK_BIG)
		printf("\nYou pressed a Capital Case Alphabet.");
	else if (CHECK_SMALL)
		printf("\nYou pressed a Small Case Alphabet.");
	else if (CHECK_NUMBER)
		printf("\nYou pressed a Numeric Character.");
	else
		printf("\nYou pressed a Special Character.");

	return 1;
}