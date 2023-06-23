#include "main.h"

/**
* print_most_numbers - prints 1 - 9 w/o 2,4
*/

void print_most_numbers(void)
{
int n;
n = 0;
while (n < 10)
{
if (n == 2 || n == 4)
continue;
else
{
_putchar(n);
n++;
}
}
_putchar('\n');
}