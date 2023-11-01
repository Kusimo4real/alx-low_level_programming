#include "main.h"
/**
  *print_diagonal - This function print a / in zigzag
  *@n: this is the argument passed into the function
  *Return:This program return nothing
  */

void print_diagonal(int n)
{
	int i;
	int j;
	int a = 1;

	if (n > 0)
	{
		for (i = 1 ; i <= n; i++)
		{
			for (j = 1 ; j <= n ; j++)
			{
				if (a == j)
				{
					break;
				}
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
