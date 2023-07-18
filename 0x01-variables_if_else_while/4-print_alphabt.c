#include <stdio.h>

/**
 * main - print lowercase alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*declaration of variable*/
	char a;
	/*print all alpahabet*/
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
		putchar('\n');
		return (0);
}
