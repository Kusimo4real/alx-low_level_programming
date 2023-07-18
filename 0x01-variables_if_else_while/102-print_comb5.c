#include <stdio.h>

/**
 * main - prints all possible combination of two digit number
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	/*set the range of value for 1st to 4th digit*/
	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			/*check if a is less than b digit*/
			/*if yes print the digit*/
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

				/*Don't print , and ' ' at the last counts*/
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
