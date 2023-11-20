#include "main.h"

/**
 * print_rev - this function print the string in reverse
 * @s: the argument pass into the variable
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len++; /* where s is the length of the string */
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
