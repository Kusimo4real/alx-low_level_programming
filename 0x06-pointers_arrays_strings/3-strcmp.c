#include"main.h"
/**
 * _strcmp - this function compare a string and return the differenc
 * @s1:the first parameter
 * @s2:parameter2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	return (s1[i] - s2[i]);
}

