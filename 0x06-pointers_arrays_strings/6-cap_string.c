#include "main.h"
/**
 * cap_string - This function capitalizes all string
 * @s: the parameter of the function
 * Return: a character
 */

char *cap_string(char *s)
{
	int i, j;

	char SW[] = " \t \n , ;.!?"() { } "; /*string literals*/

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 18; j++)
		{
			if (SW[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
