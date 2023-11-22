#include "main.h"

/**
 * _strcpy - this function copy the content of the src to dest
 * @dest: the destination to copy to
 * @src: the src file to copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
