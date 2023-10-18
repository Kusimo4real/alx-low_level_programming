#include "main.h"

/**
  *times_table - this function print the 9 times table
  *
  *Return: 0
  */

void times_table(void)
{
	/*Declare your variable*/
	/*create a loop to print 10 columns*/
	/*create a loop to print 10 rows*/
	/*The multiplication value will be row *columns*/
	/* let i be the column and j be the row*/
	/*let k be the result*/
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar
			}
			else
			{
				_putchar(k + '0');
			}
			if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k > 9 && j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
}
}
