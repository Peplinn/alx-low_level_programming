#include "main.h"

/**
* reverse_array - Function that reverses array
* @a: Array to be reversed
* @n: Number of the elements in the array
*/

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n/2; i++)
{
temp = *(a + i);
*(a + i) = *(a + n - 1 - i);
*(a + n - 1 - i) = temp;
}
}
