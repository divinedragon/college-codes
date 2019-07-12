/*
 *      This program displays the value of an Environment variable PATH.
 * 
 * 	Created By :- Deepak Shakya
 * 	Date :- 20.08.2008 12:25:25
 */


public class GetEnvironment
{	
	public static void main (String args[])
	{
		System.out.println("System.getenv(\"PATH\") = "+System.getenv("PATH"));
	}
}
