#include "main.h"

/**
 * void print_alphabet(void) is to print alphabet in lowercase
 * from 'a' to 'z'
 */

void print_alphabet(void)
{
	char letter = 'a';
	
	while ( letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
_putchar('\n');
}	
