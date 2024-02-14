#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the main function taking two arguments
 * @argc:the arguments count
 * @argv:the arguments vector
 * Return:return an integer
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argv)
	{
		if (argc == 3)
		{
			i = atoi(argv[1]);
			j = atoi(argv[2]);
			k = i * j;
			printf("%d\n", k);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}




