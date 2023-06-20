#include "main.h"
/**
 * _is - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 91))
{
return (1);
}
return (0);
}
