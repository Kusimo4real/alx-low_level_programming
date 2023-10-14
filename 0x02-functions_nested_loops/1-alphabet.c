#include "main.h"
/**
 *print_alphabet - a function that prints the alphabet in lowercase
 *followed by a new line.
 *
 * Return: nothing (type void)
 *
 *
*void print_alphabet(void)
 *
 *	*.....{
 *	this function return nothing
 *	in Acii table small alphabet is 97 to 122
 *	using either while loop or for loop you can print the alphabet
 *	in small letter
 *	 declaration of variable
 *
 *	char a;
 *
 *	*condition to print small letter*
 *
 *	for (a = 'a'; a <= 'z'; a++)
 *	{
 *		_putchar(a);
 *	}
 *
 *		_putchar ('\n');
 *}
 */
void print_alphabet(void)
{
	char i;

	i = 97;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

		_putchar('\n');
}
