#include "variadic_functions.h"

/**
* print_numbers - Prints arg numbs and seperator, and new line.
* @separator: char to seperate numbers with
* @n: number of num args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;
va_start(nums, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
}
