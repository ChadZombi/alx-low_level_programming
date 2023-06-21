#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * The numbers are separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 50;
unsigned long a = 1;
unsigned long b = 2;
unsigned long next;
int i;

printf("%lu, %lu", a, b);

for (i = 3; i <= n; i++)
{
next = a + b;
printf(", %lu", next);

a = b;
b = next;
}

printf("\n");

return (0);
}
