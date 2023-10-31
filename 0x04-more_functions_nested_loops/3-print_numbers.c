#include "main.h"

/**
  *print_numbers - this function print numbers fro 0-9
  *Return: nothing
  */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
