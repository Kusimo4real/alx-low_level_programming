#include "main.h"

/**
 * _puts_recursion - This is a function that prints a string
 *@s: This is the parameter pass into the function
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
