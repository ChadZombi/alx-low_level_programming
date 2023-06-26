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
int i;
int length = 0;
if (s == NULL)
return;
while (s[length] != '\0')
{
length++;
}
for(i = length - 1; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
return (void);
}
