#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: Pointer to the newly created array,
 * or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
int *arr, i, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min++;
return (arr);
}
