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
while (c < 10)
{
printf("%d", c);
c++;
}
putchar('\n');
return (0);
}
