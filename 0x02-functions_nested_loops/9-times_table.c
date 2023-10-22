#include "main.h"

/**
  *_printf - a function to print k
  *@k: variable
  * Return: void
  */
void _printf(int k)
{
	_putchar(k / 10 + '0');
	_putchar(k % 10 + '0');
	_putchar(',');
	_putchar(' ');
}

/**
    *_yusuf - a function to print k
     *@k: variable
     * Return: void
     */

void _yusuf(int k)
{
	_putchar(' ');
	_putchar(k + '0');
	_putchar(',');
	_putchar(' ');
}
/**
  *semiu - a function to print k
  *@k: variable
  * Return: void
  */
void semiu(int k)
{
	_putchar(k + '0');
	_putchar(',');
	_putchar(' ');
}
/**
  *ruka - a function to print k
  *@k: variable
  * Return: void
  */
void ruka(int k)
{
	_putchar(k / 10 + '0');
	_putchar(k % 10 + '0');
}

/**
  *times_table - this function print the 9 times table
  *_printf - a function to print k
  *Return: 0
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				if (j == 9)
				{
					ruka(k);
				}
				else
				{
					_printf(k);
				}
			}
			else
			{
				if (j == 0)
				{
					semiu(k);
				}
				else if (j == 9)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_yusuf(k);
				}
			}
		}
		_putchar('\n');
	}
}
