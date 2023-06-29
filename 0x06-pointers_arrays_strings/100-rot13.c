#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_encoding = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = rot13_encoding[j];
break;
}
}
}
return (str);
}
