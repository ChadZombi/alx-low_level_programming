#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is string one
 * @s2: is string two
 * Return: *s1 and *s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(unsigned char *)s1 - *(unsigned char *)s2;
}
