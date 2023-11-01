#include "main.h"
/**
  * print_square - this function print # in form of a square
  *@size:This is the input parameter passed into the function
  *Return:nothing
  */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
