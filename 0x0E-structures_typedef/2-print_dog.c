#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - afunction that prints a struct dog
 * @d: the variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
			printf("nil");
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner ="(nil)";
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
