#include "main.h"

/**
*main - print _putchar to the standard output
*
*Return: Always 0.
*/
/**
*	_putchar('_');
*	_putchar('p');
*	_putchar('u');
*	_putchar('t');
*	_putchar('c');
*	_putchar('h');
*	_putchar('a');
*	_putchar('r');
*	_putchar('\n');
*
*	return (0);
* }
*/

int main(void)
{
	char name[] = "_putchar";

	int i;

	for (i = 0; i != '\0'; i++)
{
	_putchar(name[i]);

}
	_putchar('\n');
	return (0);
}
