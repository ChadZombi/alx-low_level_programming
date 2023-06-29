#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result, or 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry, digit1, digit2, sum;
i = j = k = carry = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= size_r || j >= size_r)
return (0);
i--;
j--;
while (i >= 0 || j >= 0)
{
digit1 = (i >= 0) ? (n1[i] - '0') : 0;
digit2 = (j >= 0) ? (n2[j] - '0') : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
k++;
i--;
j--;
}
if (carry > 0 && k < size_r - 1)
{
r[k] = carry + '0';
k++;
}
if (k >= size_r)
return (0);
r[k] = '\0';
return (r);
}
