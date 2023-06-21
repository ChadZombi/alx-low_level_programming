#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 98;
int count = 2;
int a = 1;
int b = 2;

printf("%d, %d", a, b);

while (count < n)
{
int next = a + b;
printf(", %d", next);

a = b;
b = next;
count++;
}

printf("\n");

return (0);
}
