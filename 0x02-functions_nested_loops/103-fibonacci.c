#include <stdio.h>

/**
  *main - a program that prints the sum of the even valued number
  *
  *Return: 0
  */

int main(void)
{
	int first_number = 0;
	int second_number = 1;
	int next;
	int sum = 0;
	int limit = 4000000;

	for (next = 0; next <= limit ; next++)
	{
		next = first_number + second_number;
		first_number = second_number;
		second_number = next;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
