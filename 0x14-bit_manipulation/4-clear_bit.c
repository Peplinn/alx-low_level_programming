#include "main.h"

/**
* clear_bit - Sets bit to 0 index.
* @n: Pointer to unsigned int
* @index: Index to change.
* Return: 1 if SUCCESS,
* else, -1 if failure.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

*n &= ~(1 << index);

return (1);
}
