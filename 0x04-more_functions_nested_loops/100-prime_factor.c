#include <stdio.h>

/**
* largest_prime_factor - Finds the largest prime factor of a number
* @number: The number to find the largest prime factor for
* @divisor: Denominator. Eventual result.
*
* Return: The largest prime factor of the number
*/

long long largest_prime_factor(long long number)
{
long long divisor = 2;

while (number > 1)
{
if (number % divisor == 0)
{
number /= divisor;
}
else
{
divisor++;
}
}

return (divisor);
}

/**
* main - Entry point of the program
* @number: Number to be tested
* @largest_factor: Result of function
* Return: Always 0 (indicating successful execution)
*/

int main(void)
{
long long number = 612852475143;
long long largest_factor = largest_prime_factor(number);

printf("Largest prime factor of %lld is %lld\n", number, largest_factor);

return (0);
}
