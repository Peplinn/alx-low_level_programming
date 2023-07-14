#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min num
 * @max: max num
 * Return: NULL if min > max or malloc fails
 * else, *arr
 */

int *array_range(int min, int max)
{
int i, *arr;

if (min > max)
return (NULL);

arr = malloc(sizeof(*arr) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i < (max - min + 1); i++)
arr[i] = min + i;

return (arr);
}
