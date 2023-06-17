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
while (c != 1)
{
if (c == 'z')
{
putchar(c);
c = 'A';
}
putchar(c);
if (c == 'Z')
{
break;
}
c++;
}
putchar('\n');
return (0);
}
