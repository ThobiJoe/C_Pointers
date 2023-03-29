#include <stdio.h>
/**
 * modify_param - Function to modify params
 * @m: Function integer
 * Return: nothing
 */
void modify_param(int m)
{
	m = 402;
	printf("Number is: %d\n", m);
}
/**
 * main - work on the function
 * Return: 0
 */
int main(void)
{
	int n;

	n = 300;
	modify_param(n);
	printf("n outside the function: %d\n", n);
	return (0);
}
