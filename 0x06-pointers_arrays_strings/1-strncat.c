#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * This function appends the src string to the dest string, overwriting the
 * terminating null byte ('\0') at the end of dest, and then adds a terminating
 * null byte. It will use at most n bytes from src.
 * If src contains n or more bytes, it does not need to be null-terminated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';
return (dest);
}
