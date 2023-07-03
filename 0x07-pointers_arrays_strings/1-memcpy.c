#include "main.h"
/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * This function copies n bytes from the memory area pointed to by src to
 * the memory area pointed to by dest.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptr = dest;
for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
return (ptr);
}
