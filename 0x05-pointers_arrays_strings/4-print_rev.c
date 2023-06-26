#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 *
 * This function takes a pointer to a string and prints the string
 * in reverse order followed by a new line.
 *
 * Return: None.
 */
void print_rev(char *s)
{
int length = 0;
while (*(s + length) != '\0')
{
length++;
}
for (int i = length - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
