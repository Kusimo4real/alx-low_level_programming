#include "main.h"
/**
 * print_chessboard - this program prints a chessboard
 * @a: this is the 8 * 8 array
 * return:
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
