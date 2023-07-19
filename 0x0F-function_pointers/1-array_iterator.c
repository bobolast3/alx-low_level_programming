#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on
 * each element of an array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @action: Pointer to the function to be
 * executed on each element
 *
 * Description: This function applies the
 * function pointed by `action` to
 * each element of the `array`.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}
