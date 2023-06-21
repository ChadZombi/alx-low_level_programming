#include <stdio.h>

int main(void)
{
    int n = 50; // Number of Fibonacci numbers to print
    unsigned long long int a = 1; // First Fibonacci number
    unsigned long long int b = 2; // Second Fibonacci number
    unsigned long long int next;
    int i;

    // Print the first two Fibonacci numbers
    printf("%llu, %llu", a, b);

    // Print the remaining Fibonacci numbers
    for (i = 3; i <= n; i++)
    {
        next = a + b;
        printf(", %llu", next);

        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}
