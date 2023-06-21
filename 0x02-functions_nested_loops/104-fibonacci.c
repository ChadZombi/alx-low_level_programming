#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 * The numbers are separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long long int previous = 0;
    unsigned long long int current = 1;
    unsigned long long int next;
    int count;

    printf("%llu, %llu", current, current);

    for (count = 3; count <= 98; count++)
    {
        next = previous + current;
        printf(", %llu", next);

        previous = current;
        current = next;
    }

    printf("\n");

    return (0);
}
