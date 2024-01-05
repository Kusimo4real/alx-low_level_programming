#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack:this is the full string
 * @needle:this is the substring
 * Return:this return the full string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *k;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				k = &haystack[j];
				return (k);
			}
		}
	}
	return ('\0');
}
