#include "function_pointers.h"

/**
* array_iterator - Executes callback on each array element
* Function passed as argument
* @array: array
* @size: size of the array
* @action: action to perform
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
