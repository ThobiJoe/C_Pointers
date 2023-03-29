#include <stdio.h>
/**
 * main - Show how arrays work
 * Return: 0
 */
int main(void)
{
	int num[5]; /* Creates 5 consecutive space in memory for the array */

	num[0] = 28;
	num[1] = 12;
	num[2] = 93;
	num[3] = 39;
	num[4] = 102;
	num[5] = 88;
	printf("Address of where the array starts: %p\n", num);
	printf("First value if num is: %d, and the address is: %p\n", *(num + 0), &num[0]);
	printf("Second value if num is: %d, and the address is: %p\n", num[1], &num[1]);
	printf("Third value if num is: %d, and the address is: %p\n", *(num + 2), &num[2]);
	printf("Fourth value if num is: %d, and the address is: %p\n", num[3], &num[3]);
	printf("Fifth value if num is: %d, and the address is: %p\n", num[4], &num[4]);
	return (0);
}
