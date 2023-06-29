#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: Pointer to the string.
 *
 * This function iterates over each character in the string and converts
 * any lowercase letters to their uppercase equivalent. The original string
 * is modified in-place.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
