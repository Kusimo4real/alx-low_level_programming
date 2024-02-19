#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a two dimensional grid
 * @width: the row
 * @height:the column
 * Return: the pointer to th2 dimensinal array
 */

int **alloc_grid(int width, int height)
{
	int **arrr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return ('\0');
	
	arrr =(int**)malloc(sizeof(int) * height);

	if (arrr == NULL)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		arrr[i] = (int*)malloc(sizeof(int) * width);
		if (arrr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arrr[i]);
			free(arrr);
			return ('\0');
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arrr[i][j] = 0;
	return (arrr);
}
