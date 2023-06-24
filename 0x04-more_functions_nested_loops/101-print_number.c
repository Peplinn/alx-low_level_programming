#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @n: The integer to be printed
*
* Description: This function prints an integer using the _putchar function.
* If the integer is negative, it prints a minus sign before the absolute value.
* It recursively prints each digit of the number starting from the most
* significant digit.
*/

void print_number(int n)
{
unsigned int k;
unsigned int k = n;
if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
k = n;
}

if (k / 10 != 0)
{
print_number(k / 10);
}

_putchar(k % 10 + '0');
}
