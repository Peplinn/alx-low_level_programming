#include "main.h"

/**
* print_triangle - prints a triangle of a given size
* @size: the size of the triangle
*/
void print_triangle(int size)
{
int i, j, hashes, spaceNum;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
spaceNum = size - i;
for (j = 0; j <= spaceNum; j++)
{
_putchar(' ');
}
hashes = 1;
while (hashes <= i)
{
_putchar('#');
hashes++;
}
_putchar('\n');
}
}
