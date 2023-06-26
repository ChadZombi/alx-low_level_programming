#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first int that is being swapped
 * @b: second int that is being swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
*a = *a ^ *b;
*b = *a ^ *b;
*a = *a ^ *b;
}
