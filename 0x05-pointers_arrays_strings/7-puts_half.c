#include "main.h"
/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 *
 * This function takes a pointer to a string and prints the second half
 * of the string followed by a new line to the standard output (stdout).
 * If the number of characters is odd, it prints the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2.
 *
 * Return: None.
 */
void puts_half(char *str)
{
int length = 0;
int i;
int start_index;
if (str == NULL)
return;
while (str[length] != '\0')
length++;
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length + 1) / 2;
}
i = start_index;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
