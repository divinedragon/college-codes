/***********************************************************
Function File: F_CI_F.C - MCA Lab Assignment - 3.11
Author: Deepak Shakya
Date: 26-09-2009
Description: Stores the function that calculates the compound interest
***********************************************************/

float compound_interest(float int_amt, int years)
{
	float ci=1.0;

	// Formula for Compound Interest
	// CI = P((100+R)/100)^Y
	while(years>0)
	{
		//Calculating the value for ((100+R)/100)^Y
		ci = ci * ((100+RATE)/100);
		years--;
	}

	ci = ci * int_amt;
	return ci;
}