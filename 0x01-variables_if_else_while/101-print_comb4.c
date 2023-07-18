#include <stdio.h>

/**
 * main - prints combination of three digits
 *
 * Return: 0
 */

int main(void)
{
	/*Declaration of variable*/

	int a, b, c;

	/*set range of number to be 0-9, 1-9, &2-9*/

	for (a = '0'; a <= '9'; a++)
{
		for (b = '1'; b <= '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{/*checking if(1st <= 2nd <= 3rd) digit if yes skip*/
				if ((a >= b || b >= c))
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				/*remove ',' and ' ' at the end og our lin*/
				if (a == '7')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


