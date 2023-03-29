#include <stdio.h>
/**
 * modify_param - Function that accepts address
 * @m: The argurment
 * Return: address
 */
void modify_param(int *m)
{
	printf("The value of m is: %p\n", m);
}
/**
 * main - Work on the function
 * Return: 0
 */
int main(void)
{
	int i;
	int *p;

	i = 80;
	p = &i;
	printf("The value of p is: %p\n", p);
	modify_param(p);
	return (0);
}
