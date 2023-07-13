#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memeory using malloc
 * @b: size of memeory to be allocateed
 * Return: pointer to allocated memeory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
