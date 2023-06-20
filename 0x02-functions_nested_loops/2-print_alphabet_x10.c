#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet "10" times over
 *
 * description: print_alphabet_x10 prints the alphabet
 * is lowercase "10" times using the _putchar function
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for(i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar (letter);
			letter++;
		}
	_putchar('\n');
	}
}
