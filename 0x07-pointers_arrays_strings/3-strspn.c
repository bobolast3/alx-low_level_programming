#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to check.
 * @accept: Pointer to the string
 * containing the characters to match.
 *
 * This function calculates the
 * length of the longest initial segment of the
 * string s that consists entirely of charactersadsadddddddddddddddddddddddddddddddddsadsad
 * from the string accept.
 *
 * Return: The number of bytes in the initial
 * segment of s consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;
while (*s != '\0')
{
match = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
match = 1;
break;
}
accept++;
}
if (match == 0)
return (count);
count++;
s++;
accept = accept - count + 1;
}
return (count);
}
