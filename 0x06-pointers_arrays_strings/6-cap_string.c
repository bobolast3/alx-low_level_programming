#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * This function iterates over each character in the string and capitalizes
 * the first character of each word. Words are separated by space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
int i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = toupper(str[i]);
}
i++;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = toupper(str[i]);
}
}
else
{
i++;
}
}
return (str);
}
