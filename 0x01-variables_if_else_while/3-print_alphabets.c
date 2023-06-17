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
putchar(c);
if (c == 'z')
{
c = 'A';
}
if (c == 'Z')
{
break;
}
c++;
}
putchar('\n');
return (0);
}
