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
int i = 0;
while(i < 10)
{
print_alphabet();
_putchar('\n');
i++;
}
}
