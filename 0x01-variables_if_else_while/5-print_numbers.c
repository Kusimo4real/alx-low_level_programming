#include <stdio.h>

/**
 * main - a program that print all single digit of base 10
 * starting from zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*declaration of variable*/
	int a;

	/*print all single digit of base 10*/

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
	}
		putchar('\n');
		return (0);
}
