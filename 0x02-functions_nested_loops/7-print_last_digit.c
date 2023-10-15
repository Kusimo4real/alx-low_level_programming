#include "main.h"

/**
  * print_last_digit - it prints the last digit of a number
  *@n: the integet ro return
  *Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	/*Declare the variables*/
	/*the value of a modulus is the last digit of a value*/
	/*return the value of the modulus*/

	int s;

	s = n % 10;
	/* check if s is less than or equal to negative 1*/
	if (s < 0)
	{
	s = s * -1;
	}
	_putchar(s + '0');
	return (s);
}

