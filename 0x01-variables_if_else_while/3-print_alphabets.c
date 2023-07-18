#include <stdio.h>

/**
 * main - print lowercase letter followed by uppercase letter
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*declaration of variable*/
	char a;
	char A;

	/*print small letters*/
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}
	/*print uppercase letters*/
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar (A);
	}
		putchar('\n');
		return (0);
}
