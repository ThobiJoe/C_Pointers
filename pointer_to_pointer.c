#include <stdio.h>
/**
 * main - working with pointer to pointer
 * Return: 0 always
 */
int main(void)
{
	int x = 5;
	int *p;

	p = &x;
	printf("The value of x is: %d\n", x);
	printf("The value of p and address of x is: %p\n", p);

	int **q; /* How to decalare a pointer that will carry another pointer */

	q = &p; /* Pointer to pointer */
	printf("The value of q is: %p\n", q);
	printf("The address of p is: %p\n", &p);
	printf("The value of *q is: %p\n", *q);
	printf("The value of x from q is: %d\n", *(*q));

	int ***r; /* Pointer to pointer to pointer */

	r = &q;
	*(*(*r)) = 85;
	printf("The address of q is: %p\n", &q);
	printf("The value of r is: %p\n", r);
	printf("The address of r is: %p\n", &r);
	printf("The new value of x from r is: %d\n", *(*(*r)));
	return (0);
}
