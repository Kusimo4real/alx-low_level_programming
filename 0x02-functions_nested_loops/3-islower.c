#include "main.h"

/**
 * _islower - This function checks for lowercase character
 *@c : takes an integer
 *Return: 1 if c is lowercase and 0 if otherwise.
 */

int _islower(int c)
{
	/* Declaration of variable */
		int lower;

	/* condition to check if it prints lower case*/

	if (c >= 97 && c <= 122)
	{
		lower = 1;
	}
	else
	{
		lower = 0;
	}
	return (lower);
}

