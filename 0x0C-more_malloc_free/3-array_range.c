#include "main.h"
#include <stdlib.h>
/**
 * array_range - afunction that creates arrar of integers
 * @min:the minimm value of the array
 * @max:the maximum value of the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return ('\0');

	ptr = malloc(sizeof(int) * (max + 4));

	if (ptr == NULL)
		return ('\0');
	for (i = min; i < max + 1; i++)
		ptr[i] = i;

	return (ptr);
}


