#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string with a newline at the end
 * @str: is the string address to  print to the stdout
 * Return:void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}
