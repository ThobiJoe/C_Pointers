#include <stdio.h>
/**
 * main - Working with dereferencing in Pointers
 * Return: 0
 */
int main(void)
{
	int i;
	int *p;

	i = 23;
	p = &i;
	printf("The value of p: %p\n", p);
	printf("The address of i: %p\n", &i);
	printf("The value of i: %d\n", *p);

	int b;

	b = 79;
	*p = b;
	/**
	 * The above line of code changes the
	 * value of the pointed destination to
	 * the value of b
	 */
	printf("The value of p: %p\n", p);
	printf("The new value of i: %d\n", *p);
	return (0);
}
