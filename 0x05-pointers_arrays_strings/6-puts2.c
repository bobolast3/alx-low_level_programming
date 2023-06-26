#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first character, followed by a new line.
 * @str: Pointer to the string.
 *
 * This function takes a pointer to a string and prints every other character,
 * starting with the first character, followed by a new line to the standard output (stdout).
 *
 * Return: None.
 */
void puts2(char *str)
{
if (str == NULL)
return;
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
