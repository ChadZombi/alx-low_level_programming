#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character being checked
 * Return: 1 for uppercase 0 for otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
