#include "main.h"

/**
* is_prime_number - checks if prime.
* @n: num to ckeck.
* Return: 1 if n is prime
* else, 0.
*/

int is_prime_number(int n)
{
if (n < 0 || ((n % 2 == 0) && (n != 2)))
return (0);
if (n == 2)
return (1);
return (prime_helper(n, n - 2));
}

/**
* prime_helper - checks for the prime number of n
*
* @n: num to check
* @i: start num
*
* Return: 1 if the number is prime, 0 if not.
*/
int prime_helper(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (prime_helper(n, i - 1));
}
