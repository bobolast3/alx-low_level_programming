#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in
 * an array using a comparison function
 * @array: Pointer to the integer array
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for
 * which cmp doesn't return 0, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i = 0;
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
return (-1);
}
