#include "main.h"
/**
 * jack_bauer - Writes a character to the standard output (stdout)
 * 
 *
 * Return: On success, returns the number of characters written. On error,
 *         -1 is returned, and errno is set appropriately.
 *
 */
void jack_bauer(void)
{
int h1 = 0;
int h2 = 0;
int m1 = 0;
int m2 = 0;
while (!(h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9))
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
if (m2 == 9)
{
if (m1 == 5)
{
if (h2 == 9)
{
h1++;
}
h2 = (h2 + 1) % 10;
}
m1 = (m1 + 1) % 6;
}
m2 = (m2 + 1) % 10;
}
if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
}
}
