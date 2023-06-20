#include "main.h"

/**
 * _islower - is used to search for lowercase
 *
 * @c: the charactor being searched
 *
 * Return: always 1 if true, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	
	return (0);
}
