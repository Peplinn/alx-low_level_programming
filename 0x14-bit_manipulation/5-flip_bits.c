#include "main.h"

/**
* flip_bits - Finds flips needed to turn n to m
* @n: First unsigned int
* @m: Second unsigned int
* Return: No. of flips needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int flips = 0;

while (diff)
{
flips += (diff & 1);
diff >>= 1;
}

return (flips);
}
