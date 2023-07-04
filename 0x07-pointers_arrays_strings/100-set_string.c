#include "main.h"
#include <stdio.h>
/**
 * set_string - Sets the value of a pointer to a char.
 * Description: This function takes a pointer to a pointer to a char (s) and
 * a pointer to a char (to) as arguments. It sets the value of the pointer s
 * to the address pointed by to.
 * @s: Pointer to the pointer that needs to be set.
 * @to: Pointer to the char value set
 */
void set_string(char **s, char *to)
{
*s = to;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = NULL;
char to[] = "Hello, world!";
set_string(&s, to);
printf("%s\n", s);
return (0);
}
