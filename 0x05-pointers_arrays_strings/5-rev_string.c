#include "main.h"

/**
 * rev_string - this function print a string in reverse
 * @s: the argument of the variable
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int len = 0; /* let this store the length of the string */
	int store;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0 ; i <= len / 2 ; i++)
	{
		store = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = store;
	}
}


