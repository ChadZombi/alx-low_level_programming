#include "main.h"

/**
 * _strncpy - copies a string to a set amount of characters
 * @dest: string one
 * @src: string two
 * @n: number of chararcters copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (;i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
