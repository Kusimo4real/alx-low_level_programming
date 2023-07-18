#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*declaration of variable*/
	char a;

	/*print the alphabet in reverse*/
	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
		putchar('\n');
		return (0);
}
