#include "main.h"

/**
 * _puts - this function prints the string to output
 * @str: this is the dtring
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
