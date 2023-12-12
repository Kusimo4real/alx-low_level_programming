#include "main.h"
/**
 * _strncpy - Tis function copy a string to its destination string
 * @dest:The destination place to copy the string to
 * @src:the src place to copy the string to
 * @n:the integer that determin where to stop copying from
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*calculate the length of a string*/

	for (i = 0;  i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

