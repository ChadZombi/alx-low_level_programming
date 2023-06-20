#include "main.h"

/**
 * main - void print_alphabet(void) 
 * 
 * Description: print_alphabet will print the alphabet
 * in lowercase 
 * from 'a' to 'z'
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
