#include <stdio.h>
/**
 * main - Get the size of variable types
 * Return: 0
 */
int main(void)
{
	int *p;

	printf("Size of integer on my Ubuntu is: %lu bytes\n", sizeof(int));
	printf("Size of char on my Ubuntu is: %lu bytes\n", sizeof(char));
	printf("Size of float on my Ubuntu is: %lu bytes\n", sizeof(float));
	printf("Size of long int on my Ubuntu is: %lu bytes\n", sizeof(long int));
	printf("Size of pointer on my Ubuntu is: %lu bytes\n", sizeof(p));
	return (0);
}
