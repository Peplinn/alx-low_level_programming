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
return;

for (length = 0; b[length]; length++)
{
if (b[length] != '0' && b[length] != '1')
return (0);
}

for (i = 0; i < length; i++)
decimal += (b[i] + '0') * _pow_recursion(2, length - i - 1);

return (decimal);
}
