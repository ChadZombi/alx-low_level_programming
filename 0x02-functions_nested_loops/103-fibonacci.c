#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of the even-valued terms in the
 * Fibonacci sequence, where the values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int limit = 4000000;
    int previous = 1;
    int current = 2;
    int sum = 0;

    while (current <= limit)
    {
        if (current % 2 == 0)
            sum += current;

        int next = previous + current;
        previous = current;
        current = next;
    }

    printf("%d\n", sum);

    return (0);
}
