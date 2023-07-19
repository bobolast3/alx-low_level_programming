#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - Prints a name using a
* given printing function
* @name: Pointer to the name to be printed
* @f: Pointer to the printing function to be used
*
* Description: This function takes a name and
* a function pointer, and it
* calls the function pointed by `f` to print the name.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
