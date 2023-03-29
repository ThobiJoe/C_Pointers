#include <stdio.h>
/**
 * main - Working with pointers
 * Description: To change the value of address the
 * pointer points to
 * Return: 0
 */
int main(void)
{
	int i;
	int *p;

	i = 35;
	p = &i;
	printf("The value of i is: %d\n", i);
	printf("The value of p is: %p\n", p);
	*p = 79;
	printf("Changed the value of i\n");
	printf("The value of i is: %d\n", i);
	printf("The value of p is: %p\n", p);
	return (0);
}
