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
int **arr;
int i, j = 0;

if (width <= 0 || height <= 0)
return (NULL);
if (arr == NULL)
return(NULL);

arr = malloc(sizeof(int) * height);

while (i < height)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
return (NULL);
}

while (i < width)
{
arr[i][j] = 0;
}
free(arr);
return (arr);
}
}
