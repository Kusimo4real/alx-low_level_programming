#include "main.h"

/**
 * swap_int - this function swap an integer passed into it
 * @a: this is the first argument passed into the function
 * @b: This is the second argument passed into the function
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
