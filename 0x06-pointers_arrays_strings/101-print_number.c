#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
int divisor = 1;
int num_digits = 0;
int temp;
if (n < 0)
{
_putchar('-');
n = -n;
}
temp = n;
while (temp > 0)
{
temp /= 10;
divisor *= 10;
num_digits++;
}
if (n == 0)
{
_putchar('0');
}
else
{
while (num_digits > 0)
{
divisor /= 10;
_putchar((n / divisor) + '0');
n %= divisor;
num_digits--;
}
}
}
