#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be set.
 * @to: Pointer to the char value to set.
 *
 * Description: This function takes a pointer to a pointer to a char (s) and
 * a pointer to a char (to) as arguments. It sets the value of the pointer s
 * to the address pointed by to.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
