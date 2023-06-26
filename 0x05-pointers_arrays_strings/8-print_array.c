#include "main.h"
/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 *
 * This function takes a pointer to an array of integers and the number of elements `n`,
 * and prints the elements of the array followed by a new line. The numbers are displayed
 * in the same order as they are stored in the array, separated by a comma and a space.
 *
 * Return: None.
 */
void print_array(int *a, int n)
{
if (a == NULL)
return;
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
