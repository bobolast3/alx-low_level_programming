#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Computes the value of x raised
 * to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power
 * of y, or -1 if an error occurs.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
