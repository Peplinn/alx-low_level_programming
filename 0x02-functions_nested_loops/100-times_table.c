#include "main.h"

/**
* print_times_table - prints times table 0-n
* each line ends with newline
* @n: print to this number
*/

void print_times_table(int n)
{
int i, j, c;
for (i = 0; i <= n; i++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
c = i;
for (j = 1; j <= n; j++)
{
if (j < n)
{
_putchar('c');
_putchar(',');
_putchar(' ');
}
else
{
_putchar('c');
_putchar('\n');
}
c += c;
}
}
}
