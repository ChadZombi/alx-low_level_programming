#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 * Description: function recursively prints each character of a string
 * in reverse. It starts from the end of the string and
 * recursively calls itself with the pointer to the previous character
 * until it reaches the first character
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
