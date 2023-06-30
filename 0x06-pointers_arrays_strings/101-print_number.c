#include "main.h"

/**
* print_number - Fn. converts string to rot13
* @n: Number to convert
*/

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -n;
}
if ((num / 10) > 0)
{
print_number(num / 10);
}
_putchar('0' + (num % 10));
}
