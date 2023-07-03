#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to locate.
 *
 * This function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes ('\0') are not compared.
 *
 * Return: A pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
