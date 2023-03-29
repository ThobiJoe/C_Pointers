#include <stdio.h>
#include <string.h>
/**
 * main - Print strings
 * Return: 0
 */
int main(void)
{
	char name[7] = "Tobi";
	char surname[7] = "Joseph";
	char *s;

	printf("My name is %s\n", name);
	int length = strlen(name);
	printf("I have %d letters in my name\n", length);

	s = surname;
	printf("Surname Address: %p, first letter address: %p\n", s, &surname[0]);
	printf("Length of the surname is: %ld\n", strlen(s));
	return (0);
}
