#include <stdio.h>
/**
 * main - Get address of variables
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'i': %p\n", &i);
	return (0);
}
