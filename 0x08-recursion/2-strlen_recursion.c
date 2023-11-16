#include "main.h"

/**
 * _strlen_recursion - This function prints the number of string
 * @s:This is the parameter passed into the string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
