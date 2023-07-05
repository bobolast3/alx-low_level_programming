#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Computes the natural
 * square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (sqrt_helper(n, 1, n));
}
/**
 * sqrt_helper - Recursive helper function
 * to find the square root.
 * @n: The number.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
int mid, sqrt;
if (start <= end)
{
mid = (start + end) / 2;
sqrt = n / mid;
if (sqrt == mid && n % mid == 0)
return (mid);
if (sqrt < mid)
return (sqrt_helper(n, start, mid - 1));
return (sqrt_helper(n, mid + 1, end));
}
return (end);
}
