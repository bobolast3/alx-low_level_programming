#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a message using puts()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c == 'e' || c == 'q')
{
c++;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
