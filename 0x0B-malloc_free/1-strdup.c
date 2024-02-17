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
	int j;

	if (str == NULL)
		return (NULL);

	/*loop through to get the alue of the size*/
	for (i = 0; str[i] != '\0'; i++)
		;
	

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == 0)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';

	return (ptr);
}



