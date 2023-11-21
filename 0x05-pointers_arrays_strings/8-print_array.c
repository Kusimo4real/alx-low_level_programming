#include "main.h"
#include <stdio.h>

/**
 * print_array - this function print an array
 * @a: the array
 * @n: number of the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
