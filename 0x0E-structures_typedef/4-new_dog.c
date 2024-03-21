#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name:name
 * @age:age
 * @owner:owner
 * Return:dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, nl, ol;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	dog->name = malloc(sizeof(char) * nl + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;

	for (ol = 0; owner[ol]; ol++)
		;
	dog->owner = malloc(sizeof(char) * (ol + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
