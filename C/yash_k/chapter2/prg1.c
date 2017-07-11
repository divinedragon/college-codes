/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [C] - Write C Programs for the following

(a) if cost price and selling price of an item is input, WAP to determine
whether the seller has made profit or incurred loss. Also determine how
much profit he made or loss incurred.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
	If Selling price > Cost price ==>  Profit
	If Selling price < Cost price ==>  Loss

*/
#include<stdio.h>
int main(void)
{  float sp,cp;

	printf("\n\nEnter Cost Price (CP) of the Item ==> "); scanf("%f",&cp);
	printf("\n\nEnter Sellling Price (SP) of the Item ==> "); scanf("%f",&sp);

	if (sp>cp)
	{	printf("\nYou have made a Profit of Rs. %.2f",sp-cp);
	}
	else if (cp>sp)
	{	printf("\nYou have incurred a Loss of Rs. %.2f",cp-sp);
	}
	else
	{	printf("\nYou have not made any Profit or Incurred any Loss.");
	}
	return 1;
}