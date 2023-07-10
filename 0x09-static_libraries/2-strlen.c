#include "main.h"
#include <string.h>

/**
 * _strlen - counts how long a string is
 * @s: pointer used to count
 * Return: always "length"
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
