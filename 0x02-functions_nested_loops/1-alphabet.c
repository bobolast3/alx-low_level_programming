#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a message using puts()
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
/*description*/
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
