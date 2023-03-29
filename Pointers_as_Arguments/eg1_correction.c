#include <stdio.h>
/**
 * increment - To show an example of how we would want
 * to use pointer as an arguement
 * @p: formal arguement
 * Return: nothing
 */
void increment(int *p) /* Used a pointer as forma arguement */
{
	*p = *p + 1;
	printf("The value of a in the Increment function is: %d\n", *p);
	printf("The address of the a in the Increment function is: %p\n", p);
}
/**
 * main - to work on the increment function
 * Return: 0 always
 */
int main(void)
{
	int a;

	a = 10;
	increment(&a);
	/**
	 * Note that we use the and sign to pass the
	 * address as the actual argument
	 */
	printf("The value of a in the main: %d\n", a);
	printf("The address of a in the main: %p\n", &a);
	return (0);
}

