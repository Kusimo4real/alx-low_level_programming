#include "main.h"

/**
 *_isalpha - this check for alphabetical order
 * @c: is the variable
 *Return: return the integer c
 */

int _isalpha(int c)
{
	/*condition to print*/
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
