#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-a function that allocated memory using malloc
 * @b: the size of the malloc
 * Decription: this funcrion basically does type casting to the
 * size of the data type when been called to determine the size of
 * the data type
 * Return: The pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

