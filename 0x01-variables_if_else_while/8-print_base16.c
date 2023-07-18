#include <stdio.h>

/**
 * main - print hexadecimal number
 *
 * Return: 0
 */

int main(void)
{
	/*variable declaration*/
	char a;

	/* print all the numbers of hexadecimal*/

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	/*print alphabet a-f*/

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
		putchar('\n');
		return (0);
}
