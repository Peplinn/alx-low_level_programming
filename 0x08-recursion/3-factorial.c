#include "main.h"

/**
* factorial - finds factorial of n
* @n: number to factorial
*/

int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
if (n >= 0)
return (n * factorial(n - 1));
else
return (-1);
}
