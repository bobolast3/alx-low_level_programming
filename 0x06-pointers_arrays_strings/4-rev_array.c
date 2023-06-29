#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * This function reverses the order of elements in the given array.
 * It swaps the elements from the beginning and end of the array,
 * moving towards the middle, effectively reversing the content.
 *
 * Return: None.
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
