/* This Program accepts an amount and display it in Words. */
#include<stdio.h>
#include<conio.h>
void function_words(int value);
void main(void)
{	int amount; clrscr();
	printf("\nEnter any Amount in the Range (0-32767) ==> ");
	scanf("%d",&amount);

	if (amount/1000)
	{  //Following Code Displays Values for Thousand.
	   if((amount/1000)<20)
	      function_words((amount/1000));
	   else
	   {   function_words((amount/1000)-((amount/1000)%10));
	       function_words((amount/1000)%10);
	   }
	   printf("Thousand ");
	}
	amount = amount%1000;


	//Following Code Displays Values for Hundred.
	if(amount/100)
	{  function_words(amount/100);
	   printf("Hundred ");
	}
	amount = amount%100;


	//Following Code Displays Values for Tens.
	if (amount<20)
	   function_words(amount);
	else
	{  function_words(amount-(amount%10));
	   function_words(amount%10);
	}
	getch();
}
void function_words(int value)
{	switch (value)
	{   case 1: printf("One "); break;
	    case 2: printf("Two "); break;
	    case 3: printf("Three "); break;
	    case 4: printf("Four "); break;
	    case 5: printf("Five "); break;
	    case 6: printf("Six "); break;
	    case 7: printf("Seven "); break;
	    case 8: printf("Eight "); break;
	    case 9: printf("Nine "); break;
	    case 10: printf("Ten "); break;
	    case 11: printf("Eleven "); break;
	    case 12: printf("Twelve "); break;
	    case 13: printf("Thirteen "); break;
	    case 14: printf("Fourteen "); break;
	    case 15: printf("Fifteen "); break;
	    case 16: printf("Sixteen "); break;
	    case 17: printf("Seventeen "); break;
	    case 18: printf("Eighteen "); break;
	    case 19: printf("Nineteen "); break;
	    case 20: printf("Twenty "); break;
	    case 30: printf("Thirty "); break;
	    case 40: printf("Forty "); break;
	    case 50: printf("Fifty "); break;
	    case 60: printf("Sxity "); break;
	    case 70: printf("Seventy "); break;
	    case 80: printf("Eighty "); break;
	    case 90: printf("Ninety "); break;
	}
}
