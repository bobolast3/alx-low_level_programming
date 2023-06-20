#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Description: Prints a message using puts()
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int j = 0;
while(j < 10)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
}
}
