#ifndef dog_H
#define dog_H
/**
 * struct dog - Poppy
 * @name: first name
 * @age: the age
 * @owner: The third name
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif