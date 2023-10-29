#include <stdio.h>

/**
  *main - the function print the first 98 number starting with 1 and 2
  *
  *Return: 0
  **/
int main(void)
{
	unsigned long int first_number = 0;
	unsigned long int second_number = 1;
	unsigned long int next;
	int i;

	for (i = 0 ; i <= 98 ; i++)
	{
		next = first_number + second_number;
		first_number = second_number;
		second_number = next;

		printf("%lu", next);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
