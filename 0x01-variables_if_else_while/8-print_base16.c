#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (number = 'a'; number <= 'f'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
