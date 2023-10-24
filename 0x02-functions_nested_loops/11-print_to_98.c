#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - This function print a function to 98
  *@n: This is a variable for the argument of the function
  *Return: void
  */

void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	if (n < 0)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	if (n > 98)
	{
		for (x = n ; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
		}
}
