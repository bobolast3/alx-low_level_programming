#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: This function prints the name, age,
 * and owner of a struct dog.
 * If any element of the struct is NULL, it prints
 * "(nil)" instead.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
