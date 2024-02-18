#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the fist argument
 * @s2: The second string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j;

	ptr = malloc((sizeof(char) * size) + 1);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';


	return (ptr);
}
