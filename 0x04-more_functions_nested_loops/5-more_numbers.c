#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i = 0;
int count = 0;
while (count < 10)
{
i = 0;
while (i <= 14)
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
count++;
}
}
