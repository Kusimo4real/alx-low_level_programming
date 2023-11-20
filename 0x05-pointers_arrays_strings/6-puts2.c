#include "main.h"

/**
 * puts2 - this function print the first character
 * and jump the next one
 * @str: argument
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	/*
	 * int len;
	for (i = 0; str[i] != '\0' ; i++)
		len++;
	*/
	for (i = 0 ; str[i] != '\0' ; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
