#include "main.h"

/**
* alloc_grid - entry point
* @width: width being evaluated
* @height: height being evaluated
* Return: returns point to 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int x;
	int y;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);


		if (ptr[x] == NULL)
		{
			free(ptr);

		for (y = 0; y <= x; y++)
		{
			free(ptr[y]);
		}
		return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
