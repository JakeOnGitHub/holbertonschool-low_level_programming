#include "main.h"

/**
* free_grid - entry point
* @grid: pointers being examined
* @height: height being examined
* Return: Return the position or NULL if height or width is 0 or neg
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
