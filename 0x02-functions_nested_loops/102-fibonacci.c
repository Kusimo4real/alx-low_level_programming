#include <stdio.h>

/**
  * main - a program that prints the first 50 fibonacci numbers
  *
  *Return: 0
  **/

int main(void)
{
	unsigned int first_number = 1;
	unsigned int second_number = 2;
	unsigned int next;
	int i;

	printf("%u, ", first_number);

	for (i = 1 ; i < 50 ; ++i)
	{
		printf("%u", second_number);
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
