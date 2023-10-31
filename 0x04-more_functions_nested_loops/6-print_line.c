#include "main.h"

/**
  *print_line - This function print a line
  *@n: This is the argument the parameter take in
  *Return: Nothing
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
