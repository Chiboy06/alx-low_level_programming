#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;	
	/* Check if width or height is 0 or negative. */
	if (width <= 0 || height <= 0)
		return NULL;
	/* Allocate memory for the 2D array. */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return NULL;
	}
	/* Allocate memory for each row of the 2D array. */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free the memory allocated for the previous rows. */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}		
			free(grid);
			return NULL;
		}
	}
	/* Initialize all the elements of the 2D array to 0. */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
