#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description: This structure holds information
 * about a dog, including its name,
 *              age, and the name of its owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif /* DOG_H */
