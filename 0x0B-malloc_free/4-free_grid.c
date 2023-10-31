#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
  /* Check if the grid is NULL. */
  if (grid == NULL)
    return;

  /* Free each row of the grid. */
  for (int i = 0; i < height; i++)
  {
    free(grid[i]);
  }

  /* Free the grid itself. */
  free(grid);
}

