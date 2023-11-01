#include "main.h"

void print_diagonal(int n)
{
	int i;
	int j;
	int a = 1;

	if (n > 0)
	{
		for (i = 0 ; i <= n; i++)
		{
			for (j = 0 ; j <= n ; j++)
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
