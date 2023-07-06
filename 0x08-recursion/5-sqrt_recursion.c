#include "main.h"

/**
* _sqrt_recursion - sends to helper
* @n - number to root
* Return: 0 if zero,
* -1 if negative,
* 1 if one,
* else, root.
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
else if (n == 1)
return (1);
else
return(sqrt_helper(n, 1));
}

/**
* sqrt_helper - sends to helper
* @a - guess num
* @n - number to root
* Return: -1 if guess > root,
* else, root.
*/

int sqrt_helper(int n, int a)
{
if (a * a > n)
return (-1);
if (a * a == n)
return (a);
return (sqrt_helper(n, a + 1));
}
