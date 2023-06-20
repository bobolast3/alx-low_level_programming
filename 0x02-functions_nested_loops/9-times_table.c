#include "main.h"
11;rgb:0000/0000/0000/**
 * times_table - Checks if a number is a single digit.
 * 
 *
 * Return: 1 if the number is a single digit, 0 otherwise.
 */
void times_table(void) {
int i = 0;
int j = 0;
while (i < 10)
{
while (j < 10)
{
int n = i * j;
if (j > 1 && n < 10)
{
_putchar(' ');
}
if (n < 10)
{
if (j == 1 )
{
_putchar(' ');
}
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
