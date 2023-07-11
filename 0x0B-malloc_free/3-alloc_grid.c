#include "main.h"

/**
* alloc_grid - creates int array
* @width: width
* @height: height
* Return: NULL if NULL
* else, pointer to new memory address (str2)
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i, j = 0;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int) * height);
if (grid == NULL)
return(NULL);
while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

while (i < width)
{
grid[i][j] = 0;
}
}
free(grid);
return (grid);
}
