#include "main.h"

/**
  *_isupper - This function return 1 when it is an uppercae
  *@c: the parameter that the function _isupper takes
  *Return: 1 and 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
