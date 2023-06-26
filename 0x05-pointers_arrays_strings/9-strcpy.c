#include "main.h"
/**
 * _strcpy - Copies the string pointed to
 * by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * This function copies the string pointed to
 * by `src`, including the terminating null byte (\0),
 * to the buffer pointed to by `dest`.
 * It returns a pointer to `dest`.
 *
 * Return: Pointer to `dest`.
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
if (dest == NULL || src == NULL)
return (NULL);
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (dest_start);
}
