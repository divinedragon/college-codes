/*
 *		This program shows how strings can be split in chunks with the help
 * 	StringTokenizer. Default token is space. To provide with the custom
 * 	tokens, 2nd optional parameter is provided. Also, if you want to include
 * 	the tokens as well in the resultset, then use the third boolean 
 * 	parameter to include or ignore the tokens in the resultset.
 * 
 * 	Created By :- Deepak Shakya
 * 	Date :- 20.08.2008 12:25:25
 */
import java.util.*;

public class StringTokenizerDemo
{	
	public static void main (String args[])
	{
		//Default Token is space
		StringTokenizer st1 = new StringTokenizer("Hello World of Java");

		//Provide a custom Token for splitting
		StringTokenizer st2 = new StringTokenizer("Apple,Mango,Banana,Grapes",",");


		//Multiple Tokens - In the following case  - A space and a comma
		StringTokenizer st3 = new StringTokenizer("Apple,Mango and Mangoes,Banana and Bananas,Grapes",", ");

		//Include tokens in the resultset
		StringTokenizer st4 = new StringTokenizer("Apple,Mango and Mangoes,Banana and Bananas,Grapes",", ",true);

		//Print Resultsets - st1
		System.out.println("Resultset of st1 ==>");
		while (st1.hasMoreTokens())
		{	System.out.println("Token : "+st1.nextToken());
		}

		//Print Resultsets - st2
		System.out.println("Resultset of st2 ==>");
		while (st2.hasMoreTokens())
		{	System.out.println("Token : "+st2.nextToken());
		}

		//Print Resultsets - st3
		System.out.println("Resultset of st3 ==>");
		while (st3.hasMoreTokens())
		{	System.out.println("Token : "+st3.nextToken());
		}

		//Print Resultsets - st4
		System.out.println("Resultset of st4 ==>");
		while (st4.hasMoreTokens())
		{	System.out.println("Token : "+st4.nextToken());
		}
	}
}
