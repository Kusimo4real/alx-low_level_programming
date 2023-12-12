#include"main.h"
/**
 * string_toupper - this function convert string to upper case
 * @s:parameter of the function
 * Return: charater
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i];
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else
			s[i] = s[i];
	}
	return (s);
}
