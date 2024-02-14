#include <stdio.h>
/**
 * main - this is the main function takin the argument
 * *  @argc:count of the command line argument
 * @argv:argument vector
 * Return: this function return an integer
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n",  argc - 1);
	}
	return (0);
}
