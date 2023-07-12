#include "main.h"

/**
* free_grid - Frees a 2 dimensional grid.
* @grid: Pointer to the grid
* @height: grid height
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
