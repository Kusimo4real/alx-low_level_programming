#include <stdio.h>

/**
 * main -  a program that prints all combinations of two digits
 *
 * Return: 0
 */


int main(void)
{
	/*Declaration of variables*/
	int a;
	int b;

	/*setting the 1st and 2nd digit to range from 0-9 and 1-9*/

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a >= b)

			continue;
			putchar(a);
			putchar(b);
		if (a == '8' && b == '9')
			break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


