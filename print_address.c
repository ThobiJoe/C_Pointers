#include <stdio.h>
/**
 * main - Print address of pointed variable
 * Return: 0
 */
int main(void)
{
	int n;
	int *p;

	n = 23;
	p = &n;
	printf("The address of n is: %p\n", &n);
	printf("Value of p is: %p\n", p);
	return (0);
}
