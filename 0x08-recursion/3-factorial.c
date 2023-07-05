#include "main.h"

/**
* factorial - finds factorial of n
* @n: number to factorial
* Return: 1 if n is 0 or 1
* -1 if n is negative
* else, factorial
*/

int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
if (n >= 0)
return (n * factorial(n - 1));
else
return (-1);
}
