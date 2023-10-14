#include "main.h"

/**
  * print_sign - THis function print sign of a number
  *@n: An integer
  * Return: Return the int of the number
  */

int print_sign(int n)
{
	/* Returns 1 and prints + if n is greater than zero*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	/* Returns 0 and prints 0 if n is zero */
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	/* Returns -1 and prints - if n is less than zero*/
	else
	{
		_putchar('-');
		return (-1);
	}
}
