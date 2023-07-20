#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char separator = '\0';
char flag = 0;
va_start(args, format);
while (format != NULL && format[i] != '\0')
{
if (flag && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf("%c ", separator);
flag = 1;
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
i++;
}
va_end(args);
printf("\n");
}
