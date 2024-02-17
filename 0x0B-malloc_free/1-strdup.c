#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * @str:argument of the function
 * Return: the copied pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;
	int j;

	/*loop through to get the alue of the size*/
	for (i = 0; str[i] != '\0'; i++)
	{
		size += i;
	}

	ptr = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
		return ('\0');
	if (size == 0)
		return ('\0');

	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}



