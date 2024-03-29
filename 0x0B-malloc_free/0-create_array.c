#include "main.h"
#include <stdlib.h>
/**
 * create_array -  a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: the size of the data type
 * @c: The character that will be stored in the array
 * Return: Null or pointers to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
