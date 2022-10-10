#include "dog.h"

/**
 * init_dog - struct dog type initialized
 * @d: struct pointer to dog
 * @name: name of dog name
 * @age: dog age
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
{
return;
}
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
