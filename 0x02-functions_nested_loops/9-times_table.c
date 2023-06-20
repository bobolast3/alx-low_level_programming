#include "main.h"
/**
 * times_table - Checks if a number is a single digit.
 * @num: The number to check.
 *
 * Return: 1 if the number is a single digit, 0 otherwise.
 */
void times_table(void) {
int i = 0;
int j = 0;
while (i < 10) {
while (j < 10) {
int n = i * j;
if (n < 10)
{
_putchar(n + '0');
}
else {
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
if (i * j < 10)
{
_putchar(' ');
}
}
j++;
}
_putchar('\n');
i++;
j = 0;
}
}
