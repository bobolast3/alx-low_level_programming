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
int main(void)
{
char str[] = "_putchar";
int length = strlen(str);
int i = 0;
while (i < length)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}

