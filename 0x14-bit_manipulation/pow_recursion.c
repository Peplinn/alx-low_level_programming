#include "main.h"

/**
* _pow_recursion - prints exponents recursively
* @x: number to exponent
* @y: exponent
* Return: -1 if exponent is negative
* 1 if y is 0
* else, exponent
*/

unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
