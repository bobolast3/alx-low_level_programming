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
void print_alphabet(void);
void print_alphabet(void){
int i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
