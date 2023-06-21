#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 98;
    int count = 2;
    double phi = (1 + sqrt(5)) / 2;
    int fibonacci;

    printf("1, 2");

    while (count < n)
    {
        fibonacci = (int)round((pow(phi, count) - pow(1 - phi, count)) / sqrt(5));
        printf(", %d", fibonacci);
        count++;
    }

    printf("\n");

    return (0);
}
