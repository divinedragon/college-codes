/*
Yashwant Kanitkar - Let Us C
Chapter 5 - [D] - Write C Programs for the following

(c) Write a general purpose function to convert any given year into its roman
equivalent. The following table shows the roman equivalents of decimal numbers
		1		I
		5		V
		10		X
		50		L
		100	C
		500	D
		100	M

Written By - Deepak Shakya
Date - 30/07/2007

Solution:


*/
#include<stdio.h>
int main(void)
{ 	int num,temp,i=0,j,mul;

	printf("\n\nEnter a Year ==>  "); scanf("%d",&num);
	temp = num;

	//Lets count the number of digits in the number
	while(temp)
	{	temp = temp/10; i++;
	}

	while(num)
	{	i--;	//This variable is used to get a multiplier which is used to get
				//the first digit from the number.

		for(j=1,mul=1; j<=i; j++)	//This loop will generate the multiplier
		{	mul = mul * 10;
		}

		temp = num / mul;	//This expr will give us the first digit from the num
		num = num % mul;	//This will store the remaining digits is num again

		//Nested switch will do the job for us.
		//The first outer switch will use the value of mul to determine
		//the range.
		//Then the value of temp, ie extracted digit will be used to display the
		// roman numbers
		switch (mul)
		{	case 1000:
				switch (temp)
				{	case 1: printf("M");break;
					case 2: printf("MM");break;
					case 3: printf("MMM");break;
					case 4: printf("MMMM");break;
					case 5: printf("MMMMM");break;
					case 6: printf("MMMMMM");break;
					case 7: printf("MMMMMMM");break;
					case 8: printf("MMMMMMMM");break;
					case 9: printf("MMMMMMMMM");break;
				};
				break;
			case 100:
				switch (temp)
				{	case 1: printf("C");break;
					case 2: printf("CC");break;
					case 3: printf("CCC");break;
					case 4: printf("CD");break;
					case 5: printf("D");break;
					case 6: printf("DC");break;
					case 7: printf("DCC");break;
					case 8: printf("DCCC");break;
					case 9: printf("CM");break;
				};
				break;
			case 10:
				switch (temp)
				{	case 1: printf("X");break;
					case 2: printf("XX");break;
					case 3: printf("XXX");break;
					case 4: printf("XL");break;
					case 5: printf("L");break;
					case 6: printf("LX");break;
					case 7: printf("LXX");break;
					case 8: printf("LXXX");break;
					case 9: printf("XC");break;
				};
				break;
			case 1:
				switch (temp)
				{	case 1: printf("I");break;
					case 2: printf("II");break;
					case 3: printf("III");break;
					case 4: printf("IV");break;
					case 5: printf("V");break;
					case 6: printf("VI");break;
					case 7: printf("VII");break;
					case 8: printf("VIII");break;
					case 9: printf("IX");break;
				};
				break;
		}
	}
	return 1;
}