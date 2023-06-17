#include <stdio.h>
#include <time.h>
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
int RAND_MAX = 32;
n = rand() - RAND_MAX / 2;
if (n < 0){
 printf("is negative");
}
else if (n == 0){
 printf("is zero");
}
else if (n > 0){
 printf("is positive");
}
 return (0);
}
