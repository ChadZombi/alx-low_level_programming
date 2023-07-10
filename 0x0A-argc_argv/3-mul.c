#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - takes first two int arguments and prints the products
 * @argc: Numbers
 * @argv: Array name
 * Return: 1 if failed and 0 otherwise
 */

int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
}
return (0);
}
