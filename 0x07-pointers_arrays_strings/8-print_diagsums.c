#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the start of the square matrix.
 * @size: Size of the square matrix.
 *
 * This function prints the sum of the main diagonal and the sum of the
 * secondary diagonal of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum_main_diag = 0;
int sum_secondary_diag = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum_main_diag += a[i * size + j];
if (i + j == size - 1)
sum_secondary_diag += a[i * size + j];
}
}
printf("%d, %d\n", sum_main_diag, sum_secondary_diag);
}
