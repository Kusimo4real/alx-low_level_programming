#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this function allocares a memory for an array
 * @nmemb:elements of size
 * @size:the size of the data types
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);

	if (nmemb == 0)
		return ('\0');
	if (size == 0)
		return ('\0');

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
