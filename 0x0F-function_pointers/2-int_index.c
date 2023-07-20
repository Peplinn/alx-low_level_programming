#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to search in
* @size: array size
* @cmp: pointer to compare function
*
* Return: the index of the first match
* ie, element for which the cmp function does not return 0,
* else, -1 If no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
return (-1);
}
