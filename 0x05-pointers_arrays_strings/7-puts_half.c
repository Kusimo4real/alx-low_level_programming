#include "main.h"

/**
 * puts_half - this function print half of the string
 * @str: the arg passed into the function
 * Return: voif
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int n;

	for (i = 0 ; str[i] != '\0' ; i++)
		len++;
	n = (len - 1) / 2;

	for (i = n + 1; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}

