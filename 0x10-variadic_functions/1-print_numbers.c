#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int num;
va_start(args, n);
while (i < n)
{
num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
printf("%s", separator);
i++;
}
va_end(args);
printf("\n");
}
