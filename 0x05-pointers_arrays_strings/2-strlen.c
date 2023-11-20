#include "main.h"

/**
 * _strlen -This function print the lenght of a string
 * @s: the argument of the function
 * Return: The value a
 */


int _strlen(char *s)
{
	int a;

	for (a = 0 ; *s != '\0' ; a++)
	{
		s++; /*where s is the string in this case*/
	}
	return (a);
}
