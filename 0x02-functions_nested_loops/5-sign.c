#include "main.h"
/**
 * print_sign - Checks if a character is lowercase
 * @n: The character to be checked
 *
 * Return: 1 if @n is lowercase, 0 otherwise
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
_putchar(0 + '0');
return (0);
}
