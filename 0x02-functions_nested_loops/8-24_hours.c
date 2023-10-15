#include "main.h"

/**
  * jack_bauer - The function print every minute of the day of jack bauer,
  * starting from 00:00 to 23:59
  * Return : This return nothing
  */

void jack_bauer(void)
{
	int i, j;

	/*let the hour represent the i */
	/*let the minute represent the j*/
	/*condition for the for-loop to print the hour*/
	for (i = 0 ; i < 24 ; i++)
	{
		/*condition to print the minutes*/
		for (j = 0 ; j < 60 ; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
