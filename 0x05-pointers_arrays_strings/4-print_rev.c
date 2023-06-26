#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * print_rev - prints a string in reverse
 * @s: is the contains the string
 * Return:void
 */

void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
