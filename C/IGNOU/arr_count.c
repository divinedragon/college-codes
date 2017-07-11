#include<conio.h>
#include<stdio.h>

void minmax(int array[], int length, int *min, int *max) {

	int temp, count;

	for (count = 0; count < length; count++) {
		temp = *(array + count);
		if (count == 0) {
			*min = temp;
			*max = temp;
			continue;
		} else {

			/* Check if temp is minimum */
			if (temp < *min) { *min = temp; }

			/* Check if temp is maximum */
			if (temp > *max) { *max = temp; }
		}
	}
}

void main(void) {

	int array[100], count, min, max, i;

	printf("\nEnter number of Integer inputs (Max 100) ==> ");
	scanf("%d", &count);

	for (i = 0; i < count; i++) {
		printf("Enter value %d ==> ", (i + 1));
		scanf("%d", &array[i]);
	}

	printf("\nValues Entered-->\n");
	for (i = 0; i < count; i++) {
		printf("%d ", array[i]);
	}

	minmax(array, count, &min, &max);

	printf("\nMinimum value ==> %d", min);
	printf("\nMaximum value ==> %d", max);
}