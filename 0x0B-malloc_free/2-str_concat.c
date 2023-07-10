#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int length1 = 0, length2 = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;
concat = malloc((length1 + length2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; i < length1; i++)
concat[i] = s1[i];
for (j = 0; j < length2; j++)
concat[i++] = s2[j];
concat[i] = '\0';
return (concat);
}
