#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * This function replaces specific letters in the string with their corresponding
 * 1337 encoding: a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
int i, j;
char *letters = "aAeEoOtTlL";
char *leet_encoding = "4433007711";
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
