#include "main.h"

/**
 * _abs - computes the value of an integer
 *
 * @n: the number to compute the value
 *
 * Return: the absolute value of "n"
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
