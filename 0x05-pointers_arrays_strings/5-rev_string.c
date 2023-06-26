#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * This function takes a pointer to a string and reverses the characters
 * in the string in-place.
 *
 * Return: None
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;
if (s == NULL)
return;
while (s[length] != '\0')
{
length++;
}
end = length - 1;
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
