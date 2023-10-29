#include <stdio.h>

/**
  *main - the function print the first 98 number starting with 1 and 2
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

	for (i = 0 ; i < 98  ; i++)
	{
		printf("%lu", second_number);
		next = first_number + second_number;
		first_number = second_number;
		second_number = next;

		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
