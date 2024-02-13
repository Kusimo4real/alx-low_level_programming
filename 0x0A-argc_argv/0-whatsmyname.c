#include <stdio.h>
/**
 *main - This is the main function which take the argument argc and argv
 *@argc: This is the count of the command line argument
 *@argv:array of characters
 * Return: this program return an integer
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
