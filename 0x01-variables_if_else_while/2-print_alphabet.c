#include <stdio.h>
#include <time.h>
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
int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}

