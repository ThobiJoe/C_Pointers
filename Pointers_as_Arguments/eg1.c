#include <stdio.h>
/**
 * increment - To show an example of why we would want
 * to use pointer as an arguement
 * @a: formal arguement
 * Return: nothing
 */
void increment(int a)
{
	a = a + 1;
	printf("The value of a in the Increment function is: %d\n", a);
	printf("The address of the a in the Increment function is: %p\n", &a);
}
/**
 * main - to work on the increment function
 * Return: 0 always
 */
int main(void)
{
	int a;

	a = 10;
	increment(a);
	printf("The value of a in the main: %d\n", a);
	printf("The address of a in the main: %p\n", &a);
	return (0);
}
