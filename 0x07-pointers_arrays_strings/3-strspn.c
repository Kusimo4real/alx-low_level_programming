#include "main.h"
/**
 * _strspn - this get the lenght of a prefix substring
 * @s: the string been provided
 * @accept: The string to search for
 * Return: the lenght of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (k);
}


