#include "main.h"
/**
 * reverse_array - this function print an array in reverse
 * @a: the array
 * @n:the length of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int src;

	for (i = 0; i < n / 2; i++)
	{
		src = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = src;
	}
}
