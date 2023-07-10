#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly
 * allocated duplicate string,
 * or NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
char *duplicate;
int length, i;
if (str == NULL)
return (NULL);
for (length = 0; str[length] != '\0'; length++)
;
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i < length; i++)
duplicate[i] = str[i];
duplicate[length] = '\0';
return (duplicate);
}
