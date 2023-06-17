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
int c = 0;
while (c <= 'f')
{
if (c < 10)
{
putchar(c + '0');
}
else
{
putchar(c);
}
c++;
if (c == 10)
{
c = 'a';
}
}
putchar('\n');
return (0);
}

