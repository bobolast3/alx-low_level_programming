#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Return: Pointer to the newly created dog,
 * or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
newDog->name = malloc(strlen(name) + 1);
newDog->owner = malloc(strlen(owner) + 1);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
strcpy(newDog->name, name);
strcpy(newDog->owner, owner);
newDog->age = age;
return (newDog);
}
