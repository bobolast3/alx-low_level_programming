#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0 or 1 (success)
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, num;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int j;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
