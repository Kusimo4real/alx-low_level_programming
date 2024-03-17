#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this function initialize a variable of type struct dog
 * @d:it point to the address of the struct
 * @name:the character name
 * @age:the age
 * @owner:the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
