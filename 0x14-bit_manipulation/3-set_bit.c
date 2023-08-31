#include "main.h"

/**
* set_bit - Sets bit to 1 index
* @n: Pointer to unsigned int
* @index: Index to change.
* Return: 1 if SUCCESS,
* else, -1 if failure.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

*n |= (1 << index);

return (1);
}
