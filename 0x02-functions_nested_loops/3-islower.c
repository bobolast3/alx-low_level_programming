#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * int _islower (int c) - c _islower
 *
 * Description: Prints a message using puts()
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
