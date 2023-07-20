#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the format
 * @format: List of types of arguments
 * passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char separator = '\0';
va_start(args, format);
while (format != NULL && format[i] != '\0')
{
if (separator != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf("%c ", separator);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
break;
}
separator = ',';
i++;
}
va_end(args);
printf("\n");
}
