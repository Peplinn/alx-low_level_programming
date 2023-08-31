#include "main.h"

/**
* binary_to_uint - Converts a bit to uns int
* @b: Pointer to bit
* Return: Unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0, i, length;

if (b == NULL)
return (0);

for (length = 0; b[length]; length++)
{
if (b[length] != '0' && b[length] != '1')
return (0);
}

for (i = 0; i < length; i++)
decimal += (b[i] - '0') * _pow_recursion(2, length - i - 1);

return (decimal);
}


/**
* _pow_recursion - prints exponents recursively
* @x: number to exponent
* @y: exponent
* Return: 1 if y is 0
* else, exponent
*/

unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
