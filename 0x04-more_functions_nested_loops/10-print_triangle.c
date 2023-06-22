#include "main.h"
/**
 * print_triangle - prints a triangle pattern of a given size
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
printf(" ");
}
for (j = 1; j <= i; j++)
{
printf("#");
}
printf("\n");
}
}
