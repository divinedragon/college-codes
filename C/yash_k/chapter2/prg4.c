/*
Yashwant Kanitkar - Let Us C
Chapter 2 - [C] - Write C Programs for the following

(d) According to Georgean Calender, it was Monday on 01/01/1900. If any year
is input through keyboard, find out what is the day on this 1st January of
this year.

Written By - Deepak Shakya
Date - 29/07/2007

Solution:
  This is a very good Problem.
  Knowledge Bank 1 - After every 17 year, the Georgean Calenders get repeated
  Knowledge Bank 2 - There are 52 complete weeks in every year.
  Knowledge Bank 3 - 52 Weeks i.e. 52x7 = 364.
							That is every non-leap year adds one day of difference
							from MON and every leap year adds two days of difference

*/
#include<stdio.h>
int main(void)
{  int year,diff;
	printf("\n\nEnter a Year ==> "); scanf("%d",&year);
	diff = year - 1900;
	if (diff % 17)
	{	//Now the Year is not divisible by 17.
		//First let us reduce the diff from 1900 to the last year which started
		//with 1st January as MONDAY.
		//diff = diff % 17;
		if (diff%4==0)
		{	//If the entered year is a leap year, then its Feb does not count
			//for the difference as 29th Feb comes after 1st Jan. So we will
			//have to remove one day that is being added unneccessarily.
			diff = (diff - (diff/4)) + ((diff/4)*2) - 1;
		}
		else
		{  //The year entered in not a leap year. So deductions in the days.
			diff = (diff - (diff/4)) + ((diff/4)*2);	//Total days added as diff
		}

		diff = diff%7;	//Number of difference from MONDAY
		if (diff == 1)
		{	printf("\n1st January %d --> TUESDAY.",year);
		}
		else if (diff == 2)
		{	printf("\n1st January %d --> WEDNESDAY",year);
		}
		else if (diff == 3)
		{	printf("\n1st January %d --> THURSDAY",year);
		}
		else if (diff == 4)
		{	printf("\n1st January %d --> FRIDAY",year);
		}
		else if (diff == 5)
		{	printf("\n1st January %d --> SATURDAY",year);
		}
		else if (diff == 6)
		{	printf("\n1st January %d --> SUNDAY",year);
		}
		else if (diff == 0)
		{	printf("\n1st January %d --> MONDAY",year);
		}
	}
	else
	{	//If the diff is divisible by 17, the diff%17 will return 0 which is
		//FALSE. So it will come in the else block -- HERE
		//Because the calender repeats itself after every 17 years. THUS
		printf("\n1st January %d --> MONDAY.",year);
	}

	return 1;
	}