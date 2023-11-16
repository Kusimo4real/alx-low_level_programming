#include "main.h"

/**
 * _pow_recursion - This function returns x raise to the power of y
 * @x: The parameter passed to the function
 * @y: The parameter passed to the function y
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (0);
}

