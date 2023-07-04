#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: Size of the square matrix.
 *
 * Description: This function calculates the sum of the main diagonal and
 * the secondary diagonal of a square matrix and prints the sums to console.
 */
void print_diagsums(int *a, int size)
{
int i;
int main_sum = 0;
int secondary_sum = 0;
for (i = 0; i < size; i++)
{
main_sum += a[(size + 1) * i];
secondary_sum += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", main_sum, secondary_sum);
}
