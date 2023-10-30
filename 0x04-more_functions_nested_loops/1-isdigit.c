#include "main.h"

/**
  *_isdigit - This function check if the parameter passed into
  *it is a number and return 1
  *@c:This is the argument passed into the function _isdigit
  *
  *Return: 1 and 0
  */

int _isdigit(int c)
{
	/* using ascii value*/
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
