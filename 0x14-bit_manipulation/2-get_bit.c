#include "main.h"

/**
* get_bit - Gets the value of bit at index
* @n: Unsigned int
* @index: Index to check
* Return: value at index,
* else, -1 if failure.
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1;

if (index > sizeof(unsigned long int) * 8)
return (-1);

mask <<= index;

if (mask & n)
return (1);
else
return (0);
}
