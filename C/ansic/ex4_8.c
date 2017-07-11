/* This program round off an integer to the next largest even multiple of
   another integer.
   For Example:
      To round off 256(i) to next largest number which is divisible by 7(j),
      we apply the following formula.
		next_int = i+j - i%j					*/
#include<stdio.h>
void main()
{	int i,j, next_int;		/* Declaring Variables */

	i = 365; j = 7;			/* Example 1 */
	next_int = (i+j) - (i%j);
	printf("\nNext Multiple of %i divisible by %i is %i.",i,j,next_int);

	i = 12258; j = 23;		/* Example 1 */
	next_int = (i+j) - (i%j);
	printf("\nNext Multiple of %i divisible by %i is %i.",i,j,next_int);

	i = 996; j = 4;			/* Example 1 */
	next_int = (i+j) - (i%j);
	printf("\nNext Multiple of %i divisible by %i is %i.",i,j,next_int);
}