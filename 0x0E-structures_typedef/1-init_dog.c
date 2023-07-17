#include "dog.h"
/**
 * init_dog - Initializes a variable
 * of type struct dog
 * @d: Pointer to the struct dog
 * variable to initialize
 * @name: Pointer to the name
 * string for the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner
 * string for the dog
 *
 * Return: None
 */
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description: This structure holds information about a dog, including its name,
 *              age, and the name of its owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
