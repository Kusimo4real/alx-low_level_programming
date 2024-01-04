#include "main.h"
/**
 * _strpbrk - this function searches a string for any of a set of bytes.
 * @s:this is the string
 * @accept:this is the string that is been searched
 * Return: return the value k been passed
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = &s[i];
				return (k);
			}
		}
	}
	return (0);
}
