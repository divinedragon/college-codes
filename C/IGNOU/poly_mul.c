#include <stdio.h>
#include <malloc.h>
#include <conio.h>

typedef struct node {
	int power;
	int coefficient;
	struct node *previous;
	struct node *next;
} NODE;

void poly_display(NODE *start) {

	printf("\n");
	while (start != NULL) {
		printf("%dx^%d", start->coefficient, start->power);

		if (start->next != NULL)
			printf(" + ");

		start = start->next;
	}
}

void poly_append_node(NODE **start, int power, int coefficient) {
	NODE *newnode = NULL;
	NODE *temp;

	/* We will only create the node if the coefficient is non-zero */
	if (coefficient != 0) {

		newnode              = malloc(sizeof(NODE));
		newnode->power       = power;
		newnode->coefficient = coefficient;
		newnode->next        = NULL;

		/* Check if the list is empty */
		if (*start == NULL) {
			(*start) = newnode;
			(*start)->previous = NULL;
			return ;
		}

		temp = (*start);

		/* Iterate to the last node and insert the new node at the end */
		while (temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = newnode;
		newnode->previous = temp;
	}
}

void poly_append_multiply(NODE **start, int power, int coefficient) {
	NODE *temp = *start;
	NODE *newnode, *last;

	/* Check if starting node is empty or not */
	if (*start == NULL) {
		/* No nodes in the list. Create the first node */
		newnode= malloc(sizeof(NODE));
		newnode->next = NULL;
		newnode->previous = NULL;
		newnode->power = power;
		newnode->coefficient = coefficient;

		(*start) = newnode;
		return;
	}

	/* List is not empty. Lets find the node with matching power */
	while (temp != NULL) {
		if (temp->power == power) {
			/* We got our node */
			break;
		}

		if (temp->next == NULL) {
			last = temp;
		}

		temp = temp->next;
	}

	/* Check if we found the matching node or not */
	if (temp != NULL) {
		/* We did find the matching node. Add the coefficient */
		temp->coefficient += coefficient;

	} else {
		/* We did not find the matching node. Lets create a new node */
		newnode = malloc(sizeof(NODE));
		newnode->power = power;
		newnode->coefficient = coefficient;
		newnode->next = NULL;

		last->next = newnode;
		newnode->previous = last;
	}
}


void poly_multiply(NODE *poly1, NODE *poly2, NODE **result) {

	NODE *polynode1, *polynode2;
	int power, coefficient;

	/* If any of the input polynomials is empty, it
	 * signifies that we are multiplying with zero(0).
	 * This means the output will be zero.
	 */
	 if (poly1 == NULL || poly2 == NULL) {
		poly_append_node(result, 0, 0);
		return;
	 }

	 /* Here is how I am planning to multiply the two
	  * polynomials.
	  * Multiply the each of the elements from the first
	  * list with each of the elements of the second list.
	  * After their multiplication, pass the new coefficient
	  * and the resultant power to add to the resultant list.
	  * The new function poly_append_multiply(), search for
	  * the correct location of the resultant values in the
	  * resultant list. If the node corresponding to the
	  * power is not available, it is created and appended
	  * at the end.
	  */
	 polynode1 = poly1;

	 /* Iterate all nodes of First Polynomial */
	 while (polynode1 != NULL) {

		polynode2 = poly2;

		/* Iterate all nodes of Second Polynomial */
		while (polynode2 != NULL) {

			/* Multiply the two nodes */
			/* The powers gets added and coefficients gets multiplied */
			power = polynode1->power + polynode2->power;
			coefficient = polynode1->coefficient * polynode2->coefficient;

			poly_append_multiply(result, power, coefficient);
			//printf("\n%d  %d", power, coefficient);

			/* More to the next node in second list */
			polynode2 = polynode2->next;
		}

		/* Move to the next node in first list */
		polynode1 = polynode1->next;
	 }
}

int main(void) {
	NODE *poly1, *poly2, *result;

	int high, i, coefficient;

	clrscr();

	/* Pre-initialize the pointer reference to NULL */
	poly1 = poly2 = result = NULL;

	/* Accept the first polynomial */
	printf("\nEnter the highest power for polynomial 1 --> ");
	scanf("%d", &high);

	/* Iterate over the value of high and add the nodes */
	for (i = high; i >= 0; i--) {
		printf("\nEnter coefficient for x^%d --> ", i);
		scanf("%d", &coefficient);

		/* Add the new node in the first list */
		poly_append_node(&poly1, i, coefficient);
	}

	/* Accept the second polynomial */
	printf("\nEnter the highest power for polynomial 2 --> ");
	scanf("%d", &high);

	/* Iterate over the value of high and add the nodes */
	for (i = high; i >= 0; i--) {
		printf("\nEnter coefficient for x^%d --> ", i);
		scanf("%d", &coefficient);

		/* Add the new node in the second list */
		poly_append_node(&poly2, i, coefficient);
	}

	printf("\nPolynomial 1:");
	poly_display(poly1);

	printf("\nPolynomial 2:");
	poly_display(poly2);

	poly_multiply(poly1, poly2, &result);

	printf("\nResultant Polynomial:");
	poly_display(result);

	return 1;
}