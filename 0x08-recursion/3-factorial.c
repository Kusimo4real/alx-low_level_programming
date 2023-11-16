#include "main.h"

/**
 * factorial - This function prints the factorial of any
 *  value that is been passed into it
 * @n:This is the parameter that is been passed into the function
 * Return : 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	return (0);
}
