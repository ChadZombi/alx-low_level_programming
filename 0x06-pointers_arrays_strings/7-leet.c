/**
 * leet - Encodes a string into 1337 (leet speak)
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
char *leet_encoding = "4433007711";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_encoding[j];
break;
}
}
}
return (str);
}
