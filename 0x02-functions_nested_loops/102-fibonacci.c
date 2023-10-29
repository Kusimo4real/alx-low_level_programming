#include <stdio.h>

/**
  * main - a program that prints the first 50 fibonacci numbers
  *
  *Return: 0
  **/

int main(void)
{
	unsigned long int first_number = 1;
	unsigned long int second_number = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", first_number);

	for (i = 1 ; i < 50 ; ++i)
	{
		printf("%lu", second_number);
		next = first_number + second_number;
		first_number = second_number;
		second_number = next;
		if (i != 9)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
