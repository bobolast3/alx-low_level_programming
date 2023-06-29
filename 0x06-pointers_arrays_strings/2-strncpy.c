#include "main.h"
/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied.
 *
 * This function copies the first n bytes of the src string to the dest string.
 * If the length of src is less than n, the remaining bytes in dest are filled
 * with null bytes ('\0') to ensure dest is null-terminated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
