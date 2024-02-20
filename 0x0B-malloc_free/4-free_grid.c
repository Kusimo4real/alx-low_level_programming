#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that free a 2 dimensional grid
 * @grid:the 2 by 2 array
 * @height:the row of the array
 * return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
