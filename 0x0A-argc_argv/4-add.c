#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * * @argc:the argument count
 * @argv:the pointer taking of the arguments
 * Return: return an integer 0 when it is successful
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int num1;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] != '\0' ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] >= '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num1 = atoi(argv[i]);
			sum += num1;
		}
		printf("%d\n", sum);
	}
	return (0);
}
