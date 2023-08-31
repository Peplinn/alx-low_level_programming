#include "main.h"

/**
* get_endianness - Checks the endianness
* Return: 0 if Big endian, 1 if Little endian.
*/

int get_endianness(void)
{
int x = 1;

return (x & 1);
}
