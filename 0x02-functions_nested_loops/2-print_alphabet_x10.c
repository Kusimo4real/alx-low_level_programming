#include "main.h"
/**
*print_alphabet_x10 - a function that prints 10 times
* the alphabets in lowercase followed by a new line
*
*Return: This return nothing
*/

void print_alphabet_x10(void)
{
	/*using the ascii c, describe the variable to be*/
	char j;
	char k;


	/*using  for loop*/
	for (j = 0; j <= 9; j++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
	{
		_putchar('\n');
	}
}
}
