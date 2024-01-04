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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				k = &haystack[j];
				return (k);
			}
		}
	}
	return ('\0');
}
