#include "variadic_functions.h"

/**
* sum_them_all - Sums all arguments
* @n: number of arguments
* Return: Sum
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list nums;
va_start(nums, n);

for (i = 0; i < n; i++)
sum = sum + va_arg(nums, int);

va_end(nums);
return (sum);
}
