#include "main.h"
/**
 * _strchr - this function locate a character in a string
 * Description: whenevether the function encounter an argument c
 * it will be broken and print the remaining value at that location
 * @s:The string pass into the function
 * @c:this is the character it neds to encounter before it breaks
 * Return:if it does not match any character it return NULL
 * if it matches the character it prints the
 * remaining character and break the loop
 */

char *_strchr(char *s, char c)
{
	int i;
	char *g;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			g = &s[i];
			return (g);
		}
	}
	return (0);
}
