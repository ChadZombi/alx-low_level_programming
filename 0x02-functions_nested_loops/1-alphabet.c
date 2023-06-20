#include "main.h"

/**
 * print_alphabet - Prints lowercase from 'a' to 'z'
 *
 * description: Print_alphabet prints a list of lowercase
 * from 'a' to 'z' in order
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
_putchar('\n');
}
