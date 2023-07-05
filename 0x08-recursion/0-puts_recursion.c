#include "main.h"

/**
 * _puts_recursion - Prints a string and a new line.
 * @s: String to be printed.
 * Description: the functions recursively prints
 * charactors of a string, after NULL is reached
 * prints a new line.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
