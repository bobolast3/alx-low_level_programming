/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 *
 * This function takes a pointer to a string and prints the string
 * followed by a new line to the standard output (stdout).
 *
 * Return: None.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
