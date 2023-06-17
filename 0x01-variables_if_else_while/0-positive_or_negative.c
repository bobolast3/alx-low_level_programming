#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a message using puts()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else if (n > 0)
{
printf("%d is positive", n);
}
return (0);
}
