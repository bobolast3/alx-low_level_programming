#include <stdio.h>
11;rgb:0000/0000/0000#include <time.h>
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
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, last);
}
else if (last < 6 && last != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0", n, last);
}
return (0);
}
