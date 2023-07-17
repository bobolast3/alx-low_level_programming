#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description: This function initializes the
 * members of a struct dog variable
 * with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
