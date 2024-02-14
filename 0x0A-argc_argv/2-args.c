#include <stdio.h>
/**
 * main - th main function taking in two arguments
 * @argc:the argument count
 * @argv:the argument variable
 * Return:Return and integer
 */

int main(int argc, char *argv[])
{
	int i; /*command line index */


	if (argc > 0)
	{
		for (i = 0 ; i < argc ; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

